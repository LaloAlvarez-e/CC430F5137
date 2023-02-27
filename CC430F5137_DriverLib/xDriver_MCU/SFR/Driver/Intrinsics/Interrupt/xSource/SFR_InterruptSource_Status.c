/**
 *
 * @file SFR_InterruptSource_Status.c
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
#include "xDriver_MCU/SFR/Driver/Intrinsics/Interrupt/xHeader/SFR_InterruptSource_Status.h"
#include "xDriver_MCU/SFR/Driver/Intrinsics/Interrupt/xHeader/SFR_InterruptSource_Enable.h"

#include "xDriver_MCU/SFR/Driver/Intrinsics/Primitives/SFR_Primitives.h"
#include "xDriver_MCU/SFR/Peripheral/SFR_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

static SFR_nERROR SFR__enGetInterruptSourceShift(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, UBase_t* puxShiftArg);


static SFR_nERROR SFR__enGetInterruptSourceShift(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, UBase_t* puxShiftArg)
{
    const UBase_t SFR_uxInterruptBit[(UBase_t) SFR_enINTERRUPT_MAX] =
    {
     SFR_IFG1_R_WDTIFG_BIT      , SFR_IFG1_R_OFIFG_BIT    ,
     SFR_IFG1_R_VMAIFG_BIT      , SFR_IFG1_R_NMIIFG_BIT   ,
     SFR_IFG1_R_WDTIFG_BIT      , SFR_IFG1_R_JMBINIFG_BIT ,
     SFR_IFG1_R_JMBOUTIFG_BIT   ,
    };

    SFR_nERROR enErrorReg;
    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) puxShiftArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) SFR_enMODULE_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SFR_enINTERRUPT_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *puxShiftArg = SFR_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}


SFR_nERROR SFR__enStatusInterruptSourceByMask(SFR_nMODULE enModuleArg, UBase_t uxInterruptMaskArg, UBase_t* puxInterruptStatusArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) puxInterruptStatusArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) uxInterruptMaskArg, (UBase_t) SFR_enINTMASK_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = uxInterruptMaskArg;
        stRegister.uptrAddress = SFR_IFG1_OFFSET;
        enErrorReg = SFR__enReadRegister(enModuleArg, &stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *puxInterruptStatusArg = (UBase_t) stRegister.uxValue;
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enStatusInterruptSourceByNumber(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg)
{
    SFR_Register_t stRegister;
    UBase_t uxShiftReg;
    SFR_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SFR_enINTERRUPT_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enGetInterruptSourceShift(enModuleArg, enInterruptArg, &uxShiftReg);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SFR_IFG1_WDTIFG_MASK;
        stRegister.uptrAddress = SFR_IFG1_OFFSET;
        enErrorReg = SFR__enReadRegister(enModuleArg, &stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (SFR_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enStatusInterruptSource(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enStatusInterruptSourceByNumber(enModuleArg, enInterruptArg, penStatusArg);
    return (enErrorReg);
}

SFR_nERROR SFR__enStatusMaskedInterruptSourceByMask(SFR_nMODULE enModuleArg, UBase_t uxInterruptMaskArg, UBase_t* puxInterruptStatusArg)
{
    SFR_nERROR enErrorReg;
    UBase_t uxInterruptMaskState;
    UBase_t uxInterruptMaskStatus;

    uxInterruptMaskState = 0U;
    uxInterruptMaskStatus = 0U;
    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) puxInterruptStatusArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enGetInterruptSourceStateByMask(enModuleArg, uxInterruptMaskArg, &uxInterruptMaskState);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enStatusInterruptSourceByMask(enModuleArg, uxInterruptMaskArg, &uxInterruptMaskStatus);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        uxInterruptMaskStatus &= uxInterruptMaskState;
        *puxInterruptStatusArg = uxInterruptMaskStatus;
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enStatusMaskedInterruptSourceByNumber(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg)
{
    SFR_nERROR enErrorReg;
    SFR_nSTATE enStateReg;
    SFR_nSTATUS enStatusReg;

    enStateReg = SFR_enSTATE_DIS;
    enStatusReg = SFR_enSTATUS_INACTIVE;
    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enGetInterruptSourceStateByNumber(enModuleArg, enInterruptArg, &enStateReg);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enStatusInterruptSourceByNumber(enModuleArg, enInterruptArg, &enStatusReg);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        if((SFR_enSTATE_ENA == enStateReg) && (SFR_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = SFR_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = SFR_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}


SFR_nERROR SFR__enStatusMaskedInterruptSource(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enStatusMaskedInterruptSourceByNumber(enModuleArg, enInterruptArg, penStatusArg);
    return (enErrorReg);
}
