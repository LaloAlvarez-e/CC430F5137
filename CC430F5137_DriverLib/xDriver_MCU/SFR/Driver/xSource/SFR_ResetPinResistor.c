/**
 *
 * @file SFR_ResetPinResistor.c
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
#include <xDriver_MCU/SFR/Driver/xHeader/SFR_ResetPinResistor.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/SFR/Driver/Intrinsics/Primitives/SFR_Primitives.h>
#include <xDriver_MCU/SFR/Peripheral/SFR_Peripheral.h>

SFR_nERROR SFR__enSetNMIPinResistorState(SFR_nSTATE enStateArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    stRegister.uxShift = SFR_RPCR_R_SYSRSTRE_BIT;
    stRegister.uxMask = SFR_RPCR_SYSRSTRE_MASK;
    stRegister.uptrAddress = SFR_RPCR_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = SFR__enWriteRegister(&stRegister);

    return (enErrorReg);
}

SFR_nERROR SFR__enSetNMIPinResistor(SFR_nRESETPIN_RESISTOR enResitorArg)
{
    SFR_Register_t stRegister;
    UBase_t uxStateReg;
    UBase_t uxModeReg;
    SFR_nERROR enErrorReg;

    uxStateReg = (UBase_t) enResitorArg;
    uxStateReg >>= 4UL;
    uxStateReg &= 0xFU;
    uxModeReg = (UBase_t) enResitorArg;
    uxModeReg &= 0xFU;

    enErrorReg = SFR__enSetNMIPinResistorState((SFR_nSTATE) uxStateReg);
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SFR_RPCR_R_SYSRSTUP_BIT;
        stRegister.uxMask = SFR_RPCR_SYSRSTUP_MASK;
        stRegister.uptrAddress = SFR_RPCR_OFFSET;
        stRegister.uxValue = (UBase_t) SFR_RPCR_SYSRSTUP_PULLDOWN;
        enErrorReg = SFR__enWriteRegister(&stRegister);
    }
    return (enErrorReg);
}


SFR_nERROR SFR__enGetNMIPinResistorState(SFR_nSTATE* penStateArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    enErrorReg = SFR_enERROR_OK;
    if(0U == (uintptr_t) penStateArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SFR_RPCR_R_SYSRSTRE_BIT;
        stRegister.uxMask = SFR_RPCR_SYSRSTRE_MASK;
        stRegister.uptrAddress = SFR_RPCR_OFFSET;
        enErrorReg = SFR__enReadRegister(&stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SFR_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}


SFR_nERROR SFR__enGetNMIPinResistor(SFR_nRESETPIN_RESISTOR* penResitorArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;
    SFR_nSTATE enStateReg;
    UBase_t uxModeReg;

    enErrorReg = SFR_enERROR_OK;
    if(0U == (uintptr_t) penResitorArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enGetNMIPinResistorState(&enStateReg);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SFR_RPCR_R_SYSRSTUP_BIT;
        stRegister.uxMask = SFR_RPCR_SYSRSTUP_MASK;
        stRegister.uptrAddress = SFR_RPCR_OFFSET;
        enErrorReg = SFR__enReadRegister(&stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        uxModeReg = (UBase_t) stRegister.uxValue;
        if(SFR_enSTATE_DIS == enStateReg)
        {
            *penResitorArg = SFR_enRESETPIN_RESISTOR_NONE;
        }
        else
        {
            if(SFR_RPCR_SYSRSTUP_PULLDOWN == uxModeReg)
            {
                *penResitorArg = SFR_enRESETPIN_RESISTOR_PULLDOWN;
            }
            else
            {
                *penResitorArg = SFR_enRESETPIN_RESISTOR_PULLUP;
            }
        }
    }
    return (enErrorReg);
}




