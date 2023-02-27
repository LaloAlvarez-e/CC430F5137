/**
 *
 * @file PORT_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/PORT/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/PORT_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/PORT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/PORT_InterruptRoutine_Source.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>
#include <xDriver_MCU/MCU/MCU.h>

PORT_nERROR PORT__enRegisterIRQSourceHandler(PORT_nMODULE enModuleArg,
                                             PORT_nPIN enPinArg,
                                             PORT_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    PORT_puxfIRQSourceHandler_t* puxfIrqHandler;
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) PORT_enPIN_8);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = PORT__puxfGetIRQSourceHandlerPointer(enModuleArg, enPinArg);
        enErrorReg = (PORT_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }

    return (enErrorReg);
}

