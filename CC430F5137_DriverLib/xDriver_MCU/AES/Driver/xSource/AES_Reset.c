/**
 *
 * @file AES_Reset.c
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
 * @verbatim 11 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/xHeader/AES_Reset.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enReset(void)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) AES_ACTL0_R_SWRST_BIT;
    stRegister.uxMask = (UBase_t) AES_ACTL0_SWRST_MASK;
    stRegister.uptrAddress = AES_ACTL0_OFFSET;
    stRegister.uxValue = (UBase_t) AES_ACTL0_SWRST_RESET;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}


