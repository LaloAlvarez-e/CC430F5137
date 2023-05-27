/**
 *
 * @file AES_ReadRegister.c
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
 * @verbatim 12 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/xHeader/AES_ReadRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enReadRegister8Bits(AES_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = AES__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (AES_nERROR) MCU__enReadRegister8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

AES_nERROR AES__enReadRegister(AES_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = AES__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (AES_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}



