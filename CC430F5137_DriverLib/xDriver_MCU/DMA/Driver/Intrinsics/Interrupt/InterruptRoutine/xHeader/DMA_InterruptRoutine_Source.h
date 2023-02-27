/**
 *
 * @file DMA_InterruptRoutine_Source.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_puxfIRQSourceHandler_t DMA_CH__puxfGetIRQSourceHandler(DMA_nCH enChannelArg, DMA_nTRIGGER enTriggerArg);
DMA_puxfIRQSourceHandler_t* DMA_CH__puxfGetIRQSourceHandlerPointer(DMA_nCH enChannelArg, DMA_nTRIGGER enTriggerArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTROUTINE_XHEADER_DMA_INTERRUPTROUTINE_SOURCE_H_ */
