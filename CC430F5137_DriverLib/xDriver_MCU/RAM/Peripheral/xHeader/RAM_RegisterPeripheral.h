/**
 *
 * @file RAM_RegisterPeripheral.h
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

#ifndef RAM_PERIPHERAL_REGISTERPERIPHERAL_RAM_REGISTERPERIPHERAL_H_
#define RAM_PERIPHERAL_REGISTERPERIPHERAL_RAM_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/RAM/Peripheral/xHeader/RAM_RegisterAddress.h>
#include <xDriver_MCU/RAM/Peripheral/xHeader/RAM_StructPeripheral.h>


#define RAM ((RAM_t*) RAM_BASE_)

/******************************************************************************************
 ************************************ 1 CTL0 *********************************************
 ******************************************************************************************/
#define RAM_CTL0_R  (*(volatile UBase_t*) (RAM_BASE_ + RAM_CTL0_OFFSET))
#define RAM_CTL0    ((RAM_CTL0_t*) (RAM_BASE_ + RAM_CTL0_OFFSET))

uintptr_t RAM__uptrBlockBaseAddress();

#endif /* RAM_PERIPHERAL_REGISTERPERIPHERAL_RAM_REGISTERPERIPHERAL_H_ */
