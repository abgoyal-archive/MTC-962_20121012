/*****************************************************************************
*  Copyright 2010 Broadcom Corporation.  All rights reserved.
*
*  Unless you and Broadcom execute a separate written software license
*  agreement governing use of this software, this software is licensed to you
*  under the terms of the GNU General Public License version 2, available at
*  http://www.gnu.org/copyleft/gpl.html (the "GPL").
*
*  Notwithstanding the above, under no circumstances may you combine this
*  software in any way with any other Broadcom software provided under a
*  license other than the GPL, without Broadcom's express prior written
*  consent.
*
*****************************************************************************/


/*
*
*****************************************************************************
*
*  bcm_reset_utils.c
*
*  PURPOSE:
*
*     This implements the driver for the Factory Reset feature and other handlers for
*     custom reset strings
*
*
*****************************************************************************/

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/reboot.h>
#include <linux/mtd/mtd.h>
#include <linux/slab.h>
#include <linux/broadcom/bcm_reset_utils.h>

#include <plat/syscfg.h>
#include <mach/reg_syscfg.h>

static struct mtd_info *mtd_misc;

/*
	Structure definition for the Bootloader Control Block (BCB)
*/
struct bootloader_message {
	char command[32];
	char status[32];
	char recovery[1024];
} bootloader_message ;

/*
	Callback called before the device reboots.
	If the reboot cause is a recovery, this function is going
	to write the strings "boot-recovery" and "recovery" into the
	Bootloader Control Block (BCB) so the Android Bootloader can
	launch the recovery image instead of the boot image.

    Modified By Miao
	BUG:173793   
	DESC: sometimes kmalloc(mtd->erasesize, GFP_KERNEL) will failed as erasesize
	       is large to 128k
*/
static int
reboot_notifier_callback(
struct notifier_block *nb, unsigned long val, void *v)
{

	struct mtd_info *mtd = NULL;
	struct bootloader_message *bcb = NULL;
	char *flashblock = NULL;
       
	 int buf_size=2048; //the same as flash_page_size
	 int blk_num=2;
	 int i;
	if (mtd_misc == NULL)
		goto clean_up;
	else
		mtd = mtd_misc;

	if (v == NULL) {
		board_sysconfig(SYSCFG_RESETREASON_SOFT_RESET, SYSCFG_DISABLE);
		goto clean_up;
	}

	if (!strncmp(v, "recovery", 8))	{
		struct erase_info erase;
		int retlen = 0;

		/* Allocate a buffer to hold a block from 'misc' 
		 * is large to 128k, sometimes it will failed 
		*/
		//flashblock = kmalloc(mtd->erasesize, GFP_KERNEL);
       	bcb =(struct bootloader_message *) kmalloc(buf_size, GFP_KERNEL);
		/* If the allocation fails, return */
		if (bcb == NULL)
			goto clean_up;

		memset(bcb, 0, buf_size);

		/* read the BCB from the misc partition */
		/* read the entire block as we'll have to
		   rewrite it hence we need to erase */
	//	mtd->read(mtd, 0, mtd->erasesize, &retlen, flashblock);
	//	bcb = (struct bootloader_message *)&flashblock[mtd->writesize];

		/* set bcb.command to "boot-recovery" */
		strcpy(bcb->command, "boot-recovery");

		/* clean bcb.status */
		memset(bcb->status, 0, sizeof(bcb->status));

		/* set bcb.recovery to "recovery" */
		strcpy(bcb->recovery, "recovery");

		/* Write the block back to 'misc'
		   First, erase it */

	//check bad block
	for(i=0;i<blk_num;i++){
              if( 0!=mtd->block_isbad(mtd, i*2048*64)) {
		      printk(KERN_ERR " block is bad=====") ; 
		      continue;
              	}            
		        erase.addr =(mtd->erasesize)*i;
			erase.len = mtd->erasesize;
			erase.mtd = mtd;
			erase.callback = NULL; 
		if( mtd->erase(mtd, &erase) )
	                     printk(KERN_ERR " erase mtd write======i=%d",i) ; 
		else break;

	}
    

		/* Then write the block back 
		 * 2048 mean the begin write on second page
		 * Android bootloader will read it on this page  
		 */
	if(i<blk_num)
		mtd->write(mtd, (2048*64*i+2048), buf_size, &retlen, bcb);
	 else
	 	 printk(KERN_ERR "No good block on misc partition") ; 
			
		
		
		
	}

	if (!strncmp(v, "ap_only", 7)) {
		board_sysconfig(SYSCFG_RESETREASON_AP_ONLY_BOOT, SYSCFG_DISABLE);
	}

clean_up:

	if (bcb != NULL)
		kfree(bcb);

	return NOTIFY_DONE;
}

/* Structure for register_reboot_notifier() */
static struct notifier_block reboot_notifier = {
	.notifier_call = reboot_notifier_callback,
};

/*
	Function name:	mtd_freset_notify_add
	Parameters:	Pointer to a mtd_info struct containing information
			about the partition being added
	Return value:	none

	Description:	This function is called when a partition is added by
			the MTD driver. Check whether or not it's the MISC
			partition. If it is, have mtd_misc pointing to the
			passed mtd_info structure.
*/
static void mtd_freset_notify_add(struct mtd_info *mtd)
{
	/* Sanity check */
	if (mtd == NULL)
		return;

	/* Is it the partition we're looking for ? */
	if (!strcmp(mtd->name, "misc"))	{
		/* If we've found the misc partition, assign the pointer */
		mtd_misc = mtd;
	} else
		return;
}

static void mtd_freset_notify_remove(struct mtd_info *mtd)
{
	/* Sanity check */
	if (mtd == NULL)
		return;

	/* Is it the partition we're looking for ? */
	if (!strcmp(mtd->name, "misc"))	{
		/* If we've found the misc partition, clear mtd_misc */
		mtd_misc = NULL;
	} else
		return;
}

syscfg_reset_reason_t get_ap_boot_mode(void)
{
	return board_sysconfig(SYSCFG_RESETREASON_AP_ONLY_BOOT,
			SYSCFG_INIT);
}

EXPORT_SYMBOL(get_ap_boot_mode);

/* Structure for register_mtd_user() */
static struct mtd_notifier mtd_freset_notifier = {
	.add	= mtd_freset_notify_add,
	.remove	= mtd_freset_notify_remove,
};

/* Init routine */
int __init bcm_reset_utils_init(void)
{
	/* register with the mtd driver so our callback gets called */
	register_mtd_user(&mtd_freset_notifier);
	register_reboot_notifier(&reboot_notifier);

	return 0;
}

module_init(bcm_reset_utils_init);

