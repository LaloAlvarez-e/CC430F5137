/**
 *
 * @file MAP_RegisterPeripheral.c
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
#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_RegisterPeripheral.h>

uintptr_t MAP_PORT__uptrBlockBaseAddress(MAP_nMODULE enModuleArg)
{
    const uintptr_t MAP_BLOCK_BASE[(UBase_t) MAP_enMODULE_MAX] =
    {
     MAP_PORT1_BASE, MAP_PORT2_BASE, MAP_PORT3_BASE,
    };
    return (MAP_BLOCK_BASE[(UBase_t) enModuleArg]);
}

uintptr_t MAP__uptrBlockBaseAddress(void)
{
    return MAP_BASE;
}



