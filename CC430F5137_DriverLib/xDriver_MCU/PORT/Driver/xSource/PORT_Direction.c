/**
 *
 * @file PORT_Direction.c
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
 * @verbatim 30 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Direction.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enSetDirection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDIR enDirectionArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    if(PORT_enDIR_INPUT != enDirectionArg)
    {
        u8Value = (uint8_t) enPinMaskArg;
    }
    else
    {
        u8Value = 0U;
    }

    stRegister.u8Shift = (uint8_t) PORT_DIR_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DIR_OFFSET;
    stRegister.u8Value = u8Value;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetDirectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDIR enDirectionArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) enPinArg;
    stRegister.u8Mask = (uint8_t) PORT_DIR_PIN0_MASK;
    stRegister.uptrAddress = PORT_DIR_OFFSET;
    stRegister.u8Value = (uint8_t) enDirectionArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetDirectionByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) PORT_DIR_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DIR_OFFSET;
    stRegister.u8Value = u8PinValueArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetDirection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDIR enDirectionArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    if(PORT_enDIR_INPUT != enDirectionArg)
    {
        uxValue = (UBase_t) enPinMaskArg;
    }
    else
    {
        uxValue = 0U;
    }

    stRegister.uxShift = PORT_DIR_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DIR_OFFSET;
    stRegister.uxValue = uxValue;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetDirectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDIR enDirectionArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) enPinArg;
    stRegister.uxMask = PORT_DIR_PIN0_MASK;
    stRegister.uptrAddress = PORT_DIR_OFFSET;
    stRegister.uxValue = (UBase_t) enDirectionArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetDirectionByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = PORT_DIR_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DIR_OFFSET;
    stRegister.uxValue = uxPinValueArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enGetDirection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8DirectionMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) pu8DirectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_DIR_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_DIR_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *pu8DirectionMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetDirectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDIR* penDirectionMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penDirectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_DIR_PIN0_MASK;
        stRegister.uptrAddress = PORT_DIR_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penDirectionMaskArg = (PORT_nDIR) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetDirection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxDirectionMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) puxDirectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_DIR_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_DIR_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxDirectionMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetDirectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDIR* penDirectionMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penDirectionMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_DIR_PIN0_MASK;
        stRegister.uptrAddress = PORT_DIR_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penDirectionMaskArg = (PORT_nDIR) stRegister.uxValue;
    }

    return (enErrorReg);
}

