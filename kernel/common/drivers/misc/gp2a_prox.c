 /*****************************************************************************
 *
 * Title: Linux Device Driver for Proximity Sensor GP2AP002S00F
 * COPYRIGHT(C) : Samsung Electronics Co.Ltd, 2006-2015 ALL RIGHTS RESERVED
 *
 *****************************************************************************/
#include <linux/interrupt.h>
#include <linux/slab.h>
#include <linux/irq.h>
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/i2c.h>
#include <linux/miscdevice.h>
#include <linux/platform_device.h>
#include <linux/gpio.h>
#include <linux/input.h>
#include <linux/workqueue.h>
#include <linux/delay.h>
#include <linux/wakelock.h>
#include <mach/hardware.h>
#include <asm/gpio.h>  
 
#include <linux/gp2a_prox.h>
#include <linux/prox_ioctls.h>
#include <linux/regulator/consumer.h>


#define GPIO_PS_OUT	29
#define PROX_IRQ	gpio_to_irq(GPIO_PS_OUT)

static struct regulator *prox_regulator=NULL;

static struct file_operations gp2a_prox_fops = {
	.owner  	= THIS_MODULE,
	.ioctl 		= gp2a_prox_ioctl,
	.open   	= gp2a_prox_open,
    .release 	= gp2a_prox_release,    
};

static struct miscdevice gp2a_prox_misc_device = {
    .minor  = MISC_DYNAMIC_MINOR,
    .name   = "proximity",
    .fops   = &gp2a_prox_fops,
};

static void prox_ctrl_regulator(int on_off)
{
	if(on_off)
	{
		if(!regulator_is_enabled(prox_regulator))
		{
			regulator_set_voltage(prox_regulator,2900000,2900000);
			regulator_enable(prox_regulator);
		}
	}
	else
	{
		if(regulator_is_enabled(prox_regulator))
			regulator_disable(prox_regulator);
	}
}

static int gp2a_prox_open(struct inode *ip, struct file *fp)
{
	debug("%s called",__func__);
	return nonseekable_open(ip, fp);	
}

static int gp2a_prox_release(struct inode *ip, struct file *fp)
{	
	debug("%s called",__func__);
	return 0;
}

static int gp2a_prox_ioctl(struct inode *inode, struct file *filp, 
	                        unsigned int ioctl_cmd,  unsigned long arg)
{	int ret = 0;

	if( _IOC_TYPE(ioctl_cmd) != PROX_IOC_MAGIC )
    {
        error("Wrong _IOC_TYPE 0x%x",ioctl_cmd);
        return -ENOTTY;
    }
    if( _IOC_NR(ioctl_cmd) > PROX_IOC_NR_MAX )
    {
        error("Wrong _IOC_NR 0x%x",ioctl_cmd);	
        return -ENOTTY;
    }
	switch (ioctl_cmd)
    {
        case PROX_IOC_NORMAL_MODE:
			{
				debug("PROX_IOC_NORMAL_MODE called");
				if(0==proximity_enable)
				{
					if( (ret = gp2a_prox_mode(ON)) < 0 )        
						error("PROX_IOC_NORMAL_MODE failed"); 
				}
				else
					debug("Proximity Sensor is already Normal Mode");
				break;
			}
        case PROX_IOC_SHUTDOWN_MODE:			
			{
				debug("PROX_IOC_SHUTDOWN_MODE called");				
				if(1==proximity_enable)
				{
					if( (ret = gp2a_prox_mode(OFF)) < 0 )        
						error("PROX_IOC_SHUTDOWN_MODE failed"); 
				}
				else
					debug("Proximity Sensor is already set in Shutdown mode");
				break;
			}
		default:
			error("Unknown IOCTL command");
            ret = -ENOTTY;
            break;
	}
	return ret;
}

