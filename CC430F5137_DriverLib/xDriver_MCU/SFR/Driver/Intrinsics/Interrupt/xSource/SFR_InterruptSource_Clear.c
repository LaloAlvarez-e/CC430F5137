/**
 *
 * @file SFR_InterruptSource_Clear.c
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
#include "xDriver_MCU/SFR/Driver/Intrinsics/Interrupt/xHeader/SFR_InterruptSource_Clear.h"

#include "xDriver_MCU/SFR/Driver/Intrinsics/Primitives/SFR_Primitives.h"
#include "xDriver_MCU/SFR/Peripheral/SFR_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

static SFR_nERROR SFR__enGetInterruptSourceShift(SFR_nINTERRUPT enInterruptArg, UBase_t* puxShiftArg);


static SFR_nERROR SFR__enGetInterruptSourceShift(SFR_nINTERRUPT enInterruptArg, UBase_t* puxShiftArg)
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
        enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SFR_enINTERRUPT_MAX);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        *puxShiftArg = SFR_uxInterruptBit[(UBase_t) enInterruptArg];
    }
    return (enErrorReg);
}

SFR_nERROR SFR__enClearInterruptSourceByMask(SFR_nINTMASK enInterruptMaskArg)
{
    SFR_Register_t stRegister;
    SFR_nERROR enErrorReg;

    enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptMaskArg, (UBase_t) SFR_enINTMASK_MAX);
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = (UBase_t) enInterruptMaskArg;
        stRegister.uptrAddress = SFR_IFG1_OFFSET;
        stRegister.uxValue = (UBase_t) 0;
        enErrorReg = SFR__enWriteRegister(&stRegister);
    }

    return (enErrorReg);
}

SFR_nERROR SFR__enClearInterruptSourceByNumber(SFR_nINTERRUPT enInterruptArg)
{
    SFR_Register_t stRegister;
    UBase_t uxShiftReg;
    SFR_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = (SFR_nERROR) MCU__enCheckParams((UBase_t) enInterruptArg, (UBase_t) SFR_enINTERRUPT_MAX);
    if(SFR_enERROR_OK == enErrorReg)
    {
        enErrorReg = SFR__enGetInterruptSourceShift(enInterruptArg, &uxShiftReg);
    }
    if(SFR_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = SFR_IFG1_WDTIFG_MASK;
        stRegister.uptrAddress = SFR_IFG1_OFFSET;
        stRegister.uxValue = (UBase_t) SFR_IFG1_WDTIFG_NOOCCUR;
        enErrorReg = SFR__enWriteRegister(&stRegister);
    }

    return (enErrorReg);
}

SFR_nERROR SFR__enClearInterruptSource(SFR_nINTERRUPT enInterruptArg)
{
    SFR_nERROR enErrorReg;
    enErrorReg = SFR__enClearInterruptSourceByNumber(enInterruptArg);
    return (enErrorReg);
}
