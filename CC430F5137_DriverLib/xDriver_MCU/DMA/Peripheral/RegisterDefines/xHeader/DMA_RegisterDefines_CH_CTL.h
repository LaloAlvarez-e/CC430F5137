/**
 *
 * @file DMA_RegisterDefines_CH_CTL.h
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

#ifndef DMA_PERIPHERAL_REGISTERDEFINES_HEADER_DMA_REGISTERDEFINES_CH_CTL_H_
#define DMA_PERIPHERAL_REGISTERDEFINES_HEADER_DMA_REGISTERDEFINES_CH_CTL_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

/******************************************************************************************
 ************************************ 3 CH_CTL *********************************************
 ******************************************************************************************/
/*-----------*/
#define DMA_CH_CTL_R_REQ_BIT ((UBase_t) 0U)

#define DMA_CH_CTL_REQ_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_REQ_NA ((UBase_t) 0x00U)
#define DMA_CH_CTL_REQ_REQUEST ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_REQ_MASK (DMA_CH_CTL_REQ_MASK << DMA_CH_CTL_R_REQ_BIT)
#define DMA_CH_CTL_R_REQ_NA (DMA_CH_CTL_REQ_NA << DMA_CH_CTL_R_REQ_BIT)
#define DMA_CH_CTL_R_REQ_REQUEST (DMA_CH_CTL_REQ_REQUEST << DMA_CH_CTL_R_REQ_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_ABORT_BIT ((UBase_t) 1U)

#define DMA_CH_CTL_ABORT_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_ABORT_NA ((UBase_t) 0x00U)
#define DMA_CH_CTL_ABORT_ABORTED ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_ABORT_MASK (DMA_CH_CTL_ABORT_MASK << DMA_CH_CTL_R_ABORT_BIT)
#define DMA_CH_CTL_R_ABORT_NA (DMA_CH_CTL_ABORT_NA << DMA_CH_CTL_R_ABORT_BIT)
#define DMA_CH_CTL_R_ABORT_ABORTED (DMA_CH_CTL_ABORT_ABORTED << DMA_CH_CTL_R_ABORT_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_IE_BIT ((UBase_t) 2U)

#define DMA_CH_CTL_IE_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_IE_DIS ((UBase_t) 0x00U)
#define DMA_CH_CTL_IE_ENA ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_IE_MASK (DMA_CH_CTL_IE_MASK << DMA_CH_CTL_R_IE_BIT)
#define DMA_CH_CTL_R_IE_DIS (DMA_CH_CTL_IE_DIS << DMA_CH_CTL_R_IE_BIT)
#define DMA_CH_CTL_R_IE_ENA (DMA_CH_CTL_IE_ENA << DMA_CH_CTL_R_IE_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_IFG_BIT ((UBase_t) 3U)

#define DMA_CH_CTL_IFG_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_IFG_NOOCCUR ((UBase_t) 0x00U)
#define DMA_CH_CTL_IFG_OCCUR ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_IFG_MASK (DMA_CH_CTL_IFG_MASK << DMA_CH_CTL_R_IFG_BIT)
#define DMA_CH_CTL_R_IFG_NOOCCUR (DMA_CH_CTL_IFG_NOOCCUR << DMA_CH_CTL_R_IFG_BIT)
#define DMA_CH_CTL_R_IFG_OCCUR (DMA_CH_CTL_IFG_OCCUR << DMA_CH_CTL_R_IFG_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_EN_BIT ((UBase_t) 4U)

#define DMA_CH_CTL_EN_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_EN_DIS ((UBase_t) 0x00U)
#define DMA_CH_CTL_EN_ENA ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_EN_MASK (DMA_CH_CTL_EN_MASK << DMA_CH_CTL_R_EN_BIT)
#define DMA_CH_CTL_R_EN_DIS (DMA_CH_CTL_EN_DIS << DMA_CH_CTL_R_EN_BIT)
#define DMA_CH_CTL_R_EN_ENA (DMA_CH_CTL_EN_ENA << DMA_CH_CTL_R_EN_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_LEVEL_BIT ((UBase_t) 5U)

