/**
 *
 * @file CRC_Enum.h
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

#ifndef CRC_PERIPHERAL_HEADER_CRC_ENUM_H_
#define CRC_PERIPHERAL_HEADER_CRC_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    CRC_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    CRC_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    CRC_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    CRC_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    CRC_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    CRC_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}CRC_nERROR;

typedef enum
{
    CRC_enMODULE_0 = 0U,
    CRC_enMODULE_MAX = 1U,
    CRC_enMODULE_UNDEF = UNDEF_VALUE,
}CRC_nMODULE;

typedef MCU_Register_t CRC_Register_t;
typedef MCU_Register8Bits_t CRC_Register8Bits_t;


#endif /* CRC_PERIPHERAL_HEADER_CRC_ENUM_H_ */
