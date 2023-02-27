/**
 *
 * @file DMA_Enable.h
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
 * @verbatim 28 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_ENABLE_H_
#define DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_ENABLE_H_

#include "xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h"

DMA_nERROR DMA_CH__enSetState(DMA_nCH enChannelArg,
                              DMA_nSTATE enStateArg);

DMA_nERROR DMA_CH__enGetState(DMA_nCH enChannelArg,
                              DMA_nSTATE* penStateArg);

#endif /* DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_ENABLE_H_ */
