/**
 *
 * @file DMA_InterruptSource_Clear.c
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/xHeader/DMA_InterruptSource_Clear.h"

#include "xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

DMA_nERROR DMA_CH__enClearInterruptSource(DMA_nCH enChannelArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) DMA_CH_CTL_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) DMA_CH_CTL_IFG_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) DMA_CH_CTL_IFG_NOOCCUR;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg, &stRegister);

    return (enErrorReg);
}
