/**
 *
 * @file TIMERA_InterruptSource_Enable.c
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
#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/xHeader/TIMERA_InterruptSource_Enable.h"

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Primitives/TIMERA_Primitives.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

TIMERA_nERROR TIMERA__enSetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nSTATE enStateArg)
{
    TIMERA_nERROR enErrorReg;
    TIMERA_Register_t stRegister;

    stRegister.uptrAddress = TIMERA_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    stRegister.uxMask = (UBase_t) TIMERA_CTL_IE_MASK;
    stRegister.uxShift = (UBase_t) TIMERA_CTL_R_IE_BIT;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enEnableInterruptSource(TIMERA_nMODULE enModuleArg)
{
    TIMERA_nERROR enErrorReg;
    enErrorReg = TIMERA__enSetInterruptSourceState(enModuleArg, TIMERA_enSTATE_ENA);
    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enDisableInterruptSource(TIMERA_nMODULE enModuleArg)
{
    TIMERA_nERROR enErrorReg;
    enErrorReg = TIMERA__enSetInterruptSourceState(enModuleArg, TIMERA_enSTATE_DIS);
    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enGetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nSTATE* penStateArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = TIMERA_CTL_R_IE_BIT;
        stRegister.uxMask = (uint8_t) TIMERA_CTL_IE_MASK;
        stRegister.uptrAddress = TIMERA_CTL_OFFSET;
        enErrorReg = TIMERA__enReadRegister(enModuleArg, &stRegister);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penStateArg = (TIMERA_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}




TIMERA_nERROR TIMERA_CC__enSetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nSTATE enStateArg)
{
    TIMERA_nERROR enErrorReg;
    TIMERA_Register_t stRegister;

    stRegister.uptrAddress = TIMERA_CC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    stRegister.uxMask = (UBase_t) TIMERA_CC_CTL_IE_MASK;
    stRegister.uxShift = (UBase_t) TIMERA_CC_CTL_R_IE_BIT;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &stRegister);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enEnableInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg)
{
    TIMERA_nERROR enErrorReg;
    enErrorReg = TIMERA_CC__enSetInterruptSourceState(enModuleArg, enSubModuleArg, TIMERA_enSTATE_ENA);
    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enDisableInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg)
{
    TIMERA_nERROR enErrorReg;
    enErrorReg = TIMERA_CC__enSetInterruptSourceState(enModuleArg, enSubModuleArg, TIMERA_enSTATE_DIS);
    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enGetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nSTATE* penStateArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = TIMERA_CC_CTL_R_IE_BIT;
        stRegister.uxMask = (uint8_t) TIMERA_CC_CTL_IE_MASK;
        stRegister.uptrAddress = TIMERA_CC_CTL_OFFSET;
        enErrorReg = TIMERA_CC__enReadRegister(enModuleArg, enSubModuleArg, &stRegister);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penStateArg = (TIMERA_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}
