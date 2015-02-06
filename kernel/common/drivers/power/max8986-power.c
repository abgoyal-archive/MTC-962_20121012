/*******************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
*	@file	drivers/power/max8986-power.c
*
* Unless you and Broadcom execute a separate written software license agreement
* governing use of this software, this software is licensed to you under the
* terms of the GNU General Public License version 2, available at
* http://www.gnu.org/copyleft/gpl.html (the "GPL").
*
* Notwithstanding the above, under no circumstances may you combine this
* software in any way with any other Broadcom software provided under a license
* other than the GPL, without Broadcom's express prior written consent.
*******************************************************************************/
/**
 *
 *   @file   max8986-power.c
 *
 *   @brief  Power Driver for Maxim MAX8986 PMU
 *
 ****************************************************************************/
#include <linux/kernel.h>
#include <linux/version.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/ioport.h>
#include <linux/err.h>
#include <linux/delay.h>
#include <linux/ioctl.h>
#include <linux/uaccess.h>
#include <linux/platform_device.h>
#include <linux/power_supply.h>
#include <linux/workqueue.h>
#include <linux/slab.h>

#include <linux/interrupt.h>
#include <linux/io.h>
#include <mach/gpio.h>
#include <linux/irq.h>

#if defined(CONFIG_HAS_WAKELOCK)
#include <linux/wakelock.h>
#endif /*CONFIG_HAS_WAKELOCK*/
#include <linux/mfd/max8986/max8986.h>
#include <linux/broadcom/types.h>
#include <linux/broadcom/bcm_kril_Interface.h>
#include <linux/broadcom/bcm_fuse_sysparm.h>
#include <linux/broadcom/bcm_rpc.h>
#include <plat/bcm_auxadc.h>
#if defined(CONFIG_HAS_EARLYSUSPEND)
#include <linux/earlysuspend.h>
#endif /*CONFIG_HAS_EARLYSUSPEND*/


/* # of shifts used to divide the sum to get the average. */
#define ADC_RUNNING_AVG_SHIFT 3
/* # of samples to perform voltage running sum */
#define ADC_RUNNING_AVG_SIZE (1 << ADC_RUNNING_AVG_SHIFT)

/*Macros to control schedule frequency of charging monitor work queue - with
 * and without charger present */
#define BATTERY_LVL_MON_INTERVAL_WHILE_CHARGING		30000 /* 30 sec */
#define BATTERY_LVL_MON_INTERVAL_BEFORE_ADC_STABLE	10000 /* 10 sec [Alvin 2012.07.26] */
#define	BATTERY_LVL_MON_INTERVAL			60000 /* 1 min */
#define BAT_TEMP_EXCEED_LIMIT_COUNT_MAX			3
#define BATTERY_CHARGING_HYSTERESIS			7
#define SUCCESS 0		/* request is successfull */
#define USB_PREENUM_CURR	90
#define USB_PREENUM_CURR_REQ_VAL MAX8986_CHARGING_CURR_90MA
#define MAGIC_NUM_BEEF			0xBEEF

static struct platform_device *power_device;
static u8 adc_stable_flag = 0;

struct work_struct battery_work;
struct workqueue_struct *battery_workqueue;

struct max8986_power {
	struct max8986 *max8986;

	/* power supplies */
	struct power_supply wall;
	struct power_supply usb;
	struct power_supply battery;
	/* current power source */
	enum power_supply_type power_src;

	/*charger type*/
	u8 charger_type;
	u8 dcd_timout;
	u8 batt_percentage;
	u8 batt_health;
	u32 batt_voltage;
	u16 batt_adc_avg;
	int batt_temp;

	/* battery status */
	int charging_status;

#if defined(CONFIG_BATT_LVL_FROM_ADC)
	int level_running_sum;
	int level_read_inx;
	int level_reading[ADC_RUNNING_AVG_SIZE];
	int batt_level_adc_avg;
#endif
	struct delayed_work batt_lvl_mon_wq;
#if defined(CONFIG_HAS_WAKELOCK)
	struct wake_lock usb_charger_wl;
	struct wake_lock wait_app_wl; //[Alvin 2012.04.17.]
	struct wake_lock temp_adc_wl;
#endif /*CONFIG_HAS_WAKELOCK*/
#if defined(CONFIG_HAS_EARLYSUSPEND)
	struct early_suspend early_suspend_desc;
#endif /*CONFIG_HAS_EARLYSUSPEND*/
#ifdef BCM59035_LOG_CHARGING_TIME
	ktime_t charging_start_time;
	ktime_t charging_end_time;
	ktime_t charging_time;
#endif
	struct mutex power_mtx;
};


/* these typedefs should ideally be exported by KRIL header files */
typedef enum {
	/* Charger plug in event for both USB and Wall */
	EM_BATTMGR_CHARGER_PLUG_IN_EVENT,
	/* Charger plug out event */
	EM_BATTMGR_CHARGER_PLUG_OUT_EVENT,
	/* End of Charge event. Battery is full - charging is done. */
	EM_BATTMGR_ENDOFCHARGE_EVENT,
	/* BATT temp is outside window (safety) or extreme temperature */
	EM_BATTMGR_BATT_EXTREME_TEMP_EVENT,
	/* BATT low is detected */
	EM_BATTMGR_LOW_BATT_EVENT,
	/* BATT empty is detected */
	EM_BATTMGR_EMPTY_BATT_EVENT,
	/* BATT level change is detected */
	EM_BATTMGR_BATTLEVEL_CHANGE_EVENT
} HAL_EM_BATTMGR_Event_en_t;

typedef enum
{
	EM_EXTREME_LOW_TEMP=0, ///< Temp at or below Low threshold
	EM_EXTREME_LOW_SAFE, ///< Temp back above Low threshold
	EM_EXTREME_HIGH_SAFE, ///< Temp back below HIGH threshold
	EM_EXTREME_HIGH_TEMP ///< Temp at or above HIGH threshold
} EM_BATTMGR_ExtTempState_en_t;

typedef struct {
	/* The event type */
	HAL_EM_BATTMGR_Event_en_t eventType;
	/* The battery level, 0~N, depend the sysparm */
	u8 inLevel;
	/* Adc value in mV. Ex, 4000 is 4.0V, 3800 is 3.8V */
	u16 inAdc_avg;
	/* Total levels */
	u8 inTotal_levels;

} HAL_EM_BatteryLevel_t;

static void max89xx_start_charging(struct max8986_power *max8986_power,
				   int charger_type);
static void max89xx_stop_charging(struct max8986_power *max8986_power,
				  bool updatePwrSrc);

/*********************************************************************
 *                             DEBUG CODE                            *
 *********************************************************************/

/* Enable/disable debug logs */
enum {
	/* Disable all logging */
	DEBUG_DISABLE = 0U,
	DEBUG_FLOW    = (1U << 0),
};

#define DEFAULT_LOG_LVL    (DEBUG_DISABLE)

struct debug {
	int log_lvl;
};

#define __param_check_debug(name, p, type) \
	static inline struct type *__check_##name(void) { return (p); }

#define param_check_debug(name, p) \
	__param_check_debug(name, p, debug)

static int param_set_debug(const char *val, struct kernel_param *kp);
static int param_get_debug(char *buffer, struct kernel_param *kp);

static struct debug debug = {
	.log_lvl = DEFAULT_LOG_LVL,
};
module_param_named(debug, debug, debug, S_IRUGO | S_IWUSR | S_IWGRP);

/* helpers to test the log_lvl bitmap */
#define IS_FLOW_DBG_ENABLED	(debug.log_lvl & DEBUG_FLOW)

/* List of commands supported */
enum {
	CMD_SET_LOG_LVL = 'l',
	CMD_SHOW_BAT_STAT = 'b',
	CMD_CHARGING_CTRL = 'c',
};

static void cmd_show_usage(void)
{
	const char usage[] = "Usage:\n"
	  "echo 'cmd string' > /sys/module/max8986_power/parameters/debug\n"
	  "'cmd string' must be constructed as follows:\n"
	  "Update log level: l 0x01\n"
	  "Show battery voltage: b volt\n"
	  "Show battery temperature: b temp\n"
	  "Start battery charging: c start current (MBCCTRL4[3:0] value\n"
	  "Stop battery charging: c stop\n"
	  "Test start/stop battery charging repeatedly: c test\n";

	pr_info("%s", usage);
}

