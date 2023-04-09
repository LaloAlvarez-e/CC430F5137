/**
 *
 * @file CLOCK_InterruptRoutine_Vector.h
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
 * @verbatim 23 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_CLOCK_INTERRUPTROUTINE_VECTOR_H_
#define XDRIVER_MCU_CLOCK_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_CLOCK_INTERRUPTROUTINE_VECTOR_H_

#include <xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h>

UBase_t CLOCK__IRQVectorHandler(uintptr_t uptrModuleArg, void* pvArgument);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_CLOCK_INTERRUPTROUTINE_VECTOR_H_ */
