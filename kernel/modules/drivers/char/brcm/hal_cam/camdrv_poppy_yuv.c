/******************************************************************************
Copyright 2010 Broadcom Corporation.  All rights reserved.

Unless you and Broadcom execute a separate written software license agreement
governing use of this software, this software is licensed to you under the
terms of the GNU General Public License version 2, available at
http://www.gnu.org/copyleft/gpl.html (the "GPL").

Notwithstanding the above, under no circumstances may you combine this software
in any way with any other Broadcom software provided under a license other than
the GPL, without Broadcom's express prior written consent.
******************************************************************************/

/**
*
*   @file   camdrv_mt9t111.c
*
*   @brief  This file is the lower level driver API of MT9T111(3M 2048*1536
*	Pixel) ISP/sensor.
*
*/
/**
 * @addtogroup CamDrvGroup
 * @{
 */

  /****************************************************************************/
  /*                          Include block                                   */
  /****************************************************************************/
#include <stdarg.h>
#include <stddef.h>

#include <linux/version.h>
#include <linux/types.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/signal.h>
#include <linux/sched.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/proc_fs.h>
#include <linux/poll.h>
#include <linux/sysctl.h>
#include <linux/delay.h>
#include <linux/i2c.h>
#include <linux/interrupt.h>
#include <linux/semaphore.h>
#include <linux/gpio.h>
#if 0
#include <mach/reg_camera.h>
#include <mach/reg_lcd.h>
#endif
#include <mach/reg_clkpwr.h>
#include <asm/io.h>
#include <asm/uaccess.h>
#include <asm/atomic.h>

#include <linux/broadcom/types.h>
#include <linux/broadcom/bcm_major.h>
#include <linux/broadcom/hw_cfg.h>
#include <linux/broadcom/hal_camera.h>
#include <linux/broadcom/lcd.h>
#include <linux/broadcom/bcm_sysctl.h>
#include <linux/broadcom/PowerManager.h>
#include <plat/dma.h>
#include <linux/dma-mapping.h>

#include "hal_cam_drv_ath.h"
//#include "hal_cam.h"
//#include "hal_cam_drv.h"
//#include "cam_cntrl_2153.h"
#include "camdrv_dev.h"

#include <plat/csl/csl_cam.h>

#define CAMERA_IMAGE_INTERFACE  CSL_CAM_INTF_CPI
#define CAMERA_PHYS_INTF_PORT   CSL_CAM_PORT_AFE_1

#define MT9T111_ID 0x2680

#define FLASH_TRIGGER  22   /*gpio 30 for flash */

int real_write=0;
CamFocusControlMode_t FOCUS_MODE;


/*****************************************************************************/
/* start of CAM configuration */
/*****************************************************************************/

/*****************************************************************************/
/*  Sensor Resolution Tables:												 */
/*****************************************************************************/
/* Resolutions & Sizes available for MT9T111 ISP/Sensor (QXGA max) */
static CamResolutionConfigure_t sSensorResInfo_MT9T111_st[] = {
/* width    height  Preview_Capture_Index       Still_Capture_Index */
	{128, 96, CamImageSize_SQCIF, -1},	/* CamImageSize_SQCIF */
	{160, 120, CamImageSize_QQVGA, -1},	/* CamImageSize_QQVGA */
	{176, 144, CamImageSize_QCIF, CamImageSize_QCIF},	/* CamImageSize_QCIF */
	{240, 180, -1, -1},	/* CamImageSize_240x180 */
	{240, 320, -1, -1},	/* CamImageSize_R_QVGA */
	{320, 240, CamImageSize_QVGA, CamImageSize_QVGA},	/* CamImageSize_QVGA */
	{352, 288, CamImageSize_CIF, CamImageSize_CIF},	/* CamImageSize_CIF */
	{426, 320, -1, -1},	/* CamImageSize_426x320 */
	{640, 480, CamImageSize_VGA, CamImageSize_VGA},	/* CamImageSize_VGA */
	{800, 600, CamImageSize_SVGA, CamImageSize_SVGA},	/* CamImageSize_SVGA */
	{1024, 768, -1, CamImageSize_XGA},	/* CamImageSize_XGA */
	{1280, 960, -1, -1},	/* CamImageSize_4VGA */
	{1280, 1024, -1, CamImageSize_SXGA},	/* CamImageSize_SXGA */
	{1600, 1200, -1, CamImageSize_UXGA},	/* CamImageSize_UXGA */
	{2048, 1536, -1, CamImageSize_QXGA},	/* CamImageSize_QXGA */
	{2560, 2048, -1, -1},	/* CamImageSize_QSXGA */
  	{144,	  176,   CamImageSize_R_QCIF,	CamImageSize_R_QCIF  } 	  //  CamImageSize_R_QCIF	 
};

/*****************************************************************************/
/*  Power On/Off Tables for Main Sensor */
/*****************************************************************************/

/*---------Sensor Power On */
static CamSensorIntfCntrl_st_t CamPowerOnSeq[] = {
	{PAUSE, 1, Nop_Cmd},

	{GPIO_CNTRL, 9, GPIO_SetHigh},
	{GPIO_CNTRL, 10, GPIO_SetLow},
	{MCLK_CNTRL, CamDrv_NO_CLK, CLK_TurnOff},
	{PAUSE, 1, Nop_Cmd},

	{MCLK_CNTRL, CamDrv_24MHz, CLK_TurnOn},
	{PAUSE, 1, Nop_Cmd},

	{GPIO_CNTRL, 9, GPIO_SetLow},
	{PAUSE, 1, Nop_Cmd},
	{GPIO_CNTRL, 10, GPIO_SetHigh},

	{PAUSE, 1, Nop_Cmd}
};

/*---------Sensor Power Off*/
static CamSensorIntfCntrl_st_t CamPowerOffSeq[] = {
	{PAUSE, 1, Nop_Cmd},
	{GPIO_CNTRL, 9, GPIO_SetHigh},
	{PAUSE, 1, Nop_Cmd},
	{GPIO_CNTRL, 10, GPIO_SetLow},
	{PAUSE, 1, Nop_Cmd},
	{MCLK_CNTRL, CamDrv_NO_CLK, CLK_TurnOff},
	{PAUSE, 1, Nop_Cmd},
};


