/**
 *
 * @file TIMERA_InterruptRegisterIRQSource.c
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
#include <xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/InterruptRegister/xHeader/TIMERA_InterruptRegisterIRQSource.h>

#include <xDriver_MCU/SYSCTL/SYSCTL.h>
#include <xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMERA_InterruptRoutine_Source.h>
#include <xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h>
#include <xDriver_MCU/MCU/MCU.h>

TIMERA_nERROR TIMERA__enRegisterIRQSourceHandler(TIMERA_nMODULE enModuleArg,
                                                 TIMERA_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    TIMERA_puxfIRQSourceHandler_t* puxfIrqHandler;
    TIMERA_nERROR enErrorReg;

    enErrorReg = (TIMERA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) TIMERA_enMODULE_MAX);
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = TIMERA__puxfGetIRQSourceHandlerPointer(enModuleArg);
        enErrorReg = (TIMERA_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enRegisterIRQSourceHandler(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nCC_MODE enModeArg,
                                                 TIMERA_puxfIRQSourceHandler_t pfIrqSourceHandler)
{
    TIMERA_puxfIRQSourceHandler_t* puxfIrqHandler;
    UBase_t uxSubModuleMax;
    TIMERA_nERROR enErrorReg;

    enErrorReg = (TIMERA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) TIMERA_enMODULE_MAX);
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        if(enModuleArg == TIMERA_enMODULE_0)
        {
            uxSubModuleMax = TIMERA_enCC_MAX;
        }
        else if(enModuleArg == TIMERA_enMODULE_1)
        {
            uxSubModuleMax = TIMERA_enCC_3;
        }
        enErrorReg = (TIMERA_nERROR) MCU__enCheckParams((UBase_t) enSubModuleArg, uxSubModuleMax);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        puxfIrqHandler = TIMERA_CC__puxfGetIRQSourceHandlerPointer(enModuleArg, enSubModuleArg, enModeArg);
        enErrorReg = (TIMERA_nERROR) MCU__enRegisterIRQSourceHandler(pfIrqSourceHandler, puxfIrqHandler, 0UL, 1UL);
    }
    return (enErrorReg);
}

