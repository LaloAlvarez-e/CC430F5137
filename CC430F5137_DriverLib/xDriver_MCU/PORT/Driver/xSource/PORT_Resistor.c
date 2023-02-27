/**
 *
 * @file PORT_Resistor.c
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
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Resistor.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enSetResistorState(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enResistorStateArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    if(PORT_enSTATE_DIS != enResistorStateArg)
    {
        u8Value = (uint8_t) enPinMaskArg;
    }
    else
    {
        u8Value = 0U;
    }

    stRegister.u8Shift = (uint8_t) PORT_REN_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_REN_OFFSET;
    stRegister.u8Value = u8Value;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetResistorStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enResistorStateArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) enPinArg;
    stRegister.u8Mask = (uint8_t) PORT_REN_PIN0_MASK;
    stRegister.uptrAddress = PORT_REN_OFFSET;
    stRegister.u8Value = (uint8_t) enResistorStateArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetResistorStateByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) PORT_REN_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_REN_OFFSET;
    stRegister.u8Value = u8PinValueArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetResistorState(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enResistorStateArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    if(PORT_enSTATE_DIS != enResistorStateArg)
    {
        uxValue = (UBase_t) enPinMaskArg;
    }
    else
    {
        uxValue = 0U;
    }

    stRegister.uxShift = PORT_REN_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_REN_OFFSET;
    stRegister.uxValue = uxValue;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetResistorStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enResistorStateArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) enPinArg;
    stRegister.uxMask = PORT_REN_PIN0_MASK;
    stRegister.uptrAddress = PORT_REN_OFFSET;
    stRegister.uxValue = (UBase_t) enResistorStateArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetResistorStateByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = PORT_REN_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_REN_OFFSET;
    stRegister.uxValue = uxPinValueArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enGetResistorState(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8ResistorStateMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) pu8ResistorStateMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_REN_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_REN_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *pu8ResistorStateMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetResistorStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penResistorStateMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penResistorStateMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_REN_PIN0_MASK;
        stRegister.uptrAddress = PORT_REN_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penResistorStateMaskArg = (PORT_nSTATE) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetResistorState(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxResistorStateMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) puxResistorStateMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_REN_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_REN_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxResistorStateMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetResistorStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penResistorStateMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penResistorStateMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_REN_PIN0_MASK;
        stRegister.uptrAddress = PORT_REN_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penResistorStateMaskArg = (PORT_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}




PORT_nERROR PORT__enSetResistorType(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESTYPE enResistorTypeArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    if(PORT_enRESTYPE_PULLDOWN != enResistorTypeArg)
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

PORT_nERROR PORT__enSetResistorTypeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE enResistorTypeArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) enPinArg;
    stRegister.u8Mask = (uint8_t) PORT_OUT_PIN0_MASK;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.u8Value = (uint8_t) enResistorTypeArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetResistorTypeByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg)
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

PORT_nERROR PORT_EXT__enSetResistorType(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESTYPE enResistorTypeArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    if(PORT_enRESTYPE_PULLDOWN != enResistorTypeArg)
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

PORT_nERROR PORT_EXT__enSetResistorTypeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE enResistorTypeArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) enPinArg;
    stRegister.uxMask = PORT_OUT_PIN0_MASK;
    stRegister.uptrAddress = PORT_OUT_OFFSET;
    stRegister.uxValue = (UBase_t) enResistorTypeArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetResistorTypeByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg)
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

PORT_nERROR PORT__enGetResistorType(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8ResistorTypeMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) pu8ResistorTypeMaskArg)
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
        *pu8ResistorTypeMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetResistorTypeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE* penResistorTypeMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penResistorTypeMaskArg)
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
        *penResistorTypeMaskArg = (PORT_nRESTYPE) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetResistorType(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxResistorTypeMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) puxResistorTypeMaskArg)
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
        *puxResistorTypeMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetResistorTypeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE* penResistorTypeMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penResistorTypeMaskArg)
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
        *penResistorTypeMaskArg = (PORT_nRESTYPE) stRegister.uxValue;
    }

    return (enErrorReg);
}








PORT_nERROR PORT__enSetResistorMode(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESISTOR enResistorModeArg)
{
    PORT_nERROR enErrorReg;
    PORT_nPINMASK enPinMaskReg;
    PORT_nMODULE enModuleReg;
    UBase_t uxResStateReg;
    UBase_t uxResTypeReg;

    uxResTypeReg = (UBase_t) enResistorModeArg;
    uxResTypeReg &= 1U;

    enPinMaskReg = enPinMaskArg;
    enModuleReg = enModuleArg;
    enErrorReg = PORT__enSetResistorType(enModuleReg, enPinMaskReg, (PORT_nRESTYPE) uxResTypeReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enPinMaskReg = enPinMaskArg;
        enModuleReg = enModuleArg;
        uxResStateReg = (UBase_t) enResistorModeArg;
        uxResStateReg >>= 4U;
        uxResStateReg &= 1U;
        enErrorReg = PORT__enSetResistorState(enModuleReg, enPinMaskReg, (PORT_nSTATE) uxResStateReg);
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enSetResistorModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR enResistorModeArg)
{
    PORT_nERROR enErrorReg;
    PORT_nPIN enPinReg;
    PORT_nMODULE enModuleReg;
    UBase_t uxResStateReg;
    UBase_t uxResTypeReg;

    uxResTypeReg = (UBase_t) enResistorModeArg;
    uxResTypeReg &= 1U;

    enPinReg = enPinArg;
    enModuleReg = enModuleArg;
    enErrorReg = PORT__enSetResistorTypeByNumber(enModuleReg, enPinReg, (PORT_nRESTYPE) uxResTypeReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enPinReg = enPinArg;
        enModuleReg = enModuleArg;
        uxResStateReg = (UBase_t) enResistorModeArg;
        uxResStateReg >>= 4U;
        uxResStateReg &= 1U;
        enErrorReg = PORT__enSetResistorStateByNumber(enModuleReg, enPinReg, (PORT_nSTATE) uxResStateReg);
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetResistorMode(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESISTOR enResistorModeArg)
{
    PORT_nERROR enErrorReg;
    PORT_nPINMASK enPinMaskReg;
    PORT_nMODULE_EXT enModuleReg;
    UBase_t uxResStateReg;
    UBase_t uxResTypeReg;

    uxResTypeReg = (UBase_t) enResistorModeArg;
    uxResTypeReg &= 1U;

    enPinMaskReg = enPinMaskArg;
    enModuleReg = enModuleArg;
    enErrorReg = PORT_EXT__enSetResistorType(enModuleReg, enPinMaskReg, (PORT_nRESTYPE) uxResTypeReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enPinMaskReg = enPinMaskArg;
        enModuleReg = enModuleArg;
        uxResStateReg = (UBase_t) enResistorModeArg;
        uxResStateReg >>= 4U;
        uxResStateReg &= 1U;
        enErrorReg = PORT_EXT__enSetResistorState(enModuleReg, enPinMaskReg, (PORT_nSTATE) uxResStateReg);
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetResistorModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR enResistorModeArg)
{
    PORT_nERROR enErrorReg;
    PORT_nPIN enPinReg;
    PORT_nMODULE_EXT enModuleReg;
    UBase_t uxResStateReg;
    UBase_t uxResTypeReg;

    uxResTypeReg = (UBase_t) enResistorModeArg;
    uxResTypeReg &= 1U;

    enPinReg = enPinArg;
    enModuleReg = enModuleArg;
    enErrorReg = PORT_EXT__enSetResistorTypeByNumber(enModuleReg, enPinReg, (PORT_nRESTYPE) uxResTypeReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enPinReg = enPinArg;
        enModuleReg = enModuleArg;
        uxResStateReg = (UBase_t) enResistorModeArg;
        uxResStateReg >>= 4U;
        uxResStateReg &= 1U;
        enErrorReg = PORT_EXT__enSetResistorStateByNumber(enModuleReg, enPinReg, (PORT_nSTATE) uxResStateReg);
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetResistorModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR* penResistorModeMaskArg)
{
    PORT_nERROR enErrorReg;
    PORT_nPIN enPinReg;
    PORT_nMODULE enModuleReg;
    PORT_nSTATE enResStateReg;
    PORT_nRESTYPE enResTypeReg;
    UBase_t uxValue;

    enPinReg = enPinArg;
    enModuleReg = enModuleArg;
    enErrorReg = PORT__enGetResistorTypeByNumber(enModuleReg, enPinReg, &enResTypeReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enPinReg = enPinArg;
        enModuleReg = enModuleArg;
        enErrorReg = PORT__enGetResistorStateByNumber(enModuleReg, enPinReg, &enResStateReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uxValue = (UBase_t) enResStateReg & 1U;
        uxValue <<= 4UL;
        uxValue |= (UBase_t) enResTypeReg & 1U;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetResistorModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR* penResistorModeMaskArg)
{
    PORT_nERROR enErrorReg;
    PORT_nPIN enPinReg;
    PORT_nMODULE_EXT enModuleReg;
    PORT_nSTATE enResStateReg;
    PORT_nRESTYPE enResTypeReg;
    UBase_t uxValue;

    enPinReg = enPinArg;
    enModuleReg = enModuleArg;
    enErrorReg = PORT_EXT__enGetResistorTypeByNumber(enModuleReg, enPinReg, &enResTypeReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enPinReg = enPinArg;
        enModuleReg = enModuleArg;
        enErrorReg = PORT_EXT__enGetResistorStateByNumber(enModuleReg, enPinReg, &enResStateReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uxValue = (UBase_t) enResStateReg & 1U;
        uxValue <<= 4UL;
        uxValue |= (UBase_t) enResTypeReg & 1U;
    }

    return (enErrorReg);
}

