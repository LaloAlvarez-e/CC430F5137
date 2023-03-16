/**
 *
 * @file TIMERA_InterruptRoutine_Vector.h
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
 * @verbatim 29 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_TIMERA_INTERRUPTROUTINE_VECTOR_H_
#define XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_TIMERA_INTERRUPTROUTINE_VECTOR_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

void TIMERA0_CC0__IRQVectorHandler(void);
void TIMERA1_CC0__IRQVectorHandler(void);
void TIMERA0__IRQVectorHandler(void);
void TIMERA1__IRQVectorHandler(void);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_TIMERA_INTERRUPTROUTINE_VECTOR_H_ */
