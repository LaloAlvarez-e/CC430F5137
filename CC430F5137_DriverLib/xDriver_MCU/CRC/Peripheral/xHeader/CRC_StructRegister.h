/**
 *
 * @file CRC_StructRegister.h
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

#ifndef CRC_PERIPHERAL_HEADER_CRC_STRUCTREGISTER_H_
#define CRC_PERIPHERAL_HEADER_CRC_STRUCTREGISTER_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

typedef volatile struct
{
    volatile uint8_t DATA : 8;
}CRC_DI8_t;

typedef volatile struct
{
    volatile UBase_t DATA : 16;
}CRC_DI16_t;

typedef volatile struct
{
    volatile UBase_t DATA : 16;
}CRC_DI_t;

typedef volatile struct
{
    volatile UBase_t INIT : 16;
}CRC_INI_t;

typedef volatile struct
{
    volatile const UBase_t RESULT : 16;
}CRC_RES_t;

typedef volatile struct
{
    volatile UBase_t INIRES : 16;
}CRC_INIRES_t;

#endif /* CRC_PERIPHERAL_HEADER_CRC_STRUCTREGISTER_H_ */
