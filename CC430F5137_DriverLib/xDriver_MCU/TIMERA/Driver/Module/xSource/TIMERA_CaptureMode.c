/**
 *
 * @file TIMERA_CaptureMode.c
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
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CaptureMode.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA_CC__enSetCaptureMode(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                          TIMERA_nCC_CAPTUREMODE enCaptureModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enCaptureModeArg;
    pstRegisterData.uxMask = TIMERA_CC_CTL_CM_MASK;
    pstRegisterData.uxShift = TIMERA_CC_CTL_R_CM_BIT;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &pstRegisterData);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enGetCaptureMode(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                          TIMERA_nCC_CAPTUREMODE* penCaptureModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penCaptureModeArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
        pstRegisterData.uxMask = TIMERA_CC_CTL_CM_MASK;
        pstRegisterData.uxShift = TIMERA_CC_CTL_R_CM_BIT;
        enErrorReg = TIMERA_CC__enReadRegister(enModuleArg, enSubModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penCaptureModeArg = (TIMERA_nCC_CAPTUREMODE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}





