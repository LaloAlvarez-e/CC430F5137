/**
 *
 * @file AES_InterruptSource_Clear.c
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
#include "xDriver_MCU/AES/Driver/Intrinsics/Interrupt/xHeader/AES_InterruptSource_Clear.h"

#include "xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h"
#include "xDriver_MCU/AES/Peripheral/AES_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

AES_nERROR AES__enClearInterruptSource(void)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) AES_IFG1_R_IFG_BIT;
    stRegister.uxMask = (UBase_t) AES_IFG1_IFG_MASK;
    stRegister.uptrAddress = AES_IFG1_OFFSET;
    stRegister.uxValue = (UBase_t) AES_IFG1_IFG_NOOCCUR;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}
