/**
 *
 * @file CLOCK_DCO.c
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
 * @verbatim 2 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_DCO.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

CLOCK_nERROR CLOCK_FLL__enSetDCOValue(UBase_t uxValueArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL0_R_DCO_BIT;
    stRegister.uxMask = CLOCK_CTL0_DCO_MASK;
    stRegister.uptrAddress = CLOCK_CTL0_OFFSET;
    stRegister.uxValue = (UBase_t) uxValueArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetDCOValue(UBase_t* puxValueArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) puxValueArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL0_R_DCO_BIT;
        stRegister.uxMask = CLOCK_CTL0_DCO_MASK;
        stRegister.uptrAddress = CLOCK_CTL0_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *puxValueArg = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}

CLOCK_nERROR CLOCK_FLL__enSetDCORange(CLOCK_nDCO_RANGE enRangeArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL1_R_DCO_RSEL_BIT;
    stRegister.uxMask = CLOCK_CTL1_DCO_RSEL_MASK;
    stRegister.uptrAddress = CLOCK_CTL1_OFFSET;
    stRegister.uxValue = (UBase_t) enRangeArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetDCORange(CLOCK_nDCO_RANGE* penRangeArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penRangeArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL1_R_DCO_RSEL_BIT;
        stRegister.uxMask = CLOCK_CTL1_DCO_RSEL_MASK;
        stRegister.uptrAddress = CLOCK_CTL1_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penRangeArg = (CLOCK_nDCO_RANGE) stRegister.uxValue;
    }

    return (enErrorReg);
}
