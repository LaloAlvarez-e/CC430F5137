/**
 *
 * @file MCU_RegisterSourceIRQ.c
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 27 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/MCU/xHeader/MCU_RegisterSourceIRQ.h>
#include <xDriver_MCU/MCU/xHeader/MCU_CheckParams.h>

MCU_nERROR MCU__enRegisterIRQSourceHandler(MCU_puxfIRQSourceHandler_t pfIrqSourceHandler,
                                           MCU_puxfIRQSourceHandler_t* pfIrqArrayHandler,
                                           UBase_t uxInterruptSource,
                                           UBase_t uxInterruptSourceMax)
{
    MCU_nERROR enErrorReg;
    enErrorReg = MCU_enERROR_OK;
    if((0UL == (uintptr_t) pfIrqSourceHandler) || (0UL == (uintptr_t) pfIrqArrayHandler))
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        enErrorReg = MCU__enCheckParams(uxInterruptSource, uxInterruptSourceMax);
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        pfIrqArrayHandler += uxInterruptSource;
        *pfIrqArrayHandler = (MCU_puxfIRQSourceHandler_t) pfIrqSourceHandler;
    }
    return (enErrorReg);
}

MCU_nERROR MCU__enRegisterIRQSourceHandler_RAM(MCU_puxfIRQSourceHandler_t pfIrqSourceHandler,
                                               MCU_puxfIRQSourceHandler_t* pfIrqArrayHandler,
                                               UBase_t uxInterruptSource,
                                               UBase_t uxInterruptSourceMax)
{
    MCU_nERROR enErrorReg;
    enErrorReg = MCU_enERROR_OK;
    if((0UL == (uintptr_t) pfIrqSourceHandler) || (0UL == (uintptr_t) pfIrqArrayHandler))
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        enErrorReg = MCU__enCheckParams_RAM(uxInterruptSource, uxInterruptSourceMax);
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        pfIrqArrayHandler += uxInterruptSource;
        *pfIrqArrayHandler = (MCU_puxfIRQSourceHandler_t) pfIrqSourceHandler;
    }
    return (enErrorReg);
}

