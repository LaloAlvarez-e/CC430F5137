/**
 *
 * @file TIMERA_CaptureInputSelection.c
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
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CaptureInputSelection.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA_CC__enSetCaptureInputSelection(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                                    TIMERA_nCC_CAPTUREINPUT enCaptureInputSelectionArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enCaptureInputSelectionArg;
    pstRegisterData.uxMask = TIMERA_CC_CTL_CCIS_MASK;
    pstRegisterData.uxShift = TIMERA_CC_CTL_R_CCIS_BIT;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &pstRegisterData);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enGetCaptureInputSelection(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                                    TIMERA_nCC_CAPTUREINPUT* penCaptureInputSelectionArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penCaptureInputSelectionArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
        pstRegisterData.uxMask = TIMERA_CC_CTL_CCIS_MASK;
        pstRegisterData.uxShift = TIMERA_CC_CTL_R_CCIS_BIT;
        enErrorReg = TIMERA_CC__enReadRegister(enModuleArg, enSubModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penCaptureInputSelectionArg = (TIMERA_nCC_CAPTUREINPUT) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}