#define DMA_CH_CTL_LEVEL_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_LEVEL_EDGE ((UBase_t) 0x00U)
#define DMA_CH_CTL_LEVEL_LEVEL ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_LEVEL_MASK (DMA_CH_CTL_LEVEL_MASK << DMA_CH_CTL_R_LEVEL_BIT)
#define DMA_CH_CTL_R_LEVEL_EDGE (DMA_CH_CTL_LEVEL_EDGE << DMA_CH_CTL_R_LEVEL_BIT)
#define DMA_CH_CTL_R_LEVEL_LEVEL (DMA_CH_CTL_LEVEL_LEVEL << DMA_CH_CTL_R_LEVEL_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_SRCBYTE_BIT ((UBase_t) 6U)

#define DMA_CH_CTL_SRCBYTE_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_SRCBYTE_WORD ((UBase_t) 0x00U)
#define DMA_CH_CTL_SRCBYTE_BYTE ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_SRCBYTE_MASK (DMA_CH_CTL_SRCBYTE_MASK << DMA_CH_CTL_R_SRCBYTE_BIT)
#define DMA_CH_CTL_R_SRCBYTE_WORD (DMA_CH_CTL_SRCBYTE_WORD << DMA_CH_CTL_R_SRCBYTE_BIT)
#define DMA_CH_CTL_R_SRCBYTE_BYTE (DMA_CH_CTL_SRCBYTE_BYTE << DMA_CH_CTL_R_SRCBYTE_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_DSTBYTE_BIT ((UBase_t) 7U)

#define DMA_CH_CTL_DSTBYTE_MASK ((UBase_t) 0x01U)
#define DMA_CH_CTL_DSTBYTE_WORD ((UBase_t) 0x00U)
#define DMA_CH_CTL_DSTBYTE_BYTE ((UBase_t) 0x01U)

#define DMA_CH_CTL_R_DSTBYTE_MASK (DMA_CH_CTL_DSTBYTE_MASK << DMA_CH_CTL_R_DSTBYTE_BIT)
#define DMA_CH_CTL_R_DSTBYTE_WORD (DMA_CH_CTL_DSTBYTE_WORD << DMA_CH_CTL_R_DSTBYTE_BIT)
#define DMA_CH_CTL_R_DSTBYTE_BYTE (DMA_CH_CTL_DSTBYTE_BYTE << DMA_CH_CTL_R_DSTBYTE_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_SRCINCR_BIT ((UBase_t) 8U)

#define DMA_CH_CTL_SRCINCR_MASK ((UBase_t) 0x03U)
#define DMA_CH_CTL_SRCINCR_UNCHANGED ((UBase_t) 0x00U)
#define DMA_CH_CTL_SRCINCR_UNCHANGED1 ((UBase_t) 0x01U)
#define DMA_CH_CTL_SRCINCR_DECREMENT ((UBase_t) 0x02U)
#define DMA_CH_CTL_SRCINCR_INCREMENT ((UBase_t) 0x03U)

#define DMA_CH_CTL_R_SRCINCR_MASK (DMA_CH_CTL_SRCINCR_MASK << DMA_CH_CTL_R_SRCINCR_BIT)
#define DMA_CH_CTL_R_SRCINCR_UNCHANGED (DMA_CH_CTL_SRCINCR_UNCHANGED << DMA_CH_CTL_R_SRCINCR_BIT)
#define DMA_CH_CTL_R_SRCINCR_UNCHANGED1 (DMA_CH_CTL_SRCINCR_UNCHANGED1 << DMA_CH_CTL_R_SRCINCR_BIT)
#define DMA_CH_CTL_R_SRCINCR_DECREMENT (DMA_CH_CTL_SRCINCR_DECREMENT << DMA_CH_CTL_R_SRCINCR_BIT)
#define DMA_CH_CTL_R_SRCINCR_INCREMENT (DMA_CH_CTL_SRCINCR_INCREMENT << DMA_CH_CTL_R_SRCINCR_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_DSTINCR_BIT ((UBase_t) 10U)

