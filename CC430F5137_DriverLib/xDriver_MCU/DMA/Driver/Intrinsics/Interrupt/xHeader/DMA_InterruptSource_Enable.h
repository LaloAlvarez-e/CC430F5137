/**
 *
 * @file DMA_InterruptSource_Enable.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_DMA_INTERRUPTSOURCE_ENABLE_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_DMA_INTERRUPTSOURCE_ENABLE_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA_CH__enSetInterruptSourceState(DMA_nCH enChannelArg, DMA_nSTATE enStateArg);
DMA_nERROR DMA_CH__enEnableInterruptSource(DMA_nCH enChannelArg);
DMA_nERROR DMA_CH__enDisableInterruptSource(DMA_nCH enChannelArg);

DMA_nERROR DMA_CH__enGetInterruptSourceState(DMA_nCH enChannelArg, DMA_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_DMA_INTERRUPTSOURCE_ENABLE_H_ */
