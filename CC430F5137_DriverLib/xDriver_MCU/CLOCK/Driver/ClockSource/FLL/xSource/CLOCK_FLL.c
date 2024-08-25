/**
 *
 * @file CLOCK_FLL.c
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
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/CLOCK_FLL.h>


#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_REFO.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/xHeader/CLOCK_XT1.h>
#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

CLOCK_nERROR CLOCK_FLL__enGetFrequency(uint32_t* pu32FrequencyArg)
{
    uint8_t const pu8MultiLoop[(UBase_t) CLOCK_enFLL_MULTI_LOOP_MAX] = {1,2,4,8,16,32};
    CLOCK_nERROR enErrorReg;
    CLOCK_nFLL_MULTI_LOOP enMultiLoopReg;
    uint32_t u32FrequencyReg;
    uint8_t u8MultiLoopReg;

    u32FrequencyReg = 0UL;
    enMultiLoopReg = CLOCK_enFLL_MULTI_LOOP_1;
    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_FLLDIV__enGetFrequency(&u32FrequencyReg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_FLL__enGetMultiplierLoop(&enMultiLoopReg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        u8MultiLoopReg = pu8MultiLoop[(UBase_t) enMultiLoopReg];
        u32FrequencyReg *= u8MultiLoopReg;
        *pu32FrequencyArg = (uint32_t) u32FrequencyReg;
    }
    return (enErrorReg);
}



CLOCK_nERROR CLOCK_FLLDIV__enGetFrequency(uint32_t* pu32FrequencyArg)
{
    uint8_t const pu8DividerRef[(UBase_t) CLOCK_enFLL_REFDIVIDER_MAX] = {1,2,4,8,12,16};
    CLOCK_nERROR enErrorReg;
    CLOCK_nFLL_REFERENCE enReferenceReg;
    CLOCK_nFLL_REFDIVIDER enDividerReg;
    uint32_t u32FrequencyReg;
    UBase_t uxMultiReg;
    uint8_t u8DividerReg;

    u32FrequencyReg = 0UL;
    uxMultiReg = 0UL;
    enReferenceReg = CLOCK_enFLL_REFERENCE_XT1;
    enDividerReg = CLOCK_enFLL_REFDIVIDER_1;
    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_FLL__enGetReference(&enReferenceReg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enReferenceReg *= 2;
        switch(__even_in_range(enReferenceReg, CLOCK_enFLL_REFERENCE_NONE * 2))
        {
        case CLOCK_enFLL_REFERENCE_XT1 * 2:
            enErrorReg = CLOCK_XT1__enGetFrequency(&u32FrequencyReg);
            break;
        case CLOCK_enFLL_REFERENCE_REFO * 2:
            enErrorReg = CLOCK_REFO__enGetFrequency(&u32FrequencyReg);
            break;
        case CLOCK_enFLL_REFERENCE_NONE * 2:
            u32FrequencyReg = 0UL;
            break;
        default:
            enErrorReg = CLOCK_enERROR_POINTER;
            break;
        }
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_FLL__enGetReferenceDivider(&enDividerReg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_FLL__enGetMultiplier(&uxMultiReg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        u8DividerReg = pu8DividerRef[(UBase_t) enDividerReg];
        u32FrequencyReg *= uxMultiReg;
        u32FrequencyReg /= u8DividerReg;
        *pu32FrequencyArg = (uint32_t) u32FrequencyReg;
    }
    return (enErrorReg);
}


