/**
 *
 * @file CLOCK_REFO.c
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
#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_REFO.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

#define CLOCK_REFO_FREQ (32768UL)

static uint32_t u32REFOClockFrequency = CLOCK_REFO_FREQ;

CLOCK_nERROR CLOCK_REFO__enSetFrequency(uint32_t u32FrequencyArg)
{
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_VALUE;
    if(0 != u32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_OK;
        u32REFOClockFrequency = u32FrequencyArg;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_REFO__enGetFrequency(uint32_t* pu32FrequencyArg)
{
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *pu32FrequencyArg = (uint32_t) u32REFOClockFrequency;
    }

    return (enErrorReg);
}





