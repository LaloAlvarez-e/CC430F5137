/**
 *
 * @file TIMERA_ReadRegister.c
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
 * @verbatim 12 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMERA/Driver/Intrinsics/Primitives/xHeader/TIMERA_ReadRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h>

TIMERA_nERROR TIMERA__enReadRegister(TIMERA_nMODULE enModuleArg, TIMERA_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (TIMERA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) TIMERA_enMODULE_MAX);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = TIMERA__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (TIMERA_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

TIMERA_nERROR TIMERA_CC__enReadRegister(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    UBase_t uxSubModuleMax;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = (TIMERA_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) TIMERA_enMODULE_MAX);
    }
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
        uptrModuleBase = TIMERA_CC__uptrBlockBaseAddress(enModuleArg, enSubModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (TIMERA_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}




