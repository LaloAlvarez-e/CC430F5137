/**
 *
 * @file CLOCK_StructPeripheral.h
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

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_XHEADER_CLOCK_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_XHEADER_CLOCK_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL0;
        CLOCK_CTL0_t CTL0_Bit;
    };
    union
    {
        volatile UBase_t CTL1;
        CLOCK_CTL1_t CTL1_Bit;
    };
    union
    {
        volatile UBase_t CTL2;
        CLOCK_CTL2_t CTL2_Bit;
    };
    union
    {
        volatile UBase_t CTL3;
        CLOCK_CTL3_t CTL3_Bit;
    };
    union
    {
        volatile UBase_t CTL4;
        CLOCK_CTL4_t CTL4_Bit;
    };
    union
    {
        volatile UBase_t CTL5;
        CLOCK_CTL5_t CTL5_Bit;
    };
    union
    {
        volatile UBase_t CTL6;
        CLOCK_CTL6_t CTL6_Bit;
    };
    union
    {
        volatile UBase_t CTL7;
        CLOCK_CTL7_t CTL7_Bit;
    };
    union
    {
        volatile UBase_t CTL8;
        CLOCK_CTL8_t CTL8_Bit;
    };
}CLOCK_t;

#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_XHEADER_CLOCK_STRUCTPERIPHERAL_H_ */
