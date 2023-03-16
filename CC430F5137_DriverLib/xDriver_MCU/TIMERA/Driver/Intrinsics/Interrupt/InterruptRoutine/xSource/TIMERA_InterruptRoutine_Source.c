/**
 *
 * @file TIMERA_InterruptRoutine_Source.c
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
#include <xDriver_MCU/TIMERA/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/TIMERA_InterruptRoutine_Source.h>

static TIMERA_puxfIRQSourceHandler_t TIMERA_uxIRQSourceHandler[(UBase_t) TIMERA_enMODULE_MAX] =
{
     &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
};


static TIMERA_puxfIRQSourceHandler_t TIMERA_CC_uxIRQSourceHandler[(UBase_t) TIMERA_enMODULE_MAX][(UBase_t) TIMERA_enCC_MAX]
                                                                 [(UBase_t) TIMERA_enCC_MODE_MAX] =
{
 {
     {
      &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
 },
 {
     {
      &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
     {
       &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy
     },
 },
};


TIMERA_puxfIRQSourceHandler_t TIMERA__puxfGetIRQSourceHandler(TIMERA_nMODULE enModuleArg)
{
    TIMERA_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = TIMERA_uxIRQSourceHandler[(UBase_t) enModuleArg];

    return (puxfFunctionReg);
}

TIMERA_puxfIRQSourceHandler_t* TIMERA__puxfGetIRQSourceHandlerPointer(TIMERA_nMODULE enModuleArg)
{
    TIMERA_puxfIRQSourceHandler_t* puxfFunctionReg;
    puxfFunctionReg = &TIMERA_uxIRQSourceHandler[(UBase_t) enModuleArg];

    return (puxfFunctionReg);
}


TIMERA_puxfIRQSourceHandler_t TIMERA_CC__puxfGetIRQSourceHandler(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,TIMERA_nCC_MODE enModeArg)
{
    TIMERA_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = TIMERA_CC_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enSubModuleArg] [(UBase_t) enModeArg];

    return (puxfFunctionReg);
}

TIMERA_puxfIRQSourceHandler_t* TIMERA_CC__puxfGetIRQSourceHandlerPointer(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,TIMERA_nCC_MODE enModeArg)
{
    TIMERA_puxfIRQSourceHandler_t* puxfFunctionReg;
    puxfFunctionReg = &TIMERA_CC_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enSubModuleArg] [(UBase_t) enModeArg];

    return (puxfFunctionReg);
}
