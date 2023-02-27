/**
 *
 * @file DMA_IncrementMode.h
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
 * @verbatim 27 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_INCREMENTMODE_H_
#define DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_INCREMENTMODE_H_

#include "xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h"

DMA_nERROR DMA_CH__enSetSourceIncrementMode(DMA_nCH enChannelArg,
                                            DMA_nINCMODE enIncModeArg);
DMA_nERROR DMA_CH__enGetSourceIncrementMode(DMA_nCH enChannelArg,
                                            DMA_nINCMODE* penIncModeArg);

DMA_nERROR DMA_CH__enSetDestIncrementMode(DMA_nCH enChannelArg,
                                          DMA_nINCMODE enIncModeArg);
DMA_nERROR DMA_CH__enGetDestIncrementMode(DMA_nCH enChannelArg,
                                          DMA_nINCMODE* penIncModeArg);

#endif /* DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_INCREMENTMODE_H_ */
