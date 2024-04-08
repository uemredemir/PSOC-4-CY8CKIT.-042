/*******************************************************************************
* File Name: sutun.h  
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

#if !defined(CY_PINS_sutun_H) /* Pins sutun_H */
#define CY_PINS_sutun_H

#include "cytypes.h"
#include "cyfitter.h"
#include "sutun_aliases.h"


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
} sutun_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   sutun_Read(void);
void    sutun_Write(uint8 value);
uint8   sutun_ReadDataReg(void);
#if defined(sutun__PC) || (CY_PSOC4_4200L) 
    void    sutun_SetDriveMode(uint8 mode);
#endif
void    sutun_SetInterruptMode(uint16 position, uint16 mode);
uint8   sutun_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void sutun_Sleep(void); 
void sutun_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(sutun__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define sutun_DRIVE_MODE_BITS        (3)
    #define sutun_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - sutun_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the sutun_SetDriveMode() function.
         *  @{
         */
        #define sutun_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define sutun_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define sutun_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define sutun_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define sutun_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define sutun_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define sutun_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define sutun_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define sutun_MASK               sutun__MASK
#define sutun_SHIFT              sutun__SHIFT
#define sutun_WIDTH              8u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in sutun_SetInterruptMode() function.
     *  @{
     */
        #define sutun_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define sutun_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define sutun_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define sutun_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(sutun__SIO)
    #define sutun_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(sutun__PC) && (CY_PSOC4_4200L)
    #define sutun_USBIO_ENABLE               ((uint32)0x80000000u)
    #define sutun_USBIO_DISABLE              ((uint32)(~sutun_USBIO_ENABLE))
    #define sutun_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define sutun_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define sutun_USBIO_ENTER_SLEEP          ((uint32)((1u << sutun_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << sutun_USBIO_SUSPEND_DEL_SHIFT)))
    #define sutun_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << sutun_USBIO_SUSPEND_SHIFT)))
    #define sutun_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << sutun_USBIO_SUSPEND_DEL_SHIFT)))
    #define sutun_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(sutun__PC)
    /* Port Configuration */
    #define sutun_PC                 (* (reg32 *) sutun__PC)
#endif
/* Pin State */
#define sutun_PS                     (* (reg32 *) sutun__PS)
/* Data Register */
#define sutun_DR                     (* (reg32 *) sutun__DR)
/* Input Buffer Disable Override */
#define sutun_INP_DIS                (* (reg32 *) sutun__PC2)

/* Interrupt configuration Registers */
#define sutun_INTCFG                 (* (reg32 *) sutun__INTCFG)
#define sutun_INTSTAT                (* (reg32 *) sutun__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define sutun_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(sutun__SIO)
    #define sutun_SIO_REG            (* (reg32 *) sutun__SIO)
#endif /* (sutun__SIO_CFG) */

/* USBIO registers */
#if !defined(sutun__PC) && (CY_PSOC4_4200L)
    #define sutun_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define sutun_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define sutun_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define sutun_DRIVE_MODE_SHIFT       (0x00u)
#define sutun_DRIVE_MODE_MASK        (0x07u << sutun_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins sutun_H */


/* [] END OF FILE */
