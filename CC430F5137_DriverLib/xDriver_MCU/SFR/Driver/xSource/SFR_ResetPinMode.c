/**
 *
 * @file SFR_ResetPinMode.c
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SFR/Driver/xHeader/SFR_ResetPinMode.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/SFR/Driver/Intrinsics/Primitives/SFR_Primitives.h>
#include <xDriver_MCU/SFR/Peripheral/SFR_Peripheral.h>

SFR_nERROR SFR__enSetNMIPinMode(SFR_nMODULE enModuleArg, SFR_nRESETPIN_MODE enModeArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    stRegister.uxShift = SFR_RPCR_R_SYSNMI_BIT;
    stRegister.uxMask = SFR_RPCR_SYSNMI_MASK;
    stRegister.uptrAddress = SFR_RPCR_OFFSET;
    stRegister.uxValue = (UBase_t) enModeArg;
    enErrorReg = SFR__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}


SFR_nERROR SFR__enGetNMIPinMode(SFR_nMODULE enModuleArg, SFR_nRESETPIN_MODE* penModeArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    enErrorReg = SFR_enERROR_OK;
    if(0U == (uintptr_t) penModeArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SFR_RPCR_R_SYSNMI_BIT;
        stRegister.uxMask = SFR_RPCR_SYSNMI_MASK;
        stRegister.uptrAddress = SFR_RPCR_OFFSET;
        enErrorReg = SFR__enReadRegister(enModuleArg, &stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *penModeArg = (SFR_nRESETPIN_MODE) stRegister.uxValue;
    }
    return (enErrorReg);
}



