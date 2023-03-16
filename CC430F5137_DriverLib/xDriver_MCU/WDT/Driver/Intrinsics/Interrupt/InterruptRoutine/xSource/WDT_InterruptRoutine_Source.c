/**
 *
 * @file WDT_InterruptRoutine_Source.c
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
#include <xDriver_MCU/WDT/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/WDT_InterruptRoutine_Source.h>

static WDT_puxfIRQSourceHandler_t WDT_uxIRQSourceHandler[(UBase_t) WDT_enMODULE_MAX]
                                                         [(UBase_t) WDT_enINT_MAX] =
{
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
    },
};


WDT_puxfIRQSourceHandler_t WDT__puxfGetIRQSourceHandler(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg)
{
    WDT_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = WDT_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}

WDT_puxfIRQSourceHandler_t* WDT__puxfGetIRQSourceHandlerPointer(WDT_nMODULE enModuleArg, WDT_nINT enInterruptArg)
{
    WDT_puxfIRQSourceHandler_t* puxfFunctionReg;
    puxfFunctionReg = &WDT_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}
