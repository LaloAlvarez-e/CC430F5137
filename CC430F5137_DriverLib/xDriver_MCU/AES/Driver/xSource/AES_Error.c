/**
 *
 * @file AES_Error.c
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
#include <xDriver_MCU/AES/Driver/xHeader/AES_Error.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enIsErrorOccurred(AES_nBOOLEAN* penErrorArg)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) penErrorArg)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ACTL0_R_ERRFG_BIT;
        stRegister.uxMask = (UBase_t) AES_ACTL0_ERRFG_MASK;
        stRegister.uptrAddress = AES_ACTL0_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *penErrorArg = (AES_nBOOLEAN) stRegister.uxValue;
    }
    return (enErrorReg);
}