#if USE_INTERRUPT
/*Only One Read Only register, so word address need not be specified (from Data Sheet)*/
static int gp2a_i2c_read(u8 reg, u8 *value)
{
	int ret =0;
	int count=0;
	u8 buf[3];
	struct i2c_msg msg[1];

	buf[0] = reg;
	
	/*first byte read(buf[0]) is dummy read*/
	msg[0].addr = gp2a_data->gp2a_prox_i2c_client->addr;
	msg[0].flags = I2C_M_RD;	
	msg[0].len = 2;
	msg[0].buf = buf;
	count = i2c_transfer(gp2a_data->gp2a_prox_i2c_client->adapter, msg, 1);
	
	if(count < 0)
	{
		debug("%s %d i2c transfer error\n", __func__, __LINE__);
		ret =-1;
	}
	else
	{
		*value = buf[0] << 8 | buf[1];
		debug("value=%d", *value);
	}
	
	return ret;	
}
#endif

static int gp2a_i2c_write( u8 reg, u8 *value )
{
    int ret =0;
	int count=0;
    struct i2c_msg msg[1];
	u8 data[2];

    if( (gp2a_data->gp2a_prox_i2c_client == NULL) || (!gp2a_data->gp2a_prox_i2c_client->adapter) ){
        return -ENODEV;
    }	

    data[0] = reg;
    data[1] = *value;

    msg[0].addr 	= gp2a_data->gp2a_prox_i2c_client->addr;
    msg[0].flags 	= 0;
    msg[0].len 		= 2;
    msg[0].buf 		= data;


	count = i2c_transfer(gp2a_data->gp2a_prox_i2c_client->adapter,msg,1);
	
	if(count < 0)
		ret =-1;
	
	return ret;
}
/* 
 * Setting GP2AP002S00F proximity sensor operation mode, 
 * enable=1-->Normal Operation Mode
 * enable=0-->Shutdown Mode 
 */
static int gp2a_prox_mode(int enable)
{	
	u8 reg_value;
	int ret=0, err=0;
	debug("%s called",__func__); 
	if(1==enable)
	{

		prox_ctrl_regulator(ON);

		err = set_irq_wake(gp2a_data->irq, 1);
		if (err)
			error("set_irq_wake[1] failed");

		reg_value = 0x18;
		if((ret=gp2a_i2c_write(GP2A_REG_CON,&reg_value))<0)
			error("gp2a_i2c_write 1 failed");
		
		reg_value = 0x40;
		if((ret=gp2a_i2c_write(GP2A_REG_HYS,&reg_value))<0)
			error("gp2a_i2c_write 2 failed");
		
		reg_value = 0x03;
		if((ret=gp2a_i2c_write(GP2A_REG_OPMOD,&reg_value))<0)
			error("gp2a_i2c_write 3 failed");

		enable_irq(gp2a_data->irq);
		
		reg_value = 0x00;
		if((ret=gp2a_i2c_write(GP2A_REG_CON,&reg_value))<0)
			error("gp2a_i2c_write 4 failed");
		
		proximity_enable=1;
	}
	else 
	{
	
		err = set_irq_wake(gp2a_data->irq, 0);
		if (err)
			error("set_irq_wake[0] failed");

		disable_irq_nosync(gp2a_data->irq);

		reg_value = 0x02;
		if((ret=gp2a_i2c_write(GP2A_REG_OPMOD,&reg_value))<0)
			error("gp2a_i2c_write 3 failed");
		
		proximity_enable=0;

		prox_ctrl_regulator(OFF);
	}   
	
	return ret;
}

/* 
 * PS_OUT =0, when object is near
 * PS_OUT =1, when object is far
 */
/*
 * get_gp2a_proximity_value() is called by magnetic sensor driver(ak8973)
 * for reading proximity value.
 */
int gp2a_get_proximity_value(void)
{
	debug("%s called",__func__); 

	return ((proximity_value == 1)? 0:1);

}
EXPORT_SYMBOL(gp2a_get_proximity_value);

static void gp2a_chip_init(void)
{
	debug("%s called",__func__); 

	prox_regulator = regulator_get(NULL,"prox_vcc");
	
	/*After Power Supply is supplied, about 1ms delay is required before issuing read/write commands */
	mdelay(1);
}