/** Primary Sensor Configuration and Capabilities  */
static HAL_CAM_ConfigCaps_st_t CamPrimaryCfgCap_st = {
	// CAMDRV_DATA_MODE_S *video_mode
	{
        800,                           // unsigned short        max_width;                //Maximum width resolution
        600,                           // unsigned short        max_height;                //Maximum height resolution
        0,                             // UInt32                data_size;                //Minimum amount of data sent by the camera
        15,                            // UInt32                framerate_lo_absolute;  //Minimum possible framerate u24.8 format
        30,                            // UInt32                framerate_hi_absolute;  //Maximum possible framerate u24.8 format
        CAMDRV_TRANSFORM_NONE,         // CAMDRV_TRANSFORM_T    transform;            //Possible transformations in this mode / user requested transformations
        CAMDRV_IMAGE_YUV422,           // CAMDRV_IMAGE_TYPE_T    format;                //Image format of the frame.
        CAMDRV_IMAGE_YUV422_YCbYCr,    // CAMDRV_IMAGE_ORDER_T    image_order;        //Format pixel order in the frame.
        CAMDRV_DATA_SIZE_16BIT,        // CAMDRV_DATA_SIZE_T    image_data_size;    //Packing mode of the data.
        CAMDRV_DECODE_NONE,            // CAMDRV_DECODE_T        periph_dec;         //The decoding that the VideoCore transciever (eg CCP2) should perform on the data after reception.
        CAMDRV_ENCODE_NONE,            // CAMDRV_ENCODE_T        periph_enc;            //The encoding that the camera IF transciever (eg CCP2) should perform on the data before writing to memory.
        0,                             // int                    block_length;        //Block length for DPCM encoded data - specified by caller
        CAMDRV_DATA_SIZE_NONE,         // CAMDRV_DATA_SIZE_T    embedded_data_size; //The embedded data size from the frame.
        CAMDRV_MODE_VIDEO,             // CAMDRV_CAPTURE_MODE_T    flags;            //A bitfield of flags that can be set on the mode.
        30,                            // UInt32                framerate;            //Framerate achievable in this mode / user requested framerate u24.8 format
        0,                             // UInt8                mechanical_shutter;    //It is possible to use mechanical shutter in this mode (set by CDI as it depends on lens driver) / user requests this feature */
        1                              // UInt32                pre_frame;            //Frames to throw out for ViewFinder/Video capture
    },

	// CAMDRV_DATA_MODE_S *stills_mode
	{

        2048,                           // unsigned short max_width;   Maximum width resolution
        1536,                           // unsigned short max_height;  Maximum height resolution
        0,                              // UInt32                data_size;                //Minimum amount of data sent by the camera
        15,                             // UInt32                framerate_lo_absolute;  //Minimum possible framerate u24.8 format
        15,                             // UInt32                framerate_hi_absolute;  //Maximum possible framerate u24.8 format
        CAMDRV_TRANSFORM_NONE,          // CAMDRV_TRANSFORM_T    transform;            //Possible transformations in this mode / user requested transformations
        CAMDRV_IMAGE_JPEG,              // CAMDRV_IMAGE_TYPE_T    format;                //Image format of the frame.
        CAMDRV_IMAGE_YUV422_YCbYCr,     // CAMDRV_IMAGE_ORDER_T    image_order;        //Format pixel order in the frame.
        CAMDRV_DATA_SIZE_16BIT,         // CAMDRV_DATA_SIZE_T    image_data_size;    //Packing mode of the data.
        CAMDRV_DECODE_NONE,             // CAMDRV_DECODE_T        periph_dec;         //The decoding that the VideoCore transciever (eg CCP2) should perform on the data after reception.
        CAMDRV_ENCODE_NONE,             // PERIPHERAL_ENCODE_T    periph_enc;            //The encoding that the camera IF transciever (eg CCP2) should perform on the data before writing to memory.
        0,                              // int                    block_length;        //Block length for DPCM encoded data - specified by caller
        CAMDRV_DATA_SIZE_NONE,          // CAMDRV_DATA_SIZE_T    embedded_data_size; //The embedded data size from the frame.
        CAMDRV_MODE_VIDEO,              // CAMDRV_CAPTURE_MODE_T    flags;            //A bitfield of flags that can be set on the mode.
        15,                             // UInt32                framerate;            //Framerate achievable in this mode / user requested framerate u24.8 format
        0,                              // UInt8                mechanical_shutter;    //It is possible to use mechanical shutter in this mode (set by CDI as it depends on lens driver) / user requests this feature */
        4                               // UInt32                pre_frame;            //Frames to throw out for Stills capture
    },

	 ///< Focus Settings & Capabilities:  CAMDRV_FOCUSCONTROL_S *focus_control_st;
	{
    #ifdef AUTOFOCUS_ENABLED
        CamFocusControlAuto,        	// CAMDRV_FOCUSCTRLMODE_T default_setting=CamFocusControlOff;
        CamFocusControlAuto,        	// CAMDRV_FOCUSCTRLMODE_T cur_setting;
        CamFocusControlOn |             // UInt32 settings;  Settings Allowed: CamFocusControlMode_t bit masked
        CamFocusControlOff |
        CamFocusControlAuto |
        CamFocusControlAutoLock |
        CamFocusControlCentroid |
        CamFocusControlQuickSearch |
        CamFocusControlInfinity |
        CamFocusControlMacro
    #else
        CamFocusControlOff,             // CAMDRV_FOCUSCTRLMODE_T default_setting=CamFocusControlOff;
        CamFocusControlOff,             // CAMDRV_FOCUSCTRLMODE_T cur_setting;
        CamFocusControlOff              // UInt32 settings;  Settings Allowed: CamFocusControlMode_t bit masked
    #endif
    },

	 ///< Digital Zoom Settings & Capabilities:  CAMDRV_DIGITALZOOMMODE_S *digital_zoom_st;
    {
        CamZoom_1_0,        ///< CAMDRV_ZOOM_T default_setting;  default=CamZoom_1_0:  Values allowed  CamZoom_t
        CamZoom_1_0,        ///< CAMDRV_ZOOM_T cur_setting;  CamZoom_t
        CamZoom_4_0,        ///< CAMDRV_ZOOM_T max_zoom;  Max Zoom Allowed (256/max_zoom = *zoom)
        TRUE                    ///< Boolean capable;  Sensor capable: TRUE/FALSE:
    },

	/*< Sensor ESD Settings & Capabilities:  CamESD_st_t esd_st; */
	{
	 0x01,			/*< UInt8 ESDTimer;  Periodic timer to retrieve
				   the camera status (ms) */
	 FALSE			/*< Boolean capable;  TRUE/FALSE: */
	 },
	 
	CAMERA_IMAGE_INTERFACE,                ///< UInt32 intf_mode;  Sensor Interfaces to Baseband
    CAMERA_PHYS_INTF_PORT,   
	/*< Sensor version string */
	"MT9T111"
};

/*---------Sensor Primary Configuration CCIR656*/
static CamIntfConfig_CCIR656_st_t CamPrimaryCfg_CCIR656_st = {
	// Vsync, Hsync, Clock
	CSL_CAM_SYNC_EXTERNAL,				///< UInt32 sync_mode;				(default)CAM_SYNC_EXTERNAL:  Sync External or Embedded
	CSL_CAM_SYNC_DEFINES_ACTIVE,		///< UInt32 vsync_control;			(default)CAM_SYNC_DEFINES_ACTIVE:		VSYNCS determines active data
	CSL_CAM_SYNC_ACTIVE_HIGH,			///< UInt32 vsync_polarity; 		   default)ACTIVE_LOW/ACTIVE_HIGH:		  Vsync active
	CSL_CAM_SYNC_DEFINES_ACTIVE,		///< UInt32 hsync_control;			(default)FALSE/TRUE:					HSYNCS determines active data
	CSL_CAM_SYNC_ACTIVE_HIGH,			///< UInt32 hsync_polarity; 		(default)ACTIVE_HIGH/ACTIVE_LOW:		Hsync active
	CSL_CAM_CLK_EDGE_POS,				///< UInt32 data_clock_sample;		(default)RISING_EDGE/FALLING_EDGE:		Pixel Clock Sample edge
	CSL_CAM_PIXEL_8BIT, 				///< UInt32 bus_width;				(default)CAM_BITWIDTH_8:				Camera bus width
	0,							///< UInt32 data_shift; 				   (default)0:							   data shift (+) left shift  (-) right shift
	CSL_CAM_FIELD_H_V,					///< UInt32 field_mode; 			(default)CAM_FIELD_H_V: 				field calculated
	CSL_CAM_INT_FRAME_END,				///< UInt32 data_intr_enable;		CAM_INTERRUPT_t:
	CSL_CAM_INT_FRAME_END,				///< UInt32 pkt_intr_enable;		CAM_INTERRUPT_t:

};

// ************************* REMEMBER TO CHANGE IT WHEN YOU CHANGE TO CCP ***************************
//CSI host connection
//---------Sensor Primary Configuration CCP CSI (sensor_config_ccp_csi)
CamIntfConfig_CCP_CSI_st_t  CamPrimaryCfg_CCP_CSI_st =
{
    CSL_CAM_INPUT_DUAL_LANE,                    ///< UInt32 input_mode;     CSL_CAM_INPUT_MODE_T:
    CSL_CAM_INPUT_MODE_DATA_CLOCK,              ///< UInt32 clk_mode;       CSL_CAM_CLOCK_MODE_T:
    CSL_CAM_ENC_NONE,                           ///< UInt32 encoder;        CSL_CAM_ENCODER_T
    FALSE,                                      ///< UInt32 enc_predictor;  CSL_CAM_PREDICTOR_MODE_t
    CSL_CAM_DEC_NONE,                           ///< UInt32 decoder;        CSL_CAM_DECODER_T
    FALSE,                                      ///< UInt32 dec_predictor;  CSL_CAM_PREDICTOR_MODE_t
    CSL_CAM_PORT_CHAN_0,                                 ///< UInt32 sub_channel;    CSL_CAM_CHAN_SEL_t
    TRUE,                                       ///< UInt32 term_sel;       BOOLEAN
    CSL_CAM_PIXEL_8BIT,                             ///< UInt32 bus_width;      CSL_CAM_BITWIDTH_t
    CSL_CAM_PIXEL_NONE,                         ///< UInt32 emb_data_type;  CSL_CAM_DATA_TYPE_T
    CSL_CAM_PORT_CHAN_0,                                 ///< UInt32 emb_data_channel; CSL_CAM_CHAN_SEL_t
    FALSE,                                      ///< UInt32 short_pkt;      BOOLEAN
    CSL_CAM_PIXEL_NONE,                         ///< UInt32 short_pkt_chan; CSL_CAM_CHAN_SEL_t
    CSL_CAM_INT_FRAME_END,                         ///< UInt32 data_intr_enable; CSL_CAM_INTERRUPT_t:
    CSL_CAM_INT_FRAME_END,                          ///< UInt32 pkt_intr_enable;  CSL_CAM_INTERRUPT_t:
};


