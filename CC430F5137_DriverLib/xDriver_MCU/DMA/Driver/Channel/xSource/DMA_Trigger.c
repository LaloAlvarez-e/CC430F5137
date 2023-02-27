/**
 *
 * @file DMA_Trigger.c
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
#include <xDriver_MCU/DMA/Driver/Channel/xHeader/DMA_Trigger.h>
#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA_CH__enSetTrigger(DMA_nCH enChannelArg,
                                DMA_nTRIGGER enTriggerArg)
{
    DMA_Register8Bits_t pstRegisterData;
    DMA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = (uintptr_t) enChannelArg;
    pstRegisterData.u8Value = (uint8_t) enTriggerArg;
    pstRegisterData.u8Mask = DMA_TRIGGER_TSEL_MASK;
    pstRegisterData.u8Shift = DMA_TRIGGER_R_TSEL_BIT;
    enErrorReg = DMA__enWriteRegister8Bits(&pstRegisterData);
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enGetTrigger(DMA_nCH enChannelArg,
                                DMA_nTRIGGER* penTriggerArg)
{
    DMA_Register8Bits_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) penTriggerArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = (uintptr_t) enChannelArg;
        pstRegisterData.u8Mask = DMA_TRIGGER_TSEL_MASK;
        pstRegisterData.u8Shift = DMA_TRIGGER_R_TSEL_BIT;
        enErrorReg = DMA__enWriteRegister8Bits(&pstRegisterData);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        *penTriggerArg = (DMA_nTRIGGER) pstRegisterData.u8Value;
    }

    return (enErrorReg);
}
