/**
 *
 * @file DMA_Fetch.c
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
 * @verbatim 27 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Global/xHeader/DMA_Fetch.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA__enSetFetchMode(DMA_nFETCH enFetchModeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = DMA_CTL4_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enFetchModeArg;
    pstRegisterData.uxMask = DMA_CTL4_RMWDIS_MASK;
    pstRegisterData.uxShift = DMA_CTL4_R_RMWDIS_BIT;
    enErrorReg = DMA__enWriteRegister(&pstRegisterData);

    return (enErrorReg);
}

DMA_nERROR DMA__enGetFetchMode(DMA_nFETCH* penFetchModeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penFetchModeArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CTL4_OFFSET;
        pstRegisterData.uxMask = DMA_CTL4_RMWDIS_MASK;
        pstRegisterData.uxShift = DMA_CTL4_R_RMWDIS_BIT;
        enErrorReg = DMA__enReadRegister(&pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penFetchModeArg = (DMA_nFETCH) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}




