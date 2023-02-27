/**
 *
 * @file DMA_Request.c
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
 * @verbatim 28 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Channel/Config/xHeader/DMA_Request.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enRequestSWTransfer(DMA_nCH enChannelArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = DMA_CH_CTL_OFFSET;
    pstRegisterData.uxValue = DMA_CH_CTL_REQ_REQUEST;
    pstRegisterData.uxMask = DMA_CH_CTL_REQ_MASK;
    pstRegisterData.uxShift = DMA_CH_CTL_R_REQ_BIT;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                                         &pstRegisterData);

    return (enErrorReg);
}

