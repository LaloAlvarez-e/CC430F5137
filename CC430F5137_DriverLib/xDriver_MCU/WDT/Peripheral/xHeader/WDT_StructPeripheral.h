/**
 *
 * @file WDT_StructPeripheral.h
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

#ifndef WDT_PERIPHERAL_HEADER_WDT_STRUCTPERIPHERAL_H_
#define WDT_PERIPHERAL_HEADER_WDT_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t IE1;
        WDT_IE1_t IE1_bits;
    };
    union
    {
        volatile UBase_t IFG1;
        WDT_IFG1_t IFG1_bits;
    };
    const unsigned char reserved2 [88U];
    union
    {
        volatile UBase_t CTL;
        WDT_CTL_t CTL_bits;
    };
}WDT_t;

#endif /* WDT_PERIPHERAL_HEADER_WDT_STRUCTPERIPHERAL_H_ */
