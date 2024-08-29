/**
 *
 * @file TIMERA_InterruptRoutine_Vector.c
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
#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMERA_InterruptRoutine_Vector.h"
#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMERA_InterruptRoutine_Source.h"

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/Primitives/TIMERA_Primitives.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

__interrupt void TIMERA0_CC0__IRQVectorHandler(void)
{
    TIMERA_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    TIMERA_InterruptInfo_t stInterruptData;
    UBase_t uxControl;
    TIMERA_CC_CTL_t* pstControl;

    uxControl = TIMERA1_CC0_CTL_R;
    pstControl = (TIMERA_CC_CTL_t*) &uxControl;
    stInterruptData.uxCounter = TIMERA0_CC0_COUNT_R;
    stInterruptData.uxPinValue = pstControl->CCI_;
    stInterruptData.uxPinLatch = pstControl->SCCI_;
    stInterruptData.uxMode = pstControl->CAP_;
    IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_0, TIMERA_enCC_0,
                                                             (TIMERA_nCC_MODE) stInterruptData.uxMode);
    enStatus = IRQSourceHandlerReg(TIMERA0_CC0_BASE, (void*) &stInterruptData);

    if(MCU_enISR_RETURN_UNCHANGED != enStatus)
    {
        __low_power_mode_off_on_exit();
        __bis_SR_register_on_exit((uint16_t) enStatus);
        _NOP();
    }
}

__interrupt void TIMERA1_CC0__IRQVectorHandler(void)
{
    TIMERA_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    TIMERA_InterruptInfo_t stInterruptData;
    UBase_t uxControl;
    TIMERA_CC_CTL_t* pstControl;

    uxControl = TIMERA1_CC0_CTL_R;
    pstControl = (TIMERA_CC_CTL_t*) &uxControl ;
    stInterruptData.uxCounter = TIMERA1_CC0_COUNT_R;
    stInterruptData.uxPinValue = pstControl->CCI_;
    stInterruptData.uxPinLatch = pstControl->SCCI_;
    stInterruptData.uxMode = pstControl->CAP_;
    IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_1, TIMERA_enCC_0,
                                                             (TIMERA_nCC_MODE) stInterruptData.uxMode);
    enStatus = IRQSourceHandlerReg(TIMERA1_CC0_BASE, (void*) &stInterruptData);

    if(MCU_enISR_RETURN_UNCHANGED != enStatus)
    {
        __low_power_mode_off_on_exit();
        __bis_SR_register_on_exit((uint16_t) enStatus);
        _NOP();
    }
}



__interrupt void TIMERA0__IRQVectorHandler(void)
{
    TIMERA_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    TIMERA_InterruptInfo_t stInterruptData;
    UBase_t uxControl;
    TIMERA_CC_CTL_t* pstControl;
    uint16_t u16TimerInterruptSource;

    u16TimerInterruptSource = TIMERA0_IV_R;
    switch(__even_in_range(u16TimerInterruptSource, TIMERA_IV_R_IV_OV))
    {
    case TIMERA_IV_R_IV_CC1:
        uxControl = TIMERA0_CC1_CTL_R;
        pstControl = (TIMERA_CC_CTL_t*) &uxControl;
        stInterruptData.uxCounter = TIMERA0_CC1_COUNT_R;
        stInterruptData.uxPinValue = pstControl->CCI_;
        stInterruptData.uxPinLatch = pstControl->SCCI_;
        stInterruptData.uxMode = pstControl->CAP_;
        IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_0, TIMERA_enCC_1,
                                                                 (TIMERA_nCC_MODE) stInterruptData.uxMode);
        enStatus = IRQSourceHandlerReg(TIMERA0_CC1_BASE, (void*) &stInterruptData);
        break;
    case TIMERA_IV_R_IV_CC2:
        uxControl = TIMERA0_CC2_CTL_R;
        pstControl = (TIMERA_CC_CTL_t*) &uxControl;
        stInterruptData.uxCounter = TIMERA0_CC2_COUNT_R;
        stInterruptData.uxPinValue = pstControl->CCI_;
        stInterruptData.uxPinLatch = pstControl->SCCI_;
        stInterruptData.uxMode = pstControl->CAP_;
        IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_0, TIMERA_enCC_2,
                                                                 (TIMERA_nCC_MODE) stInterruptData.uxMode);
        enStatus = IRQSourceHandlerReg(TIMERA0_CC2_BASE, (void*) &stInterruptData);
        break;
    case TIMERA_IV_R_IV_CC3:
        uxControl = TIMERA0_CC3_CTL_R;
        pstControl = (TIMERA_CC_CTL_t*) &uxControl;
        stInterruptData.uxCounter = TIMERA0_CC3_COUNT_R;
        stInterruptData.uxPinValue = pstControl->CCI_;
        stInterruptData.uxPinLatch = pstControl->SCCI_;
        stInterruptData.uxMode = pstControl->CAP_;
        IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_0, TIMERA_enCC_3,
                                                                 (TIMERA_nCC_MODE) stInterruptData.uxMode);
        enStatus = IRQSourceHandlerReg(TIMERA0_CC3_BASE, (void*) &stInterruptData);
        break;
    case TIMERA_IV_R_IV_CC4:
        uxControl = TIMERA0_CC4_CTL_R;
        pstControl = (TIMERA_CC_CTL_t*) &uxControl;
        stInterruptData.uxCounter = TIMERA0_CC4_COUNT_R;
        stInterruptData.uxPinValue = pstControl->CCI_;
        stInterruptData.uxPinLatch = pstControl->SCCI_;
        stInterruptData.uxMode = pstControl->CAP_;
        IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_0, TIMERA_enCC_4,
                                                                 (TIMERA_nCC_MODE) stInterruptData.uxMode);
        enStatus = IRQSourceHandlerReg(TIMERA0_CC4_BASE, (void*) &stInterruptData);
        break;
    case TIMERA_IV_R_IV_OV:
        uxControl = TIMERA0_COUNT_R;
        IRQSourceHandlerReg = TIMERA__puxfGetIRQSourceHandler(TIMERA_enMODULE_0);
        enStatus = IRQSourceHandlerReg(TIMERA_BASE, (void*) uxControl);
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



__interrupt void TIMERA1__IRQVectorHandler(void)
{
    TIMERA_puxfIRQSourceHandler_t IRQSourceHandlerReg;
    MCU_nISR_RETURN enStatus;
    TIMERA_InterruptInfo_t stInterruptData;
    UBase_t uxControl;
    TIMERA_CC_CTL_t* pstControl;
    uint16_t u16TimerInterruptSource;

    u16TimerInterruptSource = TIMERA1_IV_R;
    switch(__even_in_range(u16TimerInterruptSource, TIMERA_IV_R_IV_OV))
    {
    case TIMERA_IV_R_IV_CC1:
        uxControl = TIMERA1_CC1_CTL_R;
        pstControl = (TIMERA_CC_CTL_t*) &uxControl;
        stInterruptData.uxCounter = TIMERA1_CC1_COUNT_R;
        stInterruptData.uxPinValue = pstControl->CCI_;
        stInterruptData.uxPinLatch = pstControl->SCCI_;
        stInterruptData.uxMode = pstControl->CAP_;
        IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_0, TIMERA_enCC_1,
                                                                 (TIMERA_nCC_MODE) stInterruptData.uxMode);
        enStatus = IRQSourceHandlerReg(TIMERA1_CC1_BASE, (void*) &stInterruptData);
        break;
    case TIMERA_IV_R_IV_CC2:
        uxControl = TIMERA1_CC2_CTL_R;
        pstControl = (TIMERA_CC_CTL_t*) &uxControl;
        stInterruptData.uxCounter = TIMERA1_CC2_COUNT_R;
        stInterruptData.uxPinValue = pstControl->CCI_;
        stInterruptData.uxPinLatch = pstControl->SCCI_;
        stInterruptData.uxMode = pstControl->CAP_;
        IRQSourceHandlerReg = TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_enMODULE_0, TIMERA_enCC_2,
                                                                 (TIMERA_nCC_MODE) stInterruptData.uxMode);
        enStatus = IRQSourceHandlerReg(TIMERA1_CC2_BASE, (void*) &stInterruptData);
        break;
    case TIMERA_IV_R_IV_OV:
        uxControl = TIMERA1_COUNT_R;
        IRQSourceHandlerReg = TIMERA__puxfGetIRQSourceHandler(TIMERA_enMODULE_0);
        enStatus = IRQSourceHandlerReg(TIMERA_BASE, (void*) uxControl);
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
