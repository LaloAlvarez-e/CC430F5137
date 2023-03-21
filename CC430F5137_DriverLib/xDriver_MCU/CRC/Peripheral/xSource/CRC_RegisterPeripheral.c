/**
 *
 * @file CRC_RegisterPeripheral.c
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
#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_RegisterPeripheral.h>

uintptr_t CRC__uptrBlockBaseAddress(void)
{
    uintptr_t uptrReg;
    uptrReg = CRC_BASE;
    return(uptrReg);
}




