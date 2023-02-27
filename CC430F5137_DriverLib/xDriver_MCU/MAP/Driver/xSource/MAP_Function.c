/**
 *
 * @file MAP_Function.c
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
 * @verbatim 14 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/MAP/Driver/xHeader/MAP_Function.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/MAP/Driver/Intrinsics/Primitives/MAP_Primitives.h>
#include <xDriver_MCU/MAP/Peripheral/MAP_Peripheral.h>

MAP_nERROR MAP_PORT__enSetFunctionByNumber(MAP_nMODULE enModuleArg, MAP_nPIN enPinArg, MAP_nFUNCTION enFunctionArg)
{
    MAP_Register8Bits_t stRegister;
    MAP_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) 0U;
    stRegister.u8Mask = (uint8_t) 0xFFU;
    stRegister.uptrAddress = (uintptr_t) enPinArg;
    stRegister.u8Value = (uint8_t) enFunctionArg;
    enErrorReg = MAP_PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

MAP_nERROR MAP_PORT__enSetFunction(MAP_nMODULE enModuleArg, MAP_nPINMASK enPinMaskArg, MAP_nFUNCTION enFunctionArg)
{
    MAP_nERROR enErrorReg;
    uint8_t u8PinMaskReg;
    uint8_t u8PinReg;

    enErrorReg = MAP_enERROR_OK;
    u8PinReg = 0UL;
    u8PinMaskReg = (uint8_t) enPinMaskArg;
    while((0U != u8PinMaskReg) && (MAP_enERROR_OK == enErrorReg))
    {
        if(0U != (1U & u8PinMaskReg))
        {
            MAP_PORT__enSetFunctionByNumber(enModuleArg, (MAP_nPIN) u8PinReg, enFunctionArg);
        }
        u8PinReg++;
        u8PinMaskReg >>= 1U;
    }

    return (enErrorReg);
}

MAP_nERROR MAP_PORT__enSetFunctionByMask(MAP_nMODULE enModuleArg, MAP_nPINMASK enPinMaskArg, MAP_nFUNCTION enFunctionArg)
{
    MAP_nERROR enErrorReg;

    enErrorReg = MAP_PORT__enSetFunction(enModuleArg, enPinMaskArg, enFunctionArg);

    return (enErrorReg);
}

MAP_nERROR MAP_PORT__enGetFunctionByNumber(MAP_nMODULE enModuleArg, MAP_nPIN enPinArg, MAP_nFUNCTION* penFunctionMaskArg)
{
    MAP_Register8Bits_t stRegister;
    MAP_nERROR enErrorReg;

    enErrorReg = MAP_enERROR_OK;
    if(0U == (uintptr_t) penFunctionMaskArg)
    {
        enErrorReg = MAP_enERROR_POINTER;
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) 0U;
        stRegister.u8Mask = (uint8_t) 0xFFU;
        stRegister.uptrAddress = (uintptr_t) enPinArg;
        enErrorReg = MAP_PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        *penFunctionMaskArg = (MAP_nFUNCTION) stRegister.u8Value;
    }

    return (enErrorReg);
}

