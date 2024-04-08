/*******************************************************************************
* File Name: COL_PIN.h  
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

#if !defined(CY_PINS_COL_PIN_ALIASES_H) /* Pins COL_PIN_ALIASES_H */
#define CY_PINS_COL_PIN_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"


/***************************************
*              Constants        
***************************************/
#define COL_PIN_0			(COL_PIN__0__PC)
#define COL_PIN_0_PS		(COL_PIN__0__PS)
#define COL_PIN_0_PC		(COL_PIN__0__PC)
#define COL_PIN_0_DR		(COL_PIN__0__DR)
#define COL_PIN_0_SHIFT	(COL_PIN__0__SHIFT)
#define COL_PIN_0_INTR	((uint16)((uint16)0x0003u << (COL_PIN__0__SHIFT*2u)))

#define COL_PIN_INTR_ALL	 ((uint16)(COL_PIN_0_INTR))


#endif /* End Pins COL_PIN_ALIASES_H */


/* [] END OF FILE */
