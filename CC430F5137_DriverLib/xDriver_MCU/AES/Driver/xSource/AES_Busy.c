/**
 *
 * @file AES_Busy.c
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
 * @verbatim 11 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/xHeader/AES_Busy.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enIsBusy(AES_nBOOLEAN* penBusyArg)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) penBusyArg)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ASTAT_R_BUSY_BIT;
        stRegister.uxMask = (UBase_t) AES_ASTAT_BUSY_MASK;
        stRegister.uptrAddress = AES_ASTAT_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *penBusyArg = (AES_nBOOLEAN) stRegister.uxValue;
    }
    return (enErrorReg);
}