#if USE_INTERRUPT
static void gp2a_prox_work_func(struct work_struct *work)
{
	unsigned char value;
	unsigned char int_val = GP2A_REG_PROX;
	unsigned char vout = 0;

	/* Read VO & INT Clear */	
	debug("[PROXIMITY] %s : \n",__func__);
	if(INT_CLEAR)
	{
		//int_val = GP2A_REG_PROX | (1 <<7);
	}
	
	gp2a_i2c_read((u8)(int_val), &value);
	vout = value & 0x01;
	debug("[PROXIMITY] value = %d \n",vout);

	/* Report proximity information */
	proximity_value = vout;
		
	if(proximity_value ==0)
	{
		timeB = ktime_get();
		
		timeSub = ktime_sub(timeB,timeA);
		debug("[PROXIMITY] timeSub sec = %d, timeSub nsec = %d \n",timeSub.tv.sec,timeSub.tv.nsec);
		
		if (timeSub.tv.sec>=3 )
		{
		    wake_lock_timeout(&prx_wake_lock,HZ/2);
			debug("[PROXIMITY] wake_lock_timeout : HZ/2 \n");
		}
		else
			error("[PROXIMITY] wake_lock is already set \n");
	}

	if(USE_INPUT_DEVICE)
	{
		input_report_abs(gp2a_data->prox_input_dev, ABS_DISTANCE,(int)vout);
		input_sync(gp2a_data->prox_input_dev);
		mdelay(1);
	}

	/* Write HYS Register */
	if(!vout)
	{
		value = 0x40;
	}
	else
	{
		value = 0x20;
	}
	
	gp2a_i2c_write((u8)(GP2A_REG_HYS),&value);

	/* Forcing vout terminal to go high */
	value = 0x18;
	gp2a_i2c_write((u8)(GP2A_REG_CON),&value);

	/* enable INT */
	enable_irq(gp2a_data->irq);

	/* enabling VOUT terminal in nomal operation */
	value = 0x00;
	gp2a_i2c_write((u8)(GP2A_REG_CON),&value);
	
}

/*
 * Operating the device in Normal Output Mode(not operating in Interrupt Mode), but treating 
 * ps_out as interrupt pin by the Application Processor.When sensor detects that the object is 
 * near,ps_out changes from 1->0, which is treated as edge-falling interrupt, then it 
 * reports to the input event only once.If,reporting to the input events should be done as long 
 * as the object is near, treat ps_out as low-level interrupt.
 */
static irqreturn_t gp2a_irq_handler( int irq, void *unused )
{
  	debug("%s called IRQ_NUM:%d",__func__,irq);
    if(gp2a_data->irq !=-1)
	{
		disable_irq_nosync(gp2a_data->irq);
		debug("disable_irq IRQ_NO:%d",gp2a_data->irq);
		queue_work(gp2a_prox_wq, &gp2a_data->work_prox);
	}
	else
	{
		error("PROX_IRQ not handled");
		return IRQ_NONE;
	}
	debug("PROX_IRQ handled");
	return IRQ_HANDLED;
}
#endif

/*sysfs -operation_mode*/
static ssize_t gp2a_show_operation_mode(struct device *dev,struct device_attribute *attr, char *buf)
{    		
    return sprintf(buf, "%d\n", proximity_enable);
}
static ssize_t gp2a_store_operation_mode(struct device *dev,struct device_attribute *attr,const char *buf, size_t count)
{      
	int ret=0;
	unsigned long mode;
	if((strict_strtoul(buf,10,&mode)<0) || (mode > 2))
		return -EINVAL;
	if(mode != proximity_enable)
	{
		if( (ret = gp2a_prox_mode(mode)) < 0 )
		{
			error("gp2a_prox_mode failed"); 
			return ret;
		}
	}
	return count;
}
static DEVICE_ATTR(operation_mode, S_IRUGO | S_IWUGO, gp2a_show_operation_mode, gp2a_store_operation_mode);

/*sysfs -prox_value*/
static ssize_t gp2a_show_prox_value(struct device *dev,struct device_attribute *attr, char *buf)
{   	
	u32 prox_value;
	prox_value = gp2a_get_proximity_value();	
	return sprintf(buf, "%d\n", prox_value);	
}
static DEVICE_ATTR(prox_value, S_IRUGO, gp2a_show_prox_value,NULL);

