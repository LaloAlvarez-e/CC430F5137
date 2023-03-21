/**
 *
 * @file SFR_ResetPinEdge.c
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
#include <xDriver_MCU/SFR/Driver/xHeader/SFR_ResetPinEdge.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/SFR/Driver/Intrinsics/Primitives/SFR_Primitives.h>
#include <xDriver_MCU/SFR/Peripheral/SFR_Peripheral.h>

SFR_nERROR SFR__enSetNMIPinEdge(SFR_nRESETPIN_EDGE enEdgeArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    stRegister.uxShift = SFR_RPCR_R_SYSNMIIES_BIT;
    stRegister.uxMask = SFR_RPCR_SYSNMIIES_MASK;
    stRegister.uptrAddress = SFR_RPCR_OFFSET;
    stRegister.uxValue = (UBase_t) enEdgeArg;
    enErrorReg = SFR__enWriteRegister(&stRegister);

    return (enErrorReg);
}


SFR_nERROR SFR__enGetNMIPinEdge(SFR_nRESETPIN_EDGE* penEdgeArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    enErrorReg = SFR_enERROR_OK;
    if(0U == (uintptr_t) penEdgeArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SFR_RPCR_R_SYSNMIIES_BIT;
        stRegister.uxMask = SFR_RPCR_SYSNMIIES_MASK;
        stRegister.uptrAddress = SFR_RPCR_OFFSET;
        enErrorReg = SFR__enReadRegister(&stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *penEdgeArg = (SFR_nRESETPIN_EDGE) stRegister.uxValue;
    }
    return (enErrorReg);
}





