/*******************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
*	@file	drivers/video/broadcom/displays/panel-magna-d51e5ta7601.c
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

/****************************************************************************
*
*  lcd.c
*
*  PURPOSE:
*    This is the LCD-specific code for a BOE Hyundai BTG222432 module.
*
*****************************************************************************/

#ifndef __BCM_LCD_ILI9486__
#define __BCM_LCD_ILI9486__

#define MIPI_DCS_NOP					    0x00
#define MIPI_DCS_SOFT_RESET				    0x01
#define MIPI_DCS_GET_RED_CHANNEL		    0x06
#define MIPI_DCS_GET_GREEN_CHANNEL		    0x07
#define MIPI_DCS_GET_BLUE_CHANNEL		    0x08
#define MIPI_DCS_GET_POWER_MODE			    0x0A
#define MIPI_DCS_GET_ADDRESS_MODE		    0x0B
#define MIPI_DCS_GET_PIXEL_FORMAT		    0x0C
#define MIPI_DCS_GET_DISPLAY_MODE		    0x0D
#define MIPI_DCS_GET_SIGNAL_MODE		    0x0E
#define MIPI_DCS_GET_DIAGNOSTIC_RESULTS	    0x0F
#define MIPI_DCS_ENTER_SLEEP_MODE		    0x10
#define MIPI_DCS_EXIT_SLEEP_MODE		    0x11
#define MIPI_DCS_ENTER_PARTIAL_MODE	 	    0x12
#define MIPI_DCS_ENTER_NORMAL_MODE	 	    0x13
#define MIPI_DCS_EXIT_INVERT_MODE		    0x20
#define MIPI_DCS_ENTER_INVERT_MODE	 	    0x21
#define MIPI_DCS_SET_GAMMA_CURVE	  	    0x26
#define MIPI_DCS_SET_DISPLAY_OFF	  	    0x28
#define MIPI_DCS_SET_DISPLAY_ON		  	    0x29
#define MIPI_DCS_SET_COLUMN_ADDRESS  	    0x2A
#define MIPI_DCS_SET_PAGE_ADDRESS	  	    0x2B
#define MIPI_DCS_WRITE_MEMORY_START		    0x2C
#define MIPI_DCS_WRITE_LUT				    0x2D
#define MIPI_DCS_READ_MEMORY_START   	    0x2E
#define MIPI_DCS_SET_PARTIAL_AREA	  	    0x30
#define MIPI_DCS_SET_SCROLL_AREA	  	    0x33
#define MIPI_DCS_SET_TEAR_OFF		  	    0x34
#define MIPI_DCS_SET_TEAR_ON		  	    0x35
#define MIPI_DCS_SET_ADDRESS_MODE   	    0x36
#define MIPI_DCS_SET_SCROLL_START	  	    0x37
#define MIPI_DCS_EXIT_IDLE_MODE			    0x38
#define MIPI_DCS_ENTER_IDLE_MODE	 	    0x39
#define MIPI_DCS_SET_PIXEL_FORMAT	  	    0x3A
#define MIPI_DCS_WRITE_MEMORY_CONTINUE	    0x3C
#define MIPI_DCS_READ_MEMORY_CONTINUE 	    0x3E
#define MIPI_DCS_SET_TEAR_SCANLINE	  	    0x44
#define MIPI_DCS_GET_SCANLINE			    0x45
#define MIPI_DCS_READ_DDB_START			    0xA1
#define MIPI_DCS_READ_DDB_CONTINUE		    0xA8
#define MANUFACTURER_COMMAND_ACCESS_PROTECT	0xB0
#define FRAME_MEMORY_ACCESS_INTERFACE_SETTING	0xB3
#define DISPLAY_MODE_FRAME_MEMORY_WRITE_MODE_SETTING	0xB4
#define PANEL_DRIVING_SETTING	0xC0
#define DISPLAY_TIMING_SETTING_FOR_NORMAL_MODE	0xC1
#define SOURCE_VCOM_GATE_DRIVING_TIMING_SETTING	0xC4
#define GAMMA_SET	0xC8
#define POWER_SETTING_COMMON_SETTING	0xD0
#define VCOM_SETTING	0xD1
#define POWER_SETTING_FOR_NORMAL_MODE	0xD2
#define DITHER_SETTING				0xDA

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
#else
#define LCD_HEIGHT              480
#define LCD_WIDTH               320
#endif

#ifdef CONFIG_ENABLE_QVGA
#define PANEL_HEIGHT              480//320
#define PANEL_WIDTH               320//240
#endif

#ifdef CONFIG_ARGB8888
#define LCD_BITS_PER_PIXEL	32
#else
#define LCD_BITS_PER_PIXEL	16
#endif

#define TEAR_SCANLINE	480

const char *LCD_panel_name = "RENESAS HVGA ILI9486 Controller";

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
CSL_LCDC_PAR_SPEED_t timingReg = {31, 24, 0, 1, 2, 0};
CSL_LCDC_PAR_SPEED_t timingMem = {31, 24, 0, 1, 2, 0};

LCD_dev_info_t LCD_device[1] = {
	{
	 .panel		= LCD_main_panel,
	 .height	= LCD_HEIGHT,
	 .width		= LCD_WIDTH,
	 .bits_per_pixel = LCD_BITS_PER_PIXEL,
	 .te_supported	= false}
};

