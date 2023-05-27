/**
 *
 * @file AES_Init.c
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
 * @verbatim 7 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/xHeader/AES_Init.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>


AES_nERROR AES__enSetInitData(UBase_t uxData)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) AES_INI_R_INIT_BIT;
    stRegister.uxMask = (UBase_t) AES_INI_INIT_MASK;
    stRegister.uptrAddress = (uintptr_t) AES_INI_OFFSET;
    stRegister.uxValue = (UBase_t) uxData;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}





