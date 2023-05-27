/**
 *
 * @file AES_StructRegister.h
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

#ifndef AES_PERIPHERAL_HEADER_AES_STRUCTREGISTER_H_
#define AES_PERIPHERAL_HEADER_AES_STRUCTREGISTER_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

typedef volatile struct
{
    volatile uint8_t DATA : 8;
}AES_DI8_t;

typedef volatile struct
{
    volatile UBase_t DATA : 16;
}AES_DI16_t;

typedef volatile struct
{
    volatile UBase_t DATA : 16;
}AES_DI_t;

typedef volatile struct
{
    volatile UBase_t INIT : 16;
}AES_INI_t;

typedef volatile struct
{
    volatile const UBase_t RESULT : 16;
}AES_RES_t;

typedef volatile struct
{
    volatile UBase_t INIRES : 16;
}AES_INIRES_t;

#endif /* AES_PERIPHERAL_HEADER_AES_STRUCTREGISTER_H_ */
