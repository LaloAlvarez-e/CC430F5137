/**
 *
 * @file WDT_InterruptSource_Clear.c
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
#include "xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/xHeader/WDT_InterruptSource_Clear.h"

#include "xDriver_MCU/WDT/Driver/Intrinsics/Primitives/WDT_Primitives.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

WDT_nERROR WDT__enClearInterruptSource(void)
{
    WDT_Register_t stRegister;
    WDT_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) WDT_IFG1_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) WDT_IFG1_IFG_MASK;
    stRegister.uptrAddress = WDT_IFG1_OFFSET;
    stRegister.uxValue = (UBase_t) WDT_IFG1_IFG_NOOCCUR;
    enErrorReg = WDT__enWriteRegister(&stRegister);

    return (enErrorReg);
}
