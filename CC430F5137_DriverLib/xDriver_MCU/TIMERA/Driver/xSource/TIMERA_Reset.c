/**
 *
 * @file TIMERA_Reset.c
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
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Reset.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA__enReset(TIMERA_nMODULE enModuleArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) TIMERA_CTL_CLR_CLEAR;
    pstRegisterData.uxMask = (UBase_t) TIMERA_CTL_CLR_MASK;
    pstRegisterData.uxShift = (UBase_t) TIMERA_CTL_R_CLR_BIT;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}





