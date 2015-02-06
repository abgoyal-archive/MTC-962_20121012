/*******************************************************************************
* Copyright 2010 Broadcom Corporation.  All rights reserved.
*
*       @file   arch/arm/plat-bcmap/include/plat/chal/chal_intc_inc.h
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
/* ============================================================================
/* 
 *//* \file   chal_intc_inc.h
/* \brief  OS independent code of INTC using inline function.
/* \note
/* ============================================================================
#ifndef _CHAL_INTC_INC_H_
#define _CHAL_INTC_INC_H_
#include "chal_types.h"
#include "chal_common.h"
#include "brcm_rdb_sysmap.h"
#include "brcm_rdb_intc.h"

};

	
	
	


	
		
		
		
		
		
		
		
		
		
		
	
	


#define INTC_WRITE32( regOffset, data)           \
    CHAL_REG_WRITE32((UInt32) h + (regOffset), data) 
#define INTC_READ32( regOffset)           \
    CHAL_REG_READ32((UInt32) h + (regOffset)) 
/* ==============================================================================
/* 
 *//* Function Name: void chal_intc_clear_interrupt(CHAL_HANDLE h, cUInt32 Id  ) 
/* 
 *//* Description:   Clear an interrupt
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* 
 *//* Notes:
/* 
 */static inline void chal_intc_clear_interrupt(CHAL_HANDLE h, cUInt32 Id) 
{
	
		
	
		
		
		
	
	else if (Id >= 32)	/* Id < 64
	{
		
	
	
	else
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_clear_all(CHAL_HANDLE h, Chal_Intc_Mask_t *mask )  
/* 
 *//* Description:   Clear all interrupts except those in the mask
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         maks: pointer to intc mask 
/* 
 *//* 
 *//* Notes:
/* 
 */static inline void chal_intc_clear_intr_mask(CHAL_HANDLE h,
					     Chal_Intc_Mask_t * mask) 
{
	
	
	


/* ==============================================================================
/* 
 *//* Function Name: chal_intc_enable_interrupt(CHAL_HANDLE h,cUInt32 cpu,cUInt32 Id) 
/* 
 *//* Description:   enable an interrupt
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* param:         cpu: 0: Apps, 1: modem
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_enable_interrupt(CHAL_HANDLE h, cUInt32 cpu,
					      cUInt32 Id) 
{
	
	
		
	
		
		
			
			
			
			
		
		else if (Id >= 32)	/* Id < 64
		{
			
			
		
		
		else
			
			
			
			
		
	
	else
		
		
			
			
			
			
		
		else if (Id >= 32)	/* Id < 64
		{
			
			
		
		
		else
			
			
			
			
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_disable_interrupt(CHAL_HANDLE h,cUInt32 cpu,cUInt32 Id) 
/* 
 *//* Description:   disable an interrupt
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* param:         cpu: 0: Apps, 1: modem
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_disable_interrupt(CHAL_HANDLE h, cUInt32 cpu,
					       cUInt32 Id) 
{
	
	
		
	
		
		
			
			
			
			
		
		else if (Id >= 32)	/* Id < 64
		{
			
			
		
		
		else
			
			
			
			
		
	
	else
		
		
			
			
			
				      rc & ~(1 << (Id - 64)));
			
		
		else if (Id >= 32)	/* Id < 64
		{
			
			
				      rc & ~(1 << (Id - 32)));
		
		
		else
			
			
			
			
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_disable_interrupts(CHAL_HANDLE h, 
/*                                             cUInt32 cpu, 
/*                                             Chal_Intc_Mask_t *mask
/*                                            ) 
/* 
 *//* Description:   disable all interrupts except those in the mask
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         maks: pointer to intc mask 
/* 
 *//* param:         cpu: 0: Apps, 1: modem
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_disable_intr_mask(CHAL_HANDLE h, 
					       cUInt32 cpu, 
					       Chal_Intc_Mask_t * mask 
{
	
	
		
		
		
		
		
		
		
		
	
	else
		
		
		
		
		
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_restore_interrupts(CHAL_HANDLE h, 
/*                                             cUInt32 cpu, 
/*                                             Chal_Intc_Mask_t *mask)  
/* 
 *//* Description:   restore all interrupts based on the mask
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         maks: pointer to intc mask 
/* 
 *//* param:         cpu: 0: Apps, 1: modem
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_restore_interrupts(CHAL_HANDLE h, 
						cUInt32 cpu, 
						Chal_Intc_Mask_t * mask 
{
	
		
		
		
		
		
	
	else
		
		
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_get_interrupt_mask(CHAL_HANDLE h, 
/*                                             cUInt32 cpu, 
/*                                             Chal_Intc_Mask_t* mask)  
/* 
 *//* Description:   Get interrupt mask
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         cpu: 0: Apps, 1: modem
/* 
 *//* param:         mask (out): intec mask
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_get_interrupt_mask(CHAL_HANDLE h, 
						cUInt32 cpu, 
						Chal_Intc_Mask_t * mask) 
{
	
		
		
		
		
		
	
	else
		
		
		
		
		
	



/* ==============================================================================
/* 
 *//* Function Name: Boolean chal_intc_is_interrupt_enabled(CHAL_HANDLE h,cUInt32 cpu, cUInt32 Id  ) 
/* 
 *//* Description:   Is an interrupt enabled?
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* return:        TRUE or FALSE
/* 
 *//* Notes:
/* 
 */static inline Boolean chal_intc_is_interrupt_enabled(CHAL_HANDLE h, cUInt32 cpu,
						     cUInt32 Id) 
{
	
		
	
		
		
			
			
				  (1 << (Id - 64))) != 0);
			
		
		else if (Id >= 32)	/* Id < 64
		{
			
				  (1 << (Id - 32))) != 0);
		
		
		else
			
			
				 0);
			
		
	
	else
		
		
			
			
				  (1 << (Id - 64))) != 0);
			
		
		else if (Id >= 32)	/* Id < 64
		{
			
				  (1 << (Id - 32))) != 0);
		
		
		else
			
			
				 0);
			
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_get_status(CHAL_HANDLE h, cUInt32 cpu, Chal_Intc_Mask_t *mask )  
/* 
 *//* Description:   Get interrupt status
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         maks: pointer to intc mask 
/* 
 *//* 
 *//* Notes:
/* 
 */static inline void chal_intc_get_status(CHAL_HANDLE h, cUInt32 cpu,
					Chal_Intc_Mask_t * status) 
{
	
		
		
		
		
		
	
	else
		
		
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: Boolean chal_intc_is_interrupt_active(CHAL_HANDLE h, cUInt32 Id  ) 
/* 
 *//* Description:   Is an interrupt triggered or not.
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* return:        TRUE or FALSE
/* 
 *//* Notes:
/* 
 */static inline Boolean chal_intc_is_interrupt_active(CHAL_HANDLE h, cUInt32 Id) 
{
	
		
	
		
			 0);
	
	else if (Id >= 32)	/* Id < 64
		return ((INTC_READ32(INTC_ISR1_OFFSET) & (1 << (Id - 32))) !=
			0);
	
	else			/* Id < 32 
		return ((INTC_READ32(INTC_ISR0_OFFSET) & (1 << Id)) != 0);



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_get_irq_trigger(CHAL_HANDLE h, cUInt32 Id) 
/* 
 *//* Description:   Get an interrupt triggering mechanism.
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* return:        EdgeSetting: low, high, rising, falling, or either
/* 
 *//* Notes:
/* 
 */static inline UInt32 chal_intc_get_irq_trigger(CHAL_HANDLE h, cUInt32 Id) 
{
	
	
		
		
		
		
		
	
	else if (Id < 16)
		
		
		
		
		
	
	else if (Id < 24)
		
		
		
		
		
	
	else if (Id < 32)
		
		
		
		
		
	
	else if (Id < 40)
		
		
		
		
		
	
	else if (Id < 48)
		
		
		
		
		
	
	else if (Id < 56)
		
		
		
		
		
	
	else if (Id < 64)
		
		
		
		
		
	
	else if (Id < 72)
		
		
		
		
		
	
	else if (Id < 80)
		
		
		
		
		
	
	else if (Id < 88)
		
		
		
		
		
	
	else if (Id < 96)
		
		
		
		
		
	
	else
		
		
		
	



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_set_irq_trigger(CHAL_HANDLE h, cUInt32 Id, cUInt32 EdgeSetting ) 
/* 
 *//* Description:   Set an interrupt triggering mechanism.
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* param:         EdgeSetting: low, high, rising, falling, or either
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_set_irq_trigger(CHAL_HANDLE h, cUInt32 Id,
					     cUInt32 EdgeSetting) 
{
	
	
		
		
		
		
			      rc | (EdgeSetting << (Id * 4)));
		
	
	else if (Id < 16)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 8) * 4)));
		
	
	else if (Id < 24)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 16) * 4)));
		
	
	else if (Id < 32)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 24) * 4)));
		
	
	else if (Id < 40)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 32) * 4)));
		
	
	else if (Id < 48)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 40) * 4)));
		
	
	else if (Id < 56)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 48) * 4)));
		
	
	else if (Id < 64)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 56) * 4)));
		
	
	else if (Id < 72)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 64) * 4)));
		
	
	else if (Id < 80)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 72) * 4)));
		
	
	else if (Id < 88)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 80) * 4)));
		
	
	else if (Id < 96)
		
		
		
		
			      rc | (EdgeSetting << ((Id - 88) * 4)));
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_set_soft_int(CHAL_HANDLE h, cUInt32 Id  ) 
/* 
 *//* Description:   set a soft interrupt
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* 
 *//* Notes:
/* 
 */static inline void chal_intc_set_soft_int(CHAL_HANDLE h, cUInt32 Id) 
{
	
		
	
		
	
	else if (Id >= 32)	/* Id < 64
		INTC_WRITE32(INTC_ISWI1R_OFFSET, 1 << (Id - 32));
	
	else			/* Id < 32 
		INTC_WRITE32(INTC_ISWIR0_OFFSET, 1 << Id);



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_clear_soft_int(CHAL_HANDLE h, cUInt32 Id  ) 
/* 
 *//* Description:   Clear a soft interrupt
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: Interrupt Id 
/* 
 *//* 
 *//* Notes:
/* 
 */static inline void chal_intc_clear_soft_int(CHAL_HANDLE h, cUInt32 Id) 
{
	
		
	
		
	
	else if (Id >= 32)	/* Id < 64
		INTC_WRITE32(INTC_ISWC1R_OFFSET, 1 << (Id - 32));
	
	else			/* Id < 32 
		INTC_WRITE32(INTC_ISWCR0_OFFSET, 1 << Id);



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_set_irq_config_reg( CHAL_HANDLE h, cUInt32 val)
/* 
 *//* Description:   Set Intc config register
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         val: value to set 
/* 
 *//* 
 *//* Notes:
/* 
 */static inline void chal_intc_set_irq_config_reg(CHAL_HANDLE h, cUInt32 val) 
{
	


/* ==============================================================================
/* 
 *//* Function Name: chal_intc_read_irq_config_reg( CHAL_HANDLE h)
/* 
 *//* Description:   read Intc config register
/* 
 *//* param:         h: cHal handle.
/* 
 *//* return:        value of the register
/* 
 *//* Notes:
/* 
 */static inline cUInt32 chal_intc_read_irq_config_reg(CHAL_HANDLE h) 
{
	



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_set_intr_to_fiq( CHAL_HANDLE h, cUInt32 Id)
/* 
 *//* Description:   Change interrupt to FIQ
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: interrupt id.
/* 
 *//* return:        
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_set_intr_to_fiq(CHAL_HANDLE h, cUInt32 Id) 
{
	
	
		
	
		
		
		
		
	
	else if (Id >= 32)
		
		
		
		
	
	else
		
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: chal_intc_set_intr_to_fiq( CHAL_HANDLE h, cUInt32 Id)
/* 
 *//* Description:   Change interrupt to IRQ
/* 
 *//* param:         h: cHal handle.
/* 
 *//* param:         Id: interrupt id.
/* 
 *//* return:        
/* 
 *//* Notes:
/* 
 */static inline void chal_intc_set_intr_to_irq(CHAL_HANDLE h, cUInt32 Id) 
{
	
	
		
	
		
		
		
		
	
	else if (Id >= 32)
		
		
		
		
	
	else
		
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: CHAL_HANDLE chal_intc_gate_wcdma_clock(CHAL_HANDLE h, cUInt8 val)
/* 
 *//* Description:   Gate WCDMA ARM9 clock
/*                0: WCDMA ARM9 clock gate is not affected by ARM9 JTAG TCK
/*                1: WCDMA ARM9 clock is turned on upon posedee of ARM9 JTAG TCK
/* 
 *//* param:         h: cHal handle
/* 
 *//* param:         val: gate source
/* 
 *//* Notes:
/* 
 */void chal_intc_gate_wcdma_clock(CHAL_HANDLE h, cUInt8 val) 
{
	
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: CHAL_HANDLE chal_intc_set_wcdma_clock(CHAL_HANDLE h, cUInt8 val)
/* 
 *//* Description:   Configure WCDMA ARM9 clock
/*                0: WCDMA ARM9 clock is turned on
/*                1: WCDMA ARM9 clock is turned off
/* 
 *//* param:         h: cHal handle
/* 
 *//* param:         val: set value
/* 
 *//* Notes:
/* 
 */void chal_intc_set_wcdma_clock(CHAL_HANDLE h, cUInt8 val) 
{
	
	
	
		
		
		
	
	else
		
		
		



/* ==============================================================================
/* 
 *//* Function Name: CHAL_HANDLE chal_intc_init(const cUInt32 DeviceBaseAddress)
/* 
 *//* Description:   Init cHAL Intc module
/* 
 *//* param:         DeviceBaseAddress: base virtual addr of intc block
/* 
 *//* 
 *//* Notes:
/* 
 */    CHAL_HANDLE chal_intc_init(const cUInt32 DeviceBaseAddress) 
{
	



#endif /* _CHAL_INTC_INC_H_