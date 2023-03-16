/**
 *
 * @file TIMERA_InterruptSource_Clear.c
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
#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/xHeader/TIMERA_InterruptSource_Clear.h"

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Primitives/TIMERA_Primitives.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

TIMERA_nERROR TIMERA__enClearInterruptSource(TIMERA_nMODULE enModuleArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) TIMERA_CTL_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) TIMERA_CTL_IFG_MASK;
    stRegister.uptrAddress = TIMERA_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) TIMERA_CTL_IFG_NOOCCUR;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}


TIMERA_nERROR TIMERA_CC__enClearInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg)
{
    TIMERA_Register_t stRegister;
    TIMERA_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) TIMERA_CC_CTL_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) TIMERA_CC_CTL_IFG_MASK;
    stRegister.uptrAddress = TIMERA_CC_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) TIMERA_CC_CTL_IFG_NOOCCUR;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &stRegister);

    return (enErrorReg);
}
