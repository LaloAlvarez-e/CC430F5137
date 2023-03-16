/**
 *
 * @file RAM_StructPeripheral.h
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

#ifndef RAM_PERIPHERAL_HEADER_RAM_STRUCTPERIPHERAL_H_
#define RAM_PERIPHERAL_HEADER_RAM_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/RAM/Peripheral/xHeader/RAM_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL0;
        RAM_CTL0_t CTL0_bits;
    };
}RAM_t;



#endif /* RAM_PERIPHERAL_HEADER_RAM_STRUCTPERIPHERAL_H_ */
