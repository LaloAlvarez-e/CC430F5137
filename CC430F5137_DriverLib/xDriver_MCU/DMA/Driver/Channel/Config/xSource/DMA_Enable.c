/**
 *
 * @file DMA_Enable.c
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
 * @verbatim 28 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Channel/Config/xHeader/DMA_Enable.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enSetState(DMA_nCH enChannelArg,
                              DMA_nSTATE enStateArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enStateArg;
    pstRegisterData.uxMask = DMA_CH_CTL_EN_MASK;
    pstRegisterData.uxShift = DMA_CH_CTL_R_EN_BIT;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                                         &pstRegisterData);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetState(DMA_nCH enChannelArg,
                              DMA_nSTATE* penStateArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
        pstRegisterData.uxMask = DMA_CH_CTL_EN_MASK;
        pstRegisterData.uxShift = DMA_CH_CTL_R_EN_BIT;
        enErrorReg = DMA_CH__enReadRegister(enChannelArg,
                                            &pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penStateArg = (DMA_nSTATE) pstRegisterData.uxValue;
    }
    return (enErrorReg);
}
