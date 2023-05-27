/**
 *
 * @file AES_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_AES_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_AES_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

AES_puxfIRQSourceHandler_t AES__puxfGetIRQSourceHandler(AES_nINT enInterruptArg);
AES_puxfIRQSourceHandler_t* AES__puxfGetIRQSourceHandlerPointer(AES_nINT enInterruptArg);

#endif /* XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_AES_INTERRUPTROUTINE_SOURCE_H_ */
