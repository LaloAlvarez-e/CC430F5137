/**
 *
 * @file DMA_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_H_

#include "xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h"


DMA_nERROR DMA_CH__enRegisterIRQSourceHandler(DMA_nCH enChannelArg,
                                             DMA_nTRIGGER enTriggerArg,
                                             DMA_puxfIRQSourceHandler_t pfIrqSourceHandler);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_DMA_INTERRUPTREGISTERIRQSOURCE_H_ */