/*---------Sensor Primary Configuration YCbCr Input*/
static CamIntfConfig_YCbCr_st_t CamPrimaryCfg_YCbCr_st = {
/* YCbCr(YUV422) Input format = YCbCr=YUV= Y0 U0 Y1 V0  Y2 U2 Y3 V2 ....*/
	TRUE,			/*[00] Boolean yuv_full_range;
				   (default)FALSE: CROPPED YUV=16-240
				   TRUE: FULL RANGE YUV= 1-254  */
	SensorYCSeq_CbYCrY,	/*[01] CamSensorYCbCrSeq_t sensor_yc_seq;
				   (default) SensorYCSeq_YCbYCr */

/* Currently Unused */
	FALSE,			/*[02] Boolean input_byte_swap;
				   Currently UNUSED!! (default)FALSE:  TRUE: */
	FALSE,			/*[03] Boolean input_word_swap;
				   Currently UNUSED!! (default)FALSE:  TRUE: */
	FALSE,			/*[04] Boolean output_byte_swap;
				   Currently UNUSED!! (default)FALSE:  TRUE: */
	FALSE,			/*[05] Boolean output_word_swap;
				   Currently UNUSED!! (default)FALSE:  TRUE: */

/* Sensor olor Conversion Coefficients:
	color conversion fractional coefficients are scaled by 2^8 */
/* e.g. for R0 = 1.164, round(1.164 * 256) = 298 or 0x12a */
	CAM_COLOR_R1R0,		/*[06] UInt32 cc_red R1R0;
				   YUV422 to RGB565 color conversion red */
	CAM_COLOR_G1G0,		/*[07] UInt32 cc_green G1G0;
				   YUV422 to RGB565 color conversion green */
	CAM_COLOR_B1		/*[08] UInt32 cc_blue B1;
				   YUV422 to RGB565 color conversion blue */
};

/*---------Sensor Primary Configuration I2C */
static CamIntfConfig_I2C_st_t CamPrimaryCfg_I2C_st = {
	0x00,			/*I2C_SPD_430K, [00] UInt32 i2c_clock_speed;
				   max clock speed for I2C */
	I2C_CAM_DEVICE_ID,	/*[01] UInt32 i2c_device_id; I2C device ID */
	0x00,			/*I2C_BUS2_ID, [02] I2C_BUS_ID_t i2c_access_mode;
				   I2C baseband port */
	0x00,			/*I2CSUBADDR_16BIT,[03] I2CSUBADDR_t i2c_sub_adr_op;
				   I2C sub-address size */
	0xFFFF,			/*[04] UInt32 i2c_page_reg;
				   I2C page register addr (if applicable)
				   **UNUSED by this driver** */
	I2C_CAM_MAX_PAGE	/*[05] UInt32 i2c_max_page; I2C max page
				   (if not used by camera drivers, set = 0xFFFF)
				   **UNUSED by this driver** */
};

/*---------Sensor Primary Configuration IOCR */
static CamIntfConfig_IOCR_st_t CamPrimaryCfg_IOCR_st = {
	FALSE,			/*[00] Boolean cam_pads_data_pd;
				   (default)FALSE: IOCR2 D0-D7 pull-down disabled
				   TRUE: IOCR2 D0-D7 pull-down enabled */
	FALSE,			/*[01] Boolean cam_pads_data_pu;
				   (default)FALSE: IOCR2 D0-D7 pull-up disabled
				   TRUE: IOCR2 D0-D7 pull-up enabled */
	FALSE,			/*[02] Boolean cam_pads_vshs_pd;
				   (default)FALSE: IOCR2 Vsync/Hsync pull-down disabled
				   TRUE: IOCR2 Vsync/Hsync pull-down enabled */
	FALSE,			/*[03] Boolean cam_pads_vshs_pu;
				   (default)FALSE: IOCR2 Vsync/Hsync pull-up disabled
				   TRUE: IOCR2 Vsync/Hsync pull-up enabled */
	FALSE,			/*[04] Boolean cam_pads_clk_pd;
				   (default)FALSE: IOCR2 CLK pull-down disabled
				   TRUE: IOCR2 CLK pull-down enabled */
	FALSE,			/*[05] Boolean cam_pads_clk_pu;
				   (default)FALSE: IOCR2 CLK pull-up disabled
				   TRUE: IOCR2 CLK pull-up enabled */

	7 << 12,		/*[06] UInt32 i2c_pwrup_drive_strength;
				   (default)IOCR4_CAM_DR_12mA:
				   IOCR drive strength */
	0x00,			/*[07] UInt32 i2c_pwrdn_drive_strength;
				   (default)0x00:    I2C2 disabled */
	0x00,			/*[08] UInt32 i2c_slew; (default) 0x00: 42ns */

	7 << 12,		/*[09] UInt32 cam_pads_pwrup_drive_strength;
				   (default)IOCR4_CAM_DR_12mA:  IOCR drive strength */
	1 << 12			/*[10] UInt32 cam_pads_pwrdn_drive_strength;
				   (default)IOCR4_CAM_DR_2mA:   IOCR drive strength */
};

/* XXXXXXXXXXXXXXXXXXXXXXXXXXX IMPORTANT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */
/* TO DO: MURALI */
/* HAVE TO PROGRAM THIS IN THE ISP. */
/*---------Sensor Primary Configuration JPEG */

static CamIntfConfig_Jpeg_st_t CamPrimaryCfg_Jpeg_st = {
	1200,			/*< UInt32 jpeg_packet_size_bytes;     Bytes/Hsync */
	1360,			/*< UInt32 jpeg_max_packets;           Max Hsyncs/Vsync = (3.2Mpixels/4) / 512 */
	CamJpeg_FixedPkt_VarLine,	/*< CamJpegPacketFormat_t pkt_format;  Jpeg Packet Format */
};

/* XXXXXXXXXXXXXXXXXXXXXXXXXXX IMPORTANT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX */
/* TO DO: MURALI */
/* WILL NEED TO MODIFY THIS. */
/*---------Sensor Primary Configuration Stills n Thumbs */
static CamIntfConfig_PktMarkerInfo_st_t CamPrimaryCfg_PktMarkerInfo_st = {
	2,			/*< UInt8       marker_bytes; # of bytes for marker,
				   (= 0 if not used) */
	0,			/*< UInt8       pad_bytes; # of bytes for padding,
				   (= 0 if not used) */
	TRUE,			/*< Boolean     TN_marker_used; Thumbnail marker used */
	0xFFBE,			/*< UInt32      SOTN_marker; Start of Thumbnail marker,
				   (= 0 if not used) */
	0xFFBF,			/*< UInt32      EOTN_marker; End of Thumbnail marker,
				   (= 0 if not used) */
	TRUE,			/*< Boolean     SI_marker_used; Status Info marker used */
	0xFFBC,			/*< UInt32      SOSI_marker; Start of Status Info marker,
				   (= 0 if not used) */
	0xFFBD,			/*< UInt32      EOSI_marker; End of Status Info marker,
				   (= 0 if not used) */
	FALSE,			/*< Boolean     Padding_used; Status Padding bytes used */
	0x0000,			/*< UInt32      SOPAD_marker; Start of Padding marker,
				   (= 0 if not used) */
	0x0000,			/*< UInt32      EOPAD_marker; End of Padding marker,
				   (= 0 if not used) */
	0x0000			/*< UInt32      PAD_marker; Padding Marker,
				   (= 0 if not used) */
};

