/*******************************************************************************
* File Name: cols.h  
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

#if !defined(CY_PINS_cols_ALIASES_H) /* Pins cols_ALIASES_H */
#define CY_PINS_cols_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define cols_0			(cols__0__PC)
#define cols_0_PS		(cols__0__PS)
#define cols_0_PC		(cols__0__PC)
#define cols_0_DR		(cols__0__DR)
#define cols_0_SHIFT	(cols__0__SHIFT)
#define cols_0_INTR	((uint16)((uint16)0x0003u << (cols__0__SHIFT*2u)))

#define cols_1			(cols__1__PC)
#define cols_1_PS		(cols__1__PS)
#define cols_1_PC		(cols__1__PC)
#define cols_1_DR		(cols__1__DR)
#define cols_1_SHIFT	(cols__1__SHIFT)
#define cols_1_INTR	((uint16)((uint16)0x0003u << (cols__1__SHIFT*2u)))

#define cols_2			(cols__2__PC)
#define cols_2_PS		(cols__2__PS)
#define cols_2_PC		(cols__2__PC)
#define cols_2_DR		(cols__2__DR)
#define cols_2_SHIFT	(cols__2__SHIFT)
#define cols_2_INTR	((uint16)((uint16)0x0003u << (cols__2__SHIFT*2u)))

#define cols_3			(cols__3__PC)
#define cols_3_PS		(cols__3__PS)
#define cols_3_PC		(cols__3__PC)
#define cols_3_DR		(cols__3__DR)
#define cols_3_SHIFT	(cols__3__SHIFT)
#define cols_3_INTR	((uint16)((uint16)0x0003u << (cols__3__SHIFT*2u)))

#define cols_4			(cols__4__PC)
#define cols_4_PS		(cols__4__PS)
#define cols_4_PC		(cols__4__PC)
#define cols_4_DR		(cols__4__DR)
#define cols_4_SHIFT	(cols__4__SHIFT)
#define cols_4_INTR	((uint16)((uint16)0x0003u << (cols__4__SHIFT*2u)))

#define cols_5			(cols__5__PC)
#define cols_5_PS		(cols__5__PS)
#define cols_5_PC		(cols__5__PC)
#define cols_5_DR		(cols__5__DR)
#define cols_5_SHIFT	(cols__5__SHIFT)
#define cols_5_INTR	((uint16)((uint16)0x0003u << (cols__5__SHIFT*2u)))

#define cols_6			(cols__6__PC)
#define cols_6_PS		(cols__6__PS)
#define cols_6_PC		(cols__6__PC)
#define cols_6_DR		(cols__6__DR)
#define cols_6_SHIFT	(cols__6__SHIFT)
#define cols_6_INTR	((uint16)((uint16)0x0003u << (cols__6__SHIFT*2u)))

#define cols_7			(cols__7__PC)
#define cols_7_PS		(cols__7__PS)
#define cols_7_PC		(cols__7__PC)
#define cols_7_DR		(cols__7__DR)
#define cols_7_SHIFT	(cols__7__SHIFT)
#define cols_7_INTR	((uint16)((uint16)0x0003u << (cols__7__SHIFT*2u)))

#define cols_INTR_ALL	 ((uint16)(cols_0_INTR| cols_1_INTR| cols_2_INTR| cols_3_INTR| cols_4_INTR| cols_5_INTR| cols_6_INTR| cols_7_INTR))


#endif /* End Pins cols_ALIASES_H */


/* [] END OF FILE */
