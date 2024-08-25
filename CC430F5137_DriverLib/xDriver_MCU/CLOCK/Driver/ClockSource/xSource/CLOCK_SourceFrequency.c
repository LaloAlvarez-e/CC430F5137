/**
 *
 * @file CLOCK_SourceFrequency.c
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
 * @verbatim 9 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_SourceFrequency.h>

#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_XT1.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_REFO.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_VLO.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/CLOCK_FLL.h>
#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>


CLOCK_nERROR CLOCK__enGetSourceFrequency(CLOCK_nSOURCE enSourceArg, uint32_t* pu32FrequencyArg)
{
    uint32_t u32Frequency;
    CLOCK_nERROR enErrorReg;

    u32Frequency = 0U;
    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enSourceArg *= 2;
        switch(__even_in_range(enSourceArg, CLOCK_enSOURCE_FLL_DIV * 2))
        {
        case CLOCK_enSOURCE_XT1 * 2:
            enErrorReg = CLOCK_XT1__enGetFrequency(&u32Frequency);
            break;
        case CLOCK_enSOURCE_VLO * 2:
            enErrorReg = CLOCK_VLO__enGetFrequency(&u32Frequency);
            break;
        case CLOCK_enSOURCE_REFO * 2:
            enErrorReg = CLOCK_REFO__enGetFrequency(&u32Frequency);
            break;
        case CLOCK_enSOURCE_FLL * 2:
            enErrorReg = CLOCK_FLL__enGetFrequency(&u32Frequency);
            break;
        case CLOCK_enSOURCE_FLL_DIV * 2:
            enErrorReg = CLOCK_FLLDIV__enGetFrequency(&u32Frequency);
            break;
        default:
            enErrorReg = CLOCK_enERROR_VALUE;
            break;
        }
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *pu32FrequencyArg = (uint32_t) u32Frequency;
    }
    return (enErrorReg);
}