/*---------Sensor Primary Configuration Stills n Thumbs */
static CamIntfConfig_InterLeaveMode_st_t CamPrimaryCfg_InterLeaveStills_st = {
	CamInterLeave_SingleFrame,	/*< CamInterLeaveMode_t mode;
					   Interleave Mode */
	CamInterLeave_PreviewLast,	/*< CamInterLeaveSequence_t sequence;
					   InterLeaving Sequence */
	CamInterLeave_PktFormat	/*< CamInterLeaveOutputFormat_t format;
				   InterLeaving Output Format */
};

/*---------Sensor Primary Configuration */
static CamIntfConfig_st_t CamSensorCfg_st = {
	&CamPrimaryCfgCap_st,	/* *sensor_config_caps; */
	&CamPrimaryCfg_CCIR656_st,	/* *sensor_config_ccir656; */
	&CamPrimaryCfg_CCP_CSI_st,
	&CamPrimaryCfg_YCbCr_st,	/* *sensor_config_ycbcr; */
	NULL,	                     /* *sensor_config_i2c; */
	&CamPrimaryCfg_IOCR_st,	/* *sensor_config_iocr; */
	&CamPrimaryCfg_Jpeg_st,	/* *sensor_config_jpeg; */
	NULL,			/* *sensor_config_interleave_video; */
	&CamPrimaryCfg_InterLeaveStills_st,	/**sensor_config_interleave_stills; */
	&CamPrimaryCfg_PktMarkerInfo_st	/* *sensor_config_pkt_marker_info; */
};

FlashLedState_t flash_switch;

/* I2C transaction result */
static HAL_CAM_Result_en_t sCamI2cStatus = HAL_CAM_SUCCESS;

static HAL_CAM_Result_en_t
SensorSetPreviewMode(CamImageSize_t image_resolution,
		     CamDataFmt_t image_format);
static HAL_CAM_Result_en_t Init_Mt9t111(CamSensorSelect_t sensor);
static int checkCameraID(CamSensorSelect_t sensor);
static UInt16 mt9t111_read(unsigned int sub_addr);
static HAL_CAM_Result_en_t mt9t111_write(unsigned int sub_addr, UInt16 data);
static HAL_CAM_Result_en_t CAMDRV_SetFrameRate_Pri(CamRates_t fps,
					CamSensorSelect_t sensor);
static HAL_CAM_Result_en_t CAMDRV_SetVideoCaptureMode_Pri(CamImageSize_t image_resolution,
					       CamDataFmt_t image_format,
					       CamSensorSelect_t sensor);
static HAL_CAM_Result_en_t CAMDRV_SetZoom_Pri(CamZoom_t step,CamSensorSelect_t sensor);
static void control_flash(int flash_on);

#if 0
#define CAMERADBG(fmt, arg...) printk(KERN_ERR "%s: " fmt " ", __func__, ## arg)
#else
#define CAMERADBG(fmt, arg...) do {} while (0)
#endif
#define s5k5caga_i2c_write mt9t111_write
#define s5k5caga_i2c_read mt9t111_read
#include "s5k5caga.h"

/*****************************************************************************
*
* Function Name:   CAMDRV_GetIntfConfigTbl
*
* Description: Return Camera Sensor Interface Configuration
*
* Notes:
*
*****************************************************************************/
static CamIntfConfig_st_t *CAMDRV_GetIntfConfig_Pri(CamSensorSelect_t nSensor)
{

/* ---------Default to no configuration Table */
	CamIntfConfig_st_t *config_tbl = NULL;

	switch (nSensor) {
	case CamSensorPrimary:	/* Primary Sensor Configuration */
	default:
		CamSensorCfg_st.sensor_config_caps = &CamPrimaryCfgCap_st;
		break;
	case CamSensorSecondary:	/* Secondary Sensor Configuration */
		CamSensorCfg_st.sensor_config_caps = NULL;
		break;
	}
	config_tbl = &CamSensorCfg_st;

#ifdef ALLOC_TN_BUFFER
	if (thumbnail_data == NULL) {
		/*tn_buffer = (u8 *)dma_alloc_coherent( NULL, TN_BUFFER_SIZE,
		   &physPtr, GFP_KERNEL); */
		thumbnail_data = (u8 *) kmalloc(TN_BUFFER_SIZE, GFP_KERNEL);
		if (thumbnail_data == NULL) {
			pr_info
			    ("Error in allocating %d bytes for MT9T111 sensor\n",
			     TN_BUFFER_SIZE);
			return NULL;
		}
		memset(thumbnail_data, 0, TN_BUFFER_SIZE);
	}
#endif
	return config_tbl;
}

/*****************************************************************************
*
* Function Name:   CAMDRV_GetInitPwrUpSeq
*
* Description: Return Camera Sensor Init Power Up sequence
*
* Notes:
*
*****************************************************************************/
static CamSensorIntfCntrl_st_t *CAMDRV_GetIntfSeqSel_Pri(CamSensorSelect_t nSensor,
					      CamSensorSeqSel_t nSeqSel,
					      UInt32 *pLength)
{

/* ---------Default to no Sequence  */
	CamSensorIntfCntrl_st_t *power_seq = NULL;
	*pLength = 0;

	switch (nSeqSel) {
	case SensorInitPwrUp:	/* Camera Init Power Up (Unused) */
		*pLength=0;
		power_seq=NULL;
		break;
		
	case SensorPwrUp:
		if ((nSensor == CamSensorPrimary)
		    || (nSensor == CamSensorSecondary)) {
			printk("SensorPwrUp Sequence\r\n");
			*pLength = sizeof(CamPowerOnSeq);
			power_seq = CamPowerOnSeq;
		}
		break;

	case SensorInitPwrDn:	/* Camera Init Power Down (Unused) */
	case SensorPwrDn:	/* Both off */
		if ((nSensor == CamSensorPrimary)
		    || (nSensor == CamSensorSecondary)) {
			printk("SensorPwrDn Sequence\r\n");
			*pLength = sizeof(CamPowerOffSeq);
			power_seq = CamPowerOffSeq;
		}
		break;

	case SensorFlashEnable:	/* Flash Enable */
		break;

	case SensorFlashDisable:	/* Flash Disable */
		break;

	default:
		break;
	}
	return power_seq;

}

/***************************************************************************
* *
*       CAMDRV_Supp_Init performs additional device specific initialization
*
*   @return  HAL_CAM_Result_en_t
*
*       Notes:
*/
static HAL_CAM_Result_en_t CAMDRV_Supp_Init_Pri(CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t ret_val = HAL_CAM_SUCCESS;

	return ret_val;
}				/* CAMDRV_Supp_Init() */

