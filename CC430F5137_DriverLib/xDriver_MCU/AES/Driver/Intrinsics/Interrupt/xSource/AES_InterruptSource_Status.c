/**
 *
 * @file AES_InterruptSource_Status.c
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
#include "xDriver_MCU/AES/Driver/Intrinsics/Interrupt/xHeader/AES_InterruptSource_Status.h"
#include "xDriver_MCU/AES/Driver/Intrinsics/Interrupt/xHeader/AES_InterruptSource_Enable.h"

#include "xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h"
#include "xDriver_MCU/AES/Peripheral/AES_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

AES_nERROR AES__enSetStatusInterruptSource(AES_nSTATUS enStatusArg)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;


    stRegister.uxShift = (UBase_t) AES_ACTL0_R_RDYIFG_BIT;
    stRegister.uxMask = (UBase_t) AES_ACTL0_RDYIFG_MASK;
    stRegister.uptrAddress = AES_ACTL0_OFFSET;
    stRegister.uxValue = (UBase_t) enStatusArg;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}

AES_nERROR AES__enStatusInterruptSource(AES_nSTATUS* penStatusArg)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ACTL0_R_RDYIFG_BIT;
        stRegister.uxMask = (UBase_t) AES_ACTL0_RDYIFG_MASK;
        stRegister.uptrAddress = AES_ACTL0_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (AES_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

AES_nERROR AES__enStatusMaskedInterruptSource(AES_nSTATUS* penStatusArg)
{
    AES_nERROR enErrorReg;
    AES_nSTATE enStateReg;
    AES_nSTATUS enStatusReg;

    enStateReg = AES_enSTATE_DIS;
    enStatusReg = AES_enSTATUS_INACTIVE;
    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) penStatusArg)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetInterruptSourceState(&enStateReg);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enStatusInterruptSource(&enStatusReg);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if((AES_enSTATE_ENA == enStateReg) && (AES_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = AES_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = AES_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}


