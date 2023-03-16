/**
 *
 * @file CRC_Result.c
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
#include <xDriver_MCU/CRC/Driver/xHeader/CRC_Result.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CRC/Driver/Intrinsics/Primitives/CRC_Primitives.h>
#include <xDriver_MCU/CRC/Peripheral/CRC_Peripheral.h>

CRC_nERROR CRC__enGetResultData(CRC_nMODULE enModuleArg, UBase_t* puxData)
{
    CRC_Register_t stRegister;
    CRC_nERROR enErrorReg;

    enErrorReg = CRC_enERROR_OK;
    if(0U == (uintptr_t) puxData)
    {
        enErrorReg = CRC_enERROR_POINTER;
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) CRC_RES_R_RESULT_BIT;
        stRegister.uxMask = (UBase_t) CRC_RES_RESULT_MASK;
        stRegister.uptrAddress = (uintptr_t) CRC_RES_OFFSET;
        enErrorReg = CRC__enReadRegister(enModuleArg, &stRegister);
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        *puxData = (UBase_t) stRegister.uxValue;
    }

    return (enErrorReg);
}


