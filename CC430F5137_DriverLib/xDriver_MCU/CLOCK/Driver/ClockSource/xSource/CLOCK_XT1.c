/**
 *
 * @file CLOCK_XT1.c
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
 * @verbatim 7 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_XT1.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

#define CLOCK_XT1_FREQ (32768UL)

static uint32_t u32XT1ClockFrequency = CLOCK_XT1_FREQ;

CLOCK_nERROR CLOCK_XT1__enSetFrequency(uint32_t u32FrequencyArg)
{
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_VALUE;
    if(0 != u32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_OK;
        u32XT1ClockFrequency = u32FrequencyArg;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enGetFrequency(uint32_t* pu32FrequencyArg)
{
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *pu32FrequencyArg = (uint32_t) u32XT1ClockFrequency;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enSetSource(CLOCK_nXT1_SOURCE enSourceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL6_R_XT1_BYPASS_BIT;
    stRegister.uxMask = CLOCK_CTL6_XT1_BYPASS_MASK;
    stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
    stRegister.uxValue = (UBase_t) enSourceArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enGetSource(CLOCK_nXT1_SOURCE* penSourceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penSourceArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL6_R_XT1_BYPASS_BIT;
        stRegister.uxMask = CLOCK_CTL6_XT1_BYPASS_MASK;
        stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penSourceArg = (CLOCK_nXT1_SOURCE) stRegister.uxValue;
    }

    return (enErrorReg);
}



CLOCK_nERROR CLOCK_XT1__enSetCapacitance(CLOCK_nXT1_CAP enCapacitanceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL6_R_XT1_DRIVE_BIT;
    stRegister.uxMask = CLOCK_CTL6_XT1_DRIVE_MASK;
    stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
    stRegister.uxValue = (UBase_t) enCapacitanceArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL6_R_XT1_CAP_BIT;
        stRegister.uxMask = CLOCK_CTL6_XT1_CAP_MASK;
        stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
        stRegister.uxValue = (UBase_t) enCapacitanceArg;
        enErrorReg = CLOCK__enWriteRegister(&stRegister);
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enGetCapacitance(CLOCK_nXT1_CAP* penCapacitanceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penCapacitanceArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL6_R_XT1_CAP_BIT;
        stRegister.uxMask = CLOCK_CTL6_XT1_CAP_MASK;
        stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penCapacitanceArg = (CLOCK_nXT1_CAP) stRegister.uxValue;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enSetMode(CLOCK_nXT1_MODE enModeArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL6_R_XT1_MODE_BIT;
    stRegister.uxMask = CLOCK_CTL6_XT1_MODE_MASK;
    stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
    stRegister.uxValue = (UBase_t) enModeArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enGetMode(CLOCK_nXT1_MODE* penModeArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penModeArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL6_R_XT1_MODE_BIT;
        stRegister.uxMask = CLOCK_CTL6_XT1_MODE_MASK;
        stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penModeArg = (CLOCK_nXT1_MODE) stRegister.uxValue;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enSetConditionalState(CLOCK_nSTATE enStateArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;
    UBase_t uxStateReg;

    if(CLOCK_enSTATE_DIS == enStateArg)
    {
        uxStateReg = CLOCK_CTL6_XT1_OFF_OFF;
    }
    else
    {
        uxStateReg = CLOCK_CTL6_XT1_OFF_ON;
    }

    stRegister.uxShift = CLOCK_CTL6_R_XT1_OFF_BIT;
    stRegister.uxMask = CLOCK_CTL6_XT1_OFF_MASK;
    stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
    stRegister.uxValue = (UBase_t) uxStateReg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_XT1__enGetConditionalState(CLOCK_nSTATE* penStateArg)
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
        stRegister.uxShift = CLOCK_CTL6_R_XT1_OFF_BIT;
        stRegister.uxMask = CLOCK_CTL6_XT1_OFF_MASK;
        stRegister.uptrAddress = CLOCK_CTL6_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        if(CLOCK_CTL6_XT1_OFF_ON == stRegister.uxValue)
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
