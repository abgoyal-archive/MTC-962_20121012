/*******************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
* 	@file	drivers/video/broadcom/dss/bcm215xx/lcdc.h
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

#ifndef __BCM_LCDC_PARALLEL_H
#define __BCM_LCDC_PARALLEL_H

LCD_Interface_Drv_t * get_parallel_interface();

//for panel
void lcd_send_cmd_sequence(Lcd_init_t *init);
void lcd_setup_for_data(LCD_dev_info_t *dev);

#endif /* __BCM_LCDC_H */
