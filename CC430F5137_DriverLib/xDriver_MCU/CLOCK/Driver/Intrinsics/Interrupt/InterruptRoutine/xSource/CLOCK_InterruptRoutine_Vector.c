/**
 *
 * @file CLOCK_InterruptRoutine_Vector.c
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
 * @verbatim 23 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/CLOCK/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/CLOCK_InterruptRoutine_Vector.h"
#include "xDriver_MCU/CLOCK/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/CLOCK_InterruptRoutine_Source.h"

#include "xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h"
#include "xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h"

UBase_t CLOCK__IRQVectorHandler(uintptr_t uptrModuleArg, void* pvArgument)
{
    CLOCK_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    uint16_t u16Status = 0xFFU;
    uint16_t u16FlagReg;

    u16FlagReg = CLOCK_CTL7_R;
    if(0U != (CLOCK_CTL7_R_DCO_FFG_MASK & u16FlagReg))
    {
        CLOCK_CTL7_R &= ~CLOCK_CTL7_R_DCO_FFG_MASK;
        IRQSourceHandlerReg = CLOCK__puxfGetIRQSourceHandler(CLOCK_enINT_DCO_FAULT);
        u16Status &= IRQSourceHandlerReg(CLOCK_BASE, (void*) CLOCK_enINT_DCO_FAULT);
    }
    if(0U != (CLOCK_CTL7_R_XT1_LFOSC_FFG_MASK & u16FlagReg))
    {
        CLOCK_CTL7_R &= ~CLOCK_CTL7_R_XT1_LFOSC_FFG_MASK;
        IRQSourceHandlerReg = CLOCK__puxfGetIRQSourceHandler(CLOCK_enINT_XT1_LF_FAULT);
        u16Status &= IRQSourceHandlerReg(CLOCK_BASE, (void*) CLOCK_enINT_XT1_LF_FAULT);
    }

    return (u16Status);
}



