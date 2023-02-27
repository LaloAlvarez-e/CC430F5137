/**
 *
 * @file DMA_Abort.c
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
#include <xDriver_MCU/DMA/Driver/Channel/Config/xHeader/DMA_Abort.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enSetAbort(DMA_nCH enChannelArg,
                              DMA_nBOOLEAN enAbortArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;
    pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enAbortArg;
    pstRegisterData.uxMask = DMA_CH_CTL_ABORT_MASK;
    pstRegisterData.uxShift = DMA_CH_CTL_R_ABORT_BIT;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                         &pstRegisterData);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enClearAbort(DMA_nCH enChannelArg)
{
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_CH__enSetAbort(enChannelArg, DMA_enFALSE);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enIsAborted(DMA_nCH enChannelArg,
                               DMA_nBOOLEAN* penAbortArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penAbortArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
        pstRegisterData.uxMask = DMA_CH_CTL_ABORT_MASK;
        pstRegisterData.uxShift = DMA_CH_CTL_R_ABORT_BIT;
        enErrorReg = DMA_CH__enReadRegister(enChannelArg,
                                            &pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penAbortArg = (DMA_nBOOLEAN) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}