/*
 * Command handlers
 */
static void cmd_set_log_lvl(const char *p)
{
	sscanf(p, "%x", &debug.log_lvl);
}

#define AUXADC_BATVOLT_CHANNEL		3
#define AUXADC_BATTEMP_CHANNEL		4

static void cmd_show_bat_stat(const char *p)
{
	int val;

	/* Skip white spaces */
	while (*p == ' ' || *p == '\t')
		p++;

	if (strncmp("volt", p, strlen("volt")) == 0) {
		val = auxadc_access(AUXADC_BATVOLT_CHANNEL);
		pr_info("adc value for battery voltage: 0x%x\n", val);
	} else if (strncmp("temp", p, strlen("temp")) == 0) {
		val = auxadc_access(AUXADC_BATTEMP_CHANNEL);
		pr_info("adc value for battery temperature: 0x%x\n", val);
	} else {
		pr_info("invalid command\n");
	}
}

static void cmd_charging_ctrl(const char *p)
{
	int val;

	/* Skip white spaces */
	while (*p == ' ' || *p == '\t')
		p++;

	if (strncmp("start", p, strlen("start")) == 0) {
		/* Skip 'start' */
		p += strlen("start");

		/* Skip white spaces */
		while (*p == ' ' || *p == '\t')
			p++;

		/* Get current to be configured */
		sscanf(p, "%d", &val);
		pr_info("Charging current: %d\n", val);

		pmu_start_charging();
		pmu_set_charging_current(val);

	} else if (strncmp("stop", p, strlen("stop")) == 0) {
		pmu_stop_charging();
	} else if (strncmp("test", p, strlen("test")) == 0) {
		int i;

		pmu_start_charging();
		for (i = 0; i < 150; i++) {
			pmu_set_charging_current(0);
			pmu_set_charging_current(22);
		}
	} else {
		pr_info("invalid command\n");
	}
}

static int param_set_debug(const char *val, struct kernel_param *kp)
{
	const char *p;

	if (!val)
		return -EINVAL;

	/* Command is only one character followed by a space. Arguments,
	 * if any, starts from offset 2 in val.
	 */
	p = &val[2];

	switch (val[0]) {
	case CMD_SET_LOG_LVL:
		cmd_set_log_lvl(p);
		break;
	case CMD_SHOW_BAT_STAT:
		cmd_show_bat_stat(p);
		break;
	case CMD_CHARGING_CTRL:
		cmd_charging_ctrl(p);
		break;
	default:
		cmd_show_usage();
		break;
	}
	return 0;
}

static int param_get_debug(char *buffer, struct kernel_param *kp)
{
	cmd_show_usage();
	return 0;
}

/*****************************************************************************
 * power supply interface
 *****************************************************************************/
static enum power_supply_property battery_props[] = {
	POWER_SUPPLY_PROP_STATUS,
	POWER_SUPPLY_PROP_ONLINE,
	POWER_SUPPLY_PROP_TECHNOLOGY,
	POWER_SUPPLY_PROP_CAPACITY,
	POWER_SUPPLY_PROP_VOLTAGE_MAX,
	POWER_SUPPLY_PROP_VOLTAGE_MIN,
	POWER_SUPPLY_PROP_VOLTAGE_NOW,
	POWER_SUPPLY_PROP_HEALTH,
	POWER_SUPPLY_PROP_TEMP, /* Temp prop is register only if a valid temp
						adc channel is specified */
};

static enum power_supply_property wall_props[] = {
	POWER_SUPPLY_PROP_ONLINE
};

static enum power_supply_property usb_props[] = {
	POWER_SUPPLY_PROP_ONLINE
};

static int max89xx_usb_get_property(struct power_supply *psy,
	enum power_supply_property psp,
	union power_supply_propval *val)
{
	int ret = 0;
	struct max8986_power *max8986_power =
		dev_get_drvdata(psy->dev->parent);

	if (unlikely(!max8986_power)) {
		pr_err("%s: invalid driver data\n", __func__);
		return -EINVAL;
	}

	switch (psp) {
	case POWER_SUPPLY_PROP_ONLINE:
		val->intval =
			(max8986_power->power_src == POWER_SUPPLY_TYPE_USB)
			? 1 : 0;
		break;

	default:
		pr_info("usb: property %d is not implemented\n", psp);
		ret = -EINVAL;
		break;
	}

	return ret;
}

static int max89xx_wall_get_property(struct power_supply *psy,
	enum power_supply_property psp,
	union power_supply_propval *val)
{
	int ret = 0;
	struct max8986_power *max8986_power =
		dev_get_drvdata(psy->dev->parent);

	if (unlikely(!max8986_power)) {
		pr_err("%s: invalid driver data\n", __func__);
		return -EINVAL;
	}

	switch (psp) {
	case POWER_SUPPLY_PROP_ONLINE:
		val->intval =
			(max8986_power->power_src == POWER_SUPPLY_TYPE_MAINS)
			? 1 : 0;
		break;

	default:
		pr_info("wall: property %d is not implemented\n", psp);
		ret = -EINVAL;
		break;
	}

	return ret;
}

static int max89xx_battery_get_property(struct power_supply *psy,
		enum power_supply_property psp,
		union power_supply_propval *val)
{
	int ret = 0;
	struct max8986_power *max8986_power =
		dev_get_drvdata(psy->dev->parent);
	struct max8986_power_pdata *pdata;
	if (unlikely(!max8986_power || !max8986_power->max8986)) {
		pr_err("%s: invalid driver data\n", __func__);
		return -EINVAL;
	}
	pdata = max8986_power->max8986->pdata->power;
	switch (psp) {
	case POWER_SUPPLY_PROP_STATUS:
		val->intval = max8986_power->charging_status;
		break;
	case POWER_SUPPLY_PROP_TECHNOLOGY:
		val->intval = pdata->batt_technology;
		break;
	case POWER_SUPPLY_PROP_CAPACITY:
		val->intval = max8986_power->batt_percentage;
		break;
	case POWER_SUPPLY_PROP_VOLTAGE_MAX:
		if (pdata->batt_lvl_tbl_dischg.num_entries)
			val->intval =
				pdata->batt_lvl_tbl_dischg.bat_vol[pdata->batt_lvl_tbl_dischg.num_entries-1]
				* 1000;
		break;
	case POWER_SUPPLY_PROP_VOLTAGE_MIN:
		if (pdata->batt_lvl_tbl_dischg.num_entries)
			val->intval = pdata->batt_lvl_tbl_dischg.bat_vol[0] * 1000;
		break;
	case POWER_SUPPLY_PROP_VOLTAGE_NOW:
		val->intval = max8986_power->batt_voltage;
		break;
	case POWER_SUPPLY_PROP_ONLINE:
		val->intval =
			(max8986_power->power_src ==
			 POWER_SUPPLY_TYPE_BATTERY) ? 1 : 0;
		break;
	case POWER_SUPPLY_PROP_HEALTH:
		val->intval = max8986_power->batt_health;
		break;
	case POWER_SUPPLY_PROP_TEMP:
		val->intval = max8986_power->batt_temp*10;
		break;
	default:
		pr_info("bat: property %d is not implemented\n", psp);
		ret = -EINVAL;
		break;
	}
	return ret;
}

