/**
 *
 * @file DMA_InterruptRoutine_Source.c
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
 * @verbatim 13 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>

static DMA_puxfIRQSourceHandler_t DMA_uxIRQSourceHandler[(UBase_t) DMA_enCH_MAX]
                                                         [(UBase_t) DMA_enTRIGGER_MAX] =
{
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
    },
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
    },
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
    },
};


DMA_puxfIRQSourceHandler_t DMA_CH__puxfGetIRQSourceHandler(DMA_nCH enChannelArg, DMA_nTRIGGER enTriggerArg)
{
    DMA_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = DMA_uxIRQSourceHandler[(UBase_t) enChannelArg] [(UBase_t) enTriggerArg];

    return (puxfFunctionReg);
}

DMA_puxfIRQSourceHandler_t* DMA_CH__puxfGetIRQSourceHandlerPointer(DMA_nCH enChannelArg, DMA_nTRIGGER enTriggerArg)
{
    DMA_puxfIRQSourceHandler_t* puxfFunctionReg;
    puxfFunctionReg = &DMA_uxIRQSourceHandler[(UBase_t) enChannelArg] [(UBase_t) enTriggerArg];

    return (puxfFunctionReg);
}
