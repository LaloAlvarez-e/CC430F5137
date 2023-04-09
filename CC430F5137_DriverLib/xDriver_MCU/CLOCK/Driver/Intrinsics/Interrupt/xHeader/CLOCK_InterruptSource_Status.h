/**
 *
 * @file CLOCK_InterruptSource_Status.h
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

#ifndef XDRIVER_MCU_CLOCK_DRIVER_INTRINSICS_INTERRUPT_XHEADER_CLOCK_INTERRUPTSOURCE_STATUS_H_
#define XDRIVER_MCU_CLOCK_DRIVER_INTRINSICS_INTERRUPT_XHEADER_CLOCK_INTERRUPTSOURCE_STATUS_H_

#include <xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h>

CLOCK_nERROR CLOCK__enSetStatusInterruptSource(CLOCK_nINT enInterruptArg, CLOCK_nSTATUS enStatusArg);
CLOCK_nERROR CLOCK__enStatusInterruptSource(CLOCK_nINT enInterruptArg, CLOCK_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_INTRINSICS_INTERRUPT_XHEADER_CLOCK_INTERRUPTSOURCE_STATUS_H_ */