#if !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)
static u32 max89xx_get_batt_capacity(struct max8986_power *max8986_power,
				     u16 adc, u32 *voltage)
{
	int inx;
	u32 per = 100;
	u32 bat_vol;
	u32 temp;
	u8 m3;
	u32 cv_value;
	struct max8986_power_pdata *pdata;
	struct batt_level_tbl* batt_level_tbl;
	pdata = max8986_power->max8986->pdata->power;
	//batt_level_tbl = &pdata->batt_lvl_tbl;
	bat_vol = max8986_power->max8986->pdata->pmu_event_cb(
						PMU_EVENT_BATT_ADC_TO_VOLTAGE,
							adc);

	/* Modified for Bug#222162 on Poppy [Alvin 2012.03.29]*/
	if(max8986_power->charging_status == POWER_SUPPLY_STATUS_CHARGING)
		batt_level_tbl = &pdata->batt_lvl_tbl_chg;
	else
		batt_level_tbl = &pdata->batt_lvl_tbl_dischg;
	
	if(bat_vol < batt_level_tbl->bat_vol[0]*1000)
	{
		per = 0;
	}
	else
	{
		for(inx = 0; inx < 	batt_level_tbl->num_entries-1;inx++)
		{
			if(bat_vol >= (batt_level_tbl->bat_vol[inx]*1000) &&
				bat_vol < (batt_level_tbl->bat_vol[inx+1]*1000))
			{
				temp = 	100*(batt_level_tbl->bat_percentage[inx+1] - batt_level_tbl->bat_percentage[inx]);
				temp /= batt_level_tbl->bat_vol[inx+1] - batt_level_tbl->bat_vol[inx];
				temp = temp*((bat_vol/1000) -batt_level_tbl->bat_vol[inx]);
				per = 100*batt_level_tbl->bat_percentage[inx] + temp;
				per /= 100;
				break;
			}
		}

		/* The power driver gets initialized ahead of the battery
		 * manager in CP side. During this interval the ADC value
		 * returned from the battery manager is 65535, resulting
		 * in the battery voltage being reported as 314V. To prevent
		 * this, limit the battery voltage to the max possible value
		 * from the table of battery voltages.
		 */
		if (inx == batt_level_tbl->num_entries-1)
			bat_vol = batt_level_tbl->bat_vol[inx] * 1000;
	}

	*voltage = bat_vol;
	return per;
}
#endif

/*****************************************************************************
 * cp callbacks
 *****************************************************************************/
#if defined(CONFIG_BRCM_FUSE_RIL_CIB) && !defined(CONFIG_BATT_LVL_FROM_ADC) \
	&& !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)

void max89xx_temp_event_handler(struct max8986_power *max8986_power,
				u8 lvl, u16 temp_c)
{
	pr_info("%s\n",__func__);
/* Removed temorarily for PIO1 board. [Alvin 2012.02.28] */
#if 0
	switch(lvl)
	{
	case EM_EXTREME_LOW_TEMP:
	case EM_EXTREME_HIGH_TEMP:

		/*Stop charing on exterme temp.*/
		if(max8986_power->charging_status == POWER_SUPPLY_STATUS_CHARGING)
		{
		max89xx_stop_charging(max8986_power, false);
		pr_info("%s:charging stopped due to exterme temp...\n",__func__);
		}
		max8986_power->batt_health = (lvl == EM_EXTREME_HIGH_TEMP)
		? POWER_SUPPLY_HEALTH_OVERHEAT :
		POWER_SUPPLY_HEALTH_COLD;
		break;

	case EM_EXTREME_LOW_SAFE:
	case EM_EXTREME_HIGH_SAFE:
		/*re-start charging if charger is connected*/
		if(max8986_power->charging_status == POWER_SUPPLY_STATUS_NOT_CHARGING &&
		max8986_power->charger_type != PMU_MUIC_CHGTYP_NONE)
		{
		max8986_power->batt_health = POWER_SUPPLY_HEALTH_GOOD;
		max89xx_start_charging(max8986_power,
				       max8986_power->charger_type);
		pr_info("%s:charging re-started...\n",__func__);
		}
		break;
	}
	max8986_power->batt_temp = temp_c;
#endif
	max8986_power->batt_temp = 26; /* No change, fixed on 26 deg. */
}

static void max89xx_ril_adc_notify_cb(SimNumber_t SimId,
				      unsigned long msg_type,
				      int result,
				      void *dataBuf,
				      unsigned long dataLength)
{
	HAL_EM_BatteryLevel_t *batt_lvl = (HAL_EM_BatteryLevel_t *) dataBuf;
	struct max8986_power *max8986_power;
	struct max8986_power_pdata *pdata;
	u32 bat_per = 0;
	static u32 last_bat_per = MAGIC_NUM_BEEF;
	u32 voltage;
	u8 m2,m4;

	if (batt_lvl == NULL || power_device == NULL) {
		pr_err("%s:Invalid params ...\n", __func__);
		return;
	}
	max8986_power = platform_get_drvdata(power_device);
	if (max8986_power == NULL) {
		pr_err("%s:Device not init\n", __func__);
		return;
	}
	pdata = max8986_power->max8986->pdata->power;

	pr_info("%s:eventType = %d\n", __func__, batt_lvl->eventType);
	switch (batt_lvl->eventType) {
	case EM_BATTMGR_BATTLEVEL_CHANGE_EVENT:
		pr_info("%s:inAdc_avg = %d\n", __func__, batt_lvl->inAdc_avg);
		if(batt_lvl->inAdc_avg != 0xFFFF)
		{
			adc_stable_flag = 1;
			
			max8986_power->batt_adc_avg = batt_lvl->inAdc_avg;
			bat_per = max89xx_get_batt_capacity(
						max8986_power,
						max8986_power->batt_adc_avg,
						&voltage);

			if(last_bat_per != MAGIC_NUM_BEEF)
			{
				if(((max8986_power->charging_status == POWER_SUPPLY_STATUS_CHARGING) && (bat_per < last_bat_per)) ||
				((max8986_power->charging_status == POWER_SUPPLY_STATUS_DISCHARGING) && (bat_per > last_bat_per)))
					bat_per = last_bat_per; // Don't update the battery percentage
			}				

			if (max8986_power->charging_status == POWER_SUPPLY_STATUS_FULL && bat_per >= 95)
				bat_per = 100;
			else if(max8986_power->charging_status == POWER_SUPPLY_STATUS_CHARGING && bat_per == 100)
				bat_per = 99;

			last_bat_per = bat_per; // update the last value
			max8986_power->batt_voltage = voltage; // Update the voltage

			pr_info("%s:per = %d, voltage = %d, adc = %d\n", __func__,bat_per,voltage,max8986_power->batt_adc_avg);
			max8986_power->max8986->read_dev(max8986_power->max8986, MAX8986_PM_REG_MBCCTRL2, &m2);
			max8986_power->max8986->read_dev(max8986_power->max8986, MAX8986_PM_REG_MBCCTRL4, &m4);
			pr_info("%s:MCCTRL2 = %x, MBCCTRL4 = %x\n", __func__,m2,m4);

			if (max8986_power->batt_percentage != bat_per)
			{
				max8986_power->batt_percentage  = bat_per;

				max8986_power->batt_voltage = voltage;
				power_supply_changed(&max8986_power->battery);
			}	
		}			
	
		break;
	case EM_BATTMGR_EMPTY_BATT_EVENT:
		pr_info("%s: low batt  event\n", __func__);
		max8986_power->batt_percentage = 0;
		max8986_power->batt_voltage =
			pdata->batt_lvl_tbl_dischg.bat_vol[0];

		pr_info("Battery percentage : %d, volt = %d\n",
				max8986_power->batt_percentage,
				max8986_power->batt_voltage);
		power_supply_changed(&max8986_power->battery);
		break;
	case EM_BATTMGR_BATT_EXTREME_TEMP_EVENT:
		max89xx_temp_event_handler(max8986_power,
					   batt_lvl->inLevel,
					   batt_lvl->inAdc_avg);
		break;
	default:
		break;
	}
}
#endif

/*****************************************************************************
 * pmu q:uery functions
 *****************************************************************************/

static int max89xx_get_fc_current(struct max8986_power *max8986_power)
{
	u8 reg_val;
	struct max8986 *max8986 = max8986_power->max8986;
	/* Get fc_current as charging current */
	max8986->read_dev(max8986, MAX8986_PM_REG_MBCCTRL4, &reg_val);
	/*MBCICHFC [4]
	1: 200mA to 950mA settings
	0: 90mA*/
	if((reg_val & MAX8986_MBCCTRL4_MBCICHFC4) == 0)
		return MAX8986_CHARGING_CURR_90MA;

	reg_val = (reg_val & MAX8986_MBCCTRL4_MBCICHFC_MASK); /*bits - 0 -4 : no need to shift */
	return reg_val;
}

