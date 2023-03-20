/**
 *
 * @file WDT_State.c
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
 * @verbatim 12 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_State.h>

#include "xDriver_MCU/WDT/Driver/Intrinsics/WDT_Intrinsics.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

WDT_nERROR WDT__enSetState(WDT_nMODULE enModuleArg, WDT_nSTATE enStateArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;
    UBase_t uxValue;
    UBase_t uxState;

    if(WDT_enSTATE_DIS == enStateArg)
    {
        uxState = 1UL;
    }
    else
    {
        uxState = 0UL;
    }

    uxValue = (UBase_t) uxState;
    uxValue <<= WDT_CTL_R_HOLD_BIT;
    uxValue |= WDT_CTL_R_PW_WRITE;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValue;
    pstRegisterData.uxMask = WDT_CTL_R_PW_MASK | WDT_CTL_R_HOLD_MASK;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}

WDT_nERROR WDT__enEnable(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetState(enModuleArg, WDT_enSTATE_ENA);
    return (enErrorReg);
}

WDT_nERROR WDT__enDisable(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetState(enModuleArg, WDT_enSTATE_DIS);
    return (enErrorReg);
}

WDT_nERROR WDT__enGetState(WDT_nMODULE enModuleArg, WDT_nSTATE* penStateArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
        pstRegisterData.uxMask = WDT_CTL_HOLD_MASK;
        pstRegisterData.uxShift = WDT_CTL_R_HOLD_BIT;
        enErrorReg = WDT__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        if(0U == pstRegisterData.uxValue)
        {
            *penStateArg = WDT_enSTATE_ENA;
        }
        else
        {
            *penStateArg = WDT_enSTATE_DIS;
        }
    }

    return (enErrorReg);
}



WDT_nERROR WDT__enSetState_RAM(WDT_nMODULE enModuleArg, WDT_nSTATE enStateArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enStateArg;
    uxValue <<= WDT_CTL_R_HOLD_BIT;
    uxValue |= WDT_CTL_R_PW_WRITE;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValue;
    pstRegisterData.uxMask = WDT_CTL_R_PW_MASK | WDT_CTL_R_HOLD_MASK;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister_RAM(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}

WDT_nERROR WDT__enEnable_RAM(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetState_RAM(enModuleArg, WDT_enSTATE_ENA);
    return (enErrorReg);
}

WDT_nERROR WDT__enDisable_RAM(WDT_nMODULE enModuleArg)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetState_RAM(enModuleArg, WDT_enSTATE_DIS);
    return (enErrorReg);
}

WDT_nERROR WDT__enGetState_RAM(WDT_nMODULE enModuleArg, WDT_nSTATE* penStateArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
        pstRegisterData.uxMask = WDT_CTL_HOLD_MASK;
        pstRegisterData.uxShift = WDT_CTL_R_HOLD_BIT;
        enErrorReg = WDT__enReadRegister_RAM(enModuleArg, &pstRegisterData);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *penStateArg = (WDT_nSTATE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}
