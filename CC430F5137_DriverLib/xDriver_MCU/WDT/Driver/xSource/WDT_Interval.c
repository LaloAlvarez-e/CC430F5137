/**
 *
 * @file WDT_Interval.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Interval.h>

#include "xDriver_MCU/WDT/Driver/Intrinsics/WDT_Intrinsics.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

WDT_nERROR WDT__enSetInterval(WDT_nMODULE enModuleArg, WDT_nINTERVAL enIntervalArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enIntervalArg;
    uxValue <<= WDT_CTL_R_IS_BIT;
    uxValue |= WDT_CTL_R_PW_WRITE;
    uxValue |= WDT_CTL_R_CNTCL_CLEAR;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValue;
    pstRegisterData.uxMask = WDT_CTL_R_PW_MASK | WDT_CTL_R_CNTCL_CLEAR | WDT_CTL_R_IS_MASK;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}

WDT_nERROR WDT__enGetInterval(WDT_nMODULE enModuleArg, WDT_nINTERVAL* penIntervalArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penIntervalArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
        pstRegisterData.uxMask = WDT_CTL_IS_MASK;
        pstRegisterData.uxShift = WDT_CTL_R_IS_BIT;
        enErrorReg = WDT__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *penIntervalArg = (WDT_nINTERVAL) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}


WDT_nERROR WDT__enGetIntervalNum(WDT_nMODULE enModuleArg, uint32_t* pu32IntervalArg)
{
    const uint32_t pu16LUTInterval[(UBase_t) WDT_enINTERVAL_MAX] =
    {
     2147483648UL, 134217728UL, 8388608UL, 524288UL, 32768U, 8192U, 512U, 64U
    };
    WDT_nERROR enErrorReg;
    WDT_nINTERVAL enIntervalReg;
    uint32_t u32Reg;
    UBase_t uxIndex;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) pu32IntervalArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }

    if(WDT_enERROR_OK == enErrorReg)
    {
        enIntervalReg = WDT_enINTERVAL_2147483648;
        enErrorReg = WDT__enGetInterval(enModuleArg, &enIntervalReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        uxIndex = (UBase_t) enIntervalReg;
        u32Reg = pu16LUTInterval[uxIndex];
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *pu32IntervalArg = u32Reg;
    }
    return (enErrorReg);
}