static void max89xx_set_fc_current(struct max8986_power *max8986_power,
					u8 fc_current)
{
	u8 regVal;
	struct max8986 *max8986 = max8986_power->max8986;

	pr_debug("%s: cc = %x\n", __func__, fc_current);

	if(fc_current >= MAX8986_CHARGING_CURR_MAX)
	{
		pr_info("%s: fc charging current param INVALID\n", __func__);
		return;
	}
	mutex_lock(&max8986_power->power_mtx);
	/* Set fc_current as charging current */
	regVal = fc_current & MAX8986_MBCCTRL4_MBCICHFC_MASK;

	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL4, regVal);
	mutex_unlock(&max8986_power->power_mtx);
}

static u8 max89xx_get_charging_current(struct max8986_power *max8986_power,
				       u8 charger_type,
				       u8 *supply_type)
{
	struct max8986 *max8986 = max8986_power->max8986;
	struct max8986_power_pdata *pdata = max8986->pdata->power;
	u8 cc;

	switch(charger_type)
	{
	case PMU_MUIC_CHGTYP_USB:
	case PMU_MUIC_CHGTYP_DOWNSTREAM_PORT:
		*supply_type = POWER_SUPPLY_TYPE_USB;
		cc =  USB_PREENUM_CURR_REQ_VAL;
		break;

	case PMU_MUIC_CHGTYP_DEDICATED_CHGR:
		*supply_type = POWER_SUPPLY_TYPE_MAINS;
		cc =  pdata->wac_charging_cc;
		break;

	case PMU_MUIC_CHGTYP_SPL_500MA:
		*supply_type = POWER_SUPPLY_TYPE_MAINS;
		cc =  MAX8986_CHARGING_CURR_500MA;
		break;

	case PMU_MUIC_CHGTYP_SPL_1A:
		*supply_type = POWER_SUPPLY_TYPE_MAINS;
		cc =  MAX8986_CHARGING_CURR_950MA;
		break;

	case PMU_MUIC_CHGTYP_DEAD_BATT_CHG:
		*supply_type = POWER_SUPPLY_TYPE_MAINS; //??
		cc = MAX8986_CHARGING_CURR_90MA;
		break;

	default:
		*supply_type = POWER_SUPPLY_TYPE_BATTERY;
		cc = MAX8986_CHARGING_CURR_90MA;
		break;
	}
	printk(KERN_INFO "%s:cc = %d,supply_type = %d\n",__func__,cc,*supply_type);
	return cc;
}

static void max89xx_start_charging(struct max8986_power *max8986_power,
		int charger_type)
{
	u8 regVal;
	u8 supply_type;
	struct max8986 *max8986 = max8986_power->max8986;
	u8 charging_cc = max89xx_get_charging_current(max8986_power,
						      charger_type,
						      &supply_type);

	pr_debug("%s\n", __func__);

	if(supply_type == POWER_SUPPLY_TYPE_BATTERY)
	{
		pr_info("%s: NO charger connected !!!\n", __func__);
		return;
	}

	max89xx_set_fc_current(max8986_power, charging_cc);

	mutex_lock(&max8986_power->power_mtx);

	if(max8986_power->batt_percentage == 100)
		max8986_power->batt_percentage = 99;

	/*Enable Auto stop */
	regVal = MAX8986_MBCCTRL8_AUTOSTOP; /*remaining bits are unused*/
	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL8, regVal);
	/* Enable the interrupts */
	max89xx_enable_irq(max8986_power->max8986, MAX8986_IRQID_INT2_CHGEOC);
	max89xx_enable_irq(max8986_power->max8986,
			MAX8986_IRQID_INT2_MBCCHGERR);
	max89xx_enable_irq(max8986_power->max8986, MAX8986_IRQID_INT2_CHGERR);
	/* Enable Fast charge mode and enable charging +#define
	 * MAX8986_MBCCTRL2_DEFAULT	0x14 */
	regVal = MAX8986_MBCCTRL2_VCHGR_FC | MAX8986_MBCCTRL2_MBCHOSTEN; /*other bits are unused*/
	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL2, regVal);

	max8986_power->charging_status = POWER_SUPPLY_STATUS_CHARGING;
	if (max8986_power->power_src != supply_type)
	{
		max8986_power->power_src = supply_type;
		power_supply_changed((supply_type == POWER_SUPPLY_TYPE_USB)
				? &max8986_power->usb : &max8986_power->wall);
	}
	power_supply_changed(&max8986_power->battery);
#ifdef MAX8986_LOG_CHARGING_TIME
	max8986_power->charging_start_time = ktime_get();
#endif
	mutex_unlock(&max8986_power->power_mtx);
}

static void max89xx_stop_charging(struct max8986_power *max8986_power,
		bool updatePwrSrc)
{
	u8 regVal;
	enum power_supply_type old_pwr_src;
	struct max8986 *max8986 = max8986_power->max8986;

	pr_debug("%s\n", __func__);
	mutex_lock(&max8986_power->power_mtx);
	/* Disable charging and fast charging */
	regVal = 0; //~(MAX8986_MBCCTRL2_VCHGR_FC | MAX8986_MBCCTRL2_MBCHOSTEN) - other bits are unused
	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL2, regVal);

	/* Disable CHGERR and MBCCHGERR interrupts */
	max89xx_disable_irq(max8986, MAX8986_IRQID_INT2_CHGEOC);
	max89xx_disable_irq(max8986, MAX8986_IRQID_INT2_MBCCHGERR);
	max89xx_disable_irq(max8986, MAX8986_IRQID_INT2_CHGERR);

	max8986_power->charging_status = POWER_SUPPLY_STATUS_NOT_CHARGING;
	if (updatePwrSrc) {
		pr_info("%s:updatePwrSrc\n", __func__);
		old_pwr_src = max8986_power->power_src;
		max8986_power->power_src = POWER_SUPPLY_TYPE_BATTERY;
		max8986_power->charging_status =
			POWER_SUPPLY_STATUS_DISCHARGING;
		if (old_pwr_src == POWER_SUPPLY_TYPE_USB)
			power_supply_changed(&max8986_power->usb);
		else if (old_pwr_src == POWER_SUPPLY_TYPE_MAINS) {
			power_supply_changed(&max8986_power->wall);
		}
	}
	power_supply_changed(&max8986_power->battery);
	mutex_unlock(&max8986_power->power_mtx);
}


/****************************************************************************
*
* max89xx_get_batt_level
*
* returns: voltage measurement in ADC units or -1 on error
*
***************************************************************************/
#if defined(CONFIG_BATT_LVL_FROM_ADC)
static int max89xx_get_batt_level(struct max8986_power *max8986_power)
{
	int level;
	int i;
	/* Hard coding ADC channel number for battery level. This is only
	 * temporary. Once CP callbacks are supported this will be removed.
	 * */
	u8 level_adc_channel = AUXADC_BATVOLT_CHANNEL;

	/* get 10 bit ADC output */
	level = auxadc_access(level_adc_channel);
	level = level >> 2; /* making it a 8-bit value */
	if (level <= 0) {
		pr_err("%s:Error reading ADC\n", __func__);
		return -1;
	}
	/* If it is the very first measurement taken, initialize the buffer
	*  elements to the same value
	*  */
	if (max8986_power->batt_level_adc_avg == 0) {
		max8986_power->level_running_sum = 0;
		for (i = 0; i < ADC_RUNNING_AVG_SIZE; i++) {
			level = auxadc_access(level_adc_channel);
			level = level >> 2;
			max8986_power->level_reading[i] = level;
			max8986_power->level_running_sum += level;
		}
		max8986_power->level_read_inx = 0;
	}
	/* Keep the sum running forwards */
	max8986_power->level_running_sum -=
	max8986_power->level_reading[max8986_power->level_read_inx];
	max8986_power->level_reading[max8986_power->level_read_inx] = level;
	max8986_power->level_running_sum += level;
	max8986_power->level_read_inx =
		(max8986_power->level_read_inx + 1) % ADC_RUNNING_AVG_SIZE;

	/* Divide the running sum by number of measurements taken to get the
	* average */
	max8986_power->batt_level_adc_avg =
		max8986_power->level_running_sum >> ADC_RUNNING_AVG_SHIFT;

	pr_info("%s: batt_lvl read from ADC: %d\n", __func__,
			max8986_power->batt_level_adc_avg);

	return max8986_power->batt_level_adc_avg;
}

