/**
 *
 * @file RAM_Enum.h
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef RAM_PERIPHERAL_HEADER_RAM_ENUM_H_
#define RAM_PERIPHERAL_HEADER_RAM_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    RAM_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    RAM_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    RAM_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    RAM_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    RAM_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    RAM_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}RAM_nERROR;

typedef enum
{
    RAM_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    RAM_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    RAM_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
}RAM_nSTATE;

typedef enum
{
    RAM_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    RAM_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    RAM_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
}RAM_nSTATUS;

typedef enum
{
    RAM_enFALSE = (UBase_t) FALSE,
    RAM_enTRUE = (UBase_t) TRUE,
    RAM_enBOOLEAN_UNDEF = UNDEF_VALUE,
}RAM_nBOOLEAN;

typedef enum
{
    RAM_enSECTOR_NONE = 0x0U,
    RAM_enSECTOR_0 = 0x1U,
    RAM_enSECTOR_1 = 0x2U,
    RAM_enSECTOR_2 = 0x4U,
    RAM_enSECTOR_3 = 0x8U,
    RAM_enSECTOR_4 = 0x10U,
    RAM_enSECTOR_5 = 0x20U,
    RAM_enSECTOR_6 = 0x40U,
    RAM_enSECTOR_7 = 0x80U,
    RAM_enSECTOR_ALL = 0xFFU,
    RAM_enSECTOR_MAX = 0x100U,
    RAM_enSECTOR_UNDEF = UNDEF_VALUE,
}RAM_nSECTOR;

typedef enum
{
    RAM_enKEY_WRITE = 0x5AU,
    RAM_enKEY_READ = 0x69U,
    RAM_enKEY_UNDEF = UNDEF_VALUE,
}RAM_nKEY;

typedef MCU_Register_t RAM_Register_t;

#endif /* RAM_PERIPHERAL_HEADER_RAM_ENUM_H_ */
