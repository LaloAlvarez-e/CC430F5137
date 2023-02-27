/**
 *
 * @file PORT_Selection.c
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
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Selection.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enSetSelection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSEL enSelectionArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    if(PORT_enSEL_IO != enSelectionArg)
    {
        u8Value = (uint8_t) enPinMaskArg;
    }
    else
    {
        u8Value = 0U;
    }

    stRegister.u8Shift = (uint8_t) PORT_SEL_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_SEL_OFFSET;
    stRegister.u8Value = u8Value;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetSelectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSEL enSelectionArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) enPinArg;
    stRegister.u8Mask = (uint8_t) PORT_SEL_PIN0_MASK;
    stRegister.uptrAddress = PORT_SEL_OFFSET;
    stRegister.u8Value = (uint8_t) enSelectionArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetSelectionByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) PORT_SEL_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_SEL_OFFSET;
    stRegister.u8Value = u8PinValueArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetSelection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSEL enSelectionArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    if(PORT_enSEL_IO != enSelectionArg)
    {
        uxValue = (UBase_t) enPinMaskArg;
    }
    else
    {
        uxValue = 0U;
    }

    stRegister.uxShift = PORT_SEL_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_SEL_OFFSET;
    stRegister.uxValue = uxValue;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetSelectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSEL enSelectionArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) enPinArg;
    stRegister.uxMask = PORT_SEL_PIN0_MASK;
    stRegister.uptrAddress = PORT_SEL_OFFSET;
    stRegister.uxValue = (UBase_t) enSelectionArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetSelectionByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = PORT_SEL_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_SEL_OFFSET;
    stRegister.uxValue = uxPinValueArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enGetSelection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8SelectionMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) pu8SelectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_SEL_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_SEL_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *pu8SelectionMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetSelectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSEL* penSelectionMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penSelectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_SEL_PIN0_MASK;
        stRegister.uptrAddress = PORT_SEL_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penSelectionMaskArg = (PORT_nSEL) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetSelection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxSelectionMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) puxSelectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_SEL_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_SEL_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxSelectionMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetSelectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSEL* penSelectionMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penSelectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_SEL_PIN0_MASK;
        stRegister.uptrAddress = PORT_SEL_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penSelectionMaskArg = (PORT_nSEL) stRegister.uxValue;
    }

    return (enErrorReg);
}