static void max89xx_get_batt_level_adc(struct max8986_power *max8986_power)
{
	int batt_level;
	s8 bat_state;
	u8 bat_per = 0;
	struct max8986_power_pdata *pdata =
		max8986_power->max8986->pdata->power;
#if defined(CONFIG_HAS_WAKELOCK)
	wake_lock(&max8986_power->temp_adc_wl);
#endif
	batt_level = max89xx_get_batt_level(max8986_power);
#if defined(CONFIG_HAS_WAKELOCK)
	wake_unlock(&max8986_power->temp_adc_wl);
#endif
	if (max8986_power->power_src != POWER_SUPPLY_TYPE_BATTERY &&
			batt_level >= (BATTERY_CHARGING_HYSTERESIS<<2) &&
			(batt_level - BATTERY_CHARGING_HYSTERESIS) >
			max8986_power->batt_adc_avg) {
		max8986_power->batt_adc_avg =
			batt_level  - BATTERY_CHARGING_HYSTERESIS;
	} else {
		max8986_power->batt_adc_avg = batt_level;
	}
	pr_info("%s:ADC average = %d, batt_level = %d\n",
			__func__, max8986_power->batt_adc_avg, batt_level);
	pr_info("%s:battery percentage = %d\n",
			__func__, max8986_power->batt_percentage);
	bat_state = max89xx_get_batt_capacity(max8986_power->batt_adc_avg,
			&pdata->batt_adc_tbl, max8986_power->batt_percentage,
			&bat_per, &max8986_power->batt_voltage);
	if (bat_state > 0) {
		max8986_power->batt_health = POWER_SUPPLY_HEALTH_OVERVOLTAGE;
	} else if (max8986_power->batt_health ==
			POWER_SUPPLY_HEALTH_OVERVOLTAGE) {
		max8986_power->batt_health = POWER_SUPPLY_HEALTH_GOOD;
	}
	printk(KERN_INFO "%s:max8986_power->charging_status = %d\n",__func__,max8986_power->charging_status);
	if(max8986_power->charging_status == POWER_SUPPLY_STATUS_FULL)
		bat_per = 100;

	if (max8986_power->batt_percentage != bat_per) {
		max8986_power->batt_percentage  = bat_per;
#if 0
		/*"N mV" = (("8-Bit_ADC_code" - 30) * 4) + 3400*/
		max8986_power->batt_voltage =
			(max8986_power->batt_adc_avg - 30)*4 + 3400 - 12;
#endif
		if (bat_state <= 0 &&
				max8986_power->batt_voltage > pdata->batt_adc_tbl.bat_vol[pdata->batt_adc_tbl.num_entries-1])
			max8986_power->batt_voltage =
				pdata->batt_adc_tbl.bat_vol[pdata->batt_adc_tbl.num_entries-1];

		max8986_power->batt_voltage = max8986_power->batt_voltage * 1000;
		/*max8986_power->batt_voltage *= 1000;*/
		pr_info("%s: Battery percentage : %d, volt = %d\n", __func__,
				max8986_power->batt_percentage,
				max8986_power->batt_voltage);
		power_supply_changed(&max8986_power->battery);
	}
}
#endif /* CONFIG_BATT_LVL_FROM_ADC */
/*****************************************************************************
 * charger monitoring
 *****************************************************************************/
static void max89xx_batt_lvl_mon_wq(struct work_struct *work)
{
	struct max8986_power *max8986_power =
		container_of(work, struct max8986_power, batt_lvl_mon_wq.work);
	/*init to charging case */
	int mon_interval;

	if(adc_stable_flag == 0)
		mon_interval = BATTERY_LVL_MON_INTERVAL_BEFORE_ADC_STABLE;
	else
		mon_interval = BATTERY_LVL_MON_INTERVAL_WHILE_CHARGING;

	if (max8986_power->charging_status == POWER_SUPPLY_STATUS_DISCHARGING
			|| max8986_power->charging_status ==
			POWER_SUPPLY_STATUS_FULL) {
		mon_interval = BATTERY_LVL_MON_INTERVAL;
	}

#if defined(CONFIG_BATT_LVL_FROM_ADC)
	max89xx_get_batt_level_adc(max8986_power);
#else
#if defined(CONFIG_BRCM_FUSE_RIL_CIB)
	pr_info("%s: calling KRIL_DevSpecific_Cmd\n", __func__);
	if (KRIL_DevSpecific_Cmd(BCM_POWER_CLIENT, SIM_DUAL_FIRST,
				RIL_DEVSPECIFICPARAM_BCM_PMU_GET_BATT_ADC,
				NULL, 0) == false)
		pr_err("%s: KRIL_DevSpecific_Cmd failed\n", __func__);
#endif
#endif
	queue_delayed_work(max8986_power->max8986->pmu_workqueue,
			&max8986_power->batt_lvl_mon_wq,
			msecs_to_jiffies(mon_interval));

}

/*****************************************************************************
 * MUIC event handler
 *****************************************************************************/

static void max89xx_muic_event(int event, u32 param,  void *data)
{
	struct max8986_power *max8986_power = data;
	struct max8986 *max8986 = max8986_power->max8986;
	pr_info("%s:event = %d param = %d\n", __func__, event,param);
	switch(event)
	{
	case MAX8986_MUIC_EVENT_CHARGER_OVP:
		if(param)
		{
			/* stop charging on over-voltage*/
			max89xx_stop_charging(max8986_power, false);
		}
		else
		{
			/* re-start charging as charger voltage has come down to valid limit*/
			max8986_power->charger_type =
				max89xx_muic_get_charger_type();
			if (max8986_power->charger_type != PMU_MUIC_CHGTYP_NONE)
			{
				/* Notify through event callback */
				if(max8986->pdata->pmu_event_cb)
				{
					max8986->pdata->pmu_event_cb(PMU_EVENT_CHARGER_INSERT,
						max8986_power->charger_type);
				}
				max89xx_start_charging(max8986_power,
						max8986_power->charger_type);
			}
		}
		break;

	case MAX8986_MUIC_EVENT_DCDTMR:
		max8986_power->dcd_timout = true;
		break;

	case MAX8986_MUIC_EVENT_CHARGER_TYPE:

		if(param == PMU_MUIC_CHGTYP_NONE)
		{
			max8986_power->dcd_timout = false;
			pr_info("%s: Charger Removed\n", __func__);
			if(max8986_power->power_src == POWER_SUPPLY_TYPE_BATTERY)
				break;
			if (max8986->pdata->pmu_event_cb)
				max8986->pdata->pmu_event_cb(PMU_EVENT_CHARGER_REMOVE,
					max8986_power->charger_type);
#if defined(CONFIG_BRCM_FUSE_RPC_CIB)
			BcmRpc_SetChargerInserted( false);
#endif
#if defined(CONFIG_HAS_WAKELOCK)
			if(max8986_power->charger_type == PMU_MUIC_CHGTYP_USB ||
				max8986_power->charger_type == PMU_MUIC_CHGTYP_DEDICATED_CHGR || /* Add the wall-charger [Alvin 2012.04.17.] */
				max8986_power->charger_type == PMU_MUIC_CHGTYP_DOWNSTREAM_PORT)
			{
				wake_lock_timeout(&max8986_power->wait_app_wl, HZ); /* Wait for the application getting the event. [Alvin 2012.04.17.] */
				wake_unlock(&max8986_power->usb_charger_wl);	/* wake lock is needed both for usb and charger. [Alvin 2012.04.17.] */
			}
#endif
/* Disable charging in pmu */
			max89xx_stop_charging(max8986_power, true);
			max8986_power->charger_type = param;
		}
		else
		{
			if(max8986_power->dcd_timout)
			{
				pr_info("%s: Invalid Charger\n", __func__);
				break;
			}
			max8986_power->charger_type = param;
#if defined(CONFIG_HAS_WAKELOCK)
			if(max8986_power->charger_type == PMU_MUIC_CHGTYP_USB ||
				max8986_power->charger_type == PMU_MUIC_CHGTYP_DEDICATED_CHGR ||/* Add the wall-charger [Alvin 2012.04.17.] */
				max8986_power->charger_type == PMU_MUIC_CHGTYP_DOWNSTREAM_PORT)
				wake_lock(&max8986_power->usb_charger_wl);	/* wake lock is needed both for usb and charger. [Alvin 2012.04.17.] */
#endif
				/* Notify through event callback */
			if(max8986->pdata->pmu_event_cb)
			{
				max8986->pdata->pmu_event_cb(PMU_EVENT_CHARGER_INSERT,
						max8986_power->charger_type);
			}

#if defined(CONFIG_BRCM_FUSE_RPC_CIB)
			BcmRpc_SetChargerInserted( true);
#endif


			/* If the device is connected to a USB port, we don't
			 * start charging until the USB driver explicitly
			 * initiates charging (MobC00185565).
			 */
			if (param != PMU_MUIC_CHGTYP_USB &&
			    param != PMU_MUIC_CHGTYP_DOWNSTREAM_PORT)
				max89xx_start_charging(max8986_power, param);
		}
		break;

	default:
		break;
	}
}
/*****************************************************************************
 * power driver interrupt handling
 *****************************************************************************/
