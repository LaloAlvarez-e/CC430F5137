/**
 *
 * @file CLOCK_InterruptRegisterIRQSource.c
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
 * @verbatim 20 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/CLOCK_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/CLOCK_InterruptRoutine_Source.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/CLOCK_InterruptRoutine_Vector.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>
#include <xDriver_MCU/MCU/MCU.h>

CLOCK_nERROR CLOCK__enRegisterIRQSourceHandler(CLOCK_nINT enInterruptArg,
                                               CLOCK_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    CLOCK_puxfIRQSourceHandler_t* puxfIrqHandler;
    CLOCK_nERROR enErrorReg;

    enErrorReg = (CLOCK_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) CLOCK_enINT_MAX);
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = (CLOCK_nERROR) SYSCTL_USERNMI__enRegisterIRQSourceHandler(SYSCTL_enINT_USERNMI_OSC, &CLOCK__IRQVectorHandler);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = CLOCK__puxfGetIRQSourceHandlerPointer(enInterruptArg);
        enErrorReg = (CLOCK_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}
