/**
 *
 * @file DMA_InterruptRoutine_Vector.c
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
 * @verbatim 29 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 29 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Vector.h"
#include "xDriver_MCU/DMA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/DMA_InterruptRoutine_Source.h"

#include "xDriver_MCU/DMA/Driver/Intrinsics/Primitives/DMA_Primitives.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

__interrupt void DMA__IRQVectorHandler(void)
{
    DMA_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    DMA_nTRIGGER enTrigger;
    uint16_t u16DMAInterruptSource;

    u16DMAInterruptSource = DMA_IV_R;
    switch(__even_in_range(u16DMAInterruptSource, DMA_IV_R_IV_CH2))
    {
    case DMA_IV_R_IV_CH0:
        enTrigger = (DMA_nTRIGGER) (DMA_CH0_TRIGGER_R & DMA_CH0_TRIGGER_TSEL_MASK);
        IRQSourceHandlerReg = DMA_CH__puxfGetIRQSourceHandler(DMA_enCH0, enTrigger);
        enStatus = IRQSourceHandlerReg(DMA_CH0_BASE, (void*) enTrigger);
        break;
    case DMA_IV_R_IV_CH1:
        enTrigger = (DMA_nTRIGGER) (DMA_CH1_TRIGGER_R & DMA_CH1_TRIGGER_TSEL_MASK);
        IRQSourceHandlerReg = DMA_CH__puxfGetIRQSourceHandler(DMA_enCH1, enTrigger);
        enStatus = IRQSourceHandlerReg(DMA_CH1_BASE, (void*) enTrigger);
        break;
    case DMA_IV_R_IV_CH2:
        enTrigger = (DMA_nTRIGGER) (DMA_CH2_TRIGGER_R & DMA_CH2_TRIGGER_TSEL_MASK);
        IRQSourceHandlerReg = DMA_CH__puxfGetIRQSourceHandler(DMA_enCH2, enTrigger);
        enStatus = IRQSourceHandlerReg(DMA_CH2_BASE, (void*) enTrigger);
        break;
    default:
        enStatus = MCU_enISR_RETURN_UNCHANGED;
        break;
    }
    if(MCU_enISR_RETURN_UNCHANGED != enStatus)
    {
        __low_power_mode_off_on_exit();
        __bis_SR_register_on_exit((uint16_t) enStatus);
        _NOP();
    }
}