static void max89xx_power_isr(int irq, void *data)
{
	struct max8986_power *max8986_power = data;
	struct max8986 *max8986 = max8986_power->max8986;

	pr_info("%s:interrupt id = %u\n", __func__, irq);
	switch (irq)
	{
	case MAX8986_IRQID_INT2_CHGINS:
		pr_info("%s: Charger inserted\n", __func__);

		break;

	case MAX8986_IRQID_INT2_CHGRM:
		pr_info("%s: Charger removed\n", __func__);
		break;

	case MAX8986_IRQID_INT2_CHGEOC:
		pr_info("%s: End of Charging\n", __func__);
		max89xx_disable_irq(max8986, MAX8986_IRQID_INT2_CHGEOC);
		max8986_power->charging_status = POWER_SUPPLY_STATUS_FULL;
		power_supply_changed(&max8986_power->battery);
#ifdef MAX8986_LOG_CHARGING_TIME
		max8986_power->charging_end_time = ktime_get();
		max8986_power->charging_time =
			ktime_sub(max8986_power->charging_end_time,
					max8986_power->charging_start_time);
		pr_info("%s:Total Charging Time	%lld %us\n", __func__,
				ktime_to_us(max8986_power->charging_time));
		charging_time_sec = max8986_power->charging_time.tv.sec;
		charging_time_nsec = max8986_power->charging_time.tv.nsec;
#endif
		break;
	case MAX8986_IRQID_INT2_MBCCHGERR:
		pr_info("%s:MAX8986_IRQID_INT2_MBCCHGERR\n", __func__);
		break;
	case MAX8986_IRQID_INT2_CHGERR:
		pr_info("%s:MAX8986_IRQID_INT2_CHGERR\n", __func__);
		break;
	} /* switch (irq) */
}

/*****************************************************************************
 * usb driver callbacks
 *****************************************************************************/
int pmu_get_usb_enum_current(void)
{
	int cc = MAX8986_CHARGING_CURR_UNKNOWN;
	struct max8986_power *max8986_power;
	pr_info("%s\n", __func__);
	if(!power_device)
	{
		pr_info("%s:Power driver not initialized \n", __func__);
		return cc;
	}

	max8986_power = platform_get_drvdata(power_device);
	if(max8986_power)
	{
		struct max8986_power_pdata *pdata = max8986_power->max8986->pdata->power;
		switch(max8986_power->charger_type)
		{
		case PMU_MUIC_CHGTYP_USB:
		case PMU_MUIC_CHGTYP_DOWNSTREAM_PORT:
			cc = pdata->usb_charging_cc;
		break;

		case PMU_MUIC_CHGTYP_DEDICATED_CHGR:
			cc =  pdata->wac_charging_cc;
			break;

		case PMU_MUIC_CHGTYP_SPL_500MA:
			cc =  MAX8986_CHARGING_CURR_500MA;
			break;

		case PMU_MUIC_CHGTYP_SPL_1A:
			cc =  MAX8986_CHARGING_CURR_950MA;
			break;

		case PMU_MUIC_CHGTYP_DEAD_BATT_CHG:
			cc = MAX8986_CHARGING_CURR_90MA;
			break;

		default:
			break;
		}
	}
	pr_info("%s : cc = %x\n",__func__,cc);
	return cc;
}

EXPORT_SYMBOL(pmu_get_usb_enum_current);

extern void pmu_start_charging(void)
{
	struct max8986_power *max8986_power;
	if(!power_device)
	{
		pr_info("%s:Power driver not initialized \n", __func__);
		return;
	}

	max8986_power = platform_get_drvdata(power_device);
	if(max8986_power)
	{
		max89xx_start_charging(max8986_power,
				       max8986_power->charger_type);
	}
}
EXPORT_SYMBOL(pmu_start_charging);

extern void pmu_stop_charging(void)
{
	struct max8986_power *max8986_power;
	if(!power_device)
	{
		pr_info("%s:Power driver not initialized \n", __func__);
		return;
	}

	max8986_power = platform_get_drvdata(power_device);
	if(max8986_power)
	{
		max89xx_stop_charging(max8986_power, false);
	}
}
EXPORT_SYMBOL(pmu_stop_charging);

pmu_charging_current pmu_get_charging_current()
{
	pmu_charging_current cc = MAX8986_CHARGING_CURR_UNKNOWN;
	struct max8986_power *max8986_power;
	if(!power_device)
	{
		pr_info("%s:Power driver not initialized \n", __func__);
		return cc;
	}

	max8986_power = platform_get_drvdata(power_device);
	if(max8986_power)
		cc = max89xx_get_fc_current(max8986_power);
	pr_info("%s: cc: %d\n", __func__, cc);
	return cc;
}
EXPORT_SYMBOL(pmu_get_charging_current);

void pmu_set_usb_enum_current(bool pre_enum)
{
	struct max8986_power *max8986_power;
	if(!power_device)
	{
		pr_info("%s:Power driver not initialized \n", __func__);
		return;
	}
	max8986_power = platform_get_drvdata(power_device);

	pr_info("%s: pre_enum: %d\n", __func__, pre_enum);
	if(max8986_power)
	{
		struct max8986_power_pdata *pdata = max8986_power->max8986->pdata->power;
		if(pre_enum)
			max89xx_set_fc_current(max8986_power,
					       USB_PREENUM_CURR_REQ_VAL);
		else
			max89xx_set_fc_current(max8986_power,
					       pdata->usb_charging_cc);
	}
}
EXPORT_SYMBOL(pmu_set_usb_enum_current);

void pmu_set_charging_current(pmu_charging_current charging_cur)
{
	struct max8986_power *max8986_power;
	if(!power_device)
	{
		pr_info("%s:Power driver not initialized \n", __func__);
		return;
	}

	max8986_power = platform_get_drvdata(power_device);
	pr_debug("%s: charging_cur: %x\n", __func__, charging_cur);
	if(max8986_power)
		max89xx_set_fc_current(max8986_power, charging_cur);
}

EXPORT_SYMBOL(pmu_set_charging_current);

