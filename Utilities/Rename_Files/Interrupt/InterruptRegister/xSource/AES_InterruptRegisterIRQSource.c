/**
 *
 * @file AES_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/AES/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/AES_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/AES_InterruptRoutine_Source.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>
#include <xDriver_MCU/MCU/MCU.h>

AES_nERROR AES__enRegisterIRQSourceHandler(AES_nINT enInterruptArg,
                                             AES_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    AES_puxfIRQSourceHandler_t* puxfIrqHandler;
    AES_nERROR enErrorReg;

    enErrorReg = (AES_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) AES_enINT_MAX);
    if(AES_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = AES__puxfGetIRQSourceHandlerPointer(enInterruptArg);
        switch(enInterruptArg)
        {
            case AES_enINT_TIMEOUT:
                enErrorReg = (AES_nERROR) SYSCTL_RESET__enRegisterIRQSourceHandler(SYSCTL_enINT_RESET_AES_TIMEOUT,
                                                                                   (SYSCTL_puxfIRQSourceHandler_t) pfIrqSourceHandler);
                break;
            case AES_enINT_PASSWORD:
                enErrorReg = (AES_nERROR) SYSCTL_RESET__enRegisterIRQSourceHandler(SYSCTL_enINT_RESET_AES_PASSWORD,
                                                                                   (SYSCTL_puxfIRQSourceHandler_t) pfIrqSourceHandler);
                break;
            case AES_enINT_INTERVAL:
                enErrorReg = (AES_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
            default:
                break;
        }
    }
    return (enErrorReg);
}

