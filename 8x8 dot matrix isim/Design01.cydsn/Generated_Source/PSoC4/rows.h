/*******************************************************************************
* File Name: rows.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_rows_H) /* Pins rows_H */
#define CY_PINS_rows_H

#include "cytypes.h"
#include "cyfitter.h"
#include "rows_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} rows_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   rows_Read(void);
void    rows_Write(uint8 value);
uint8   rows_ReadDataReg(void);
#if defined(rows__PC) || (CY_PSOC4_4200L) 
    void    rows_SetDriveMode(uint8 mode);
#endif
void    rows_SetInterruptMode(uint16 position, uint16 mode);
uint8   rows_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void rows_Sleep(void); 
void rows_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(rows__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define rows_DRIVE_MODE_BITS        (3)
    #define rows_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - rows_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the rows_SetDriveMode() function.
         *  @{
         */
        #define rows_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define rows_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define rows_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define rows_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define rows_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define rows_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define rows_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define rows_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define rows_MASK               rows__MASK
#define rows_SHIFT              rows__SHIFT
#define rows_WIDTH              8u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in rows_SetInterruptMode() function.
     *  @{
     */
        #define rows_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define rows_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define rows_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define rows_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(rows__SIO)
    #define rows_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(rows__PC) && (CY_PSOC4_4200L)
    #define rows_USBIO_ENABLE               ((uint32)0x80000000u)
    #define rows_USBIO_DISABLE              ((uint32)(~rows_USBIO_ENABLE))
    #define rows_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define rows_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define rows_USBIO_ENTER_SLEEP          ((uint32)((1u << rows_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << rows_USBIO_SUSPEND_DEL_SHIFT)))
    #define rows_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << rows_USBIO_SUSPEND_SHIFT)))
    #define rows_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << rows_USBIO_SUSPEND_DEL_SHIFT)))
    #define rows_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(rows__PC)
    /* Port Configuration */
    #define rows_PC                 (* (reg32 *) rows__PC)
#endif
/* Pin State */
#define rows_PS                     (* (reg32 *) rows__PS)
/* Data Register */
#define rows_DR                     (* (reg32 *) rows__DR)
/* Input Buffer Disable Override */
#define rows_INP_DIS                (* (reg32 *) rows__PC2)

/* Interrupt configuration Registers */
#define rows_INTCFG                 (* (reg32 *) rows__INTCFG)
#define rows_INTSTAT                (* (reg32 *) rows__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define rows_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(rows__SIO)
    #define rows_SIO_REG            (* (reg32 *) rows__SIO)
#endif /* (rows__SIO_CFG) */

/* USBIO registers */
#if !defined(rows__PC) && (CY_PSOC4_4200L)
    #define rows_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define rows_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define rows_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define rows_DRIVE_MODE_SHIFT       (0x00u)
#define rows_DRIVE_MODE_MASK        (0x07u << rows_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins rows_H */


/* [] END OF FILE */
