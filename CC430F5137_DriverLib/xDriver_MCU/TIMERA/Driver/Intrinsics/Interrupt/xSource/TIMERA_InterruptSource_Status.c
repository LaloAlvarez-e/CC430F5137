/**
 *
 * @file TIMERA_InterruptSource_Status.c
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
#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/xHeader/TIMERA_InterruptSource_Status.h"
#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/xHeader/TIMERA_InterruptSource_Enable.h"

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Primitives/TIMERA_Primitives.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

TIMERA_nERROR TIMERA__enSetStatusInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nSTATUS enStatusArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) TIMERA_CTL_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) TIMERA_CTL_IFG_MASK;
    stRegister.uptrAddress = TIMERA_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStatusArg;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enStatusInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nSTATUS* penStatusArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) TIMERA_CTL_R_IFG_BIT;
        stRegister.uxMask = (UBase_t) TIMERA_CTL_IFG_MASK;
        stRegister.uptrAddress = TIMERA_CTL_OFFSET;
        enErrorReg = TIMERA__enReadRegister(enModuleArg, &stRegister);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (TIMERA_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enStatusMaskedInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nSTATUS* penStatusArg)
{
    TIMERA_nERROR enErrorReg;
    TIMERA_nSTATE enStateReg;
    TIMERA_nSTATUS enStatusReg;

    enStateReg = TIMERA_enSTATE_DIS;
    enStatusReg = TIMERA_enSTATUS_INACTIVE;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetInterruptSourceState(enModuleArg, &enStateReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enStatusInterruptSource(enModuleArg, &enStatusReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        if((TIMERA_enSTATE_ENA == enStateReg) && (TIMERA_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = TIMERA_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = TIMERA_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}


TIMERA_nERROR TIMERA_CC__enSetStatusInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nSTATUS enStatusArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) TIMERA_CC_CTL_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) TIMERA_CC_CTL_IFG_MASK;
    stRegister.uptrAddress = TIMERA_CC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enStatusArg;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &stRegister);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enStatusInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nSTATUS* penStatusArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) TIMERA_CC_CTL_R_IFG_BIT;
        stRegister.uxMask = (UBase_t) TIMERA_CC_CTL_IFG_MASK;
        stRegister.uptrAddress = TIMERA_CC_CTL_OFFSET;
        enErrorReg = TIMERA_CC__enReadRegister(enModuleArg, enSubModuleArg, &stRegister);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (TIMERA_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enStatusMaskedInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nSTATUS* penStatusArg)
{
    TIMERA_nERROR enErrorReg;
    TIMERA_nSTATE enStateReg;
    TIMERA_nSTATUS enStatusReg;

    enStateReg = TIMERA_enSTATE_DIS;
    enStatusReg = TIMERA_enSTATUS_INACTIVE;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enGetInterruptSourceState(enModuleArg, enSubModuleArg, &enStateReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA_CC__enStatusInterruptSource(enModuleArg, enSubModuleArg, &enStatusReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        if((TIMERA_enSTATE_ENA == enStateReg) && (TIMERA_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = TIMERA_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = TIMERA_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}

