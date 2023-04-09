/**
 *
 * @file CLOCK_InterruptRoutine_Source.c
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
 * @verbatim 13 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/CLOCK_InterruptRoutine_Source.h>

static CLOCK_puxfIRQSourceHandler_t CLOCK_uxIRQSourceHandler[(UBase_t) CLOCK_enINT_MAX] =
{
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
};


CLOCK_puxfIRQSourceHandler_t CLOCK__puxfGetIRQSourceHandler(CLOCK_nINT enInterruptArg)
{
    CLOCK_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = CLOCK_uxIRQSourceHandler[(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}

CLOCK_puxfIRQSourceHandler_t* CLOCK__puxfGetIRQSourceHandlerPointer(CLOCK_nINT enInterruptArg)
{
    CLOCK_puxfIRQSourceHandler_t* puxfFunctionReg;

    puxfFunctionReg = &CLOCK_uxIRQSourceHandler[(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}