static struct attribute *gp2a_prox_attributes[] = {
	&dev_attr_operation_mode.attr,    
	&dev_attr_prox_value.attr,
	NULL
};

static const struct attribute_group gp2a_prox_attr_group = {
         .attrs = gp2a_prox_attributes,
 };
static int gp2a_prox_probe(struct i2c_client *client,const struct i2c_device_id *id)
{
	int ret =0, out_pin;
	u8 reg_value;
	printk("------ %s start \n", __func__);	
	
	prox_ctrl_regulator(ON);
		
	/* Allocate driver_data */
	gp2a_data = kzalloc(sizeof(struct gp2a_prox_data),GFP_KERNEL);
	if(!gp2a_data)
	{
		error("kzalloc:allocating driver_data error");
		return -ENOMEM;		
	} 
	
	gp2a_data->gp2a_prox_i2c_client = client;
	i2c_set_clientdata(client, gp2a_data);
	
	/*misc device registration*/
	if( (ret = misc_register(&gp2a_prox_misc_device)) < 0 )
	{
		error("gp2a_prox driver misc_register failed");
		goto FREE_GP2A_DATA;
	}
	
	/*Initialisation of GPIO_PS_OUT of proximity sensor*/
	out_pin = GPIO_PS_OUT;
	if (gpio_request(out_pin, "Proximity Out")) {
		printk(KERN_ERR "Proximity Request GPIO_%d failed!\n", out_pin);
	}
	
	gpio_direction_input(out_pin);

//	gpio_free(out_pin);
	
	/*Input Device Settings*/
	gp2a_data->prox_input_dev = input_allocate_device();
	if (!gp2a_data->prox_input_dev) 
	{
		error("Not enough memory for gp2a_data->prox_input_dev");
		ret = -ENOMEM;
		goto MISC_DREG;
	}
	gp2a_data->prox_input_dev->name = "gp2a_prox";
	set_bit(EV_SYN,gp2a_data->prox_input_dev->evbit);
	set_bit(EV_ABS,gp2a_data->prox_input_dev->evbit);	
	input_set_abs_params(gp2a_data->prox_input_dev, ABS_DISTANCE, 0, 1, 0, 0);
	ret = input_register_device(gp2a_data->prox_input_dev);
	if (ret) 
	{
		error("Failed to register input device");
		input_free_device(gp2a_data->prox_input_dev);
		goto MISC_DREG;
	}
	debug("Input device settings complete");

#if USE_INTERRUPT	
	/* Workqueue Settings */
	gp2a_prox_wq = create_singlethread_workqueue("gp2a_prox_wq");
	if (!gp2a_prox_wq)
	{
		error("Not enough memory for gp2a_prox_wq");
		ret = -ENOMEM;
		goto INPUT_DEV_DREG;
	}	     
	INIT_WORK(&gp2a_data->work_prox, gp2a_prox_work_func);
	debug("Workqueue settings complete");	

	gp2a_data->irq = -1;	
	set_irq_type(PROX_IRQ, IRQ_TYPE_EDGE_FALLING);
	if( (ret = request_irq(PROX_IRQ, gp2a_irq_handler,IRQF_DISABLED , "proximity_int", NULL )) )
	{
		error("GP2A request_irq failed IRQ_NO:%d", PROX_IRQ);
		goto DESTROY_WORK_QUEUE;
	} 
	else
		debug("GP2A request_irq success IRQ_NO:%d", PROX_IRQ);
	
	gp2a_data->irq = PROX_IRQ;
#endif

	/* wake lock init */
	wake_lock_init(&prx_wake_lock, WAKE_LOCK_SUSPEND, "prx_wake_lock");

	timeA = ktime_set(0,0);
	timeB = ktime_set(0,0);
	
	/*create sysfs attributes*/
	ret = sysfs_create_group(&client->dev.kobj, &gp2a_prox_attr_group);
	if (ret)
	{
		error("Failed to create sysfs attributes");
		goto FREE_IRQ;
	}
	
	/*Device Initialisation with recommended register values from datasheet*/
	
	reg_value = 0x18;
	if((ret=gp2a_i2c_write(GP2A_REG_CON,&reg_value))<0)
			error("gp2a_i2c_write 1 failed");	
		
	reg_value = 0x08;
	if((ret=gp2a_i2c_write(GP2A_REG_GAIN,&reg_value))<0)
			error("gp2a_i2c_write 2 failed");
	
	reg_value = 0x40;
	if((ret=gp2a_i2c_write(GP2A_REG_HYS,&reg_value))<0)
			error("gp2a_i2c_write 3 failed");

	reg_value = 0x04;
	if((ret=gp2a_i2c_write(GP2A_REG_CYCLE,&reg_value))<0)
			error("gp2a_i2c_write 4 failed");
	
	/*Pulling the GPIO_PS_OUT Pin High*/
	//gpio_set_value(GPIO_PS_OUT, 1);
	printk(KERN_INFO "gpio_get_value of GPIO_PS_OUT is %d",gpio_get_value(GPIO_PS_OUT));

	/*Setting the device into shutdown mode*/
	gp2a_prox_mode(0);

	printk("------ %s end\n", __func__);	
	return ret;

FREE_IRQ:
	free_irq(PROX_IRQ,NULL);
DESTROY_WORK_QUEUE:
	destroy_workqueue(gp2a_prox_wq);
INPUT_DEV_DREG:
	input_unregister_device(gp2a_data->prox_input_dev);	
MISC_DREG:
	misc_deregister(&gp2a_prox_misc_device);
FREE_GP2A_DATA:
	kfree(gp2a_data);
	return ret;
}	

