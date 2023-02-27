/**
 *
 * @file CRC_StructPeripheral.h
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

#ifndef CRC_PERIPHERAL_HEADER_CRC_STRUCTPERIPHERAL_H_
#define CRC_PERIPHERAL_HEADER_CRC_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile uint8_t DI8[2U];
        volatile UBase_t DI16;
        CRC_DI8_t DI8_bits[2U];
        CRC_DI16_t DI16_bits[2U];
    };
    const UBase_t reserved0[1U];
    union
    {
        volatile UBase_t INIRES;
        volatile UBase_t INI;
        volatile const UBase_t RES;
        CRC_INIRES_t INIRES_bits;
        CRC_INI_t INI_bits;
        CRC_RES_t RES_bits;
    };
}CRC_t;

#endif /* CRC_PERIPHERAL_HEADER_CRC_STRUCTPERIPHERAL_H_ */
