/**
 *
 * @file PORT_InterruptRoutine_Source.c
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
#include <xDriver_MCU/PORT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/PORT_InterruptRoutine_Source.h>

static PORT_puxfIRQSourceHandler_t PORT_uxIRQSourceHandler[(UBase_t) PORT_enMODULE_2 + 1U][(UBase_t) PORT_enPIN_8] =
{
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
    },
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
    },
};


PORT_puxfIRQSourceHandler_t PORT__puxfGetIRQSourceHandler(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg)
{
    PORT_puxfIRQSourceHandler_t puxfFunctionReg;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        puxfFunctionReg = PORT_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enPinArg];
    }
    else
    {
        puxfFunctionReg = (PORT_puxfIRQSourceHandler_t) 0U;
    }

    return (puxfFunctionReg);
}

PORT_puxfIRQSourceHandler_t* PORT__puxfGetIRQSourceHandlerPointer(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg)
{
    PORT_puxfIRQSourceHandler_t* puxfFunctionReg;

    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        puxfFunctionReg = &PORT_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enPinArg];
    }
    else
    {
        puxfFunctionReg = (PORT_puxfIRQSourceHandler_t*) 0U;
    }

    return (puxfFunctionReg);
}
