/**
 *
 * @file RAM_WriteRegister.c
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
#include <xDriver_MCU/RAM/Driver/Intrinsics/Primitives/xHeader/RAM_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/RAM/Peripheral/RAM_Peripheral.h>

RAM_nERROR RAM__enWriteRegister(RAM_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    RAM_nERROR enErrorReg;
    enErrorReg = RAM_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = RAM_enERROR_POINTER;
    }
    if(RAM_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = RAM__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (RAM_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

