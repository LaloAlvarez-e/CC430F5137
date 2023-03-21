/**
 *
 * @file CRC_WriteRegister.c
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
#include <xDriver_MCU/CRC/Driver/Intrinsics/Primitives/xHeader/CRC_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CRC/Peripheral/CRC_Peripheral.h>

CRC_nERROR CRC__enWriteRegister8Bits(CRC_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    CRC_nERROR enErrorReg;
    enErrorReg = CRC_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = CRC_enERROR_POINTER;
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = CRC__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (CRC_nERROR) MCU__enWriteRegister8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

CRC_nERROR CRC__enWriteRegister(CRC_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    CRC_nERROR enErrorReg;
    enErrorReg = CRC_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = CRC_enERROR_POINTER;
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = CRC__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (CRC_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}



