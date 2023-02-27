/**
 *
 * @file DMA_RegisterDefines_IV.h
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
 * @verbatim 26 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 26 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_DMA_PERIPHERAL_REGISTERDEFINES_XHEADER_DMA_REGISTERDEFINES_IV_H_
#define XDRIVER_MCU_DMA_PERIPHERAL_REGISTERDEFINES_XHEADER_DMA_REGISTERDEFINES_IV_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

/******************************************************************************************
 ************************************ 2 IV *********************************************
 ******************************************************************************************/
/*-----------*/
#define DMA_IV_R_IV_BIT ((UBase_t) 0U)

#define DMA_IV_IV_MASK ((UBase_t) 0xFFFFU)
#define DMA_IV_IV_NONE ((UBase_t) 0x00U)
#define DMA_IV_IV_CH0 ((UBase_t) 0x02U)
#define DMA_IV_IV_CH1 ((UBase_t) 0x04U)
#define DMA_IV_IV_CH2 ((UBase_t) 0x06U)

#define DMA_IV_R_IV_MASK (DMA_IV_IV_MASK << DMA_IV_R_IV_BIT)
#define DMA_IV_R_IV_NONE (DMA_IV_IV_NONE << DMA_IV_R_IV_BIT)
#define DMA_IV_R_IV_CH0 (DMA_IV_IV_CH0 << DMA_IV_R_IV_BIT)
#define DMA_IV_R_IV_CH1 (DMA_IV_IV_CH1 << DMA_IV_R_IV_BIT)
#define DMA_IV_R_IV_CH2 (DMA_IV_IV_CH2 << DMA_IV_R_IV_BIT)
/*-----------*/



#endif /* XDRIVER_MCU_DMA_PERIPHERAL_REGISTERDEFINES_XHEADER_DMA_REGISTERDEFINES_IV_H_ */
