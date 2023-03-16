/**
 *
 * @file TIMERA_CompareMode.c
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
#include <xDriver_MCU/TIMERA/Driver/Module/xHeader/TIMERA_CompareMode.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA_CC__enSetCompareMode(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                          TIMERA_nCC_COMPAREMODE enCompareModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enCompareModeArg;
    pstRegisterData.uxMask = TIMERA_CC_CTL_OUTMOD_MASK;
    pstRegisterData.uxShift = TIMERA_CC_CTL_R_OUTMOD_BIT;
    enErrorReg = TIMERA_CC__enWriteRegister(enModuleArg, enSubModuleArg, &pstRegisterData);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enGetCompareMode(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                          TIMERA_nCC_COMPAREMODE* penCompareModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penCompareModeArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CC_CTL_OFFSET;
        pstRegisterData.uxMask = TIMERA_CC_CTL_OUTMOD_MASK;
        pstRegisterData.uxShift = TIMERA_CC_CTL_R_OUTMOD_BIT;
        enErrorReg = TIMERA_CC__enReadRegister(enModuleArg, enSubModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penCompareModeArg = (TIMERA_nCC_COMPAREMODE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}




