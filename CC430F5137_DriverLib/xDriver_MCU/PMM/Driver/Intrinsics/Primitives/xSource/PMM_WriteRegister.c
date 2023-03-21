/**
 *
 * @file PMM_WriteRegister.c
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
#include <xDriver_MCU/PMM/Driver/Intrinsics/Primitives/xHeader/PMM_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PMM/Peripheral/PMM_Peripheral.h>

PMM_nERROR PMM__enWriteRegister(PMM_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    PMM_nERROR enErrorReg;
    enErrorReg = PMM_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = PMM_enERROR_POINTER;
    }
    if(PMM_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = PMM__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PMM_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

PMM_nERROR PMM__enWriteRegisterDirect(PMM_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    PMM_nERROR enErrorReg;

    enErrorReg = PMM_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = PMM_enERROR_POINTER;
    }
    if(PMM_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = PMM__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PMM_nERROR) MCU__enWriteRegisterDirect(pstRegisterDataArg);
    }
    return (enErrorReg);
}




