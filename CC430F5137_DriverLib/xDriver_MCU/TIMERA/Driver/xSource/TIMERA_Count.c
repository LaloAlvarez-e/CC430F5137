/**
 *
 * @file TIMERA_Count.c
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
 * @verbatim 15 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Count.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA__enSetCountValue(TIMERA_nMODULE enModuleArg, UBase_t uxCountValue)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_COUNT_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxCountValue;
    pstRegisterData.uxMask = TIMERA_COUNT_COUNT_MASK;
    pstRegisterData.uxShift = TIMERA_COUNT_R_COUNT_BIT;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enClearCountValue(TIMERA_nMODULE enModuleArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA__enSetCountValue(enModuleArg, 0UL);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enGetCountValue(TIMERA_nMODULE enModuleArg, UBase_t* puxCountValue)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) puxCountValue)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_COUNT_OFFSET;
        pstRegisterData.uxMask = TIMERA_COUNT_COUNT_MASK;
        pstRegisterData.uxShift = TIMERA_COUNT_R_COUNT_BIT;
        enErrorReg = TIMERA__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *puxCountValue = (UBase_t) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}





