#bcm_hal_cam-objs := hal_cam.o
bcm_hal_cam_still_YUV-objs := cam_cntrl_2153.o hal_cam.o hal_cam_CMI_YUVdrv.o
#obj-$(CONFIG_BRCM_HAL_CAM) += bcm_hal_cam.o
obj-$(CONFIG_BRCM_HAL_CAM_WITH_STILL_YUV) += bcm_hal_cam_still_YUV.o
### Modified by yubin, begin ###
obj-$(CONFIG_BCM_CAM_TCM9001MD) += camdrv_tcm9001.o  hal_cam_core_poppy_dual.o
obj-$(CONFIG_BCM_CAM_MT9T111) += camdrv_poppy_yuv.o  hal_cam_core_poppy_dual.o
### Modified by yubin, end ###
obj-$(CONFIG_BCM_CAM_OV5640) += camdrv_ov5640.o hal_cam_core_ath_dual.o
obj-$(CONFIG_BCM_CAM_STV0986) += camdrv_stv0986.o hal_cam_CMI_drv.o cam_cntrl_2153.o
obj-$(CONFIG_BCM_CAM_OV2655) += camdrv_ov2655.o
obj-$(CONFIG_BCM_CAM_STV0987) += camdrv_stv0987.o hal_cam_core_ath.o
