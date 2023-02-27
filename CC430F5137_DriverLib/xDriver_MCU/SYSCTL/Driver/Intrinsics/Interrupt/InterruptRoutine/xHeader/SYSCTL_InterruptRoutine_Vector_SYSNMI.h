/**
 *
 * @file SYSCTL_InterruptRoutine_Vector_SYSNMI.h
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
 * @verbatim 19 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSCTL_INTERRUPTROUTINE_VECTOR_SYSNMI_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSCTL_INTERRUPTROUTINE_VECTOR_SYSNMI_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

__interrupt void SYSCTL_SYSNMI__IRQVectorHandler(void);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_SYSCTL_INTERRUPTROUTINE_VECTOR_SYSNMI_H_ */
