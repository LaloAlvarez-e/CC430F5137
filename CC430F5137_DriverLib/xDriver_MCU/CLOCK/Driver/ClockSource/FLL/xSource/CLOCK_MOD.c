/**
 *
 * @file CLOCK_MOD.c
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
 * @verbatim 2 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_MOD.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

CLOCK_nERROR CLOCK_FLL__enSetModulationValue(UBase_t uxValueArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL0_R_MOD_BIT;
    stRegister.uxMask = CLOCK_CTL0_MOD_MASK;
    stRegister.uptrAddress = CLOCK_CTL0_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetModulationValue(UBase_t* puxValueArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) puxValueArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL0_R_MOD_BIT;
        stRegister.uxMask = CLOCK_CTL0_MOD_MASK;
        stRegister.uptrAddress = CLOCK_CTL0_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *puxValueArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}





CLOCK_nERROR CLOCK_FLL__enSetModulationState(CLOCK_nSTATE enStateArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;
    UBase_t uxValue;

    if(CLOCK_enSTATE_DIS == enStateArg)
    {
        uxValue = CLOCK_CTL1_MOD_DIS_DIS;
    }
    else
    {
        uxValue = CLOCK_CTL1_MOD_DIS_ENA;
    }

    stRegister.uxShift = CLOCK_CTL1_R_MOD_DIS_BIT;
    stRegister.uxMask = CLOCK_CTL1_MOD_DIS_MASK;
    stRegister.uptrAddress = CLOCK_CTL1_OFFSET;
    stRegister.uxValue = (UBase_t) uxValue;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetModulationState(CLOCK_nSTATE* penStateArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penStateArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL1_R_MOD_DIS_BIT;
        stRegister.uxMask = CLOCK_CTL1_MOD_DIS_MASK;
        stRegister.uptrAddress = CLOCK_CTL1_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        if(CLOCK_CTL1_MOD_DIS_ENA == stRegister.uxValue)
        {
            *penStateArg = CLOCK_enSTATE_ENA;
        }
        else
        {
            *penStateArg = CLOCK_enSTATE_DIS;
        }

    }
    return (enErrorReg);
}

