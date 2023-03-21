/**
 *
 * @file WDT_Mode.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Mode.h>

#include "xDriver_MCU/WDT/Driver/Intrinsics/WDT_Intrinsics.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

WDT_nERROR WDT__enSetMode(WDT_nMODE enModeArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enModeArg;
    uxValue <<= WDT_CTL_R_TMSEL_BIT;
    uxValue |= WDT_CTL_R_PW_WRITE;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValue;
    pstRegisterData.uxMask = WDT_CTL_R_PW_MASK | WDT_CTL_R_TMSEL_MASK;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister(&pstRegisterData);

    return (enErrorReg);
}

WDT_nERROR WDT__enGetMode(WDT_nMODE* penModeArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
        pstRegisterData.uxMask = WDT_CTL_TMSEL_MASK;
        pstRegisterData.uxShift = WDT_CTL_R_TMSEL_BIT;
        enErrorReg = WDT__enReadRegister(&pstRegisterData);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *penModeArg = (WDT_nMODE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}



WDT_nERROR WDT__enSetMode_RAM(WDT_nMODE enModeArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enModeArg;
    uxValue <<= WDT_CTL_R_TMSEL_BIT;
    uxValue |= WDT_CTL_R_PW_WRITE;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValue;
    pstRegisterData.uxMask = WDT_CTL_R_PW_MASK | WDT_CTL_R_TMSEL_MASK;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister_RAM(&pstRegisterData);

    return (enErrorReg);
}

WDT_nERROR WDT__enGetMode_RAM(WDT_nMODE* penModeArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
        pstRegisterData.uxMask = WDT_CTL_TMSEL_MASK;
        pstRegisterData.uxShift = WDT_CTL_R_TMSEL_BIT;
        enErrorReg = WDT__enReadRegister_RAM(&pstRegisterData);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *penModeArg = (WDT_nMODE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}


