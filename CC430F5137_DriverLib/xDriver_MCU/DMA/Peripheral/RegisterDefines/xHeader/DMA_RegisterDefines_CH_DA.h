/**
 *
 * @file DMA_RegisterDefines_CH_DA.h
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
 * @verbatim 6 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DMA_PERIPHERAL_REGISTERDEFINES_HEADER_DMA_REGISTERDEFINES_CH_DA_H_
#define DMA_PERIPHERAL_REGISTERDEFINES_HEADER_DMA_REGISTERDEFINES_CH_DA_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

/******************************************************************************************
 ************************************ 5 CH_DA *********************************************
 ******************************************************************************************/
/*-----------*/
#define DMA_CH_DA_R_DA_BIT ((uintptr_t) 0U)

#define DMA_CH_DA_DA_MASK ((uintptr_t) 0xFFFFFFFFU)

#define DMA_CH_DA_R_DA_MASK (DMA_CH_DA_DA_MASK << DMA_CH_DA_R_DA_BIT)
/*-----------*/

#endif /* DMA_PERIPHERAL_REGISTERDEFINES_HEADER_DMA_REGISTERDEFINES_CH_DA_H_ */
