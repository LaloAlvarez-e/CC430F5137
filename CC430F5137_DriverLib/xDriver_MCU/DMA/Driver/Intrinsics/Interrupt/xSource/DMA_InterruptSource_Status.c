/**
 *
 * @file DMA_InterruptSource_Status.c
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
#include "xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/xHeader/DMA_InterruptSource_Status.h"
#include "xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/xHeader/DMA_InterruptSource_Enable.h"

#include "xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

DMA_nERROR DMA_CH__enSetStatusInterruptSource(DMA_nCH enChannelArg, DMA_nSTATUS enStatusArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) DMA_CH_CTL_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) DMA_CH_CTL_IFG_MASK;
    stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStatusArg;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg, &stRegister);

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enStatusInterruptSource(DMA_nCH enModuleArg, DMA_nSTATUS* penStatusArg)
{
    DMA_Register_t stRegister;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) DMA_CH_CTL_R_IFG_BIT;
        stRegister.uxMask = (UBase_t) DMA_CH_CTL_IFG_MASK;
        stRegister.uptrAddress = DMA_CH_CTL_OFFSET;
        enErrorReg = DMA_CH__enReadRegister(enModuleArg, &stRegister);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (DMA_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enStatusMaskedInterruptSource(DMA_nCH enModuleArg, DMA_nSTATUS* penStatusArg)
{
    DMA_nERROR enErrorReg;
    DMA_nSTATE enStateReg;
    DMA_nSTATUS enStatusReg;

    enStateReg = DMA_enSTATE_DIS;
    enStatusReg = DMA_enSTATUS_INACTIVE;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetInterruptSourceState(enModuleArg, &enStateReg);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enStatusInterruptSource(enModuleArg, &enStatusReg);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        if((DMA_enSTATE_ENA == enStateReg) && (DMA_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = DMA_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = DMA_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}


