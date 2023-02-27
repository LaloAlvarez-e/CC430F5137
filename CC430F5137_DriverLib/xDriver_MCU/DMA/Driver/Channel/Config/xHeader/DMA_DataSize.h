/**
 *
 * @file DMA_DataSize.h
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

#ifndef DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_DATASIZE_H_
#define DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_DATASIZE_H_

#include "xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h"

DMA_nERROR DMA_CH__enSetSourceDataSize(DMA_nCH enChannelArg,
                                       DMA_nDATASIZE enSizeArg);
DMA_nERROR DMA_CH__enGetSourceDataSize(DMA_nCH enChannelArg,
                                       DMA_nDATASIZE* penSizeArg);

DMA_nERROR DMA_CH__enSetDestDataSize(DMA_nCH enChannelArg,
                                     DMA_nDATASIZE enSizeArg);
DMA_nERROR DMA_CH__enGetDestDataSize(DMA_nCH enChannelArg,
                                     DMA_nDATASIZE* penSizeArg);


#endif /* DRIVERLIB_DMA_DRIVER_CHANNEL_CONFIG_HEADER_DMA_DATASIZE_H_ */
