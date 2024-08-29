/**
 *
 * @file SYSCTL_InterruptRoutine_Vector_SYSNMI.c
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
 * @verbatim 19 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 19 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Vector_SYSNMI.h"
#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h"

#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h"
#include "xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

__interrupt void SYSCTL_SYSNMI__IRQVectorHandler(void)
{
    SYSCTL_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    uint16_t u16SysNMIInterruptSource;

    u16SysNMIInterruptSource = SYSCTL_SNIV_R;
    switch(__even_in_range(u16SysNMIInterruptSource, SYSCTL_SNIV_R_SNVEC_SVMHVLRIFG))
    {
    case SYSCTL_SNIV_R_SNVEC_SVMLIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_SVM_LOW);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_SVM_LOW);
        break;
    case SYSCTL_SNIV_R_SNVEC_SVMHIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_SVM_HIGH);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_SVM_HIGH);
        break;
    case SYSCTL_SNIV_R_SNVEC_SVSMLDLYIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_SVSM_LOW_DELAY);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_SVSM_LOW_DELAY);
        break;
    case SYSCTL_SNIV_R_SNVEC_SVSMHDLYIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_SVSM_HIGH_DELAY);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_SVSM_HIGH_DELAY);
        break;
    case SYSCTL_SNIV_R_SNVEC_VMAIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_VMA);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_VMA);
        break;
    case SYSCTL_SNIV_R_SNVEC_JMBINIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_JMB_IN);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_JMB_IN);
        break;
    case SYSCTL_SNIV_R_SNVEC_JMBOUTIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_JMB_OUT);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_JMB_OUT);
        break;
    case SYSCTL_SNIV_R_SNVEC_SVMLVLRIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_SVM_LOW_LEVEL);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_SVM_LOW_LEVEL);
        break;
    case SYSCTL_SNIV_R_SNVEC_SVMHVLRIFG:
        IRQSourceHandlerReg = SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_SYSNMI_SVM_HIGH_LEVEL);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_SYSNMI_SVM_HIGH_LEVEL);
        break;
    default:
        enStatus = MCU_enISR_RETURN_UNCHANGED;
        break;
    }

    if(MCU_enISR_RETURN_UNCHANGED != enStatus)
    {
        __low_power_mode_off_on_exit();
        __bis_SR_register_on_exit((uint16_t) enStatus);
        _NOP();
    }
}