Lcd_init_t power_on_seq[] = {
	{SLEEP_MS, 0, 10},	
	{WR_CMND, 0xF1, 0},
	{WR_DATA, 0x00, 0x36},
	{WR_DATA, 0x00, 0x04},	
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x3C},
	{WR_DATA, 0x00, 0x0F},
	{WR_DATA, 0x00, 0x0F},
	{WR_DATA, 0x00, 0xA4},
	{WR_DATA, 0x00, 0x02},  

	{WR_CMND, 0xF2, 0},
	{WR_DATA, 0x00, 0x18},
	{WR_DATA, 0x00, 0xA3},	
	{WR_DATA, 0x00, 0x12},
	{WR_DATA, 0x00, 0x02},
	{WR_DATA, 0x00, 0x72},
	{WR_DATA, 0x00, 0x92},
	{WR_DATA, 0x00, 0xFF},
	{WR_DATA, 0x00, 0x12},  
	{WR_DATA, 0x00, 0x00},  	

	{WR_CMND, 0xF7, 0},
	{WR_DATA, 0x00, 0xA9},
	{WR_DATA, 0x00, 0x91},	
	{WR_DATA, 0x00, 0x2D},
	{WR_DATA, 0x00, 0x0A},
	{WR_DATA, 0x00, 0x4F},

	{WR_CMND, 0xF8, 0},
	{WR_DATA, 0x00, 0x21},
	{WR_DATA, 0x00, 0x04},	

	{WR_CMND_DATA, 0x36, 0x48},  //set address mode

	{WR_CMND_DATA, 0x3A, 0x66},  //pixel format, 0x55-16bits,0x66-18bits

       //gamma setting  2.2
	{WR_CMND, 0xE0, 0},
	{WR_DATA, 0x00, 0x00},//VP0[4:0]
	{WR_DATA, 0x00, 0x00},//VP1[5:0]	
	{WR_DATA, 0x00, 0x09},//VP2[5:0]
	{WR_DATA, 0x00, 0x08},//VP4[3:0]
	{WR_DATA, 0x00, 0x13},//VP6[4:0]
	{WR_DATA, 0x00, 0x08}, //VP13[3:0]
	{WR_DATA, 0x00, 0x32},//VP20[6:0]
	{WR_DATA, 0x00, 0x9A},//VP36[3:0];VP27[3:0]
	{WR_DATA, 0x00, 0x44},//VP43[6:0] 
	{WR_DATA, 0x00, 0x07},//VP50[3:0]
	{WR_DATA, 0x00, 0x0B},//VP57[4:0]
	{WR_DATA, 0x00, 0x06},//VP59[3:0]
	{WR_DATA, 0x00, 0x19},//VP61[5:0]
	{WR_DATA, 0x00, 0x1C},//VP62[5:0]  
	{WR_DATA, 0x00, 0x0F},//VP63[3:0]//black  

	{WR_CMND, 0xE1, 0},//Set Gamma N		//changed by matt
	{WR_DATA, 0x00, 0x00},//VN0[4:0]
	{WR_DATA, 0x00, 0x23},//VN1[5:0]	
	{WR_DATA, 0x00, 0x26},//VN2[5:0]
	{WR_DATA, 0x00, 0x09}, //VN4[3:0]
	{WR_DATA, 0x00, 0x14},//VN6[4:0]
	{WR_DATA, 0x00, 0x07},//VN13[3:0]
	{WR_DATA, 0x00, 0x3B}, //VN20[6:0]
	{WR_DATA, 0x00, 0x56}, //VN36[3:0];VN27[3:0]  
	{WR_DATA, 0x00, 0x4D}, //VN43[6:0]  	
	{WR_DATA, 0x00, 0x07},//VN50[3:0]
	{WR_DATA, 0x00, 0x0F},//VN57[4:0]	
	{WR_DATA, 0x00, 0x07}, //VN59[3:0]
	{WR_DATA, 0x00, 0x36},//VN61[5:0]
	{WR_DATA, 0x00, 0x3F},//VN62[5:0]	
	{WR_DATA, 0x00, 0x0F},//VN63[3:0]//black	

	{WR_CMND_DATA, 0xB4, 0x02}, //Set 2Dot Invertion

	{WR_CMND, 0xB1, 0},//Set Frame Rate
	{WR_DATA, 0x00, 0xB0},
	{WR_DATA, 0x00, 0x11},	

	{WR_CMND, 0x20, 0},//Display Inversion OFF
	
	{WR_CMND, 0xC0, 0},
	{WR_DATA, 0x00, 0x08},
	{WR_DATA, 0x00, 0x0C},	

	{WR_CMND, 0xC1, 0},
	{WR_DATA, 0x00, 0x05},
	{WR_DATA, 0x00, 0x07},	

	{WR_CMND, 0x2A, 0},//display area column setting
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x00},	
	{WR_DATA, 0x00, 0x01},
	{WR_DATA, 0x00, 0x3F},	

	{WR_CMND, 0x2B, 0}, //display area page setting
	{WR_DATA, 0x00, 0x00},
	{WR_DATA, 0x00, 0x00},	
	{WR_DATA, 0x00, 0x01},
	{WR_DATA, 0x00, 0xE0},	

	{WR_CMND, 0x11, 0},//exit sleep mode
	{SLEEP_MS, 0, 150},
		
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
#if 0	
	{WR_CMND, MIPI_DCS_SET_DISPLAY_OFF, 0},
	{WR_CMND, MIPI_DCS_ENTER_SLEEP_MODE, 0},
	{SLEEP_MS, 0, 120},
	{CTRL_END, 0, 0},

#else
	{WR_CMND, 0x28, 0},
	{SLEEP_MS, 0, 50},	
	{WR_CMND, 0x10, 0},//sleep in
	{SLEEP_MS, 0, 120},	
	{SLEEP_MS, 0, 300},	
//
//shut down VDD of LCM.
//	
#endif
};

#endif
