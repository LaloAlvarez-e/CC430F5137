/**
 *
 * @file CLOCK_Multiplier.c
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
 * @verbatim 3 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_Multiplier.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

CLOCK_nERROR CLOCK_FLL__enSetMultiplierLoop(CLOCK_nFLL_MULTI_LOOP enMultiLoopArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT;
    stRegister.uxMask = CLOCK_CTL2_FLL_MULTI_LOOP_MASK;
    stRegister.uptrAddress = CLOCK_CTL2_OFFSET;
    stRegister.uxValue = (UBase_t) enMultiLoopArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetMultiplierLoop(CLOCK_nFLL_MULTI_LOOP* penMultiLoopArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penMultiLoopArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT;
        stRegister.uxMask = CLOCK_CTL2_FLL_MULTI_LOOP_MASK;
        stRegister.uptrAddress = CLOCK_CTL2_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penMultiLoopArg = (CLOCK_nFLL_MULTI_LOOP) stRegister.uxValue;
    }

    return (enErrorReg);
}



CLOCK_nERROR CLOCK_FLL__enSetMultiplier(UBase_t uxMultiArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;
    enErrorReg = CLOCK_enERROR_OK;
    if(0U == uxMultiArg)
    {
        enErrorReg = CLOCK_enERROR_VALUE;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL2_R_FLL_MULTI_BIT;
        stRegister.uxMask = CLOCK_CTL2_FLL_MULTI_MASK;
        stRegister.uptrAddress = CLOCK_CTL2_OFFSET;
        stRegister.uxValue = (UBase_t) uxMultiArg - 1U;
        enErrorReg = CLOCK__enWriteRegister(&stRegister);
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetMultiplier(UBase_t* puxMultiArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) puxMultiArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL2_R_FLL_MULTI_BIT;
        stRegister.uxMask = CLOCK_CTL2_FLL_MULTI_MASK;
        stRegister.uptrAddress = CLOCK_CTL2_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        if(0 == stRegister.uxValue)
        {
            *puxMultiArg = 2U;
        }
        else
        {
            *puxMultiArg = (UBase_t) stRegister.uxValue + 1U;
        }
    }

    return (enErrorReg);
}


