/**
 *
 * @file TIMERA_RegisterPeripheral.c
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
 * @verbatim 6 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/TIMERA/Peripheral/RegisterPeripheral/TIMERA_RegisterPeripheral.h"

uintptr_t TIMERA_CC__uptrBlockBaseAddress(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg)
{
    const uintptr_t TIMERA_BLOCK_BASE[(UBase_t) TIMERA_enMODULE_MAX][(UBase_t) TIMERA_enCC_MAX] =
    {
         {TIMERA0_CC0_BASE, TIMERA0_CC1_BASE, TIMERA0_CC2_BASE, TIMERA0_CC3_BASE, TIMERA0_CC4_BASE},
         {TIMERA1_CC0_BASE, TIMERA1_CC1_BASE, TIMERA1_CC2_BASE, TIMERA1_CC0_BASE, TIMERA1_CC0_BASE},
    };
    uintptr_t uptrReg;
    uptrReg = TIMERA_BLOCK_BASE[(UBase_t) enModuleArg][(UBase_t) enSubModuleArg];
    return(uptrReg);
}

uintptr_t TIMERA__uptrBlockBaseAddress(TIMERA_nMODULE enModuleArg)
{
    const uintptr_t TIMERA_BLOCK_BASE[(UBase_t) TIMERA_enMODULE_MAX] =
    {
         TIMERA0_BASE, TIMERA1_BASE
    };
    uintptr_t uptrReg;
    uptrReg = TIMERA_BLOCK_BASE[(uint8_t) enModuleArg];
    return(uptrReg);
}




