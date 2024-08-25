/**
 *
 * @file PORT_Enum.h
 * @copyright
 * @verbatim InDeviceMex 2021 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 9 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_ENUM_H_
#define XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    PORT_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    PORT_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    PORT_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    PORT_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    PORT_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    PORT_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}PORT_nERROR;

typedef enum
{
    PORT_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    PORT_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    PORT_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} PORT_nSTATE;

typedef enum
{
    PORT_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    PORT_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    PORT_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} PORT_nSTATUS;

typedef enum
{
    PORT_enFALSE = (UBase_t) FALSE,
    PORT_enTRUE = (UBase_t) TRUE,
    PORT_enPENDSTATE_UNDEF = UNDEF_VALUE,
}PORT_nBOOLEAN;

typedef enum
{
    PORT_enMODULE_1 = 0U,
    PORT_enMODULE_2 = 1U,
    PORT_enMODULE_3 = 2U,
    PORT_enMODULE_4 = 3U,
    PORT_enMODULE_5 = 4U,
    PORT_enMODULE_MAX = 5U,
    PORT_enMODULE_UNDEF = UNDEF_VALUE,
}PORT_nMODULE;

typedef enum
{
    PORT_enMODULE_EXT_A = 0U,
    PORT_enMODULE_EXT_B = 1U,
    PORT_enMODULE_EXT_C = 2U,
    PORT_enMODULE_EXT_J = 3U,
    PORT_enMODULE_EXT_MAX = 4U,
    PORT_enMODULE_EXT_UNDEF = UNDEF_VALUE,
}PORT_nMODULE_EXT;

typedef enum
{
    PORT_enPIN_0 = 0U,
    PORT_enPIN_1 = 1U,
    PORT_enPIN_2 = 2U,
    PORT_enPIN_3 = 3U,
    PORT_enPIN_4 = 4U,
    PORT_enPIN_5 = 5U,
    PORT_enPIN_6 = 6U,
    PORT_enPIN_7 = 7U,
    PORT_enPIN_8 = 8U,
    PORT_enPIN_9 = 9U,
    PORT_enPIN_10 = 10U,
    PORT_enPIN_11 = 11U,
    PORT_enPIN_12 = 12U,
    PORT_enPIN_13 = 13U,
    PORT_enPIN_14 = 14U,
    PORT_enPIN_15 = 15U,
    PORT_enPIN_MAX = 16U,
    PORT_enPIN_MAX_UNDEF = UNDEF_VALUE,
}PORT_nPIN;

typedef enum
{
    PORT_enPINMASK_NONE = 0x0000U,
    PORT_enPINMASK_0 = 0x0001U,
    PORT_enPINMASK_1 = 0x0002U,
    PORT_enPINMASK_2 = 0x0004U,
    PORT_enPINMASK_3 = 0x0008U,
    PORT_enPINMASK_4 = 0x0010U,
    PORT_enPINMASK_5 = 0x0020U,
    PORT_enPINMASK_6 = 0x0040U,
    PORT_enPINMASK_7 = 0x0080U,
    PORT_enPINMASK_8 = 0x0100U,
    PORT_enPINMASK_9 = 0x0200U,
    PORT_enPINMASK_10 = 0x0400U,
    PORT_enPINMASK_11 = 0x0800U,
    PORT_enPINMASK_12 = 0x1000U,
    PORT_enPINMASK_13 = 0x2000U,
    PORT_enPINMASK_14 = 0x4000U,
    PORT_enPINMASK_15 = 0x8000,
    PORT_enPINMASK_UNDEF = UNDEF_VALUE,
}PORT_nPINMASK;

typedef enum
{
    PORT_enDIR_INPUT = 0U,
    PORT_enDIR_OUTPUT = 1U,
    PORT_enDIR_UNDEF = UNDEF_VALUE,
}PORT_nDIR;

typedef enum
{
    PORT_enRESISTOR_NONE = 0x00U,
    PORT_enRESISTOR_PULLDOWN = 0x10U,
    PORT_enRESISTOR_PULLUP = 0x11U,
    PORT_enRESISTOR_UNDEF = UNDEF_VALUE,
}PORT_nRESISTOR;

typedef enum
{
    PORT_enRESTYPE_PULLDOWN = 0x0U,
    PORT_enRESTYPE_PULLUP = 0x1U,
    PORT_enRESTYPE_UNDEF = UNDEF_VALUE,
}PORT_nRESTYPE;

typedef enum
{
    PORT_enSEL_IO = 0U,
    PORT_enSEL_PERIPHERAL = 1U,
    PORT_enSEL_UNDEF = UNDEF_VALUE,
}PORT_nSEL;

typedef enum
{
    PORT_enDRIVE_REDUCED = 0U,
    PORT_enDRIVE_FULL = 1U,
    PORT_enDRIVE_UNDEF = UNDEF_VALUE,
}PORT_nDRIVE;

typedef enum
{
    PORT_enLEVEL_LOW = 0U,
    PORT_enLEVEL_HIGH = 1U,
    PORT_enLEVEL_UNDEF = UNDEF_VALUE,
}PORT_nLEVEL;

typedef enum
{
    /*SEL | DIR |  REN (DS) | OUT */
    PORT_enMODE_IO_INPUT = 0x0000U,
    PORT_enMODE_IO_INPUT_PULLDOWN = 0x0010U,
    PORT_enMODE_IO_INPUT_PULLUP = 0x0011U,

    PORT_enMODE_IO_OUTPUT_LOW = 0x0100U,
    PORT_enMODE_IO_OUTPUT_HIGH = 0x0101U,
    PORT_enMODE_IO_OUTPUT_FULL_LOW = 0x0110U,
    PORT_enMODE_IO_OUTPUT_FULL_HIGH = 0x0111U,

    /*SEL | DIR | REN (DS) | OUT */
    PORT_enMODE_PERIPHERAL_INPUT = 0x1000U,
    PORT_enMODE_PERIPHERAL_INPUT_PULLDOWN = 0x1010U,
    PORT_enMODE_PERIPHERAL_INPUT_PULLUP = 0x1011U,

    PORT_enMODE_PERIPHERAL_OUTPUT_LOW = 0x1100U,
    PORT_enMODE_PERIPHERAL_OUTPUT_HIGH = 0x1101U,
    PORT_enMODE_PERIPHERAL_OUTPUT_FULL_LOW = 0x1110U,
    PORT_enMODE_PERIPHERAL_OUTPUT_FULL_HIGH = 0x1111U,

    PORT_enMODE_UNDEF = UNDEF_VALUE,
}PORT_nMODE;

typedef enum
{
    PORT_enEDGE_RISING = 0U,
    PORT_enEDGE_FALLING = 1U,
    PORT_enEDGE_UNDEF = UNDEF_VALUE,
}PORT_nEDGE;

typedef MCU_Register8Bits_t PORT_Register8Bits_t;
typedef MCU_Register_t PORT_Register_t;
typedef MCU_pvfIRQVectorHandler_t PORT_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t PORT_puxfIRQSourceHandler_t;


#endif /* XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_ENUM_H_ */
