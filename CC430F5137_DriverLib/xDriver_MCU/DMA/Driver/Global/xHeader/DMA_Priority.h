/**
 *
 * @file DMA_Priority.h
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

#ifndef DRIVERLIB_DMA_DRIVER_HEADER_DMA_PRIORITY_H_
#define DRIVERLIB_DMA_DRIVER_HEADER_DMA_PRIORITY_H_

#include "xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h"

DMA_nERROR DMA__enSetPriorityMode(DMA_nPRIORITY enPriorityArg);
DMA_nERROR DMA__enGetPriorityMode(DMA_nPRIORITY* penPriorityArg);

#endif /* DRIVERLIB_DMA_DRIVER_HEADER_DMA_PRIORITY_H_ */
