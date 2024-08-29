/**
 *
 * @file SYSCTL_InterruptRoutine_Vector_USERNMI.c
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
#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Vector_USERNMI.h"
#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h"

#include "xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h"
#include "xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h"

__interrupt void SYSCTL_USERNMI__IRQVectorHandler(void)
{
    SYSCTL_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    uint16_t u16UserNMIInterruptSource;

    u16UserNMIInterruptSource = SYSCTL_UNIV_R;
    switch(__even_in_range(u16UserNMIInterruptSource, SYSCTL_UNIV_R_UNVEC_BUSIFG))
    {
    case SYSCTL_UNIV_R_UNVEC_NMIIFG:
        IRQSourceHandlerReg = SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_USERNMI_NMI);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_USERNMI_NMI);
        break;
    case SYSCTL_UNIV_R_UNVEC_OFIFG:
        IRQSourceHandlerReg = SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_USERNMI_OSC);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_USERNMI_OSC);
        break;
    case SYSCTL_UNIV_R_UNVEC_ACCVIFG:
        IRQSourceHandlerReg = SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_enINT_USERNMI_FLASH_ACCESS);
        enStatus = IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_USERNMI_FLASH_ACCESS);
        break;
    case SYSCTL_UNIV_R_UNVEC_BUSIFG:
        enStatus = MCU_enISR_RETURN_UNCHANGED;
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






