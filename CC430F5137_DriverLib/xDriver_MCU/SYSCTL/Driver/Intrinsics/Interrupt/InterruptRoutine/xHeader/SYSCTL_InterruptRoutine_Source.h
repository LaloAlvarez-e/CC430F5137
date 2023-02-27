/**
 *
 * @file SYSCTL_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSCTL_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSCTL_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_puxfIRQSourceHandler_t SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT_RESET enInterruptArg);
SYSCTL_puxfIRQSourceHandler_t* SYSCTL_RESET__puxfGetIRQSourceHandlerPointer(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT_RESET enInterruptArg);

SYSCTL_puxfIRQSourceHandler_t SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT_USERNMI enInterruptArg);
SYSCTL_puxfIRQSourceHandler_t* SYSCTL_USERNMI__puxfGetIRQSourceHandlerPointer(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT_USERNMI enInterruptArg);

SYSCTL_puxfIRQSourceHandler_t SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT_SYSNMI enInterruptArg);
SYSCTL_puxfIRQSourceHandler_t* SYSCTL_SYSNMI__puxfGetIRQSourceHandlerPointer(SYSCTL_nMODULE enModuleArg, SYSCTL_nINT_SYSNMI enInterruptArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSCTL_INTERRUPTROUTINE_SOURCE_H_ */