/****************************************************************************
*
* Function Name:   HAL_CAM_Result_en_t CAMDRV_Wakeup(CamSensorSelect_t sensor)
*
* Description: This function wakesup camera via I2C command.  Assumes camera
*              is enabled.
*
* Notes:
*
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_Wakeup_Pri(CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;

	result = Init_Mt9t111(sensor);
	printk("Init_Mt9t111 result =%d\r\n", result);
	return result;
}

static UInt16 CAMDRV_GetDeviceID_Pri(CamSensorSelect_t sensor)
{
	return mt9t111_read(0x00);
}

static int checkCameraID(CamSensorSelect_t sensor)
{
	return 0;

	UInt16 devId = CAMDRV_GetDeviceID_Pri(sensor);

	if (devId == MT9T111_ID) {
		printk("Camera identified as MT9T111\r\n");
		return 0;
	} else {
		printk("Camera Id wrong. Expected 0x%x but got 0x%x\r\n",
			 MT9T111_ID, devId);
		return -1;
	}
}

static HAL_CAM_Result_en_t mt9t111_write(unsigned int sub_addr, UInt16 data)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	sCamI2cStatus = HAL_CAM_SUCCESS;
	UInt8 bytes[2];
	bytes[0] = (data & 0xFF00) >> 8;
	bytes[1] = data & 0xFF;

	result |= CAM_WriteI2c(sub_addr, 2, bytes);
	if (result != HAL_CAM_SUCCESS) {
		sCamI2cStatus = result;
		pr_info("mt9t111_write(): ERROR: at addr:0x%x with value: 0x%x\n", sub_addr, data);
	}
	return result;
}

static UInt16 mt9t111_read(unsigned int sub_addr)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	sCamI2cStatus = HAL_CAM_SUCCESS;
	UInt16 data;
	UInt16 temp;

	result |= CAM_ReadI2c(sub_addr, 2, (UInt8 *) &data);
	if (result != HAL_CAM_SUCCESS) {
		sCamI2cStatus = result;
		pr_info("mt9t111_read(): ERROR: %d\r\n", result);
	}

	temp = data;
	data = ((temp & 0xFF) << 8) | ((temp & 0xFF00) >> 8);

	return data;
}

static HAL_CAM_Result_en_t
SensorSetPreviewMode(CamImageSize_t image_resolution, CamDataFmt_t image_format)
{
	return 0;

	UInt32 x = 0, y = 0;
	UInt32 format = 0;
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	printk(KERN_ERR"SensorSetPreviewMode image_resolution 0x%x image_format %d  ",image_resolution,image_format  );

#if 0
	mt9t111_write( 0x098E, 0xEC05 );	// MCU_ADDRESS [PRI_B_NUM_OF_FRAMES_RUN]
	mt9t111_write( 0x0990, 0x0005 	);// MCU_DATA_0
	mt9t111_write( 0x098E, 0x8400 	);// MCU_ADDRESS [SEQ_CMD]
	mt9t111_write( 0x0990, 0x0001 	);// MCU_DATA_0

	return HAL_CAM_SUCCESS;
#endif 
	switch (image_resolution) {
	
	case CamImageSize_R_QCIF:
		x = 144;
		y = 176;
		break;
	
	case CamImageSize_R_QVGA:
		x = 240;
		y = 320;
		break;
		
	case CamImageSize_SQCIF:
		x = 128;
		y = 96;
		break;

	case CamImageSize_QQVGA:
		x = 160;
		y = 120;
		break;

	case CamImageSize_QCIF:
		x = 176;
		y = 144;
		break;

	case CamImageSize_QVGA:
		x = 320;
		y = 240;
		break;

	case CamImageSize_CIF:
		x = 352;
		y = 288;
		break;

	case CamImageSize_VGA:
		x = 640;
		y = 480;
		break;

	case CamImageSize_SVGA:
		x = 800;
		y = 600;
		break;

	default:
		x = 320;
		y = 240;
		break;
	}

	/* Choose Format for Viewfinder mode  */
	/* Set the format for the Viewfinder mode */
	switch (image_format) {

	case CamDataFmtYCbCr:
		format = 1;
		break;

	case CamDataFmtRGB565:
		format = 4;
		break;

	default:
		format = 1;
		break;
	}

	mt9t111_write( 0x098E, 0x6800 );	// MCU_ADDRESS [PRI_A_IMAGE_WIDTH]
	mt9t111_write( 0x0990, x );	// MCU_DATA_0
	mt9t111_write( 0x098E, 0x6802 );	// MCU_ADDRESS [PRI_A_IMAGE_HEIGHT]
	mt9t111_write( 0x0990, y );	// MCU_DATA_0
	mt9t111_write( 0x098E, 0x8400 );	// MCU_ADDRESS [SEQ_CMD]
	mt9t111_write( 0x0990, 0x0006 );	// MCU_DATA_0

	if (image_format == CamDataFmtYCbCr) { /*YUV order*/
		UInt32 output_order = 2;	/* Switch low, high bytes. Y and C. */

		/* [Set Output Format Order] */
		/*MCU_ADDRESS[PRI_A_CONFIG_JPEG_JP_MODE] */
		mt9t111_write(0x098E, 0x6809);
		mt9t111_write(0x0990, output_order);	/* MCU_DATA_0 */
		mt9t111_write(0x098E, 0x8400);	/* MCU_ADDRESS [SEQ_CMD] */
		mt9t111_write(0x0990, 0x0006);	/* MCU_DATA_0 */

		printk
		    ("SensorSetPreviewMode(): Output Format Order = 0x%x\r\n",
		     output_order);
	}

	printk("SensorSetPreviewMode(): Resolution:0x%x, Format:0x%x r\n",
		 image_resolution, image_format);

	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk
		    ("SensorSetPreviewMode(): Error[%d] sending preview mode  r\n",
		     sCamI2cStatus);
		result = sCamI2cStatus;
	}
	/*[Enable stream] */
	//mt9t111_write(0x001A, 0x0218);

	return result;

}


/** @} */

/****************************************************************************
*
* Function Name:   HAL_CAM_Result_en_t CAMDRV_SetVideoCaptureMode
				(CamImageSize_t image_resolution, CamDataFmt_t image_format)
*
* Description: This function configures Video Capture
				(Same as ViewFinder Mode)
*
* Notes:
*
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_SetVideoCaptureMode_Pri(CamImageSize_t image_resolution,
					       CamDataFmt_t image_format,
					       CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
CAMERADBG(" resolution=0x%08x   format=0x%08x \n",image_resolution,image_format);
	/* --------Set up Camera Isp for Output Resolution & Format */
	result = SensorSetPreviewMode(image_resolution, image_format);
	return result;
}

/****************************************************************************
*
* Function Name:   HAL_CAM_Result_en_t CAMDRV_SetExposure_Pri(CamRates_t fps)
*
* Description: This function sets the Exposure compensation
*
* Notes:   
*
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_SetExposure_Pri(int value)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;

	if(value==0)
	{
		EV_pos0();
	}
	else if(value==3)
	{
		EV_pos1();	
	}
	else if(value==5)
	{
		EV_pos2();
	}
	else if(value==-2)
	{
		EV_neg1();	
	}
	else if(value==-5)
	{
		EV_neg2();
	}
	else
	{
		 printk("CAMDRV_SetExposure_Pri , ERROR value ! \n");
	}
	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		 printk("CAMDRV_SetExposure_Pri(): Error[%d] \r\n",
			  sCamI2cStatus);
		 result = sCamI2cStatus;
	}

    return result;
}


/****************************************************************************
*
* Function Name:   HAL_CAM_Result_en_t CAMDRV_SetFrameRate(CamRates_t fps)
*
* Description: This function sets the frame rate of the Camera Sensor
*
* Notes:    15 or 30 fps are supported.
*
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_SetFrameRate_Pri(CamRates_t fps,
					CamSensorSelect_t sensor)
{ 
	return 0;

	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	
	printk("CAMDRV_SetFrameRate %d \r\n",fps );
	
					
	if (fps > CamRate_30)
	{
		result = HAL_CAM_ERROR_ACTION_NOT_SUPPORTED;
	}
	else
	{
		if (fps == CamRate_Auto)
		{

		}
		else
		{
			if(fps>=CamRate_15)
			{
				
				mt9t111_write(0x98E, 0x68AA);	//TX FIFO Watermark (A)
				mt9t111_write(0x990, 0x0218);	//		= 536
				mt9t111_write(0x98E, 0x6815);	//Max FD Zone 50 Hz
				mt9t111_write(0x990, 0x0007);	//		= 7
				mt9t111_write(0x98E, 0x6817 );//Max FD Zone 60 Hz
				mt9t111_write(0x990, 0x0008 );//	  = 8
				mt9t111_write(0x98E, 0x682D);	//AE Target FD Zone
				mt9t111_write(0x990, 0x0007);	//		= 7
				
				mt9t111_write( 0x098E, 0x8400); 	// MCU_ADDRESS [SEQ_CMD]
				mt9t111_write( 0x0990, 0x0006); 	// MCU_DATA_0
			}
			else if(fps>=CamRate_10)
			{
				mt9t111_write(0x98E, 0x68AA);	//TX FIFO Watermark (A)
				mt9t111_write(0x990, 0x026A);	//      = 618
				mt9t111_write(0x98E, 0x6815);	//Max FD Zone 50 Hz
				mt9t111_write(0x990, 0x000A);	//      = 10
				mt9t111_write(0x98E, 0x6817);	//Max FD Zone 60 Hz
				mt9t111_write(0x990, 0x000C);	//      = 12
				mt9t111_write(0x98E, 0x682D);	//AE Target FD Zone
				mt9t111_write(0x990, 0x000A);	//      = 10

				mt9t111_write( 0x098E, 0x8400); 	// MCU_ADDRESS [SEQ_CMD]
				mt9t111_write( 0x0990, 0x0006); 	// MCU_DATA_0
			}
			else if(fps>=CamRate_5)
			{
				mt9t111_write(0x98E, 0x68AA);	//TX FIFO Watermark (A)
				mt9t111_write(0x990, 0x0218);	//       = 536
				mt9t111_write(0x98E, 0x6815);	//Max FD Zone 50 Hz
				mt9t111_write(0x990, 0x0014);	//       = 20
				mt9t111_write(0x98E, 0x6817);	//Max FD Zone 60 Hz
				mt9t111_write(0x990, 0x0018);	//       = 24
				mt9t111_write(0x98E, 0x682D);	//AE Target FD Zone
				mt9t111_write(0x990, 0x0014);	//      = 20

				mt9t111_write( 0x098E, 0x8400); 	// MCU_ADDRESS [SEQ_CMD]
				mt9t111_write( 0x0990, 0x0006); 	// MCU_DATA_0
			}
			else
			{
				printk("CAMDRV_SetFrameRate(): Error HAL_CAM_ERROR_ACTION_NOT_SUPPORTED \r\n");
			}	
		}       // else (if (ImageSettingsConfig_st.sensor_framerate->cur_setting == CamRate_Auto))
	}       // else (if (fps <= CamRate_Auto))

	 if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		 printk("CAMDRV_SetFrameRate(): Error[%d] \r\n",
			  sCamI2cStatus);
		 result = sCamI2cStatus;
	 }

    return result;

}

/****************************************************************************
/
/ Function Name:   HAL_CAM_Result_en_t
					CAMDRV_EnableVideoCapture(CamSensorSelect_t sensor)
/
/ Description: This function starts camera video capture mode
/
/ Notes: camera_enable for preview after set preview mode  ;we can ignore this function ,for it has been done in  set preview mode
/
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_EnableVideoCapture_Pri(CamSensorSelect_t sensor)
{
	/*[Enable stream] */
	CAMERADBG(" \n");
	return HAL_CAM_SUCCESS;
	mt9t111_write(0x001A, 0x0218);
	msleep(300);
	return sCamI2cStatus;
}

