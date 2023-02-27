/**
 *
 * @file SYSCTL_WriteRegister.c
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
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/xHeader/SYSCTL_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enWriteRegister(SYSCTL_nMODULE enModuleArg, SYSCTL_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    SYSCTL_nERROR enErrorReg;
    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSCTL_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SYSCTL_enMODULE_MAX);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = SYSCTL__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (SYSCTL_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

SYSCTL_nERROR SYSCTL__enWriteRegisterDirect(SYSCTL_nMODULE enModuleArg, SYSCTL_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SYSCTL_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SYSCTL_enMODULE_MAX);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = SYSCTL__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (SYSCTL_nERROR) MCU__enWriteRegisterDirect(pstRegisterDataArg);
    }
    return (enErrorReg);
}




