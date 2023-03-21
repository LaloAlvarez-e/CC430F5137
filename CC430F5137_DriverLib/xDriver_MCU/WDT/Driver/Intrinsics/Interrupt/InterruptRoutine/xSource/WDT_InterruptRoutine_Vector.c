/**
 *
 * @file WDT_InterruptRoutine_Vector.c
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
 * @verbatim 29 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Vector.h"
#include "xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h"

#include "xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

__interrupt void WDT__IRQVectorHandler(void)
{
    WDT_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    uint16_t u16Status = 0xFFU;

    IRQSourceHandlerReg = WDT__puxfGetIRQSourceHandler(WDT_enINT_INTERVAL);
    u16Status &= IRQSourceHandlerReg(WDT_BASE, (void*) WDT_enINT_INTERVAL);

    if(0xFFU != u16Status)
    {
        __low_power_mode_off_on_exit();
        __bis_SR_register_on_exit(u16Status);
        _NOP();
    }
}

