/**
 *
 * @file DMA_Channel.h
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

#ifndef DRIVERLIB_DMA_DRIVER_CHANNEL_DMA_CHANNEL_H_
#define DRIVERLIB_DMA_DRIVER_CHANNEL_DMA_CHANNEL_H_

#include "xDriver_MCU/DMA/Driver/Channel/Config/DMA_Config.h"
#include "xDriver_MCU/DMA/Driver/Channel/xHeader/DMA_DestAddress.h"
#include "xDriver_MCU/DMA/Driver/Channel/xHeader/DMA_SourceAddress.h"
#include "xDriver_MCU/DMA/Driver/Channel/xHeader/DMA_TransferSize.h"
#include "xDriver_MCU/DMA/Driver/Channel/xHeader/DMA_Trigger.h"


DMA_nERROR DMA_CH__enSetConfig(DMA_nCH enChannelArg,
                               DMA_CH_Config_t* pstConfigArg);
DMA_nERROR DMA_CH__enSetConfigExt(DMA_nCH enChannelArg,
                                  DMA_CH_ConfigExt_t* pstConfigArg);


DMA_nERROR DMA_CH__enGetConfig(DMA_nCH enChannelArg,
                               DMA_CH_Config_t* pstConfigArg);
DMA_nERROR DMA_CH__enGetConfigExt(DMA_nCH enChannelArg,
                                  DMA_CH_ConfigExt_t* pstConfigArg);

#endif /* DRIVERLIB_DMA_DRIVER_CHANNEL_DMA_CHANNEL_H_ */
