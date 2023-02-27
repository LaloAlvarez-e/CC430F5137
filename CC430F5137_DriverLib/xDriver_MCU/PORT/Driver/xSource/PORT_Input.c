/**
 *
 * @file PORT_Input.c
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
 * @verbatim 31 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Input.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enGetInput(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8InputMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) pu8InputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_IN_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IN_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *pu8InputMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetInputByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penInputMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penInputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_IN_PIN0_MASK;
        stRegister.uptrAddress = PORT_IN_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penInputMaskArg = (PORT_nLEVEL) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetInput(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxInputMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) puxInputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_IN_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IN_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxInputMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetInputByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penInputMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penInputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_IN_PIN0_MASK;
        stRegister.uptrAddress = PORT_IN_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penInputMaskArg = (PORT_nLEVEL) stRegister.uxValue;
    }

    return (enErrorReg);
}





