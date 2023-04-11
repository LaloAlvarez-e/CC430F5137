/**
 *
 * @file PMM_RegisterPeripheral.c
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
#include <xDriver_MCU/PMM/Peripheral/xHeader/PMM_RegisterPeripheral.h>

uintptr_t PMM__uptrBlockBaseAddress(void)
{
    uintptr_t uptrReg;
    uptrReg = PMM_BASE_;
    return(uptrReg);
}





