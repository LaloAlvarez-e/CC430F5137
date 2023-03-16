/**
 *
 * @file TIMERA_Clock.c
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
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Clock.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA__enSetClockSource(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK enClockSourceArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enClockSourceArg;
    pstRegisterData.uxMask = TIMERA_CTL_SSEL_MASK;
    pstRegisterData.uxShift = TIMERA_CTL_R_SSEL_BIT;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}

TIMERA_nERROR TIMERA__enGetClockSource(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK* penClockSourceArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penClockSourceArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CTL_OFFSET;
        pstRegisterData.uxMask = TIMERA_CTL_SSEL_MASK;
        pstRegisterData.uxShift = TIMERA_CTL_R_SSEL_BIT;
        enErrorReg = TIMERA__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penClockSourceArg = (TIMERA_nCLOCK) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}





