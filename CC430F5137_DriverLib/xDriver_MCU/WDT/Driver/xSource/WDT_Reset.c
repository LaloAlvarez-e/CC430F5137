/**
 *
 * @file WDT_Reset.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Reset.h>

#include "xDriver_MCU/WDT/Driver/Intrinsics/WDT_Intrinsics.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

WDT_nERROR WDT__enResetByPassword(WDT_nMODULE enModuleArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = 0U;
    pstRegisterData.uxMask = MCU_MASK_BASE;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}





