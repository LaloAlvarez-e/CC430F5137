/**
 *
 * @file TIMERA_StructPeripheral.h
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

#ifndef TIMERA_PERIPHERAL_HEADER_TIMERA_STRUCTPERIPHERAL_H_
#define TIMERA_PERIPHERAL_HEADER_TIMERA_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL;
        TIMERA_CTL_t CTL_bits;
    };
    union
    {
        volatile UBase_t CC_CTL[5U];
        TIMERA_CC_CTL_t CC_CTL_bits[5UL];
    };
    const UBase_t reserved1[1U];
    union
    {
        volatile UBase_t COUNT;
        TIMERA_COUNT_t COUNT_bits;
    };
    union
    {
        volatile UBase_t CC_COUNT[5U];
        TIMERA_CC_COUNT_t CC_COUNT_bits[5UL];
    };
    const UBase_t reserved2[1U];
    const UBase_t reserved3[1U];
    union
    {
        volatile const UBase_t EX0;
        TIMERA_EX0_t EX0_bits;
    };
    const UBase_t reserved4[6U];
    union
    {
        volatile const UBase_t IV;
        TIMERA_IV_t IV_bits;
    };
    const UBase_t reserved5[6U];
}TIMERA_t;


typedef volatile struct
{
    union
    {
        volatile UBase_t CTL;
        TIMERA_CC_CTL_t CTL_bits;
    };
    const UBase_t reserved2[7U];
    union
    {
        volatile UBase_t COUNT;
        TIMERA_CC_COUNT_t COUNT_bits;
    };
}TIMERA_CC_t;


typedef volatile struct
{
    TIMERA_t MODULE[(UBase_t) TIMERA_enMODULE_MAX];
}TIMERA_ARRAY_t;

#endif /* TIMERA_PERIPHERAL_HEADER_TIMERA_STRUCTPERIPHERAL_H_ */