/****************************************************************************
/
/ Function Name:   void CAMDRV_SetCamSleep(CamSensorSelect_t sensor )
/
/ Description: This function puts ISP in sleep mode & shuts down power.
/
/ Notes:
/
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_SetCamSleep_Pri(CamSensorSelect_t sensor)
{return 0;
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	UInt16 readout;
	printk("CAMDRV_SetCamSleep(): mt9t111 enter soft standby mode \r\n");
	
	readout=mt9t111_read(0x0028);	/* MCU_ADDRESS [PRI_B_NUM_OF_FRAMES_RUN] */
	readout&=0xFFFE;
	mt9t111_write(0x0028,readout);
	
	readout=mt9t111_read(0x0018);
	readout |= 0x1;
	mt9t111_write(0x0018,readout);
	msleep(3);
	
	readout=mt9t111_read(0x0018);
	if(!(readout&0x4000)){
		printk("failed: CAMDRV_SetCamSleep_Pri(): mt9t111 enter soft standby mode   \r\n");
		result=HAL_CAM_ERROR_OTHERS;
	}
	
	return result;
}

/*camera_disable for still mode */
static HAL_CAM_Result_en_t CAMDRV_DisableCapture_Pri(CamSensorSelect_t sensor)
{
	//return HAL_CAM_SUCCESS;
	/*[Disable stream] */
	CAMERADBG("in 9t111 CAMDRV_DisableCapture \n");
	//control_flash(0);
	Preview_config(0);
	/*[Preview on] */
//	mt9t111_write(0x098E, 0xEC05);	/* MCU_ADDRESS [PRI_B_NUM_OF_FRAMES_RUN] */
//	mt9t111_write(0x0990, 0x0005);	/* MCU_DATA_0 */
//	mt9t111_write(0x098E, 0x8400);	/* MCU_ADDRESS [SEQ_CMD] */
//	mt9t111_write(0x0990, 0x0001);	/* MCU_DATA_0 */

	//printk("CAMDRV_DisableCapture(): \r\n");
	return sCamI2cStatus;
}

/****************************************************************************
/
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_DisablePreview(void)
/
/ Description: This function halts MT9M111 camera video
/
/ Notes:   camera_disable for preview mode , after this ,preview will not output data
/
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_DisablePreview_Pri(CamSensorSelect_t sensor)
{return HAL_CAM_SUCCESS;
	/* [Disable stream] */
	mt9t111_write(0x001A, 0x0018);

	printk("mt9t111 CAMDRV_DisablePreview(): \r\n");
	return sCamI2cStatus;
}

/****************************************************************************
/
/ Function Name:   voidcontrol_flash(int flash_on)
/
/ Description: flash_on ==1:  turn on flash
/			flash_on==0:   turn off flash
/
/ Notes:
/
****************************************************************************/

static void control_flash(int flash_on)
{
	gpio_request(FLASH_TRIGGER, "flash_en");

	if (gpio_is_valid(FLASH_TRIGGER))
	{
		if(flash_on==1)
		{
			gpio_direction_output(FLASH_TRIGGER, 1);
			msleep(5);		
		}
		else if(flash_on==0)
			gpio_direction_output(FLASH_TRIGGER, 0);	
		else
		{
			gpio_direction_output(FLASH_TRIGGER, 0);	
			printk(KERN_ERR "camera ERROR at control_flash(): input is not valid\n");
		}
	}
	else
		printk(KERN_ERR "camera ERROR at control_flash(): gpio is not valid \n");	
}

extern int flash_flag_1capture_0preview;
/****************************************************************************
/
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_CfgStillnThumbCapture(
					CamImageSize_t image_resolution,
					CamDataFmt_t format,
					CamSensorSelect_t sensor)
/
/ Description: This function configures Stills Capture
/
/ Notes:
/
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_CfgStillnThumbCapture_Pri(CamImageSize_t
						 stills_resolution,
						 CamDataFmt_t stills_format,
						 CamImageSize_t
						 thumb_resolution,
						 CamDataFmt_t thumb_format,
						 CamSensorSelect_t sensor)
{
CAMERADBG(" 0x%08x  0x%08x  0x%08x  0x%08x  0x%08x  \n",stills_resolution,stills_format,thumb_resolution,thumb_format,sensor);

	UInt32 x = 0, y = 0;
	UInt32 tx = 0, ty = 0;
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;

	/*printk("***************************** \
		CAMDRV_CfgStillnThumbCapture():STARTS ************************* \r\n");*/

	switch (stills_resolution) {
	case CamImageSize_QCIF:

		x = 176;
		y = 144;
		break;

	case CamImageSize_QVGA:
		x = 320;
		y = 240;
		break;

	case CamImageSize_CIF:
		x = 352;
		y = 288;
		break;

	case CamImageSize_VGA:
		x = 640;
		y = 480;
		break;

	case CamImageSize_SVGA:
		x = 800;
		y = 600;
		break;

	case CamImageSize_XGA:
		x = 1024;
		y = 768;
		break;

	case CamImageSize_SXGA:
		x = 1280;
		y = 1024;
		break;

	case CamImageSize_UXGA:
		x = 1600;
		y = 1200;
		break;

	case CamImageSize_QXGA:
		x = 2048;
		y = 1536;
		break;

	default:
		x = 640;
		y = 480;
		break;
	}
	
	Capture_config(x*y);
	
	if(flash_switch==Flash_On)
	{
		//control_flash(1);
		flash_flag_1capture_0preview=1;
	}
	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk
		    ("CAMDRV_CfgStillnThumbCapture():Error sending capture mode \r\n");
		result = sCamI2cStatus;
	}
	return result;
}

/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetSceneMode(
/					CamSceneMode_t scene_mode)
/
/ Description: This function will set the scene mode of camera
/ Notes:
****************************************************************************/

