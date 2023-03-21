/**
 *
 * @file SFR_Enum.h
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

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_ENUM_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    SFR_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    SFR_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    SFR_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    SFR_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    SFR_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    SFR_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}SFR_nERROR;

typedef enum
{
    SFR_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    SFR_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    SFR_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} SFR_nSTATE;

typedef enum
{
    SFR_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    SFR_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    SFR_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} SFR_nSTATUS;

typedef enum
{
    SFR_enFALSE = (UBase_t) FALSE,
    SFR_enTRUE = (UBase_t) TRUE,
    SFR_enPENDSTATE_UNDEF = UNDEF_VALUE,
}SFR_nBOOLEAN;

typedef enum
{
    SFR_enRESETPIN_RESISTOR_NONE = 0U,
    SFR_enRESETPIN_RESISTOR_PULLDOWN = 0x10U,
    SFR_enRESETPIN_RESISTOR_PULLUP = 0x11U,
    SFR_enRESETPIN_RESISTOR_UNDEF = UNDEF_VALUE,
}SFR_nRESETPIN_RESISTOR;

typedef enum
{
    SFR_enRESETPIN_EDGE_RISING = 0x0U,
    SFR_enRESETPIN_EDGE_FALLING = 0x1U,
    SFR_enRESETPIN_EDGE_UNDEF = UNDEF_VALUE,
}SFR_nRESETPIN_EDGE;

typedef enum
{
    SFR_enRESETPIN_MODE_RESET = 0x0U,
    SFR_enRESETPIN_MODE_NMI = 0x1U,
    SFR_enRESETPIN_MODE_UNDEF = UNDEF_VALUE,
}SFR_nRESETPIN_MODE;

typedef enum
{
    SFR_enINTERRUPT_WDT = 0U,
    SFR_enINTERRUPT_OSC = 1U,
    SFR_enINTERRUPT_VMA = 2U,
    SFR_enINTERRUPT_NMI = 3U,
    SFR_enINTERRUPT_FLASH = 4U,
    SFR_enINTERRUPT_JMBIN = 5U,
    SFR_enINTERRUPT_JMBOUT = 6U,
    SFR_enINTERRUPT_MAX = 7U,
    SFR_enINTERRUPT_UNDEF = UNDEF_VALUE,
}SFR_nINTERRUPT;

typedef enum
{
    /*BOR*/
    SFR_enINTMASK_WDT = 0x1U,
    SFR_enINTMASK_OSC = 0x2U,
    SFR_enINTMASK_VMA = 0x8U,
    SFR_enINTMASK_NMI = 0x10U,
    SFR_enINTMASK_FLASH = 0x20U,
    SFR_enINTMASK_JMBIN = 0x40U,
    SFR_enINTMASK_JMBOUT = 0x80U,

    SFR_enINTMASK_ALL = 0xFFU,
    SFR_enINTMASK_MAX = 0x100U,
    SFR_enINTMASK_UNDEF = UNDEF_VALUE,
}SFR_nINTMASK;



typedef MCU_Register_t SFR_Register_t;
typedef MCU_pvfIRQVectorHandler_t SFR_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t SFR_puxfIRQSourceHandler_t;


#endif /* XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_ENUM_H_ */
