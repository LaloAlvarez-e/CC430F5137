/**
 *
 * @file SFR_RegisterPeripheral.c
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
#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_RegisterPeripheral.h>

uintptr_t SFR__uptrBlockBaseAddress(SFR_nMODULE enModuleArg)
{
    const uintptr_t SFR_BLOCK_BASE[(UBase_t) SFR_enMODULE_MAX] =
    {
     SFR_BASE,
    };
    return (SFR_BLOCK_BASE[(UBase_t) enModuleArg]);
}





