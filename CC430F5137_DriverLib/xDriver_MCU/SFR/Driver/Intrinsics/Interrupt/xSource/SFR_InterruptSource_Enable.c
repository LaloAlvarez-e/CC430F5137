/**
 *
 * @file SFR_InterruptSource_Enable.c
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
#include "xDriver_MCU/SFR/Driver/Intrinsics/Interrupt/xHeader/SFR_InterruptSource_Enable.h"

#include "xDriver_MCU/SFR/Driver/Intrinsics/Primitives/SFR_Primitives.h"
#include "xDriver_MCU/SFR/Peripheral/SFR_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

static SFR_nERROR SFR__enGetInterruptSourceShift(SFR_nINTERRUPT enInterruptArg, UBase_t* puxShiftArg);


static SFR_nERROR SFR__enGetInterruptSourceShift(SFR_nINTERRUPT enInterruptArg, UBase_t* puxShiftArg)
{
    const UBase_t SFR_uxInterruptBit[(UBase_t) SFR_enINTERRUPT_MAX] =
    {
     SFR_IE1_R_WDTIE_BIT      , SFR_IE1_R_OFIE_BIT    ,
     SFR_IE1_R_VMAIE_BIT      , SFR_IE1_R_NMIIE_BIT   ,
     SFR_IE1_R_ACCVIE_BIT     , SFR_IE1_R_JMBINIE_BIT ,
     SFR_IE1_R_JMBOUTIE_BIT   ,
    };

    SFR_nERROR enErrorReg;
    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) puxShiftArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
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


SFR_nERROR SFR__enSetEnableInterruptSourceByMask(SFR_nINTMASK enInterruptMaskArg,
                                                 SFR_nSTATE enStateArg)
{
    SFR_nERROR enErrorReg;
    SFR_Register_t stRegister;
    UBase_t uxValue;
    enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SFR_enINTMASK_MAX);
    if(SFR_enERROR_OK == enErrorReg)
    {
        if(SFR_enSTATE_DIS != enStateArg)
        {
            uxValue = (UBase_t) enInterruptMaskArg;
        }
        else
        {
            uxValue = 0U;
        }
        stRegister.uptrAddress = SFR_IE1_OFFSET;
        stRegister.uxValue = uxValue;
        stRegister.uxMask = (UBase_t) enInterruptMaskArg;
        stRegister.uxShift = SFR_IE1_R_WDTIE_BIT;

        enErrorReg = SFR__enWriteRegister(&stRegister);
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enEnableInterruptSourceByMask(SFR_nINTMASK enInterruptMaskArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enSetEnableInterruptSourceByMask(enInterruptMaskArg, SFR_enSTATE_ENA);
    return (enErrorReg);
}

SFR_nERROR SFR__enDisableInterruptSourceByMask(SFR_nINTMASK enInterruptMaskArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enSetEnableInterruptSourceByMask(enInterruptMaskArg, SFR_enSTATE_DIS);
    return (enErrorReg);
}

SFR_nERROR SFR__enSetEnableInterruptSourceByNumber(SFR_nINTERRUPT enInterruptArg,
                                                   SFR_nSTATE enStateArg)
{
    SFR_nERROR enErrorReg;
    UBase_t uxShiftReg;
    SFR_Register_t stRegister;

    uxShiftReg = 0UL;
    enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SFR_enINTERRUPT_MAX);
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enGetInterruptSourceShift(enInterruptArg, &uxShiftReg);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uptrAddress = SFR_IE1_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        stRegister.uxMask = SFR_IE1_WDTIE_MASK;
        stRegister.uxShift = (UBase_t) uxShiftReg;
        enErrorReg = SFR__enWriteRegister(&stRegister);
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enEnableInterruptSourceByNumber(SFR_nINTERRUPT enInterruptArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enSetEnableInterruptSourceByNumber(enInterruptArg, SFR_enSTATE_ENA);
    return (enErrorReg);
}

SFR_nERROR SFR__enDisableInterruptSourceByNumber(SFR_nINTERRUPT enInterruptArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enSetEnableInterruptSourceByNumber(enInterruptArg, SFR_enSTATE_DIS);
    return (enErrorReg);
}


SFR_nERROR SFR__enSetEnableInterruptSource(SFR_nINTERRUPT enInterruptArg,
                                           SFR_nSTATE enStateArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enSetEnableInterruptSourceByNumber(enInterruptArg, enStateArg);
    return (enErrorReg);
}


SFR_nERROR SFR__enEnableInterruptSource(SFR_nINTERRUPT enInterruptArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enEnableInterruptSourceByNumber(enInterruptArg);
    return (enErrorReg);
}

SFR_nERROR SFR__enDisableInterruptSource(SFR_nINTERRUPT enInterruptArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enDisableInterruptSourceByNumber(enInterruptArg);
    return (enErrorReg);
}


SFR_nERROR SFR__enGetInterruptSourceStateByMask(UBase_t uxInterruptMaskArg,
                                                   UBase_t* puxInterruptMaskArg)
{
    SFR_nERROR enErrorReg;
    SFR_Register_t stRegister;

    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) puxInterruptMaskArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) uxInterruptMaskArg, (UBase_t) SFR_enINTMASK_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uptrAddress = SFR_IE1_OFFSET;
        stRegister.uxMask = (UBase_t) uxInterruptMaskArg;
        stRegister.uxShift = SFR_IE1_R_WDTIE_BIT;
        enErrorReg = SFR__enReadRegister(&stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *puxInterruptMaskArg = (UBase_t) stRegister.uxValue;
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enGetInterruptSourceStateByNumber(SFR_nINTERRUPT enInterruptArg, SFR_nSTATE* penStateArg)
{
    SFR_Register_t stRegister;
    UBase_t uxShiftReg;
    SFR_nERROR enErrorReg;

    uxShiftReg = 0U;
    enErrorReg = SFR_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = SFR_enERROR_POINTER;
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SFR_enINTERRUPT_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enGetInterruptSourceShift(enInterruptArg, &uxShiftReg);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SFR_IE1_WDTIE_MASK;
        stRegister.uptrAddress = SFR_IE1_OFFSET;
        enErrorReg = SFR__enReadRegister(&stRegister);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *penStateArg = (SFR_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enGetInterruptSourceState(SFR_nINTERRUPT enInterruptArg, SFR_nSTATE* penStateArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enGetInterruptSourceStateByNumber(enInterruptArg, penStateArg);
    return (enErrorReg);
}
