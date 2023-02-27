/**
 *
 * @file DMA_Trigger.h
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
 * @verbatim 25 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_DMA_DRIVER_HEADER_DMA_TRIGGER_H_
#define DRIVERLIB_DMA_DRIVER_HEADER_DMA_TRIGGER_H_

#include "xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h"

DMA_nERROR DMA_CH__enSetTrigger(DMA_nCH enChannelArg,
                                DMA_nTRIGGER enTriggerArg);

DMA_nERROR DMA_CH__enGetTrigger(DMA_nCH enChannelArg,
                                DMA_nTRIGGER* penTriggerArg);

#endif /* DRIVERLIB_DMA_DRIVER_HEADER_DMA_TRIGGER_H_ */
