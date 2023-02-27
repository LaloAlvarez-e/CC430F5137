/**
 *
 * @file PORT_InterruptRoutine_Vector.c
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
#include "xDriver_MCU/PORT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/PORT_InterruptRoutine_Vector.h"
#include "xDriver_MCU/PORT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/PORT_InterruptRoutine_Source.h"

#include "xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h"
#include "xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h"

__interrupt void PORT1__IRQVectorHandler(void)
{
    PORT_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    uint16_t u16Status = 0xFFU;

    switch(PORT1_IV_R)
    {
    case PORT_IV_R_PIN_0:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_0);
        u16Status &= IRQSourceHandlerReg(PORT1_BASE, (void*) PORT_enPIN_0);
        break;
    case PORT_IV_R_PIN_1:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_1);
        u16Status &= IRQSourceHandlerReg(PORT1_BASE, (void*) PORT_enPIN_1);
        break;
    case PORT_IV_R_PIN_2:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_2);
        u16Status &= IRQSourceHandlerReg(PORT1_BASE, (void*) PORT_enPIN_2);
        break;
    case PORT_IV_R_PIN_3:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_3);
        u16Status &= IRQSourceHandlerReg(PORT1_BASE, (void*) PORT_enPIN_3);
        break;
    case PORT_IV_R_PIN_4:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_4);
        u16Status &= IRQSourceHandlerReg(PORT1_BASE, (void*) PORT_enPIN_4);
        break;
    case PORT_IV_R_PIN_5:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_5);
        u16Status &= IRQSourceHandlerReg(PORT1_BASE, (void*) PORT_enPIN_5);
        break;
    case PORT_IV_R_PIN_6:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_6);
        u16Status &= IRQSourceHandlerReg(PORT1_BASE, (void*) PORT_enPIN_6);
        break;
    case PORT_IV_R_PIN_7:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_7);
        u16Status &= IRQSourceHandlerReg(PORT_BASE, (void*) PORT_enPIN_7);
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

__interrupt void PORT2__IRQVectorHandler(void)
{
    PORT_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    uint16_t u16Status = 0xFFU;

    switch(PORT2_IV_R)
    {
    case PORT_IV_R_PIN_0:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_0);
        u16Status &= IRQSourceHandlerReg(PORT2_BASE, (void*) PORT_enPIN_0);
        break;
    case PORT_IV_R_PIN_1:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_1);
        u16Status &= IRQSourceHandlerReg(PORT2_BASE, (void*) PORT_enPIN_1);
        break;
    case PORT_IV_R_PIN_2:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_2);
        u16Status &= IRQSourceHandlerReg(PORT2_BASE, (void*) PORT_enPIN_2);
        break;
    case PORT_IV_R_PIN_3:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_3);
        u16Status &= IRQSourceHandlerReg(PORT2_BASE, (void*) PORT_enPIN_3);
        break;
    case PORT_IV_R_PIN_4:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_4);
        u16Status &= IRQSourceHandlerReg(PORT2_BASE, (void*) PORT_enPIN_4);
        break;
    case PORT_IV_R_PIN_5:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_5);
        u16Status &= IRQSourceHandlerReg(PORT2_BASE, (void*) PORT_enPIN_5);
        break;
    case PORT_IV_R_PIN_6:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_6);
        u16Status &= IRQSourceHandlerReg(PORT2_BASE, (void*) PORT_enPIN_6);
        break;
    case PORT_IV_R_PIN_7:
        IRQSourceHandlerReg = PORT__puxfGetIRQSourceHandler(PORT_enMODULE_2, PORT_enPIN_7);
        u16Status &= IRQSourceHandlerReg(PORT_BASE, (void*) PORT_enPIN_7);
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




