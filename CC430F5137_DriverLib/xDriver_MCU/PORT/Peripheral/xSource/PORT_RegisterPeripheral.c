/**
 *
 * @file PORT_RegisterPeripheral.c
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
 * @verbatim 9 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_RegisterPeripheral.h>

uintptr_t PORT__uptrBlockBaseAddress(PORT_nMODULE enModuleArg)
{
    const uintptr_t PORT_BLOCK_BASE[(UBase_t) PORT_enMODULE_MAX] =
    {
     PORT1_BASE, PORT2_BASE, PORT3_BASE, PORT4_BASE, PORT5_BASE,
    };
    return (PORT_BLOCK_BASE[(UBase_t) enModuleArg]);
}

uintptr_t PORT_EXT__uptrBlockBaseAddress(PORT_nMODULE_EXT enModuleArg)
{
    const uintptr_t PORT_BLOCK_BASE[(UBase_t) PORT_enMODULE_EXT_MAX] =
    {
     PORTA_BASE, PORTB_BASE, PORTC_BASE, PORTJ_BASE
    };
    return (PORT_BLOCK_BASE[(UBase_t) enModuleArg]);
}




