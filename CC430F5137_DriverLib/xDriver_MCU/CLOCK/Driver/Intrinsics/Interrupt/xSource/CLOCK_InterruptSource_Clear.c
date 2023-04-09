/**
 *
 * @file CLOCK_InterruptSource_Clear.c
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
#include "xDriver_MCU/CLOCK/Driver/Intrinsics/Interrupt/xHeader/CLOCK_InterruptSource_Clear.h"

#include "xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h"
#include "xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

CLOCK_nERROR CLOCK__enClearInterruptSource(CLOCK_nINT enInterruptArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) enInterruptArg;
    stRegister.uxMask = (UBase_t) CLOCK_CTL7_DCO_FFG_MASK;
    stRegister.uptrAddress = CLOCK_CTL7_OFFSET;
    stRegister.uxValue = (UBase_t) CLOCK_CTL7_DCO_FFG_NOOCCUR;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}
