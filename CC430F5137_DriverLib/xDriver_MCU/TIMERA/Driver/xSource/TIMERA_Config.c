/**
 *
 * @file TIMERA_Config.c
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
 * @verbatim 12 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Config.h>

#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_ModuleValue.h>
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Clock.h>
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Count.h>
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Divider.h>
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Mode.h>
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Reset.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA__enSetConfig(TIMERA_nMODULE enModuleArg, TIMERA_Config_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enReset(enModuleArg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        if((TIMERA_enMODE_UP      == pstConfigArg->enOperationMode) ||
           (TIMERA_enMODE_UP_DOWN == pstConfigArg->enOperationMode))
        {
            enErrorReg = TIMERA_CC__enSetModuleValue(enModuleArg, TIMERA_enCC_0, pstConfigArg->uxPeriodTicks);
        }
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetClockSource(enModuleArg, pstConfigArg->enClockSource);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, pstConfigArg->enClockDivider);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetMode(enModuleArg, pstConfigArg->enOperationMode);
    }
    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enGetConfig(TIMERA_nMODULE enModuleArg, TIMERA_Config_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enReset(enModuleArg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetClockSource(enModuleArg, &(pstConfigArg->enClockSource));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetClockDivider(enModuleArg, &(pstConfigArg->enClockDivider));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetMode(enModuleArg, &(pstConfigArg->enOperationMode));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        if((TIMERA_enMODE_UP      == pstConfigArg->enOperationMode) ||
           (TIMERA_enMODE_UP_DOWN == pstConfigArg->enOperationMode))
        {
            enErrorReg = TIMERA_CC__enGetModuleValue(enModuleArg, TIMERA_enCC_0, &(pstConfigArg->uxPeriodTicks));
        }
    }
    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enSetConfigExt(TIMERA_nMODULE enModuleArg, TIMERA_ConfigExt_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetInterruptSourceState(enModuleArg, TIMERA_enSTATE_DIS);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetConfig(enModuleArg, &(pstConfigArg->stConfig));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetStatusInterruptSource(enModuleArg, pstConfigArg->enInterruptStatus);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetInterruptSourceState(enModuleArg, pstConfigArg->enInterruptEnable);
    }

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enGetConfigExt(TIMERA_nMODULE enModuleArg, TIMERA_ConfigExt_t* pstConfigArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetConfig(enModuleArg, &(pstConfigArg->stConfig));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enStatusInterruptSource(enModuleArg, &(pstConfigArg->enInterruptStatus));
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetInterruptSourceState(enModuleArg, &(pstConfigArg->enInterruptEnable));
    }

    return (enErrorReg);
}
