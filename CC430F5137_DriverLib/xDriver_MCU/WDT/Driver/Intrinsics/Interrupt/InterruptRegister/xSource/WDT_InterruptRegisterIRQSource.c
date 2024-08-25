/**
 *
 * @file WDT_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/WDT_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>
#include <xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h>
#include <xDriver_MCU/MCU/MCU.h>

WDT_nERROR WDT__enRegisterIRQSourceHandler(WDT_nINT enInterruptArg,
                                             WDT_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    WDT_puxfIRQSourceHandler_t* puxfIrqHandler;
    WDT_nERROR enErrorReg;

    enErrorReg = (WDT_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) WDT_enINT_MAX);
    if(WDT_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = WDT__puxfGetIRQSourceHandlerPointer(enInterruptArg);
        uint16_t u16WDTInterruptSource = enInterruptArg * 2U;
        switch(__even_in_range(u16WDTInterruptSource, WDT_enINT_INTERVAL * 2U))
        {
            case WDT_enINT_TIMEOUT * 2U:
                enErrorReg = (WDT_nERROR) SYSCTL_RESET__enRegisterIRQSourceHandler(SYSCTL_enINT_RESET_WDT_TIMEOUT,
                                                                                   (SYSCTL_puxfIRQSourceHandler_t) pfIrqSourceHandler);
                break;
            case WDT_enINT_PASSWORD * 2U:
                enErrorReg = (WDT_nERROR) SYSCTL_RESET__enRegisterIRQSourceHandler(SYSCTL_enINT_RESET_WDT_PASSWORD,
                                                                                   (SYSCTL_puxfIRQSourceHandler_t) pfIrqSourceHandler);
                break;
            case WDT_enINT_INTERVAL * 2U:
                enErrorReg = (WDT_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
            default:
                break;
        }
    }
    return (enErrorReg);
}

