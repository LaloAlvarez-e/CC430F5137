/**
 *
 * @file PORT_Drive.c
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
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Drive.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enSetDrive(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDRIVE enDriveArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    if(PORT_enDRIVE_REDUCED != enDriveArg)
    {
        u8Value = (uint8_t) enPinMaskArg;
    }
    else
    {
        u8Value = 0U;
    }

    stRegister.u8Shift = (uint8_t) PORT_DS_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DS_OFFSET;
    stRegister.u8Value = u8Value;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetDriveByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE enDriveArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) enPinArg;
    stRegister.u8Mask = (uint8_t) PORT_DS_PIN0_MASK;
    stRegister.uptrAddress = PORT_DS_OFFSET;
    stRegister.u8Value = (uint8_t) enDriveArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enSetDriveByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) PORT_DS_R_PIN0_BIT;
    stRegister.u8Mask = (uint8_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DS_OFFSET;
    stRegister.u8Value = u8PinValueArg;
    enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetDrive(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDRIVE enDriveArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    if(PORT_enDRIVE_REDUCED != enDriveArg)
    {
        uxValue = (UBase_t) enPinMaskArg;
    }
    else
    {
        uxValue = 0U;
    }

    stRegister.uxShift = PORT_DS_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DS_OFFSET;
    stRegister.uxValue = uxValue;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetDriveByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE enDriveArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) enPinArg;
    stRegister.uxMask = PORT_DS_PIN0_MASK;
    stRegister.uptrAddress = PORT_DS_OFFSET;
    stRegister.uxValue = (UBase_t) enDriveArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetDriveByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    stRegister.uxShift = PORT_DS_R_PIN0_BIT;
    stRegister.uxMask = (UBase_t) enPinMaskArg;
    stRegister.uptrAddress = PORT_DS_OFFSET;
    stRegister.uxValue = uxPinValueArg;
    enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}

PORT_nERROR PORT__enGetDrive(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8DriveMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) pu8DriveMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_DS_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_DS_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *pu8DriveMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetDriveByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE* penDriveMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penDriveMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_DS_PIN0_MASK;
        stRegister.uptrAddress = PORT_DS_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penDriveMaskArg = (PORT_nDRIVE) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetDrive(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxDriveMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) puxDriveMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_DS_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_DS_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxDriveMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetDriveByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE* penDriveMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_OK;
    if(0U == (uintptr_t) penDriveMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_DS_PIN0_MASK;
        stRegister.uptrAddress = PORT_DS_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penDriveMaskArg = (PORT_nDRIVE) stRegister.uxValue;
    }

    return (enErrorReg);
}

