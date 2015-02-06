/*******************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
* 	@file	include/linux/lis33de.h
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

#ifndef LINUX_LIS33DE_MODULE_H
#define LINUX_LIS33DE_MODULE_H

#ifdef __KERNEL__
#include <linux/ioctl.h>
#else
#include <sys/ioctl.h>
#endif

#include <plat/bcm_i2c.h>

#ifdef __KERNEL__

/* enum to indicate the direction
 * in which the bma sensor has been
 * placed with respect to phone
 */
enum lis33de_reg {
        CTRL_REG1               = 0x20,
        CTRL_REG2               = 0x21,
        CTRL_REG3               = 0x22,
        STATUS_REG              = 0x27,
        OUT_X                   = 0x29,
        OUT_Y                   = 0x2B,
        OUT_Z                   = 0x2D,
        FF_WU_CFG               = 0x30,
        FF_WU_SRC               = 0x31,
        FF_WU_THS               = 0x32,
        FF_WU_DURATION = 0x33,
};
enum lis33de_ctrl1 {
        CTRL1_Xen       = 0x01,
        CTRL1_Yen       = 0x02,
        CTRL1_Zen       = 0x04,
        CTRL1_STM       = 0x08,
        CTRL1_STP       = 0x10,
        CTRL1_FS        = 0x20,
        CTRL1_PD        = 0x40,
        CTRL1_DR        = 0x80,
};
enum lis33de_ctrl2 {
        CTRL2_SIM       = 0x40,
        CTRL2_BOOT      = 0x80,
};


enum lis33de_ctrl3 {
        CTRL3_ICFG0     = 0x01,
        CTRL3_ICFG1     = 0x02,
        CTRL3_ICFG2     = 0x04,
        CTRL3_IHL               = 0x80,
};


enum lis_orientation {
	LIS_NO_ROT = 0,
	LIS_ROT_90,
	LIS_ROT_180,
	LIS_ROT_270,
};

struct lis33de_platform_data {
	struct i2c_slave_platform_data i2c_pdata;
	int orientation;
	bool invert;
	int (*init) (struct device *);
	void (*exit) (struct device *);
};


#endif /* __KERNEL__ */
#define LIS33DE_GPIO_IRQ  (4)
#define LIS_DATA_SIZE	3
/* IOCTL MACROS */
#define LIS33DE_IOCTL_GET_DELAY		_IOR(0x1, 0x00, int)
#define LIS33DE_IOCTL_SET_DELAY		_IOW(0x1, 0x01, int)
#define LIS33DE_IOCTL_SET_FLAG		_IOW(0x1, 0x02, int)
#define LIS33DE_IOCTL_GET_DATA		_IOR(0x1, 0x03, short[LIS_DATA_SIZE])

#endif /* LINUX_LIS33DE_MODULE_H */
