/*******************************************************************************
* File Name: cols.h  
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

#if !defined(CY_PINS_cols_H) /* Pins cols_H */
#define CY_PINS_cols_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cols_aliases.h"


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
} cols_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   cols_Read(void);
void    cols_Write(uint8 value);
uint8   cols_ReadDataReg(void);
#if defined(cols__PC) || (CY_PSOC4_4200L) 
    void    cols_SetDriveMode(uint8 mode);
#endif
void    cols_SetInterruptMode(uint16 position, uint16 mode);
uint8   cols_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void cols_Sleep(void); 
void cols_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(cols__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define cols_DRIVE_MODE_BITS        (3)
    #define cols_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - cols_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the cols_SetDriveMode() function.
         *  @{
         */
        #define cols_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define cols_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define cols_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define cols_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define cols_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define cols_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define cols_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define cols_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define cols_MASK               cols__MASK
#define cols_SHIFT              cols__SHIFT
#define cols_WIDTH              8u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in cols_SetInterruptMode() function.
     *  @{
     */
        #define cols_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define cols_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define cols_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define cols_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(cols__SIO)
    #define cols_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(cols__PC) && (CY_PSOC4_4200L)
    #define cols_USBIO_ENABLE               ((uint32)0x80000000u)
    #define cols_USBIO_DISABLE              ((uint32)(~cols_USBIO_ENABLE))
    #define cols_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define cols_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define cols_USBIO_ENTER_SLEEP          ((uint32)((1u << cols_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << cols_USBIO_SUSPEND_DEL_SHIFT)))
    #define cols_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << cols_USBIO_SUSPEND_SHIFT)))
    #define cols_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << cols_USBIO_SUSPEND_DEL_SHIFT)))
    #define cols_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(cols__PC)
    /* Port Configuration */
    #define cols_PC                 (* (reg32 *) cols__PC)
#endif
/* Pin State */
#define cols_PS                     (* (reg32 *) cols__PS)
/* Data Register */
#define cols_DR                     (* (reg32 *) cols__DR)
/* Input Buffer Disable Override */
#define cols_INP_DIS                (* (reg32 *) cols__PC2)

/* Interrupt configuration Registers */
#define cols_INTCFG                 (* (reg32 *) cols__INTCFG)
#define cols_INTSTAT                (* (reg32 *) cols__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define cols_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(cols__SIO)
    #define cols_SIO_REG            (* (reg32 *) cols__SIO)
#endif /* (cols__SIO_CFG) */

/* USBIO registers */
#if !defined(cols__PC) && (CY_PSOC4_4200L)
    #define cols_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define cols_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define cols_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define cols_DRIVE_MODE_SHIFT       (0x00u)
#define cols_DRIVE_MODE_MASK        (0x07u << cols_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins cols_H */


/* [] END OF FILE */
