/**
 *
 * @file DMA_RegisterAddress.h
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DMA_PERIPHERAL_HEADER_DMA_REGISTERADDRESS_H_
#define DMA_PERIPHERAL_HEADER_DMA_REGISTERADDRESS_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

#define DMA_BASE_ (0x500U)

#define DMA_CH0_BASE (0x510U)
#define DMA_CH1_BASE (0x520U)
#define DMA_CH2_BASE (0x530U)

#define DMA_CH0_OFFSET (DMA_CH0_BASE - DMA_BASE_)
#define DMA_CH1_OFFSET (DMA_CH1_BASE - DMA_BASE_)
#define DMA_CH2_OFFSET (DMA_CH2_BASE - DMA_BASE_)


#define DMA_CH_TRIGGER_OFFSET (0x00U)
#define DMA_CH0_TRIGGER_OFFSET (0x00U)
#define DMA_CH1_TRIGGER_OFFSET (0x01U)
#define DMA_CH2_TRIGGER_OFFSET (0x02U)
#define DMA_CH3_TRIGGER_OFFSET (0x03U)
#define DMA_CH4_TRIGGER_OFFSET (0x04U)
#define DMA_CH5_TRIGGER_OFFSET (0x05U)
#define DMA_CH6_TRIGGER_OFFSET (0x06U)
#define DMA_CH7_TRIGGER_OFFSET (0x07U)
#define DMA_CTL_OFFSET (0x08U)

#define DMA_CTL0_OFFSET (0x00U)
#define DMA_CTL1_OFFSET (0x02U)
#define DMA_CTL2_OFFSET (0x04U)
#define DMA_CTL3_OFFSET (0x06U)
#define DMA_CTL4_OFFSET (0x08U)
#define DMA_IV_OFFSET (0x0AU)

#define DMA_CH_CTL_OFFSET (0x00U)
#define DMA_CH_SA_OFFSET (0x02U)
#define DMA_CH_DA_OFFSET (0x06U)
#define DMA_CH_SZ_OFFSET (0x0AU)

#endif /* DMA_PERIPHERAL_HEADER_DMA_REGISTERADDRESS_H_ */