static int __devexit gp2a_prox_remove(struct i2c_client *client)
{	
  	debug("%s called",__func__); 
	gp2a_prox_mode(0);
	gp2a_data->gp2a_prox_i2c_client = NULL;
	free_irq(PROX_IRQ,NULL);
	sysfs_remove_group(&client->dev.kobj, &gp2a_prox_attr_group);
	destroy_workqueue(gp2a_prox_wq);
	input_unregister_device(gp2a_data->prox_input_dev);	
	misc_deregister(&gp2a_prox_misc_device);
	kfree(gp2a_data);
	return 0;
}

#ifdef CONFIG_PM
static int gp2a_prox_suspend(struct i2c_client *client, pm_message_t mesg)
{   	   
	debug("%s called",__func__); 

	//gp2a_prox_mode(0);
	//disable_irq(gp2a_data->irq);

    return 0;
}
static int gp2a_prox_resume(struct i2c_client *client)
{  	   
	debug("%s called",__func__); 
	
	//gp2a_prox_mode(1);
	//enable_irq(gp2a_data->irq);

    return 0;
}
#else
#define  gp2a_prox_suspend   NULL
#define	 gp2a_prox_resume	 NULL
#endif

static const struct i2c_device_id gp2a_prox_id[] = {
	{"gp2a_prox", 0},
	{}
};

MODULE_DEVICE_TABLE(i2c, gp2a_prox_id);

static struct i2c_driver gp2a_prox_i2c_driver = {
	.driver = {
		   .name = "gp2a_prox",
		   },
	.probe 		= gp2a_prox_probe,
	.remove 	= __exit_p(gp2a_prox_remove),
	.suspend 	= gp2a_prox_suspend,
	.resume 	= gp2a_prox_resume,
	.id_table 	= gp2a_prox_id,
};

static int __init gp2a_prox_init(void)
{
	debug("%s called",__func__); 
	
	gp2a_chip_init();
	
	return i2c_add_driver(&gp2a_prox_i2c_driver);

}
static void __exit gp2a_prox_exit(void)
{	
	debug("%s called",__func__);

	if (prox_regulator) 
	{
       	 regulator_put(prox_regulator);
		 prox_regulator = NULL;
    }
	
	i2c_del_driver(&gp2a_prox_i2c_driver);	
}

module_init(gp2a_prox_init);
module_exit(gp2a_prox_exit);

MODULE_AUTHOR("V.N.V.Srikanth, SAMSUNG ELECTRONICS, vnv.srikanth@samsung.com");
MODULE_DESCRIPTION("Proximity Sensor driver for GP2AP002S00F");
MODULE_LICENSE("GPL"); 
