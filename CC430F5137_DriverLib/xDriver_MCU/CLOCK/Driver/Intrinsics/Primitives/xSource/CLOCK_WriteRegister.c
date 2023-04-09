/**
 *
 * @file CLOCK_WriteRegister.c
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
 * @verbatim 12 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/xHeader/CLOCK_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>

CLOCK_nERROR CLOCK__enWriteRegister(CLOCK_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    CLOCK_nERROR enErrorReg;
    enErrorReg = CLOCK_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = CLOCK__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (CLOCK_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}




