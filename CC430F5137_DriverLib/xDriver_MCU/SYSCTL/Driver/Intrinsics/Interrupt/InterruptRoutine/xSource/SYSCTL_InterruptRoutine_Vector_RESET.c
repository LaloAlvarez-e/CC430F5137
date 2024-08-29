/**
 *
 * @file SYSCTL_InterruptRoutine_Vector_RESET.c
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
#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Vector_RESET.h"
#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h"

#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h"
#include "xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

void SYSCTL_RESET__IRQVectorHandler(void)
{
    SYSCTL_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    uint16_t u16SysctlInterruptSource;

    u16SysctlInterruptSource = SYSCTL_RSTIV_R;
    switch(__even_in_range(u16SysctlInterruptSource, SYSCTL_RSTIV_R_RSTVEC_PMM_PASSWORD))
    {
    case SYSCTL_RSTIV_R_RSTVEC_BROWNOUT:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_BROWNOUT);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_BROWNOUT);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_RST_NMI:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_NMI);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_NMI);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_PMMSWBOR:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_BOR_SW);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_BOR_SW);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_WAKEUP:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_WAKEUP);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_WAKEUP);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_SECURITY:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_SECURITY);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_SECURITY);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_SVSL:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_SVS_LOW);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_SVS_LOW);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_SVSH:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_SVS_HIGH);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_SVS_HIGH);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_SVML_OVP:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_SVM_LOW);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_SVM_LOW);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_SVMH_OVP:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_SVM_HIGH);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_SVM_HIGH);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_PMMSWPOR:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_POR_SW);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_POR_SW);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_WDT_TIMEOUT:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_WDT_TIMEOUT);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_WDT_TIMEOUT);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_WDT_PASSWORD:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_WDT_PASSWORD);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_WDT_PASSWORD);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_FLASH_PASSWORD:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_FLASH_PASSWORD);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_FLASH_PASSWORD);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_PERF:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_FETCH);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_FETCH);
        break;
    case SYSCTL_RSTIV_R_RSTVEC_PMM_PASSWORD:
        IRQSourceHandlerReg = SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_enINT_RESET_PMM_PASSWORD);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_RESET_PMM_PASSWORD);
        break;
    default:
        enStatus = MCU_enISR_RETURN_UNCHANGED;
        break;
    }

}

