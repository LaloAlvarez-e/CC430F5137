/**
 *
 * @file TIMERA_ModuleValue.c
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
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_ModuleValue.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA_CC__enSetModuleValue(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, UBase_t uxValueArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CC_COUNT_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValueArg;
    pstRegisterData.uxMask = TIMERA_CC_COUNT_COUNT_MASK;
    pstRegisterData.uxShift = TIMERA_CC_COUNT_R_COUNT_BIT;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &pstRegisterData);

    return (enErrorReg);
}


TIMERA_nERROR TIMERA_CC__enClearModuleValue(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg)
{
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_CC__enSetModuleValue(enModuleArg, enSubModuleArg, 0UL);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enGetModuleValue(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, UBase_t* puxValueArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) puxValueArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CC_COUNT_OFFSET;
        pstRegisterData.uxMask = TIMERA_CC_COUNT_COUNT_MASK;
        pstRegisterData.uxShift = TIMERA_CC_COUNT_R_COUNT_BIT;
        enErrorReg = TIMERA_CC__enReadRegister(enModuleArg, enSubModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *puxValueArg = (UBase_t) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}




