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
    uint16_t u16Status = 0xFFU;

    switch(SYSCTL_UNIV_R)
    {
    case SYSCTL_UNIV_R_UNVEC_NMIIFG:
        IRQSourceHandlerReg = SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_USERNMI_NMI);
        u16Status &= IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_USERNMI_NMI);
        break;
    case SYSCTL_UNIV_R_UNVEC_OFIFG:
        IRQSourceHandlerReg = SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_USERNMI_OSC);
        u16Status &= IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_USERNMI_OSC);
        break;
    case SYSCTL_UNIV_R_UNVEC_ACCVIFG:
        IRQSourceHandlerReg = SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_enMODULE_0, SYSCTL_enINT_USERNMI_FLASH_ACCESS);
        u16Status &= IRQSourceHandlerReg(SYSCTL_BASE, (void*) SYSCTL_enINT_USERNMI_FLASH_ACCESS);
        break;
    default:
        break;
    }
    if(0xFFU != u16Status)
    {
        __low_power_mode_off_on_exit();
        __bis_SR_register_on_exit(u16Status);
        _NOP();
    }
}






