/**
 *
 * @file AES_StructPeripheral.h
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

#ifndef AES_PERIPHERAL_HEADER_AES_STRUCTPERIPHERAL_H_
#define AES_PERIPHERAL_HEADER_AES_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint8_t DI8[2U];
        volatile UBase_t DI16;
        AES_DI8_t DI8_bits[2U];
        AES_DI16_t DI16_bits;
    };
    const UBase_t reserved0[1U];
    union
    {
        volatile UBase_t INIRES;
        volatile UBase_t INI;
        volatile const UBase_t RES;
        AES_INIRES_t INIRES_bits;
        AES_INI_t INI_bits;
        AES_RES_t RES_bits;
    };
}AES_t;

#endif /* AES_PERIPHERAL_HEADER_AES_STRUCTPERIPHERAL_H_ */
