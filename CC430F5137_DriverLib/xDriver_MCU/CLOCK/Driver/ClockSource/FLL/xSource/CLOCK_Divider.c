/**
 *
 * @file CLOCK_Divider.c
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
 * @verbatim 4 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_Divider.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

CLOCK_nERROR CLOCK_FLL__enSetReferenceDivider(CLOCK_nFLL_REFDIVIDER enDividerArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL3_R_FLL_REFDIV_BIT;
    stRegister.uxMask = CLOCK_CTL3_FLL_REFDIV_MASK;
    stRegister.uptrAddress = CLOCK_CTL3_OFFSET;
    stRegister.uxValue = (UBase_t) enDividerArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_FLL__enGetReferenceDivider(CLOCK_nFLL_REFDIVIDER* penDividerArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penDividerArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL3_R_FLL_REFDIV_BIT;
        stRegister.uxMask = CLOCK_CTL3_FLL_REFDIV_MASK;
        stRegister.uptrAddress = CLOCK_CTL3_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penDividerArg = (CLOCK_nFLL_REFDIVIDER) stRegister.uxValue;
    }

    return (enErrorReg);
}