static HAL_CAM_Result_en_t CAMDRV_SetSceneMode_Pri(CamSceneMode_t scene_mode,
					CamSensorSelect_t sensor)
{return HAL_CAM_SUCCESS;
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	switch(scene_mode) {
		case CamSceneMode_Auto:
			pr_info("CAMDRV_SetSceneMode() called for AUTO\n");
			mt9t111_write(0x098E, 0x6815);	// MCU_ADDRESS [PRI_A_CONFIG_FD_MAX_FDZONE_50HZ]
			mt9t111_write(0x0990, 0x006);   // MCU_DATA_0
			mt9t111_write(0x098E, 0x6817);  // MCU_ADDRESS [PRI_A_CONFIG_FD_MAX_FDZONE_60HZ]
			mt9t111_write(0x0990, 0x006);   // MCU_DATA_0
			mt9t111_write(0x098E, 0x682D); 	// MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_TARGET_FDZONE]
			mt9t111_write(0x0990, 0x0003);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x682F);  // MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_TARGET_AGAIN]
			mt9t111_write(0x0990, 0x0100);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x6839);  // MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_AE_MAX_VIRT_AGAIN]
			mt9t111_write(0x0990, 0x012C);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x6835);  // MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_AE_MAX_VIRT_DGAIN]
			mt9t111_write(0x0990, 0x00F0);  // MCU_DATA_0
			break;
		case CamSceneMode_Night:
			pr_info("CAMDRV_SetSceneMode() called for Night\n");
			mt9t111_write(0x098E, 0x6815);	// MCU_ADDRESS [PRI_A_CONFIG_FD_MAX_FDZONE_50HZ]
			mt9t111_write(0x0990, 0x0018);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x6817);  // MCU_ADDRESS [PRI_A_CONFIG_FD_MAX_FDZONE_60HZ]
			mt9t111_write(0x0990, 0x0018);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x682D); 	// MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_TARGET_FDZONE]
			mt9t111_write(0x0990, 0x0006);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x682F);  // MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_TARGET_AGAIN]
			mt9t111_write(0x0990, 0x0100);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x6839);  // MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_AE_MAX_VIRT_AGAIN]
			mt9t111_write(0x0990, 0x012C);  // MCU_DATA_0
			mt9t111_write(0x098E, 0x6835);  // MCU_ADDRESS [PRI_A_CONFIG_AE_TRACK_AE_MAX_VIRT_DGAIN]
			mt9t111_write(0x0990, 0x00F0);  // MCU_DATA_0
			break;
		default:
			pr_info("CAMDRV_SetSceneMode() not supported for %d\n", scene_mode);
			break;
	}
	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetSceneMode(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}

	return result;
}

/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetWBMode(CamWB_WBMode_t wb_mode)
/
/ Description: This function will set the white balance of camera
/ Notes:
****************************************************************************/

static HAL_CAM_Result_en_t CAMDRV_SetWBMode_Pri(CamWB_WBMode_t wb_mode,
				     CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
        msleep(100);//for bug244093
	switch ( wb_mode )
	{
		case CamWB_Incandescent:
			CAMTUNING_WHITE_BALANCE_INCANDESCENT();
			break;
		case CamWB_Daylight:
			CAMTUNING_WHITE_BALANCE_DAYLIGHT();
			break;
		case CamWB_Cloudy:
			CAMTUNING_WHITE_BALANCE_CLOUDY();
			break;
		case CamWB_DaylightFluorescent:
			CAMTUNING_WHITE_BALANCE_FLUORESCENT();
			break;
		case CamWB_Auto:
		default:
			CAMTUNING_WHITE_BALANCE_AUTO();
			break;
	}


	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetWBMode(): Error[%d] \r\n", sCamI2cStatus);
		result = sCamI2cStatus;
	}

	return result;
}

/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetAntiBanding(
/					CamAntiBanding_t effect)
/
/ Description: This function will set the antibanding effect of camera
/ Notes:
****************************************************************************/

static HAL_CAM_Result_en_t CAMDRV_SetAntiBanding_Pri(CamAntiBanding_t effect,
					  CamSensorSelect_t sensor)
{return HAL_CAM_SUCCESS;

	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	pr_info("CAMDRV_SetAntiBanding()  called\n");
	if ((effect == CamAntiBandingAuto) || (effect == CamAntiBandingOff)) {
		mt9t111_write(0x098E, 0xA005);	/* MCU_ADDRESS [FD_FDPERIOD_SELECT] */
		mt9t111_write(0x0990, 0x0001);	/* MCU_DATA_0 */
		/* MCU_ADDRESS [PRI_B_CONFIG_FD_ALGO_RUN] */
		mt9t111_write(0x098E, 0x6C11);
		mt9t111_write(0x0990, 0x0003);	/* MCU_DATA_0 */
		/* MCU_ADDRESS [PRI_A_CONFIG_FD_ALGO_RUN] */
		mt9t111_write(0x098E, 0x6811);
		mt9t111_write(0x0990, 0x0003);	/* MCU_DATA_0 */

	} else if (effect == CamAntiBanding50Hz) {

		mt9t111_write(0x098E, 0xA005);	/* MCU_ADDRESS [FD_FDPERIOD_SELECT] */
		mt9t111_write(0x0990, 0x0001);	/* MCU_DATA_0 =>'0'=60Hz, '1'=50Hz */
		mt9t111_write(0x098E, 0x6C11);	/* MCU_ADDRESS */
		mt9t111_write(0x0990, 0x0002);	/* MCU_DATA_0 */
		/* MCU_ADDRESS [PRI_A_CONFIG_FD_ALGO_RUN] */
		mt9t111_write(0x098E, 0x6811);
		mt9t111_write(0x0990, 0x0002);	/* MCU_DATA_0 */

	} else if (effect == CamAntiBanding60Hz) {

		mt9t111_write(0x098E, 0xA005);	/* MCU_ADDRESS [FD_FDPERIOD_SELECT] */
		mt9t111_write(0x0990, 0x0000);	/* MCU_DATA_0 =>'0'=60Hz, '1'=50Hz */
		mt9t111_write(0x098E, 0x6C11);	/* MCU_ADDRESS */
		mt9t111_write(0x0990, 0x0002);	/* MCU_DATA_0 */
		/* MCU_ADDRESS [PRI_A_CONFIG_FD_ALGO_RUN] */
		mt9t111_write(0x098E, 0x6811);
		mt9t111_write(0x0990, 0x0002);	/* MCU_DATA_0 */

	} else {
		mt9t111_write(0x098E, 0xA005);	/* MCU_ADDRESS [FD_FDPERIOD_SELECT] */
		mt9t111_write(0x0990, 0x0001);	/* MCU_DATA_0 */
		/* MCU_ADDRESS [PRI_B_CONFIG_FD_ALGO_RUN] */
		mt9t111_write(0x098E, 0x6C11);
		mt9t111_write(0x0990, 0x0003);	/* MCU_DATA_0 */
		/* MCU_ADDRESS [PRI_A_CONFIG_FD_ALGO_RUN] */
		mt9t111_write(0x098E, 0x6811);
		mt9t111_write(0x0990, 0x0003);	/* MCU_DATA_0 */
	}

	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetAntiBanding(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}

	return result;
}

/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetFlashMode(
					FlashLedState_t effect)
/
/ Description: This function will set the flash mode of camera
/ Notes:
****************************************************************************/
extern void flash_en_ioctl_ioctl(unsigned long freq, unsigned long duty);
static HAL_CAM_Result_en_t CAMDRV_SetFlashMode_Pri(FlashLedState_t effect,
					CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	CAMERADBG(" FlashMode=%d \n",effect);
	
	flash_switch=effect;
	if (effect == Flash_Off) {
		flash_en_ioctl_ioctl(0,0);
		//control_flash(0);
	} else if (effect == Flash_On) {/*used by camera flash, not torch  apk*/
		flash_en_ioctl_ioctl(0,0);
		//control_flash(0);
	} else if (effect == Torch_On) {/*used by  torch  to turn on flash */
		flash_en_ioctl_ioctl(10,50);
	} else if (effect == FlashLight_Auto) { /*close flash first ,*/
		flash_en_ioctl_ioctl(0,0);
		//control_flash(0);
	} else {
		printk(KERN_ERR"CAMDRV_SetFlashMode_Pri: unknow FlashMode %d ", effect);
		/* do sth */
	}
	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetFlashMode(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}
	return result;
}

