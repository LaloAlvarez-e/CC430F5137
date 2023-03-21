/**
 *
 * @file SYSCTL_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/SYSCTL_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>
#include <xDriver_MCU/MCU/MCU.h>

SYSCTL_nERROR SYSCTL_RESET__enRegisterIRQSourceHandler(SYSCTL_nINT_RESET enInterruptArg,
                                                       SYSCTL_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    SYSCTL_puxfIRQSourceHandler_t* puxfIrqHandler;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = (SYSCTL_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSCTL_enINT_RESET_MAX);
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = SYSCTL_RESET__puxfGetIRQSourceHandlerPointer(enInterruptArg);
        enErrorReg = (SYSCTL_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL_USERNMI__enRegisterIRQSourceHandler(SYSCTL_nINT_USERNMI enInterruptArg,
                                                         SYSCTL_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    SYSCTL_puxfIRQSourceHandler_t* puxfIrqHandler;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = (SYSCTL_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSCTL_enINT_USERNMI_MAX);
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = SYSCTL_USERNMI__puxfGetIRQSourceHandlerPointer(enInterruptArg);
        enErrorReg = (SYSCTL_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL_SYSNMI__enRegisterIRQSourceHandler(SYSCTL_nINT_SYSNMI enInterruptArg,
                                                        SYSCTL_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    SYSCTL_puxfIRQSourceHandler_t* puxfIrqHandler;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = (SYSCTL_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SYSCTL_enINT_SYSNMI_MAX);
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = SYSCTL_SYSNMI__puxfGetIRQSourceHandlerPointer(enInterruptArg);
        enErrorReg = (SYSCTL_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}


