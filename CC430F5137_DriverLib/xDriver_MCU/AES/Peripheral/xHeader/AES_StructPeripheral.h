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
        volatile UBase_t ACTL0;
        AES_ACTL0_t ACTL0_bits;
    };
    const UBase_t reserved0[1U];
    union
    {
        volatile UBase_t ASTAT;
        AES_ASTAT_t ASTAT_bits;
    };
    union
    {
        volatile uint8_t AKEY8[2U];
        volatile UBase_t AKEY16;
        AES_AKEY8_t AKEY8_bits[2U];
        AES_AKEY16_t AKEY16_bits;
        AES_AKEY_t AKEY_bits;
    };
    union
    {
        volatile uint8_t ADIN8[2U];
        volatile UBase_t ADIN16;
        AES_ADIN8_t ADIN8_bits[2U];
        AES_ADIN16_t ADIN16_bits;
        AES_ADIN_t ADIN_bits;
    };
    union
    {
        volatile uint8_t ADOUT8[2U];
        volatile UBase_t ADOUT16;
        AES_ADOUT8_t ADOUT8_bits[2U];
        AES_ADOUT16_t ADOUT16_bits;
        AES_ADOUT_t ADOUT_bits;
    };
}AES_t;

#endif /* AES_PERIPHERAL_HEADER_AES_STRUCTPERIPHERAL_H_ */
