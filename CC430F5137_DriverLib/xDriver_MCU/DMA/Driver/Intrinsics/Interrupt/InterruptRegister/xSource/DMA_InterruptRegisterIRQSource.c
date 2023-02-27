/**
 *
 * @file DMA_InterruptRegisterIRQSource.c
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
 * @verbatim 20 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/DMA_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h>
#include <xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h>
#include <xDriver_MCU/MCU/MCU.h>

DMA_nERROR DMA_CH__enRegisterIRQSourceHandler(DMA_nCH enChannelArg,
                                             DMA_nTRIGGER enTriggerArg,
                                             DMA_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    DMA_puxfIRQSourceHandler_t* puxfIrqHandler;
    DMA_nERROR enErrorReg;

    enErrorReg = (DMA_nERROR) MCU__enCheckParams((UBase_t) enTriggerArg, (UBase_t) DMA_enTRIGGER_MAX);
    if(DMA_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = DMA_CH__puxfGetIRQSourceHandlerPointer(enChannelArg, enTriggerArg);
        enErrorReg = (DMA_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

