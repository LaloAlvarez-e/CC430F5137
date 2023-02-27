/**
 *
 * @file PMM_Enum.h
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

#ifndef XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_ENUM_H_
#define XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    PMM_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    PMM_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    PMM_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    PMM_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    PMM_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    PMM_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}PMM_nERROR;

typedef enum
{
    PMM_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    PMM_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    PMM_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} PMM_nSTATE;

typedef enum
{
    PMM_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    PMM_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    PMM_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} PMM_nSTATUS;

typedef enum
{
    PMM_enFALSE = (UBase_t) FALSE,
    PMM_enTRUE = (UBase_t) TRUE,
    PMM_enPENDSTATE_UNDEF = UNDEF_VALUE,
}PMM_nBOOLEAN;

typedef enum
{
    PMM_enMODULE_0 = 0U,
    PMM_enMODULE_MAX = 1U,
    PMM_enMODULE_UNDEF = UNDEF_VALUE,
}PMM_nMODULE;

typedef enum
{
    PMM_enINTERRUPT_WDT = 0U,
    PMM_enINTERRUPT_OSC = 1U,
    PMM_enINTERRUPT_VMA = 2U,
    PMM_enINTERRUPT_NMI = 3U,
    PMM_enINTERRUPT_FLASH = 4U,
    PMM_enINTERRUPT_JMBIN = 5U,
    PMM_enINTERRUPT_JMBOUT = 6U,
    PMM_enINTERRUPT_MAX = 7U,
    PMM_enINTERRUPT_UNDEF = UNDEF_VALUE,
}PMM_nINTERRUPT;

typedef enum
{
    /*BOR*/
    PMM_enINTMASK_WDT = 0x1U,
    PMM_enINTMASK_OSC = 0x2U,
    PMM_enINTMASK_VMA = 0x8U,
    PMM_enINTMASK_NMI = 0x10U,
    PMM_enINTMASK_FLASH = 0x20U,
    PMM_enINTMASK_JMBIN = 0x40U,
    PMM_enINTMASK_JMBOUT = 0x80U,

    PMM_enINTMASK_ALL = 0xFFU,
    PMM_enINTMASK_MAX = 0x100U,
    PMM_enINTMASK_UNDEF = UNDEF_VALUE,
}PMM_nINTMASK;



typedef MCU_Register_t PMM_Register_t;
typedef MCU_pvfIRQVectorHandler_t PMM_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t PMM_puxfIRQSourceHandler_t;


#endif /* XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_ENUM_H_ */
