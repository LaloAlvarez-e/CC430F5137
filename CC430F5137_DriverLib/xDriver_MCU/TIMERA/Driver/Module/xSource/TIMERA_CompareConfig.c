/**
 *
 * @file TIMERA_CompareConfig.c
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
 * @verbatim 16 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CompareConfig.h>

#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CompareOutput.h>
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CompareMode.h>
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_ModuleMode.h>
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_ModuleValue.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA_CC__enSetCompareConfig(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                  TIMERA_Compare_Config_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetCompareOutput(enModuleArg, enSubModuleArg, pstConfigArg->enOutputLevel);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetCompareMode(enModuleArg, enSubModuleArg, pstConfigArg->enCompareMode);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetModuleMode(enModuleArg, enSubModuleArg, TIMERA_enCC_MODE_COMPARE);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enSetModuleValue(enModuleArg, enSubModuleArg, pstConfigArg->uxCompareValue);
    }
    return (enErrorReg);
}


TIMERA_nERROR TIMERA_CC__enGetCompareConfig(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                  TIMERA_Compare_Config_t* pstConfigArg)
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
        if(TIMERA_enCC_MODE_COMPARE != enModeReg)
        {
            enErrorReg = TIMERA_enERROR_VALUE;
        }
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetCompareOutput(enModuleArg, enSubModuleArg, &(pstConfigArg->enOutputLevel));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetCompareMode(enModuleArg, enSubModuleArg, &(pstConfigArg->enCompareMode));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetModuleValue(enModuleArg, enSubModuleArg, &(pstConfigArg->uxCompareValue));
    }
    if(TIMERA_enERROR_OK != enErrorReg)
    {
        pstConfigArg->enCompareMode = TIMERA_enCC_COMPAREMODE_UNDEF;
        pstConfigArg->uxCompareValue = UNDEF_VALUE;
        pstConfigArg->enOutputLevel = TIMERA_enLEVEL_UNDEF;
    }
    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enSetCompareConfigExt(TIMERA_nMODULE enModuleArg,  TIMERA_nCC enSubModuleArg,
                                     TIMERA_Compare_ConfigExt_t* pstConfigArg)
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
        enErrorReg = TIMERA_CC__enSetCompareConfig(enModuleArg, enSubModuleArg, &(pstConfigArg->stConfig));
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


TIMERA_nERROR TIMERA_CC__enGetCompareConfigExt(TIMERA_nMODULE enModuleArg,  TIMERA_nCC enSubModuleArg,
                                     TIMERA_Compare_ConfigExt_t* pstConfigArg)
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
        if(TIMERA_enCC_MODE_COMPARE != enModeReg)
        {
            enErrorReg = TIMERA_enERROR_VALUE;
        }
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetCompareConfig(enModuleArg, enSubModuleArg, &(pstConfigArg->stConfig));
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
        pstConfigArg->stConfig.enCompareMode = TIMERA_enCC_COMPAREMODE_UNDEF;
        pstConfigArg->stConfig.uxCompareValue = UNDEF_VALUE;
        pstConfigArg->stConfig.enOutputLevel = TIMERA_enLEVEL_UNDEF;
        pstConfigArg->enInterruptEnable = TIMERA_enSTATE_UNDEF;
        pstConfigArg->enInterruptStatus = TIMERA_enSTATUS_UNDEF;
    }

    return (enErrorReg);
}





