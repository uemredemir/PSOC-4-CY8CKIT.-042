/*******************************************************************************
* File Name: Pin_Cols.h  
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

#if !defined(CY_PINS_Pin_Cols_ALIASES_H) /* Pins Pin_Cols_ALIASES_H */
#define CY_PINS_Pin_Cols_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define Pin_Cols_0			(Pin_Cols__0__PC)
#define Pin_Cols_0_PS		(Pin_Cols__0__PS)
#define Pin_Cols_0_PC		(Pin_Cols__0__PC)
#define Pin_Cols_0_DR		(Pin_Cols__0__DR)
#define Pin_Cols_0_SHIFT	(Pin_Cols__0__SHIFT)
#define Pin_Cols_0_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__0__SHIFT*2u)))

#define Pin_Cols_1			(Pin_Cols__1__PC)
#define Pin_Cols_1_PS		(Pin_Cols__1__PS)
#define Pin_Cols_1_PC		(Pin_Cols__1__PC)
#define Pin_Cols_1_DR		(Pin_Cols__1__DR)
#define Pin_Cols_1_SHIFT	(Pin_Cols__1__SHIFT)
#define Pin_Cols_1_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__1__SHIFT*2u)))

#define Pin_Cols_2			(Pin_Cols__2__PC)
#define Pin_Cols_2_PS		(Pin_Cols__2__PS)
#define Pin_Cols_2_PC		(Pin_Cols__2__PC)
#define Pin_Cols_2_DR		(Pin_Cols__2__DR)
#define Pin_Cols_2_SHIFT	(Pin_Cols__2__SHIFT)
#define Pin_Cols_2_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__2__SHIFT*2u)))

#define Pin_Cols_3			(Pin_Cols__3__PC)
#define Pin_Cols_3_PS		(Pin_Cols__3__PS)
#define Pin_Cols_3_PC		(Pin_Cols__3__PC)
#define Pin_Cols_3_DR		(Pin_Cols__3__DR)
#define Pin_Cols_3_SHIFT	(Pin_Cols__3__SHIFT)
#define Pin_Cols_3_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__3__SHIFT*2u)))

#define Pin_Cols_4			(Pin_Cols__4__PC)
#define Pin_Cols_4_PS		(Pin_Cols__4__PS)
#define Pin_Cols_4_PC		(Pin_Cols__4__PC)
#define Pin_Cols_4_DR		(Pin_Cols__4__DR)
#define Pin_Cols_4_SHIFT	(Pin_Cols__4__SHIFT)
#define Pin_Cols_4_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__4__SHIFT*2u)))

#define Pin_Cols_5			(Pin_Cols__5__PC)
#define Pin_Cols_5_PS		(Pin_Cols__5__PS)
#define Pin_Cols_5_PC		(Pin_Cols__5__PC)
#define Pin_Cols_5_DR		(Pin_Cols__5__DR)
#define Pin_Cols_5_SHIFT	(Pin_Cols__5__SHIFT)
#define Pin_Cols_5_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__5__SHIFT*2u)))

#define Pin_Cols_6			(Pin_Cols__6__PC)
#define Pin_Cols_6_PS		(Pin_Cols__6__PS)
#define Pin_Cols_6_PC		(Pin_Cols__6__PC)
#define Pin_Cols_6_DR		(Pin_Cols__6__DR)
#define Pin_Cols_6_SHIFT	(Pin_Cols__6__SHIFT)
#define Pin_Cols_6_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__6__SHIFT*2u)))

#define Pin_Cols_7			(Pin_Cols__7__PC)
#define Pin_Cols_7_PS		(Pin_Cols__7__PS)
#define Pin_Cols_7_PC		(Pin_Cols__7__PC)
#define Pin_Cols_7_DR		(Pin_Cols__7__DR)
#define Pin_Cols_7_SHIFT	(Pin_Cols__7__SHIFT)
#define Pin_Cols_7_INTR	((uint16)((uint16)0x0003u << (Pin_Cols__7__SHIFT*2u)))

#define Pin_Cols_INTR_ALL	 ((uint16)(Pin_Cols_0_INTR| Pin_Cols_1_INTR| Pin_Cols_2_INTR| Pin_Cols_3_INTR| Pin_Cols_4_INTR| Pin_Cols_5_INTR| Pin_Cols_6_INTR| Pin_Cols_7_INTR))


#endif /* End Pins Pin_Cols_ALIASES_H */


/* [] END OF FILE */
