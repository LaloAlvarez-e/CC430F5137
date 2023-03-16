/**
 *
 * @file TIMERA_Mode.c
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
 * @verbatim 12 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Mode.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA__enSetMode(TIMERA_nMODULE enModuleArg, TIMERA_nMODE enModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enModeArg;
    pstRegisterData.uxMask = TIMERA_CTL_MC_MASK;
    pstRegisterData.uxShift = TIMERA_CTL_R_MC_BIT;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enGetMode(TIMERA_nMODULE enModuleArg, TIMERA_nMODE* penModeArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penModeArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CTL_OFFSET;
        pstRegisterData.uxMask = TIMERA_CTL_MC_MASK;
        pstRegisterData.uxShift = TIMERA_CTL_R_MC_BIT;
        enErrorReg = TIMERA__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penModeArg = (TIMERA_nMODE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}
