/**
 *
 * @file MAP_ReadRegister.c
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
#include <xDriver_MCU/MAP/Driver/Intrinsics/Primitives/xHeader/MAP_ReadRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/MAP/Peripheral/MAP_Peripheral.h>

MAP_nERROR MAP__enReadRegister(MAP_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    MAP_nERROR enErrorReg;

    enErrorReg = MAP_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MAP_enERROR_POINTER;
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = MAP__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (MAP_nERROR) MCU__enReadRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}


MAP_nERROR MAP_PORT__enReadRegister(MAP_nMODULE enModuleArg, MCU_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    MAP_nERROR enErrorReg;

    enErrorReg = MAP_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MAP_enERROR_POINTER;
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (MAP_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) MAP_enMODULE_MAX);
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = MAP_PORT__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (MAP_nERROR) MCU__enReadRegister8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}


