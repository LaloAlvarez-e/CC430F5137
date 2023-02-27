/**
 *
 * @file PORT_Output.c
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
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Output.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enSetOutput(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nLEVEL enOutputArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    if(PORT_enLEVEL_LOW != enOutputArg)
    {
        u8Value = (uint8_t) enPinMaskArg;
    }
    else
    {
        u8Value = 0U;
    }

    stRegister.u8Shift = (uint8_t) PORT_OUT_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.u8Value = u8Value;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetOutputByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL enOutputArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) enPinArg;
    stRegister.u8Mask = (uint8_t) PORT_OUT_PIN0_MASK;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.u8Value = (uint8_t) enOutputArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetOutputByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) PORT_OUT_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.u8Value = u8PinValueArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetOutput(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nLEVEL enOutputArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    if(PORT_enLEVEL_LOW != enOutputArg)
    {
        uxValue = (UBase_t) enPinMaskArg;
    }
    else
    {
        uxValue = 0U;
    }

    stRegister.uxShift = PORT_OUT_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.uxValue = uxValue;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetOutputByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL enOutputArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) enPinArg;
    stRegister.uxMask = PORT_OUT_PIN0_MASK;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.uxValue = (UBase_t) enOutputArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetOutputByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = PORT_OUT_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.uxValue = uxPinValueArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enGetOutput(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8OutputMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) pu8OutputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_OUT_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_OUT_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *pu8OutputMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetOutputByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penOutputMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penOutputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_OUT_PIN0_MASK;
        stRegister.uptrAddress = PORT_OUT_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penOutputMaskArg = (PORT_nLEVEL) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetOutput(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxOutputMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) puxOutputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_OUT_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_OUT_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxOutputMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetOutputByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penOutputMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penOutputMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_OUT_PIN0_MASK;
        stRegister.uptrAddress = PORT_OUT_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penOutputMaskArg = (PORT_nLEVEL) stRegister.uxValue;
    }

    return (enErrorReg);
}

