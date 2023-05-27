/**
 *
 * @file AES_InterruptSource_Enable.c
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
#include "xDriver_MCU/AES/Driver/Intrinsics/Interrupt/xHeader/AES_InterruptSource_Enable.h"

#include "xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h"
#include "xDriver_MCU/AES/Peripheral/AES_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

AES_nERROR AES__enSetInterruptSourceState(AES_nSTATE enStateArg)
{
    AES_nERROR enErrorReg;
    AES_Register_t stRegister;

    stRegister.uptrAddress = AES_ACTL0_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    stRegister.uxMask = (UBase_t) AES_ACTL0_RDYIE_MASK;
    stRegister.uxShift = (UBase_t) AES_ACTL0_R_RDYIE_BIT;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}

AES_nERROR AES__enEnableInterruptSource(void)
{
    AES_nERROR enErrorReg;
    enErrorReg = AES__enSetInterruptSourceState(AES_enSTATE_ENA);
    return (enErrorReg);
}

AES_nERROR AES__enDisableInterruptSource(void)
{
    AES_nERROR enErrorReg;
    enErrorReg = AES__enSetInterruptSourceState(AES_enSTATE_DIS);
    return (enErrorReg);
}

AES_nERROR AES__enGetInterruptSourceState(AES_nSTATE* penStateArg)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = AES_ACTL0_R_RDYIE_BIT;
        stRegister.uxMask = (uint8_t) AES_ACTL0_RDYIE_MASK;
        stRegister.uptrAddress = AES_ACTL0_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *penStateArg = (AES_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}
