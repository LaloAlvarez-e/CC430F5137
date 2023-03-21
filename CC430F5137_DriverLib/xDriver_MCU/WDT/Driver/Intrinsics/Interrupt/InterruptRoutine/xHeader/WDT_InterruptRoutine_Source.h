/**
 *
 * @file WDT_InterruptRoutine_Source.h
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
 * @verbatim 13 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_WDT_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_WDT_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_puxfIRQSourceHandler_t WDT__puxfGetIRQSourceHandler(WDT_nINT enInterruptArg);
WDT_puxfIRQSourceHandler_t* WDT__puxfGetIRQSourceHandlerPointer(WDT_nINT enInterruptArg);

#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_WDT_INTERRUPTROUTINE_SOURCE_H_ */
