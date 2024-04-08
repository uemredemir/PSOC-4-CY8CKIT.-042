/*******************************************************************************
* File Name: sutun.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_sutun_ALIASES_H) /* Pins sutun_ALIASES_H */
#define CY_PINS_sutun_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define sutun_0			(sutun__0__PC)
#define sutun_0_PS		(sutun__0__PS)
#define sutun_0_PC		(sutun__0__PC)
#define sutun_0_DR		(sutun__0__DR)
#define sutun_0_SHIFT	(sutun__0__SHIFT)
#define sutun_0_INTR	((uint16)((uint16)0x0003u << (sutun__0__SHIFT*2u)))

#define sutun_1			(sutun__1__PC)
#define sutun_1_PS		(sutun__1__PS)
#define sutun_1_PC		(sutun__1__PC)
#define sutun_1_DR		(sutun__1__DR)
#define sutun_1_SHIFT	(sutun__1__SHIFT)
#define sutun_1_INTR	((uint16)((uint16)0x0003u << (sutun__1__SHIFT*2u)))

#define sutun_2			(sutun__2__PC)
#define sutun_2_PS		(sutun__2__PS)
#define sutun_2_PC		(sutun__2__PC)
#define sutun_2_DR		(sutun__2__DR)
#define sutun_2_SHIFT	(sutun__2__SHIFT)
#define sutun_2_INTR	((uint16)((uint16)0x0003u << (sutun__2__SHIFT*2u)))

#define sutun_3			(sutun__3__PC)
#define sutun_3_PS		(sutun__3__PS)
#define sutun_3_PC		(sutun__3__PC)
#define sutun_3_DR		(sutun__3__DR)
#define sutun_3_SHIFT	(sutun__3__SHIFT)
#define sutun_3_INTR	((uint16)((uint16)0x0003u << (sutun__3__SHIFT*2u)))

#define sutun_4			(sutun__4__PC)
#define sutun_4_PS		(sutun__4__PS)
#define sutun_4_PC		(sutun__4__PC)
#define sutun_4_DR		(sutun__4__DR)
#define sutun_4_SHIFT	(sutun__4__SHIFT)
#define sutun_4_INTR	((uint16)((uint16)0x0003u << (sutun__4__SHIFT*2u)))

#define sutun_5			(sutun__5__PC)
#define sutun_5_PS		(sutun__5__PS)
#define sutun_5_PC		(sutun__5__PC)
#define sutun_5_DR		(sutun__5__DR)
#define sutun_5_SHIFT	(sutun__5__SHIFT)
#define sutun_5_INTR	((uint16)((uint16)0x0003u << (sutun__5__SHIFT*2u)))

#define sutun_6			(sutun__6__PC)
#define sutun_6_PS		(sutun__6__PS)
#define sutun_6_PC		(sutun__6__PC)
#define sutun_6_DR		(sutun__6__DR)
#define sutun_6_SHIFT	(sutun__6__SHIFT)
#define sutun_6_INTR	((uint16)((uint16)0x0003u << (sutun__6__SHIFT*2u)))

#define sutun_7			(sutun__7__PC)
#define sutun_7_PS		(sutun__7__PS)
#define sutun_7_PC		(sutun__7__PC)
#define sutun_7_DR		(sutun__7__DR)
#define sutun_7_SHIFT	(sutun__7__SHIFT)
#define sutun_7_INTR	((uint16)((uint16)0x0003u << (sutun__7__SHIFT*2u)))

#define sutun_INTR_ALL	 ((uint16)(sutun_0_INTR| sutun_1_INTR| sutun_2_INTR| sutun_3_INTR| sutun_4_INTR| sutun_5_INTR| sutun_6_INTR| sutun_7_INTR))


#endif /* End Pins sutun_ALIASES_H */


/* [] END OF FILE */