static int max89xx_power_ioctl_handler(u32 cmd, u32 arg, void *pri_data)
{
	struct max8986_power *max8986_power = pri_data;
	int ret = -EINVAL;
	pr_info("Inside %s, IOCTL command %d\n", __func__, cmd);
	switch (cmd) {
	case BCM_PMU_IOCTL_START_CHARGING:
	{
		int pwr_spply_type;
		if (copy_from_user(&pwr_spply_type, (int *)arg, sizeof(int))
				!= 0) {
			pr_info("Error copying data from user\n");
			return -EFAULT;
		}
		pr_info("max89xx_power_ioctl_handler: max8986_power->power_src \
				%d, pwr_spply_type %d\n",
				max8986_power->power_src, pwr_spply_type);
		if (max8986_power->power_src != pwr_spply_type)
			return -EINVAL;
		if (max8986_power->charging_status !=
				POWER_SUPPLY_STATUS_CHARGING) {
			max89xx_start_charging(max8986_power,
					max89xx_muic_get_charger_type());
			ret = SUCCESS;
		} else {
			pr_info("max8986_power: already in charging mode or \
					charger is not connected\n");
			ret = -EPERM;
		}
		break;
	}
	case BCM_PMU_IOCTL_STOP_CHARGING:
	{
		if ((max8986_power->charging_status !=
					POWER_SUPPLY_STATUS_DISCHARGING) &&
				(max8986_power->charging_status !=
				 POWER_SUPPLY_STATUS_NOT_CHARGING)) {
			max89xx_stop_charging(max8986_power, false);
			ret = SUCCESS;
		} else {
			pr_info("max8986_power: already not in charging mode\
					\n");
			ret = -EPERM;
		}
		break;
	}
	case BCM_PMU_IOCTL_SET_CHARGING_CURRENT:
	{
		/* Not required for now */
		break;
	}
	case BCM_PMU_IOCTL_GET_CHARGING_CURRENT:
	{
		/* Not required for now */
		break;
	}
	} /* End of switch */

	return ret;
}

#if defined(CONFIG_HAS_EARLYSUSPEND)
static void max89xx_power_early_suspend(struct early_suspend *h)
{
	struct max8986_power *max8986_power =
		container_of(h, struct max8986_power, early_suspend_desc);
	pr_info("[%s]+++\n", __func__);
	cancel_delayed_work_sync(&max8986_power->batt_lvl_mon_wq);
	pr_info("[%s]+++\n", __func__);
}
static void max89xx_power_late_resume(struct early_suspend *h)
{
	struct max8986_power *max8986_power =
		container_of(h, struct max8986_power, early_suspend_desc);
	pr_info("[%s]+++\n", __func__);
	schedule_delayed_work(&max8986_power->batt_lvl_mon_wq,
			msecs_to_jiffies(500));
	pr_info("[%s]+++\n", __func__);
}
#else
#ifdef CONFIG_PM
static int max89xx_power_suspend(struct platform_device *pdev,
		pm_message_t state)
{
	struct max8986_power *max8986_power = platform_get_drvdata(pdev);
#if !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)
	if (max8986_power)
		cancel_delayed_work_sync(&max8986_power->batt_lvl_mon_wq);
#endif
	return 0;
}

static int max89xx_power_resume(struct platform_device *pdev)
{
	struct max8986_power *max8986_power = platform_get_drvdata(pdev);
#if !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)
	if (max8986_power) {
		schedule_delayed_work(&max8986_power->batt_lvl_mon_wq,
				msecs_to_jiffies(2000));
	}
#endif
	return 0;
}
#else
#define max89xx_power_suspend NULL
#define max89xx_power_resume NULL
#endif /* CONFIG_PM */
#endif /*CONFIG_HAS_EARLYSUSPEND*/

/*****************************************************************************
 * init code
 *****************************************************************************/
static void max89xx_init_charger(struct max8986_power *max8986_power)
{
	u8 reg_val;
	struct max8986 *max8986 = max8986_power->max8986;
	struct max8986_power_pdata *plat_data = max8986->pdata->power;

	reg_val = MAX8986_MBCCTRL1_TFCH_DISABLE;
	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL1, reg_val);

	/* Set plat_data->charing_cv as charging voltage by default [Alvin 2011.09.08] */
	max8986->read_dev(max8986, MAX8986_PM_REG_MBCCTRL3, &reg_val);
	//reg_val |= MBCCV_4_20V;
	reg_val |= plat_data->charging_cv;
	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL3, reg_val);

	/* Set plat_data->wac_charging_cc as charging current by default [Alvin 2011.09.08] */
	//reg_val = MAX8986_CHARGING_CURR_400MA ;
	reg_val = plat_data->wac_charging_cc;
	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL4, reg_val);

	/* Set plat_deata->eoc_current as EOC by default [Alvin 2011.09.08] */
	max8986->read_dev(max8986, MAX8986_PM_REG_MBCCTRL7, &reg_val);
	if (plat_data->eoc_current)
		reg_val |= plat_data->eoc_current;
	else
		reg_val |= MAX8986_EOC_60MA;
	max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL7, reg_val);
	
	/* Don't stop charging for Bug#219076 [Alvin 2012.02.09] */
	/*Disable charging by default*/
	//reg_val = 0;//~(MAX8986_MBCCTRL2_VCHGR_FC | MAX8986_MBCCTRL2_MBCHOSTEN) - other bits are unused
	//max8986->write_dev(max8986, MAX8986_PM_REG_MBCCTRL2, reg_val);

	/*Register for PM interrupts */
	max89xx_request_irq(max8986, MAX8986_IRQID_INT2_CHGEOC, false,
		max89xx_power_isr, max8986_power);
	max89xx_request_irq(max8986, MAX8986_IRQID_INT2_CHGINS, true,
		max89xx_power_isr, max8986_power);
	max89xx_request_irq(max8986, MAX8986_IRQID_INT2_CHGERR, false,
		max89xx_power_isr, max8986_power);
	max89xx_request_irq(max8986, MAX8986_IRQID_INT2_CHGRM, true,
		max89xx_power_isr, max8986_power);
	max89xx_request_irq(max8986, MAX8986_IRQID_INT2_MBCCHGERR, false,
		max89xx_power_isr, max8986_power);
	max89xx_request_irq(max8986, MAX8986_IRQID_INT3_VERYLOWBAT, true,
		max89xx_power_isr, max8986_power);

	max89xx_muic_register_event_handler(MAX8986_MUIC_EVENT_CHARGER_OVP,
					    max89xx_muic_event,
					    max8986_power);
	max89xx_muic_register_event_handler(MAX8986_MUIC_EVENT_DCDTMR,
					    max89xx_muic_event,
					    max8986_power);
	max89xx_muic_register_event_handler(MAX8986_MUIC_EVENT_CHARGER_TYPE,
					    max89xx_muic_event,
					    max8986_power);

}

extern void kernel_power_off(void);
extern void machine_power_off(void);
extern int bcm_gpio_pull_up(unsigned int gpio, bool up);
extern int bcm_gpio_pull_up_down_enable(unsigned int gpio, bool enable);
static unsigned int battery_num;
#define BATTERY_DETECT 	19

static irqreturn_t battery_detect_irq_handler(int irq, void *data)
{
	
	pr_info("%s: machine_power_off +++ interrupt id = %u\n", __func__, irq);
//	queue_work(lpi->lp_wq, &sensor_irq_work);
	if (queue_work(battery_workqueue, &battery_work) == 0) {
		pr_info("%s: Work previously queued\n", __func__);
	}

	pr_info("battery_detect_irq_handler ++++++++++++++++battery_num = %d\n",*(unsigned int *)data);

	return IRQ_HANDLED;
}

static int battery_detect_gpio_init(void)
{

	int ret;

	pr_info("%s:+++++ \n", __func__);
	battery_num = BATTERY_DETECT;
	
	gpio_request(BATTERY_DETECT, "battery_detect"); // PS sensor interrupt
	gpio_direction_input(BATTERY_DETECT);
	set_irq_type(GPIO_TO_IRQ(BATTERY_DETECT), IRQF_TRIGGER_FALLING);
	bcm_gpio_pull_up(BATTERY_DETECT, false);
	bcm_gpio_pull_up_down_enable(BATTERY_DETECT, true);
	/*Need add psensor interrupt gpio setup*/
	ret = request_irq(GPIO_TO_IRQ(BATTERY_DETECT), battery_detect_irq_handler,
	            IRQF_TRIGGER_FALLING,"battery_detect",&battery_num);

	pr_debug("[battery_detect]%s: req_irq(%d)  (%d)\n", __func__,
	            GPIO_TO_IRQ(BATTERY_DETECT), ret);
	return ret;
}

