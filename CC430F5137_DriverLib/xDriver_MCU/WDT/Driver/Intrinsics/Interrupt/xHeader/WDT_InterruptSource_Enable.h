/**
 *
 * @file WDT_InterruptSource_Enable.h
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_ENABLE_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_ENABLE_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nERROR WDT__enSetInterruptSourceState(WDT_nSTATE enStateArg);
WDT_nERROR WDT__enEnableInterruptSource(void);
WDT_nERROR WDT__enDisableInterruptSource(void);

WDT_nERROR WDT__enGetInterruptSourceState(WDT_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_ENABLE_H_ */
