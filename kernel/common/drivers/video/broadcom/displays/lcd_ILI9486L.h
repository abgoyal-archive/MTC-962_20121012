/*******************************************************************************
* Copyright 2011 TCT Corporation.  All rights reserved.
*
*	@file	drivers/video/broadcom/displays/lcd_ILI9486L.h
*
* Unless you and TCT execute a separate written software license agreement
* governing use of this software, this software is licensed to you under the
* terms of the GNU General Public License version 2, available at
* http://www.gnu.org/copyleft/gpl.html (the "GPL").
*
* Notwithstanding the above, under no circumstances may you combine this
* software in any way with any other TCT software provided under a license
* other than the GPL, without TCT's express prior written consent.
*******************************************************************************/

/****************************************************************************
*
*  lcd_ILI9486L.h
*
*  PURPOSE:
*    This is the LCD-specific code for a ILITEK ILI9486L module.
*
*****************************************************************************/

#ifndef __BCM_LCD_ILI9486L__
#define __BCM_LCD_ILI9486L__

#define MIPI_DCS_SET_COLUMN_ADDRESS  	    0x2A
#define MIPI_DCS_SET_PAGE_ADDRESS	  	    0x2B
#define MIPI_DCS_WRITE_MEMORY_START		    0x2C

#define RESET_SEQ {WR_CMND, MIPI_DCS_SET_COLUMN_ADDRESS, 0},\
		{WR_DATA, 0x00, (dev->col_start) >> 8},\
		{WR_DATA, 0x00, dev->col_start & 0xFF},\
		{WR_DATA, 0x00, (dev->col_end) >> 8},\
		{WR_DATA, 0x00, dev->col_end & 0xFF},\
		{WR_CMND, MIPI_DCS_SET_PAGE_ADDRESS, 0},\
		{WR_DATA, 0x00, (dev->row_start) >> 8},\
		{WR_DATA, 0x00, dev->row_start & 0xFF},\
		{WR_DATA, 0x00, (dev->row_end) >> 8},\
		{WR_DATA, 0x00, dev->row_end & 0xFF},\
		{WR_CMND, MIPI_DCS_WRITE_MEMORY_START, 0}

#define LCD_CMD(x) (x)
#define LCD_DATA(x) (x)

#ifdef CONFIG_ENABLE_QVGA
#define LCD_HEIGHT              320
#define LCD_WIDTH               240
#define PANEL_HEIGHT            320
#define PANEL_WIDTH             240
#else
#define LCD_HEIGHT              480
#define LCD_WIDTH               320
#define PANEL_HEIGHT            480
#define PANEL_WIDTH             320
#endif


#ifdef CONFIG_ARGB8888
#define LCD_BITS_PER_PIXEL	32
#else
#define LCD_BITS_PER_PIXEL	16
#endif

#define TEAR_SCANLINE	480

const char *LCD_panel_name = "ILITEK HVGA ILI9486 Controller";

int LCD_num_panels = 1;
LCD_Intf_t LCD_Intf = LCD_Z80;
#ifdef CONFIG_ARGB8888
LCD_Bus_t LCD_Bus = LCD_16BIT;
#error test by matt
#else
LCD_Bus_t LCD_Bus = LCD_18BIT;
//changed by matt
//LCD_Bus_t LCD_Bus = LCD_16BIT;
#endif

//Not determined, it seems not requiremented by the LCD.
CSL_LCDC_PAR_SPEED_t timingReg_ns = {180, 188, 0, 28, 20, 0};
CSL_LCDC_PAR_SPEED_t timingMem_ns = {180, 188, 0, 28, 20, 0};

LCD_dev_info_t LCD_device[1] = {
	{
	 .panel		= LCD_main_panel,
	 .height	= LCD_HEIGHT,
	 .width		= LCD_WIDTH,
	 .bits_per_pixel = LCD_BITS_PER_PIXEL,
	 .te_supported	= false}
};

