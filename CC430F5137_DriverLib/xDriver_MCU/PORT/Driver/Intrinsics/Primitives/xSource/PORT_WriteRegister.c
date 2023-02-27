/**
 *
 * @file PORT_WriteRegister.c
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
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/xHeader/PORT_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>


PORT_nERROR PORT_EXT__enWriteRegister(PORT_nMODULE_EXT enModuleArg, PORT_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PORT_enMODULE_EXT_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = PORT_EXT__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PORT_nERROR) MCU__enWriteRegister(pstRegisterDataArg);
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enWriteRegisterDirect(PORT_nMODULE_EXT enModuleArg, PORT_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PORT_enMODULE_EXT_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = PORT_EXT__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PORT_nERROR) MCU__enWriteRegisterDirect(pstRegisterDataArg);
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enWriteRegister(PORT_nMODULE enModuleArg, PORT_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PORT_enMODULE_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = PORT__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PORT_nERROR) MCU__enWriteRegister8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enWriteRegisterDirect(PORT_nMODULE enModuleArg, PORT_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PORT_enMODULE_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = PORT__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (PORT_nERROR) MCU__enWriteRegisterDirect8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}




