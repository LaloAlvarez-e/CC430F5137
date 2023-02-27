/**
 *
 * @file DMA_Channel.c
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
#include <xDriver_MCU/DMA/Driver/Channel/DMA_Channel.h>

#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enSetConfig(DMA_nCH enChannelArg,
                               DMA_CH_Config_t* pstConfigArg)
{
    DMA_CH_CTL_t stConfigReg = {0};
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetState(enChannelArg, DMA_enSTATE_DIS);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetTrigger(enChannelArg, pstConfigArg->enTrigger);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetTransferSize(enChannelArg, pstConfigArg->uxTranferSize);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetSourceAddress(enChannelArg, pstConfigArg->uptrSourceAddress);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetDestAddress(enChannelArg, pstConfigArg->uptrDestAddress);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stConfigReg.DT = (UBase_t) pstConfigArg->enTransferMode;
        stConfigReg.DSTINCR = (UBase_t) pstConfigArg->enDestIncMode;
        stConfigReg.SRCINCR = (UBase_t) pstConfigArg->enSourceIncMode;
        stConfigReg.DSTBYTE = (UBase_t) pstConfigArg->enDestDataSize;
        stConfigReg.SRCBYTE = (UBase_t) pstConfigArg->enSourceDataSize;
        stConfigReg.LEVEL = (UBase_t) pstConfigArg->enSense;
        stConfigReg.EN = (UBase_t) pstConfigArg->enEnable;
        stConfigReg.ABORT = (UBase_t) pstConfigArg->enAbort;

        pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
        pstRegisterData.uxValue = (*(UBase_t*) &stConfigReg);
        pstRegisterData.uxMask = DMA_CH_CTL_R_DT_MASK |
                                  DMA_CH_CTL_R_DSTINCR_MASK |
                                  DMA_CH_CTL_R_SRCINCR_MASK |
                                  DMA_CH_CTL_R_DSTBYTE_MASK |
                                  DMA_CH_CTL_R_SRCBYTE_MASK |
                                  DMA_CH_CTL_R_LEVEL_MASK |
                                  DMA_CH_CTL_R_EN_MASK |
                                  DMA_CH_CTL_R_ABORT_MASK;
        pstRegisterData.uxShift = 0U;
        enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                                             &pstRegisterData);
    }

    return (enErrorReg);
}


DMA_nERROR DMA_CH__enSetConfigExt(DMA_nCH enChannelArg,
                                  DMA_CH_ConfigExt_t* pstConfigArg)

{
    DMA_CH_CTL_t stConfigReg = {0};
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetState(enChannelArg, DMA_enSTATE_DIS);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetTrigger(enChannelArg, pstConfigArg->stConfig.enTrigger);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetTransferSize(enChannelArg, pstConfigArg->stConfig.uxTranferSize);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetSourceAddress(enChannelArg, pstConfigArg->stConfig.uptrSourceAddress);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enSetDestAddress(enChannelArg, pstConfigArg->stConfig.uptrDestAddress);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stConfigReg.DT = (UBase_t) pstConfigArg->stConfig.enTransferMode;
        stConfigReg.DSTINCR = (UBase_t) pstConfigArg->stConfig.enDestIncMode;
        stConfigReg.SRCINCR = (UBase_t) pstConfigArg->stConfig.enSourceIncMode;
        stConfigReg.DSTBYTE = (UBase_t) pstConfigArg->stConfig.enDestDataSize;
        stConfigReg.SRCBYTE = (UBase_t) pstConfigArg->stConfig.enSourceDataSize;
        stConfigReg.LEVEL = (UBase_t) pstConfigArg->stConfig.enSense;
        stConfigReg.EN = (UBase_t) pstConfigArg->stConfig.enEnable;
        stConfigReg.IE = (UBase_t) pstConfigArg->enInterruptEnable;
        stConfigReg.IFG = (UBase_t) pstConfigArg->enInterruptStatus;
        stConfigReg.ABORT = (UBase_t) pstConfigArg->stConfig.enAbort;

        pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
        pstRegisterData.uxValue = (*(UBase_t*) &stConfigReg);
        pstRegisterData.uxMask = DMA_CH_CTL_R_DT_MASK |
                                  DMA_CH_CTL_R_DSTINCR_MASK |
                                  DMA_CH_CTL_R_SRCINCR_MASK |
                                  DMA_CH_CTL_R_DSTBYTE_MASK |
                                  DMA_CH_CTL_R_SRCBYTE_MASK |
                                  DMA_CH_CTL_R_LEVEL_MASK |
                                  DMA_CH_CTL_R_EN_MASK |
                                  DMA_CH_CTL_R_IE_MASK |
                                  DMA_CH_CTL_R_IFG_MASK |
                                  DMA_CH_CTL_R_ABORT_MASK;
        pstRegisterData.uxShift = 0U;

        enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                                             &pstRegisterData);
    }

    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetConfig(DMA_nCH enChannelArg,
                               DMA_CH_Config_t* pstConfigArg)
{
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetTrigger(enChannelArg, &(pstConfigArg->enTrigger));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetTransferSize(enChannelArg, &(pstConfigArg->uxTranferSize));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetSourceAddress(enChannelArg, &(pstConfigArg->uptrSourceAddress));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetDestAddress(enChannelArg, &(pstConfigArg->uptrDestAddress));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetTransferMode(enChannelArg, &(pstConfigArg->enTransferMode));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetDestIncrementMode(enChannelArg, &(pstConfigArg->enDestIncMode));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetSourceIncrementMode(enChannelArg, &pstConfigArg->enSourceIncMode);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetDestDataSize(enChannelArg, &(pstConfigArg->enDestDataSize));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetSourceDataSize(enChannelArg, &(pstConfigArg->enSourceDataSize));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetSense(enChannelArg, &(pstConfigArg->enSense));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetState(enChannelArg, &(pstConfigArg->enEnable));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enIsAborted(enChannelArg, &(pstConfigArg->enAbort));
    }
    return (enErrorReg);
}


DMA_nERROR DMA_CH__enGetConfigExt(DMA_nCH enChannelArg,
                                  DMA_CH_ConfigExt_t* pstConfigArg)
{
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetConfig(enChannelArg,
                                         &(pstConfigArg->stConfig));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enGetInterruptSourceState(enChannelArg, &(pstConfigArg->enInterruptEnable));
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = DMA_CH__enStatusInterruptSource(enChannelArg, &(pstConfigArg->enInterruptStatus));
    }
    return (enErrorReg);
}



