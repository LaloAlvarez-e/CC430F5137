/**
 *
 * @file DMA_NMI.c
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
#include <xDriver_MCU/DMA/Driver/Global/xHeader/DMA_NMI.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA__enSetNMITranferStop(DMA_nSTATE enStateArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = DMA_CTL4_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enStateArg;
    pstRegisterData.uxMask = DMA_CTL4_ENNMI_MASK;
    pstRegisterData.uxShift = DMA_CTL4_R_ENNMI_BIT;
    enErrorReg = DMA__enWriteRegister(&pstRegisterData);

    return (enErrorReg);
}

DMA_nERROR DMA__enGetNMITranferStop(DMA_nSTATE* penStateArg)
{
    DMA_Register_t pstRegisterData;;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penStateArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CTL4_OFFSET;
        pstRegisterData.uxMask = DMA_CTL4_ENNMI_MASK;
        pstRegisterData.uxShift = DMA_CTL4_R_ENNMI_BIT;
        enErrorReg = DMA__enReadRegister(&pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penStateArg = (DMA_nSTATE) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}

