/**
 *
 * @file AES_Result.c
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
 * @verbatim 7 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/xHeader/AES_Result.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enGetResultData(UBase_t* puxData)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0U == (uintptr_t) puxData)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_RES_R_RESULT_BIT;
        stRegister.uxMask = (UBase_t) AES_RES_RESULT_MASK;
        stRegister.uptrAddress = (uintptr_t) AES_RES_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *puxData = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


