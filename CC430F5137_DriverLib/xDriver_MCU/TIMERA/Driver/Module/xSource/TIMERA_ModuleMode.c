/**
 *
 * @file TIMERA_ModuleMode.c
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
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_ModuleMode.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA_CC__enSetModuleMode(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                          TIMERA_nCC_MODE enModuleModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enModuleModeArg;
    pstRegisterData.uxMask = TIMERA_CC_CTL_CAP_MASK;
    pstRegisterData.uxShift = TIMERA_CC_CTL_R_CAP_BIT;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &pstRegisterData);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enGetModuleMode(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                          TIMERA_nCC_MODE* penModuleModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penModuleModeArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
        pstRegisterData.uxMask = TIMERA_CC_CTL_CAP_MASK;
        pstRegisterData.uxShift = TIMERA_CC_CTL_R_CAP_BIT;
        enErrorReg = TIMERA_CC__enReadRegister(enModuleArg, enSubModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penModuleModeArg = (TIMERA_nCC_MODE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}




