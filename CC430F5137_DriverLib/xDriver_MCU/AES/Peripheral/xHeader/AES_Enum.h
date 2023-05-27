/**
 *
 * @file AES_Enum.h
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

#ifndef AES_PERIPHERAL_HEADER_AES_ENUM_H_
#define AES_PERIPHERAL_HEADER_AES_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    AES_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    AES_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    AES_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    AES_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    AES_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    AES_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}AES_nERROR;

typedef enum
{
    AES_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    AES_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    AES_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
}AES_nSTATE;

typedef enum
{
    AES_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    AES_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    AES_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
}AES_nSTATUS;

typedef enum
{
    AES_enFALSE = (UBase_t) FALSE,
    AES_enTRUE = (UBase_t) TRUE,
    AES_enBOOLEAN_UNDEF = UNDEF_VALUE,
}AES_nBOOLEAN;

typedef MCU_Register_t AES_Register_t;
typedef MCU_Register8Bits_t AES_Register8Bits_t;

typedef MCU_pvfIRQVectorHandler_t AES_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t AES_puxfIRQSourceHandler_t;

#endif /* AES_PERIPHERAL_HEADER_AES_ENUM_H_ */
