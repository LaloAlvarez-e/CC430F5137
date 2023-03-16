/**
 *
 * @file TIMERA_CaptureConfig.c
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
 * @verbatim 15 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CaptureConfig.h>

#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CaptureInputSelection.h>
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CaptureMode.h>
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CaptureOverflow.h>
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CaptureSyncMode.h>
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_ModuleMode.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA_CC__enSetCaptureConfig(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                  TIMERA_Capture_Config_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetCaptureMode(enModuleArg, enSubModuleArg, pstConfigArg->enCaptureMode);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetCaptureSyncMode(enModuleArg, enSubModuleArg, pstConfigArg->enSyncMode);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetCaptureInputSelection(enModuleArg, enSubModuleArg, pstConfigArg->enCaptureInput);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enClearCaptureOverflow(enModuleArg, enSubModuleArg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetModuleMode(enModuleArg, enSubModuleArg, TIMERA_enCC_MODE_CAPTURE);
    }
    return (enErrorReg);
}


TIMERA_nERROR TIMERA_CC__enGetCaptureConfig(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                            TIMERA_Capture_Config_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;
    TIMERA_nCC_MODE enModeReg;

    enModeReg = TIMERA_enCC_MODE_COMPARE;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetModuleMode(enModuleArg, enSubModuleArg, &enModeReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        if(TIMERA_enCC_MODE_CAPTURE != enModeReg)
        {
            enErrorReg = TIMERA_enERROR_VALUE;
        }
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetCaptureMode(enModuleArg, enSubModuleArg, &(pstConfigArg->enCaptureMode));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetCaptureSyncMode(enModuleArg, enSubModuleArg, &(pstConfigArg->enSyncMode));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetCaptureInputSelection(enModuleArg, enSubModuleArg, &(pstConfigArg->enCaptureInput));
    }
    if(TIMERA_enERROR_OK != enErrorReg)
    {
        pstConfigArg->enCaptureMode = TIMERA_enCC_CAPTUREMODE_UNDEF;
        pstConfigArg->enSyncMode = TIMERA_enCC_CAPTURESYNC_UNDEF;
        pstConfigArg->enCaptureInput = TIMERA_enCC_CAPTUREINPUT_UNDEF;
    }
    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enSetCaptureConfigExt(TIMERA_nMODULE enModuleArg,  TIMERA_nCC enSubModuleArg,
                                               TIMERA_Capture_ConfigExt_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetInterruptSourceState(enModuleArg, enSubModuleArg, TIMERA_enSTATE_DIS);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetCaptureConfig(enModuleArg, enSubModuleArg, &(pstConfigArg->stConfig));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetStatusInterruptSource(enModuleArg, enSubModuleArg, pstConfigArg->enInterruptStatus);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetInterruptSourceState(enModuleArg, enSubModuleArg, pstConfigArg->enInterruptEnable);
    }

    return (enErrorReg);
}


TIMERA_nERROR TIMERA_CC__enGetCaptureConfigExt(TIMERA_nMODULE enModuleArg,  TIMERA_nCC enSubModuleArg,
                                               TIMERA_Capture_ConfigExt_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;
    TIMERA_nCC_MODE enModeReg;

    enModeReg = TIMERA_enCC_MODE_COMPARE;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetModuleMode(enModuleArg, enSubModuleArg, &enModeReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        if(TIMERA_enCC_MODE_CAPTURE != enModeReg)
        {
            enErrorReg = TIMERA_enERROR_VALUE;
        }
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetCaptureConfig(enModuleArg, enSubModuleArg, &(pstConfigArg->stConfig));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enStatusInterruptSource(enModuleArg, enSubModuleArg, &(pstConfigArg->enInterruptStatus));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetInterruptSourceState(enModuleArg, enSubModuleArg, &(pstConfigArg->enInterruptEnable));
    }
    if(TIMERA_enERROR_OK != enErrorReg)
    {
        pstConfigArg->stConfig.enCaptureMode = TIMERA_enCC_CAPTUREMODE_UNDEF;
        pstConfigArg->stConfig.enSyncMode = TIMERA_enCC_CAPTURESYNC_UNDEF;
        pstConfigArg->stConfig.enCaptureInput = TIMERA_enCC_CAPTUREINPUT_UNDEF;
        pstConfigArg->enInterruptEnable = TIMERA_enSTATE_UNDEF;
        pstConfigArg->enInterruptStatus = TIMERA_enSTATUS_UNDEF;
    }

    return (enErrorReg);
}




