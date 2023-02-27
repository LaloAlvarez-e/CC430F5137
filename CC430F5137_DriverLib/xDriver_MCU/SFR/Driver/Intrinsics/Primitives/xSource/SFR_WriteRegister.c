/**
 *
 * @file SFR_WriteRegister.c
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
#include <xDriver_MCU/SFR/Driver/Intrinsics/Primitives/xHeader/SFR_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/SFR/Peripheral/SFR_Peripheral.h>

SFR_nERROR SFR__enWriteRegister(SFR_nMODULE enModuleArg, SFR_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    SFR_nERROR enErrorReg;
    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SFR_enMODULE_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = SFR__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (SFR_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enWriteRegisterDirect(SFR_nMODULE enModuleArg, SFR_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    SFR_nERROR enErrorReg;

    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SFR_enMODULE_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = SFR__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (SFR_nERROR) MCU__enWriteRegisterDirect(pstRegisterDataArg);
    }
    return (enErrorReg);
}




