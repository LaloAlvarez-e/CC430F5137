/**
 *
 * @file WDT_InterruptSource_Enable.c
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
#include "xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource_Enable.h"

#include "xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

WDT_nERROR WDT__enSetInterruptSourceState(WDT_nSTATE enStateArg)
{
    WDT_nERROR enErrorReg;
    WDT_Register_t stRegister;

    stRegister.uptrAddress = WDT_IE1_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    stRegister.uxMask = (UBase_t) WDT_IE1_IE_MASK;
    stRegister.uxShift = (UBase_t) WDT_IE1_R_IE_BIT;
    enErrorReg = WDT__enWriteRegister(&stRegister);

    return (enErrorReg);
}

WDT_nERROR WDT__enEnableInterruptSource(void)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetInterruptSourceState(WDT_enSTATE_ENA);
    return (enErrorReg);
}

WDT_nERROR WDT__enDisableInterruptSource(void)
{
    WDT_nERROR enErrorReg;
    enErrorReg = WDT__enSetInterruptSourceState(WDT_enSTATE_DIS);
    return (enErrorReg);
}

WDT_nERROR WDT__enGetInterruptSourceState(WDT_nSTATE* penStateArg)
{
    WDT_Register_t stRegister;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = WDT_IE1_R_IE_BIT;
        stRegister.uxMask = (uint8_t) WDT_IE1_IE_MASK;
        stRegister.uptrAddress = WDT_IE1_OFFSET;
        enErrorReg = WDT__enReadRegister(&stRegister);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *penStateArg = (WDT_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}
