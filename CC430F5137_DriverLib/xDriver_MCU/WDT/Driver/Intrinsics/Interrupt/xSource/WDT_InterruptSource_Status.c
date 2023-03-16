/**
 *
 * @file WDT_InterruptSource_Status.c
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
#include "xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource_Status.h"
#include "xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource_Enable.h"

#include "xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

WDT_nERROR WDT__enSetStatusInterruptSource(WDT_nMODULE enModuleArg, WDT_nSTATUS enStatusArg)
{
    WDT_Register_t stRegister;
    WDT_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) WDT_IFG1_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) WDT_IFG1_IFG_MASK;
    stRegister.uptrAddress = WDT_IFG1_OFFSET;
    stRegister.uxValue = (UBase_t) enStatusArg;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

WDT_nERROR WDT__enStatusInterruptSource(WDT_nMODULE enModuleArg, WDT_nSTATUS* penStatusArg)
{
    WDT_Register_t stRegister;
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) WDT_IFG1_R_IFG_BIT;
        stRegister.uxMask = (UBase_t) WDT_IFG1_IFG_MASK;
        stRegister.uptrAddress = WDT_IFG1_OFFSET;
        enErrorReg = WDT__enReadRegister(enModuleArg, &stRegister);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (WDT_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

WDT_nERROR WDT__enStatusMaskedInterruptSource(WDT_nMODULE enModuleArg, WDT_nSTATUS* penStatusArg)
{
    WDT_nERROR enErrorReg;
    WDT_nSTATE enStateReg;
    WDT_nSTATUS enStatusReg;

    enStateReg = WDT_enSTATE_DIS;
    enStatusReg = WDT_enSTATUS_INACTIVE;
    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enGetInterruptSourceState(enModuleArg, &enStateReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enStatusInterruptSource(enModuleArg, &enStatusReg);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        if((WDT_enSTATE_ENA == enStateReg) && (WDT_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = WDT_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = WDT_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}


