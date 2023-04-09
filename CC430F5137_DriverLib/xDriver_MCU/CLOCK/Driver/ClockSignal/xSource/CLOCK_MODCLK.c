/**
 *
 * @file CLOCK_MODCLK.c
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
 * @verbatim 5 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSignal/xHeader/CLOCK_MODCLK.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

#define CLOCK_MODCLK_FREQ (5000000UL)

static uint32_t u32MODCLKClockFrequency = CLOCK_MODCLK_FREQ;

CLOCK_nERROR CLOCK_MODCLK__enSetFrequency(uint32_t u32FrequencyArg)
{
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_VALUE;
    if(0 != u32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_OK;
        u32MODCLKClockFrequency = u32FrequencyArg;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_MODCLK__enGetFrequency(uint32_t* pu32FrequencyArg)
{
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *pu32FrequencyArg = (uint32_t) u32MODCLKClockFrequency;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_MODCLK__enSetPeripheralRequestState(CLOCK_nSTATE enStateArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL8_R_MODOSC_REQ_BIT;
    stRegister.uxMask = CLOCK_CTL8_MODOSC_REQ_MASK;
    stRegister.uptrAddress = CLOCK_CTL8_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}

CLOCK_nERROR CLOCK_MODCLK__enGetPeripheralRequestState(CLOCK_nSTATE* penStateArg)
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
        stRegister.uxShift = CLOCK_CTL8_R_MODOSC_REQ_BIT;
        stRegister.uxMask = CLOCK_CTL8_MODOSC_REQ_MASK;
        stRegister.uptrAddress = CLOCK_CTL8_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penStateArg = (CLOCK_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}

