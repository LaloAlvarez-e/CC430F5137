/**
 *
 * @file SYSCTL_InterruptRoutine_Source.c
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
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/SYSCTL_InterruptRoutine_Source.h>

static SYSCTL_puxfIRQSourceHandler_t SYSCTL_RESET_uxIRQSourceHandler[(UBase_t) SYSCTL_enMODULE_MAX]
                                                          [(UBase_t) SYSCTL_enINT_RESET_MAX] =
{
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
    },
};

static SYSCTL_puxfIRQSourceHandler_t SYSCTL_USERNMI_uxIRQSourceHandler[(UBase_t) SYSCTL_enMODULE_MAX]
                                                          [(UBase_t) SYSCTL_enINT_USERNMI_MAX] =
{
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
    },
};

static SYSCTL_puxfIRQSourceHandler_t SYSCTL_SYSNMI_uxIRQSourceHandler[(UBase_t) SYSCTL_enMODULE_MAX]
                                                          [(UBase_t) SYSCTL_enINT_SYSNMI_MAX] =
{
    {
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy, &MCU_uxIRQSourceHandler_Dummy,
        &MCU_uxIRQSourceHandler_Dummy,
    },
};


SYSCTL_puxfIRQSourceHandler_t SYSCTL_RESET__puxfGetIRQSourceHandler(SYSCTL_nMODULE enModuleArg,
                                                                    SYSCTL_nINT_RESET enInterruptArg)
{
    SYSCTL_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = SYSCTL_RESET_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}

SYSCTL_puxfIRQSourceHandler_t* SYSCTL_RESET__puxfGetIRQSourceHandlerPointer(SYSCTL_nMODULE enModuleArg,
                                                                            SYSCTL_nINT_RESET enInterruptArg)
{
    SYSCTL_puxfIRQSourceHandler_t* puxfFunctionReg;

    puxfFunctionReg = &SYSCTL_RESET_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}

SYSCTL_puxfIRQSourceHandler_t SYSCTL_USERNMI__puxfGetIRQSourceHandler(SYSCTL_nMODULE enModuleArg,
                                                                    SYSCTL_nINT_USERNMI enInterruptArg)
{
    SYSCTL_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = SYSCTL_USERNMI_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}

SYSCTL_puxfIRQSourceHandler_t* SYSCTL_USERNMI__puxfGetIRQSourceHandlerPointer(SYSCTL_nMODULE enModuleArg,
                                                                            SYSCTL_nINT_USERNMI enInterruptArg)
{
    SYSCTL_puxfIRQSourceHandler_t* puxfFunctionReg;

    puxfFunctionReg = &SYSCTL_USERNMI_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}


SYSCTL_puxfIRQSourceHandler_t SYSCTL_SYSNMI__puxfGetIRQSourceHandler(SYSCTL_nMODULE enModuleArg,
                                                                    SYSCTL_nINT_SYSNMI enInterruptArg)
{
    SYSCTL_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = SYSCTL_SYSNMI_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}

SYSCTL_puxfIRQSourceHandler_t* SYSCTL_SYSNMI__puxfGetIRQSourceHandlerPointer(SYSCTL_nMODULE enModuleArg,
                                                                            SYSCTL_nINT_SYSNMI enInterruptArg)
{
    SYSCTL_puxfIRQSourceHandler_t* puxfFunctionReg;

    puxfFunctionReg = &SYSCTL_SYSNMI_uxIRQSourceHandler[(UBase_t) enModuleArg] [(UBase_t) enInterruptArg];

    return (puxfFunctionReg);
}


