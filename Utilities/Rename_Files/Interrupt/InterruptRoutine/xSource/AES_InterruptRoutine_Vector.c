/**
 *
 * @file AES_InterruptRoutine_Vector.c
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
#include "xDriver_MCU/AES/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/AES_InterruptRoutine_Vector.h"
#include "xDriver_MCU/AES/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/AES_InterruptRoutine_Source.h"

#include "xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h"
#include "xDriver_MCU/AES/Peripheral/AES_Peripheral.h"

__interrupt void AES__IRQVectorHandler(void)
{
    AES_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    uint16_t u16Status = 0xFFU;

    IRQSourceHandlerReg = AES__puxfGetIRQSourceHandler(AES_enINT_INTERVAL);
    u16Status &= IRQSourceHandlerReg(AES_BASE, (void*) AES_enINT_INTERVAL);

    if(0xFFU != u16Status)
    {
        __low_power_mode_off_on_exit();
        __bis_SR_register_on_exit(u16Status);
        _NOP();
    }
}