/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetFocusMode(
/					CamFocusStatus_t effect)
/
/ Description: This function will set the focus mode of camera
/ Notes:
****************************************************************************/

static HAL_CAM_Result_en_t CAMDRV_SetFocusMode_Pri(CamFocusControlMode_t effect,
					CamSensorSelect_t sensor)
{return HAL_CAM_SUCCESS;
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	pr_info("CAMDRV_SetFocusMode()  called effect 0x%x \n",effect);
	if (effect == CamFocusControlAuto) {

		mt9t111_write( 0x098E, 0x3003); 	// MCU_ADDRESS [AF_ALGO]
		mt9t111_write( 0x0990, 0x0002); 	// MCU_DATA_0		
		
	} else if (effect == CamFocusControlMacro) {

		mt9t111_write( 0x098E, 0x3003 );	// MCU_ADDRESS [AF_ALGO]
		mt9t111_write( 0x0990, 0x0001 );	// MCU_DATA_0
		mt9t111_write( 0x098E, 0xB024 );	// MCU_ADDRESS [AF_BEST_POSITION]
		mt9t111_write( 0x0990, 0x00AF );	// MCU_DATA_0

	} else if (effect == CamFocusControlInfinity) {

		mt9t111_write( 0x098E, 0x3003 );	// MCU_ADDRESS [AF_ALGO]
		mt9t111_write( 0x0990, 0x0001 );	// MCU_DATA_0
		mt9t111_write( 0x098E, 0xB024 );	// MCU_ADDRESS [AF_BEST_POSITION]
		mt9t111_write( 0x0990, 0x0000 );	// MCU_DATA_0

	} else {

		printk(KERN_ERR" can not support effect focus 0x%x\r\n",effect);

	}
	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetFocusMode(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}
	
	FOCUS_MODE=effect;
	
	return result;
}

static HAL_CAM_Result_en_t CAMDRV_TurnOffAF_Pri()
{
	
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	
	return result;
}

static HAL_CAM_Result_en_t CAMDRV_TurnOnAF_Pri()
{return 0;
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	
	switch (FOCUS_MODE)
	{
		case CamFocusControlAuto: /*AF trigger*/
			
			mt9t111_write( 0x098E, 0xB019 );	// MCU_ADDRESS [AF_PROGRESS]
			mt9t111_write( 0x0990, 0x0001 );	// MCU_DATA_0

			break;

		case CamFocusControlMacro:/*we need not doing trigger for this mode */
			
			msleep(100);
			break;

		case CamFocusControlInfinity:/*we need not doing trigger for this mode */
			
			msleep(100);
			break;

		default:
			printk(KERN_ERR"error in CAMDRV_TurnOnAF_Pri , can not support focus mode 0x%x \n",FOCUS_MODE);
				
	}
	

	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_TurnOnAF(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}
	return result;
}

/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetJpegQuality(
/					CamFocusStatus_t effect)
/
/ Description: This function will set the focus mode of camera
/ Notes:
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_SetJpegQuality_Pri(CamJpegQuality_t effect,
					  CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;

	if (effect == CamJpegQuality_Min) {
		/* do sth */
	} else if (effect == CamJpegQuality_Nom) {
		/* do sth */
	} else {
		/* do sth */
	}
	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetJpegQuality(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}
	return result;
}

/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetZoom()
/
/ Description: This function will set the zoom value of camera
/ Notes:
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_SetZoom_Pri(CamZoom_t step,
					  CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	pr_info("CAMDRV_SetZoom()  called\n");
	if (step == CamZoom_1_0) {
		//TBD
	} else if (step == CamZoom_1_15) {
		//TBD
	} else if (step == CamZoom_1_6) {
		//TBD
	} else if (step == CamZoom_2_0) {
		//TBD
	} else {
		//TBD
	}
	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetZoom(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}
	return result;
}



/****************************************************************************
/ Function Name:   HAL_CAM_Result_en_t CAMDRV_SetDigitalEffect(
/					CamDigEffect_t effect)
/
/ Description: This function will set the digital effect of camera
/ Notes:
****************************************************************************/
static HAL_CAM_Result_en_t CAMDRV_SetDigitalEffect_Pri(CamDigEffect_t effect,
					    CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;

	switch ( effect )
	{
		case CamDigEffect_MonoChrome:
			EFFECT_Black_and_White();
			break;
		case CamDigEffect_SepiaGreen:
			EFFECT_Sepia();
			break;
		case CamDigEffect_NegColor:
			EFFECT_Negative();
			break;
		case CamDigEffect_Sketch:
			EFFECT_Sketch();
			break;
		case CamDigEffect_Emboss:
			EFFECT_Emboss_mono();
			break;
		case CamDigEffect_NoEffect:
		default:
			EFFECT_Normal();
			break;
	}

	if (sCamI2cStatus != HAL_CAM_SUCCESS) {
		printk("CAMDRV_SetDigitalEffect(): Error[%d] \r\n",
			 sCamI2cStatus);
		result = sCamI2cStatus;
	}

	return result;
}

static HAL_CAM_Result_en_t Init_Mt9t111(CamSensorSelect_t sensor)
{
	HAL_CAM_Result_en_t result = HAL_CAM_SUCCESS;
	static ktime_t tm1;
	tm1 = ktime_get();
	
	CAMERADBG("Entry Init Sec %d nsec %d\n", tm1.tv.sec, tm1.tv.nsec);
	
	CamSensorCfg_st.sensor_config_caps = &CamPrimaryCfgCap_st;
	printk("Init Primary Sensor MT9T111: \r\n");

	/*  
	   * Preview YUV 640x480  Frame rate 10~ 27.5fps
          * Capture YUV 2048x1536	Frame Rate 8.45
          * XMCLK 26MHz	PCLK 64MHz
       */
	zz_poppy_init();

//	if (checkCameraID(sensor)) {
//		result = HAL_CAM_ERROR_INTERNAL_ERROR;
//	}
	tm1 = ktime_get();
	CAMERADBG("Exit Init Sec %d nsec %d\n", tm1.tv.sec, tm1.tv.nsec);

	return result;
}


struct sens_methods sens_meth_pri = {
    DRV_GetIntfConfig: CAMDRV_GetIntfConfig_Pri,
    DRV_GetIntfSeqSel : CAMDRV_GetIntfSeqSel_Pri,
    DRV_Wakeup : CAMDRV_Wakeup_Pri,
    DRV_SetVideoCaptureMode : CAMDRV_SetVideoCaptureMode_Pri,
    DRV_SetFrameRate : CAMDRV_SetFrameRate_Pri,
    DRV_EnableVideoCapture : CAMDRV_EnableVideoCapture_Pri,
    DRV_SetCamSleep : CAMDRV_SetCamSleep_Pri,
    DRV_DisableCapture : CAMDRV_DisableCapture_Pri,
    DRV_DisablePreview : CAMDRV_DisablePreview_Pri,
    DRV_CfgStillnThumbCapture : CAMDRV_CfgStillnThumbCapture_Pri,
    DRV_SetSceneMode : CAMDRV_SetSceneMode_Pri,
    DRV_SetWBMode : CAMDRV_SetWBMode_Pri,
    DRV_SetAntiBanding : CAMDRV_SetAntiBanding_Pri,
    DRV_SetFocusMode : CAMDRV_SetFocusMode_Pri,
    DRV_SetDigitalEffect : CAMDRV_SetDigitalEffect_Pri,
    DRV_SetFlashMode : CAMDRV_SetFlashMode_Pri,
    DRV_SetJpegQuality : CAMDRV_SetJpegQuality_Pri,
    DRV_TurnOnAF : CAMDRV_TurnOnAF_Pri,
    DRV_TurnOffAF : CAMDRV_TurnOffAF_Pri,
    //DRV_SetZoom : CAMDRV_SetZoom_Pri,
    DRV_SetExposure : CAMDRV_SetExposure_Pri,
};

struct sens_methods *CAMDRV_primary_get(void)
{
	return &sens_meth_pri;
}
