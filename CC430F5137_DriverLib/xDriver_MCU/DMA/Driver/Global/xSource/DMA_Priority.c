/**
 *
 * @file DMA_Priority.c
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
#include <xDriver_MCU/DMA/Driver/Global/xHeader/DMA_Priority.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"


DMA_nERROR DMA__enSetPriorityMode(DMA_nPRIORITY enPriorityArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = DMA_CTL4_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enPriorityArg;
    pstRegisterData.uxMask = DMA_CTL4_ROUNDROBIN_MASK;
    pstRegisterData.uxShift = DMA_CTL4_R_ROUNDROBIN_BIT;
    enErrorReg = DMA__enWriteRegister(&pstRegisterData);

    return (enErrorReg);
}

DMA_nERROR DMA__enGetPriorityMode(DMA_nPRIORITY* penPriorityArg)
{
    DMA_Register_t pstRegisterData;;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penPriorityArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }

    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CTL4_OFFSET;
        pstRegisterData.uxMask = DMA_CTL4_ROUNDROBIN_MASK;
        pstRegisterData.uxShift = DMA_CTL4_R_ROUNDROBIN_BIT;
        enErrorReg = DMA__enReadRegister(&pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penPriorityArg = (DMA_nPRIORITY) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}

