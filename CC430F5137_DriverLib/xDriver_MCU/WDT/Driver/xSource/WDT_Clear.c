/**
 *
 * @file WDT_Clear.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Clear.h>

#include "xDriver_MCU/WDT/Driver/Intrinsics/WDT_Intrinsics.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

WDT_nERROR WDT__enSetClear(WDT_nMODULE enModuleArg)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;
    UBase_t uxValue;


    uxValue = 1UL;
    uxValue <<= WDT_CTL_R_CNTCL_BIT;
    uxValue |= WDT_CTL_R_PW_WRITE;

    pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) uxValue;
    pstRegisterData.uxMask = WDT_CTL_R_PW_MASK | WDT_CTL_R_CNTCL_MASK;
    pstRegisterData.uxShift = 0U;
    enErrorReg = WDT__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}