static int __devinit max8986_power_probe(struct platform_device *pdev)
{
	struct max8986_power *max8986_power;
	struct max8986 *max8986 = dev_get_drvdata(pdev->dev.parent);
	int ret = 0;
	struct max8986_power_pdata *power_pdata;
	u8 reg_val;
#if defined(CONFIG_BRCM_FUSE_RIL_CIB) && !defined(CONFIG_BATT_LVL_FROM_ADC) \
	&& !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)
	unsigned long notify_id_list[] = { RIL_NOTIFY_DEVSPECIFIC_BATT_LEVEL };
#endif

	pr_info("%s\n", __func__);

	if (unlikely(!max8986->pdata || !max8986->pdata->power)) {
		pr_err("%s: invalid platform data\n", __func__);
		return -EINVAL;
	}

	max8986_power = kzalloc(sizeof(struct max8986_power), GFP_KERNEL);
	if (unlikely(!max8986_power)) {
		pr_err("%s: max8986_power memory alloc failed\n", __func__);
		return -ENOMEM;
	}
	max8986_power->max8986 = max8986;
	platform_set_drvdata(pdev, max8986_power);
	power_device = pdev;
	power_pdata = max8986->pdata->power;
#if defined(CONFIG_HAS_WAKELOCK)
	wake_lock_init(&max8986_power->usb_charger_wl, WAKE_LOCK_SUSPEND,
						__stringify(usb_charger_wl));
	wake_lock_init(&max8986_power->wait_app_wl, WAKE_LOCK_SUSPEND,
							__stringify(wait_app_wl));
	wake_lock_init(&max8986_power->temp_adc_wl, WAKE_LOCK_IDLE,
		 __stringify(temp_adc_wl));
#endif

	mutex_init(&max8986_power->power_mtx);

	/*set voltage to 20% by default */
	max8986_power->batt_percentage = 20;
	max8986_power->batt_voltage = power_pdata->batt_lvl_tbl_dischg.bat_vol[2];
	max8986_power->batt_health = POWER_SUPPLY_HEALTH_GOOD;
	max8986_power->batt_temp = 30;//default value
	/* init pmu */
	max89xx_init_charger(max8986_power);

	INIT_WORK(&battery_work, machine_power_off);

	battery_workqueue = create_workqueue("battery_events");
	if (!battery_workqueue) {
		ret = -ENOMEM;
		pr_err("%s: failed to create work queue", __func__);
		goto wall_err;
	}
	
	battery_detect_gpio_init();

	INIT_DELAYED_WORK(&max8986_power->batt_lvl_mon_wq,
		max89xx_batt_lvl_mon_wq);

	max8986_power->power_src = POWER_SUPPLY_TYPE_BATTERY;
	max8986_power->charging_status = POWER_SUPPLY_STATUS_DISCHARGING;

	/*register power supplies */
	max8986_power->wall.name = "max8986-wall";
	max8986_power->wall.type = POWER_SUPPLY_TYPE_MAINS;
	max8986_power->wall.properties = wall_props;
	max8986_power->wall.num_properties = ARRAY_SIZE(wall_props);
	max8986_power->wall.get_property = max89xx_wall_get_property;
	ret = power_supply_register(&pdev->dev, &max8986_power->wall);
	if (ret) {
		pr_err("%s: wall charger registration failed\n", __func__);
		goto wall_err;
	}

	max8986_power->battery.name = "max8986-battery";
	max8986_power->battery.properties = battery_props;
	max8986_power->battery.type = POWER_SUPPLY_TYPE_BATTERY;
	/* Temp property is kept as the last entry in battery_props array.
	 * Temp prop is registered only if a valid
	 * temp adc channel is specified in platform data
	 * */
	max8986_power->battery.num_properties = ARRAY_SIZE(battery_props);
	max8986_power->battery.get_property = max89xx_battery_get_property;
	ret = power_supply_register(&pdev->dev, &max8986_power->battery);
	if (ret) {
		pr_err("%s: battery registration failed\n", __func__);
		goto batt_err;
	}

	max8986_power->usb.name = "max8986-usb",
	    max8986_power->usb.type = POWER_SUPPLY_TYPE_USB;
	max8986_power->usb.properties = usb_props;
	max8986_power->usb.num_properties = ARRAY_SIZE(usb_props);
	max8986_power->usb.get_property = max89xx_usb_get_property;
	ret = power_supply_register(&pdev->dev, &max8986_power->usb);
	if (ret) {
		pr_err("%s: usb power supply registration failed\n", __func__);
		goto usb_err;
	}

#if defined(CONFIG_BRCM_FUSE_RIL_CIB) && !defined(CONFIG_BATT_LVL_FROM_ADC) \
	&& !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)
	if (KRIL_Register(BCM_POWER_CLIENT, NULL,
		max89xx_ril_adc_notify_cb, notify_id_list,
		ARRAY_SIZE(notify_id_list)) == false) {
		pr_err("%s: KRIL_Register failed\n", __func__);
	}
#else
	pr_err("%s:KRIL_Register not defined\n", __func__);
#endif

/* Athenaray board does not have battery voltage detection capability.
 * So battery monitoring workqueue need not be started.
 */
#if !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)
	/* start the workqueue */
	queue_delayed_work(max8986_power->max8986->pmu_workqueue,
		&max8986_power->batt_lvl_mon_wq, msecs_to_jiffies(500));
#endif
	max89xx_register_ioctl_handler(max8986, MAX8986_SUBDEV_POWER,
	max89xx_power_ioctl_handler, max8986_power);
#if defined(CONFIG_HAS_EARLYSUSPEND)
	max8986_power->early_suspend_desc.level =
		EARLY_SUSPEND_LEVEL_BLANK_SCREEN + 1;
	max8986_power->early_suspend_desc.suspend = max89xx_power_early_suspend;
	max8986_power->early_suspend_desc.resume = max89xx_power_late_resume;
	register_early_suspend(&max8986_power->early_suspend_desc);
#endif /*CONFIG_HAS_EARLYSUSPEND*/

	/* if usb/wall charger is already connected, then start the charging
	 * process by simulating charger insertion interrupt.
	 */
	 max8986->read_dev(max8986, MAX8986_PM_REG_ENV1, &reg_val);
	if (reg_val & MAX8986_ENV1_CGPD)
	{
		max89xx_muic_force_charger_detection();
	}
	pr_info("%s: success\n", __func__);
	return 0;

usb_err:
	power_supply_unregister(&max8986_power->battery);
batt_err:
	power_supply_unregister(&max8986_power->wall);
wall_err:
	kfree(max8986_power);
	return ret;
}

static int __devexit max89xx_power_remove(struct platform_device *pdev)
{
	struct max8986_power *max8986_power = platform_get_drvdata(pdev);

	if (max8986_power) {
#if !defined(CONFIG_DISABLE_BATLVL_NOTIFICATION)
		cancel_delayed_work_sync(&max8986_power->batt_lvl_mon_wq);
#endif
		power_supply_unregister(&max8986_power->wall);
		power_supply_unregister(&max8986_power->usb);
		power_supply_unregister(&max8986_power->battery);
#if defined(CONFIG_HAS_EARLYSUSPEND)
		unregister_early_suspend(&max8986_power->early_suspend_desc);
#endif
#if defined(CONFIG_HAS_WAKELOCK)
		wake_lock_destroy(&max8986_power->temp_adc_wl);
		wake_lock_destroy(&max8986_power->wait_app_wl);
		wake_lock_destroy(&max8986_power->usb_charger_wl);
#endif
	}
	kfree(max8986_power);
	return 0;
}

static struct platform_driver max8986_power_driver = {
	.driver = {
		.name = "max8986-power",
		.owner = THIS_MODULE,
	},
	.remove = __devexit_p(max89xx_power_remove),
	.probe = max8986_power_probe,
#ifndef CONFIG_HAS_EARLYSUSPEND
	.suspend	= max89xx_power_suspend,
	.resume		= max89xx_power_resume,
#endif
};

static int __init max89xx_power_init(void)
{
	return platform_driver_register(&max8986_power_driver);
}

late_initcall(max89xx_power_init);

static void __exit max89xx_power_exit(void)
{
	platform_driver_unregister(&max8986_power_driver);
}

module_exit(max89xx_power_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Power Driver for Maxim MAX89xx PMU");
MODULE_ALIAS("platform:max89xx-power");
