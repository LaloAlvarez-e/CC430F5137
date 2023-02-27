/**
 *
 * @file DMA_WriteRegister.c
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
 * @verbatim 12 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Primitives/xHeader/DMA_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>

DMA_nERROR DMA_CH__enWriteRegister32Bits(DMA_nCH enChannelArg, DMA_Register32Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = DMA_CH__uptrBlockBaseAddress(enChannelArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (DMA_nERROR) MCU__enWriteRegister32Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enWriteRegister8Bits(DMA_nCH enChannelArg, DMA_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = DMA_CH__uptrBlockBaseAddress(enChannelArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (DMA_nERROR) MCU__enWriteRegister8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

DMA_nERROR DMA_CH__enWriteRegister(DMA_nCH enChannelArg, DMA_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enChannelArg, (UBase_t) DMA_enCH_MAX);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = DMA_CH__uptrBlockBaseAddress(enChannelArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (DMA_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

DMA_nERROR DMA__enWriteRegister32Bits(DMA_Register32Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = DMA__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (DMA_nERROR) MCU__enWriteRegister32Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

DMA_nERROR DMA__enWriteRegister8Bits(DMA_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = DMA__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (DMA_nERROR) MCU__enWriteRegister8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

DMA_nERROR DMA__enWriteRegister(DMA_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    DMA_nERROR enErrorReg;
    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = DMA__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (DMA_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}



