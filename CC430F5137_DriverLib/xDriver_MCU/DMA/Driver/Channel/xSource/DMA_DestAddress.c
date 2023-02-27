/**
 *
 * @file DMA_DestAddress.c
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
#include <xDriver_MCU/DMA/Driver/Channel/xHeader/DMA_DestAddress.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enSetDestAddress(DMA_nCH enChannelArg,
                                    uintptr_t uptrAddressArg)
{
    DMA_Register32Bits_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = DMA_CH_DA_OFFSET;
    pstRegisterData.u32Value = uptrAddressArg;
    pstRegisterData.u32Mask = DMA_CH_DA_DA_MASK;
    pstRegisterData.u32Shift = DMA_CH_DA_R_DA_BIT;
    enErrorReg = DMA_CH__enWriteRegister32Bits(enChannelArg,
                                         &pstRegisterData);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetDestAddress(DMA_nCH enChannelArg, uintptr_t* puptrAddressArg)
{
    DMA_Register32Bits_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) puptrAddressArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = DMA_CH_DA_OFFSET;
        pstRegisterData.u32Mask = DMA_CH_DA_DA_MASK;
        pstRegisterData.u32Shift = DMA_CH_DA_R_DA_BIT;
        enErrorReg = DMA_CH__enReadRegister32Bits(enChannelArg, &pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *puptrAddressArg = (uintptr_t) pstRegisterData.u32Value;
    }

    return (enErrorReg);
}

