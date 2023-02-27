/**
 *
 * @file DMA_IncrementMode.c
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
#include <xDriver_MCU/DMA/Driver/Channel/Config/xHeader/DMA_IncrementMode.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enSetSourceIncrementMode(DMA_nCH enChannelArg,
                                            DMA_nINCMODE enIncModeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;
    pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enIncModeArg;
    pstRegisterData.uxMask = DMA_CH_CTL_SRCINCR_MASK;
    pstRegisterData.uxShift = DMA_CH_CTL_R_SRCINCR_BIT;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                                         &pstRegisterData);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetSourceIncrementMode(DMA_nCH enChannelArg,
                                            DMA_nINCMODE* penIncModeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penIncModeArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
        pstRegisterData.uxMask = DMA_CH_CTL_SRCINCR_MASK;
        pstRegisterData.uxShift = DMA_CH_CTL_R_SRCINCR_BIT;
        enErrorReg = DMA_CH__enReadRegister(enChannelArg,
                                            &pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penIncModeArg = (DMA_nINCMODE) pstRegisterData.uxValue;
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enSetDestIncrementMode(DMA_nCH enChannelArg,
                                          DMA_nINCMODE enIncModeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;
    pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enIncModeArg;
    pstRegisterData.uxMask = DMA_CH_CTL_DSTINCR_MASK;
    pstRegisterData.uxShift = DMA_CH_CTL_R_DSTINCR_BIT;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                                         &pstRegisterData);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetDestIncrementMode(DMA_nCH enChannelArg,
                                          DMA_nINCMODE* penIncModeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penIncModeArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
        pstRegisterData.uxMask = DMA_CH_CTL_DSTINCR_MASK;
        pstRegisterData.uxShift = DMA_CH_CTL_R_DSTINCR_BIT;
        enErrorReg = DMA_CH__enReadRegister(enChannelArg,
                                            &pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penIncModeArg = (DMA_nINCMODE) pstRegisterData.uxValue;
    }
    return (enErrorReg);
}




