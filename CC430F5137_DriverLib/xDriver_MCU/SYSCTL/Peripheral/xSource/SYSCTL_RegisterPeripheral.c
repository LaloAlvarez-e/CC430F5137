/**
 *
 * @file SYSCTL_RegisterPeripheral.c
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
#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_RegisterPeripheral.h>

uintptr_t SYSCTL__uptrBlockBaseAddress(SYSCTL_nMODULE enModuleArg)
{
    const uintptr_t SYSCTL_BLOCK_BASE[(UBase_t) SYSCTL_enMODULE_MAX] =
    {
     SYSCTL_BASE,
    };
    return (SYSCTL_BLOCK_BASE[(UBase_t) enModuleArg]);
}





