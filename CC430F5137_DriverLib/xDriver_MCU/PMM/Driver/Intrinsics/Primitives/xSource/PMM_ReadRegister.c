/**
 *
 * @file PMM_ReadRegister.c
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
#include <xDriver_MCU/PMM/Driver/Intrinsics/Primitives/xHeader/PMM_ReadRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PMM/Peripheral/PMM_Peripheral.h>

PMM_nERROR PMM__enReadRegister(PMM_nMODULE enModuleArg, PMM_Register_t* pstRegisterDataArg)
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
        enErrorReg = (PMM_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PMM_enMODULE_MAX);
    }
    if(PMM_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = PMM__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PMM_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}