#define DMA_CH_CTL_DSTINCR_MASK ((UBase_t) 0x03U)
#define DMA_CH_CTL_DSTINCR_UNCHANGED ((UBase_t) 0x00U)
#define DMA_CH_CTL_DSTINCR_UNCHANGED1 ((UBase_t) 0x01U)
#define DMA_CH_CTL_DSTINCR_DECREMENT ((UBase_t) 0x02U)
#define DMA_CH_CTL_DSTINCR_INCREMENT ((UBase_t) 0x03U)

#define DMA_CH_CTL_R_DSTINCR_MASK (DMA_CH_CTL_DSTINCR_MASK << DMA_CH_CTL_R_DSTINCR_BIT)
#define DMA_CH_CTL_R_DSTINCR_UNCHANGED (DMA_CH_CTL_DSTINCR_UNCHANGED << DMA_CH_CTL_R_DSTINCR_BIT)
#define DMA_CH_CTL_R_DSTINCR_UNCHANGED1 (DMA_CH_CTL_DSTINCR_UNCHANGED1 << DMA_CH_CTL_R_DSTINCR_BIT)
#define DMA_CH_CTL_R_DSTINCR_DECREMENT (DMA_CH_CTL_DSTINCR_DECREMENT << DMA_CH_CTL_R_DSTINCR_BIT)
#define DMA_CH_CTL_R_DSTINCR_INCREMENT (DMA_CH_CTL_DSTINCR_INCREMENT << DMA_CH_CTL_R_DSTINCR_BIT)
/*-----------*/

/*-----------*/
#define DMA_CH_CTL_R_DT_BIT ((UBase_t) 12U)

#define DMA_CH_CTL_DT_MASK ((UBase_t) 0x07U)
#define DMA_CH_CTL_DT_SINGLE ((UBase_t) 0x00U)
#define DMA_CH_CTL_DT_BLOCK ((UBase_t) 0x01U)
#define DMA_CH_CTL_DT_BLOCK_BURST ((UBase_t) 0x02U)
#define DMA_CH_CTL_DT_BLOCK_BURST1 ((UBase_t) 0x03U)
#define DMA_CH_CTL_DT_REPEAT_SINGLE ((UBase_t) 0x04U)
#define DMA_CH_CTL_DT_REPEAT_BLOCK ((UBase_t) 0x05U)
#define DMA_CH_CTL_DT_REPEAT_BLOCK_BURST ((UBase_t) 0x06U)
#define DMA_CH_CTL_DT_REPEAT_BLOCK_BURST1 ((UBase_t) 0x07U)

#define DMA_CH_CTL_R_DT_MASK (DMA_CH_CTL_DT_MASK << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_SINGLE (DMA_CH_CTL_DT_SINGLE << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_BLOCK (DMA_CH_CTL_DT_BLOCK << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_BLOCK_BURST (DMA_CH_CTL_DT_BLOCK_BURST << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_BLOCK_BURST1 (DMA_CH_CTL_DT_BLOCK_BURST1 << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_REPEAT_SINGLE (DMA_CH_CTL_DT_REPEAT_SINGLE << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_REPEAT_BLOCK (DMA_CH_CTL_DT_REPEAT_BLOCK << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_REPEAT_BLOCK_BURST (DMA_CH_CTL_DT_REPEAT_BLOCK_BURST << DMA_CH_CTL_R_DT_BIT)
#define DMA_CH_CTL_R_DT_REPEAT_BLOCK_BURST1 (DMA_CH_CTL_DT_REPEAT_BLOCK_BURST1 << DMA_CH_CTL_R_DT_BIT)
/*-----------*/

#endif /* DMA_PERIPHERAL_REGISTERDEFINES_HEADER_DMA_REGISTERDEFINES_CH_CTL_H_ */
