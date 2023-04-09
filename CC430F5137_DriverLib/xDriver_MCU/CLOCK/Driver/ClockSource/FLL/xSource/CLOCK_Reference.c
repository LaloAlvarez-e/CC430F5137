/**
 *
 * @file CLOCK_Reference.c
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
 * @verbatim 5 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_Reference.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

CLOCK_nERROR CLOCK_FLL__enSetReference(CLOCK_nFLL_REFERENCE enReferenceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL3_R_FLL_SELREF_BIT;
    stRegister.uxMask = CLOCK_CTL3_FLL_SELREF_MASK;
    stRegister.uptrAddress = CLOCK_CTL3_OFFSET;
    stRegister.uxValue = (UBase_t) enReferenceArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetReference(CLOCK_nFLL_REFERENCE* penReferenceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penReferenceArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL3_R_FLL_SELREF_BIT;
        stRegister.uxMask = CLOCK_CTL3_FLL_SELREF_MASK;
        stRegister.uptrAddress = CLOCK_CTL3_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penReferenceArg = (CLOCK_nFLL_REFERENCE) stRegister.uxValue;
    }

    return (enErrorReg);
}









