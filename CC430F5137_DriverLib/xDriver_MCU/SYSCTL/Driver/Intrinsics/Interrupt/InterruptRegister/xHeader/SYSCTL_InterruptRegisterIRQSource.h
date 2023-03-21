/**
 *
 * @file SYSCTL_InterruptRegisterIRQSource.h
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
 * @verbatim 20 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSCTL_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSCTL_INTERRUPTREGISTERIRQSOURCE_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

SYSCTL_nERROR SYSCTL_RESET__enRegisterIRQSourceHandler(SYSCTL_nINT_RESET enInterruptArg,
                                                       SYSCTL_puxfIRQSourceHandler_t pfIrqSourceHandler);
SYSCTL_nERROR SYSCTL_USERNMI__enRegisterIRQSourceHandler(SYSCTL_nINT_USERNMI enInterruptArg,
                                                         SYSCTL_puxfIRQSourceHandler_t pfIrqSourceHandler);
SYSCTL_nERROR SYSCTL_SYSNMI__enRegisterIRQSourceHandler(SYSCTL_nINT_SYSNMI enInterruptArg,
                                                        SYSCTL_puxfIRQSourceHandler_t pfIrqSourceHandler);




#endif /* XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_SYSCTL_INTERRUPTREGISTERIRQSOURCE_H_ */