Lcd_init_t power_on_seq[] = {
    {WR_CMND, 0x11, 0}, //sleep out
	{SLEEP_MS, 0, 120}, 

    {WR_CMND, 0xF2, 0},
	{WR_DATA, 0x00, 0x18},
	{WR_DATA, 0x00, 0xA3},	
	{WR_DATA, 0x00, 0x12},
	{WR_DATA, 0x00, 0x02},
	{WR_DATA, 0x00, 0xB2},
	{WR_DATA, 0x00, 0x52},

	{WR_CMND, 0xC0, 0},
	{WR_DATA, 0x00, 0x0F},
	{WR_DATA, 0x00, 0x0F},	

    {WR_CMND, 0xF9, 0},
    {WR_DATA, 0x00, 0x00},
    {WR_DATA, 0x00, 0x08},

	{WR_CMND_DATA, 0xC1, 0x44}, //VGH=Vci1x5,VGL=Vci1x4.

	{WR_CMND, 0xC5, 0}, //Vcom control, flicker adjust.
    {WR_DATA, 0x00, 0x00},
    {WR_DATA, 0x00, 0x35}, //Vcom=-1.20V
    {WR_DATA, 0x00, 0x80},

	{WR_CMND_DATA, 0xB1, 0xA0}, //Set Frame Rate, 62Hz
	{WR_CMND_DATA, 0xB4, 0x02}, //Set 2Dot Invertion

	{WR_CMND, 0xB6, 0},
    {WR_DATA, 0x00, 0x02},
    {WR_DATA, 0x00, 0x22}, //SS=1

	{WR_CMND_DATA, 0x3A, 0x66},  //pixel format, 0x55-16bits,0x66-18bits
	{WR_CMND_DATA, 0x36, 0x08},  //set address mode

    //gamma setting
	{WR_CMND, 0xE0, 0},
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x1D},
	{WR_DATA, 0x00, 0x1C},
	{WR_DATA, 0x00, 0x04},
	{WR_DATA, 0x00, 0x0D},
	{WR_DATA, 0x00, 0x08},
	{WR_DATA, 0x00, 0x4A},
	{WR_DATA, 0x00, 0x98},
	{WR_DATA, 0x00, 0x3A},
	{WR_DATA, 0x00, 0x09},
	{WR_DATA, 0x00, 0x10},
	{WR_DATA, 0x00, 0x04},
	{WR_DATA, 0x00, 0x14},
	{WR_DATA, 0x00, 0x17},
	{WR_DATA, 0x00, 0x00},

	{WR_CMND, 0xE1, 0},
	{WR_DATA, 0x00, 0x1F},
	{WR_DATA, 0x00, 0x28},
	{WR_DATA, 0x00, 0x2B},
	{WR_DATA, 0x00, 0x0B},
	{WR_DATA, 0x00, 0x0F},
	{WR_DATA, 0x00, 0x06},
	{WR_DATA, 0x00, 0x45},
	{WR_DATA, 0x00, 0x76},
	{WR_DATA, 0x00, 0x35},
	{WR_DATA, 0x00, 0x06},
	{WR_DATA, 0x00, 0x12},
	{WR_DATA, 0x00, 0x0B},
	{WR_DATA, 0x00, 0x23},
	{WR_DATA, 0x00, 0x22},
	{WR_DATA, 0x00, 0x1F},

	{WR_CMND, 0x2A, 0},//display area column setting
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x01},
	{WR_DATA, 0x00, 0x3F},

	{WR_CMND, 0x2B, 0}, //display area page setting
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x01},
	{WR_DATA, 0x00, 0xDF},


		
	{WR_CMND, 0x29, 0}, //Display on
	{SLEEP_MS, 0, 20},
	
	{WR_CMND, 0x2C, 0}, //memary write
 
//////////////////////////////////////////////////
//inital picture data write into LCD memory RAM///
//////////////////////////////////////////////////
//end
//LED light on

	{CTRL_END, 0, 0},
};

Lcd_init_t power_off_seq[] = {
	{WR_CMND, 0x28, 0},
	{SLEEP_MS, 0, 50},
		
	{WR_CMND, 0x10, 0},//sleep in
	{SLEEP_MS, 0, 120},
	
	{CTRL_END, 0, 0},	
//
//shut down VDD of LCM.
//
};

bool hsm_supported = false;
/*High speed mode*/
CSL_LCDC_PAR_SPEED_t timingMem_hs_ns;

static inline bool window_hsm_compatible(LCD_DirtyRect_t rect){
    return false;
}
#endif /* __BCM_LCD_ILI9486L__ */
