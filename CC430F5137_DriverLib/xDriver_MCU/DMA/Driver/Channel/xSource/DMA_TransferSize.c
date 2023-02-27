/**
 *
 * @file DMA_TransferSize.c
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
 * @verbatim 25 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Channel/xHeader/DMA_TransferSize.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enSetTransferSize(DMA_nCH enChannelArg,
                                     UBase_t uxSizeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = DMA_CH_SZ_OFFSET;
    pstRegisterData.uxValue = uxSizeArg;
    pstRegisterData.uxMask = DMA_CH_SZ_SZ_MASK;
    pstRegisterData.uxShift = DMA_CH_SZ_R_SZ_BIT;
    enErrorReg = DMA_CH__enWriteRegister(enChannelArg,
                                         &pstRegisterData);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetTransferSize(DMA_nCH enChannelArg,
                                     UBase_t* puxSizeArg)
{
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) puxSizeArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CH_SZ_OFFSET;
        pstRegisterData.uxMask = DMA_CH_SZ_SZ_MASK;
        pstRegisterData.uxShift = DMA_CH_SZ_R_SZ_BIT;
        enErrorReg = DMA_CH__enReadRegister(enChannelArg,
                                            &pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *puxSizeArg = (UBase_t) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}
