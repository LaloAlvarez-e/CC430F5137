/**
 *
 * @file WDT_Clock.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Clock.h>

#include "xDriver_MCU/WDT/Driver/Intrinsics/WDT_Intrinsics.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

WDT_nERROR WDT__enSetClockSource(WDT_nMODULE enModuleArg, WDT_nCLOCK enClockSourceArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enClockSourceArg;
    uxValue <<= WDT_CTL_R_SSEL_BIT;
    uxValue |= WDT_CTL_R_PW_WRITE;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValue;
    pstRegisterData.uxMask = WDT_CTL_R_PW_MASK | WDT_CTL_R_SSEL_MASK;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}

WDT_nERROR WDT__enGetClockSource(WDT_nMODULE enModuleArg, WDT_nCLOCK* penClockSourceArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penClockSourceArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
        pstRegisterData.uxMask = WDT_CTL_SSEL_MASK;
        pstRegisterData.uxShift = WDT_CTL_R_SSEL_BIT;
        enErrorReg = WDT__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *penClockSourceArg = (WDT_nCLOCK) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}





