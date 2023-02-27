/**
 *
 * @file DMA_TransferSize.h
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

#ifndef DRIVERLIB_DMA_DRIVER_HEADER_DMA_TRANSFERSIZE_H_
#define DRIVERLIB_DMA_DRIVER_HEADER_DMA_TRANSFERSIZE_H_

#include "xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h"

DMA_nERROR DMA_CH__enSetTransferSize(DMA_nCH enChannelArg,
                                     UBase_t uxSizeArg);

DMA_nERROR DMA_CH__enGetTransferSize(DMA_nCH enChannelArg,
                                     UBase_t* puxSizeArg);

#endif /* DRIVERLIB_DMA_DRIVER_HEADER_DMA_TRANSFERSIZE_H_ */
