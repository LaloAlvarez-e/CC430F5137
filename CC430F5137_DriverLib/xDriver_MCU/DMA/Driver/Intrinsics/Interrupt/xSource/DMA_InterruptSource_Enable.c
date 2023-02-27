/**
 *
 * @file DMA_InterruptSource_Enable.c
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
#include "xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/xHeader/DMA_InterruptSource_Enable.h"

#include "xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

DMA_nERROR DMA_CH__enSetInterruptSourceState(DMA_nCH enChannelArg, DMA_nSTATE enStateArg)
{
    DMA_nERROR enErrorReg;
    DMA_Register_t stRegister;

    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    stRegister.uxMask = (UBase_t) DMA_CH_CTL_IE_MASK;
    stRegister.uxShift = (UBase_t) DMA_CH_CTL_R_IE_BIT;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enEnableInterruptSource(DMA_nCH enChannelArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetInterruptSourceState(enChannelArg, DMA_enSTATE_ENA);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enDisableInterruptSource(DMA_nCH enChannelArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetInterruptSourceState(enChannelArg, DMA_enSTATE_DIS);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetInterruptSourceState(DMA_nCH enChannelArg, DMA_nSTATE* penStateArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = DMA_CH_CTL_R_IE_BIT;
        stRegister.uxMask = (uint8_t) DMA_CH_CTL_IE_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enChannelArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penStateArg = (DMA_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}
