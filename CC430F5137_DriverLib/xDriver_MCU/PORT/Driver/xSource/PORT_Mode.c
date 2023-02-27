/**
 *
 * @file PORT_Mode.c
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
 * @verbatim 5 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Mode.h>
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Output.h>
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Direction.h>
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Drive.h>
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Resistor.h>
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_Selection.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enSetMode(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nMODE enModeArg)
{
    PORT_nERROR enErrorReg;
    uint8_t u8ResDriveReg;
    uint8_t u8OutputReg;
    uint8_t u8SelectionReg;
    uint8_t u8DirectionReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enModeArg;
    uxValue >>= 12U;
    uxValue &= 0xFU;
    u8SelectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 8U;
    uxValue &= 0xFU;
    u8DirectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 4U;
    uxValue &= 0xFU;
    u8ResDriveReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 0U;
    uxValue &= 0xFU;
    u8OutputReg = (uint8_t) uxValue;

    enErrorReg = PORT__enSetSelection(enModuleArg, enPinMaskArg, (PORT_nSEL) u8SelectionReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enSetOutput(enModuleArg, enPinMaskArg, (PORT_nLEVEL) u8OutputReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enSetDirection(enModuleArg, enPinMaskArg, (PORT_nDIR) u8DirectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if((uint8_t) PORT_enDIR_INPUT == u8DirectionReg)
        {
            enErrorReg = PORT__enSetResistorState(enModuleArg, enPinMaskArg, (PORT_nSTATE) u8ResDriveReg);
        }
        else
        {
            enErrorReg = PORT__enSetDrive(enModuleArg, enPinMaskArg, (PORT_nDRIVE) u8ResDriveReg);
        }
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enSetModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nMODE enModeArg)
{
    PORT_nERROR enErrorReg;
    uint8_t u8ResDriveReg;
    uint8_t u8OutputReg;
    uint8_t u8SelectionReg;
    uint8_t u8DirectionReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enModeArg;
    uxValue >>= 12U;
    uxValue &= 0xFU;
    u8SelectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 8U;
    uxValue &= 0xFU;
    u8DirectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 4U;
    uxValue &= 0xFU;
    u8ResDriveReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 0U;
    uxValue &= 0xFU;
    u8OutputReg = (uint8_t) uxValue;

    enErrorReg = PORT__enSetSelectionByNumber(enModuleArg, enPinArg, (PORT_nSEL) u8SelectionReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enSetOutputByNumber(enModuleArg, enPinArg, (PORT_nLEVEL) u8OutputReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enSetDirectionByNumber(enModuleArg, enPinArg, (PORT_nDIR) u8DirectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if((uint8_t) PORT_enDIR_INPUT == u8DirectionReg)
        {
            enErrorReg = PORT__enSetResistorStateByNumber(enModuleArg, enPinArg, (PORT_nSTATE) u8ResDriveReg);
        }
        else
        {
            enErrorReg = PORT__enSetDriveByNumber(enModuleArg, enPinArg, (PORT_nDRIVE) u8ResDriveReg);
        }
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetMode(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nMODE enModeArg)
{
    PORT_nERROR enErrorReg;
    uint8_t u8ResDriveReg;
    uint8_t u8OutputReg;
    uint8_t u8SelectionReg;
    uint8_t u8DirectionReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enModeArg;
    uxValue >>= 12U;
    uxValue &= 0xFU;
    u8SelectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 8U;
    uxValue &= 0xFU;
    u8DirectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 4U;
    uxValue &= 0xFU;
    u8ResDriveReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 0U;
    uxValue &= 0xFU;
    u8OutputReg = (uint8_t) uxValue;

    enErrorReg = PORT_EXT__enSetSelection(enModuleArg, enPinMaskArg, (PORT_nSEL) u8SelectionReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enSetOutput(enModuleArg, enPinMaskArg, (PORT_nLEVEL) u8OutputReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enSetDirection(enModuleArg, enPinMaskArg, (PORT_nDIR) u8DirectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if((uint8_t) PORT_enDIR_INPUT == u8DirectionReg)
        {
            enErrorReg = PORT_EXT__enSetResistorState(enModuleArg, enPinMaskArg, (PORT_nSTATE) u8ResDriveReg);
        }
        else
        {
            enErrorReg = PORT_EXT__enSetDrive(enModuleArg, enPinMaskArg, (PORT_nDRIVE) u8ResDriveReg);
        }
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nMODE enModeArg)
{
    PORT_nERROR enErrorReg;
    uint8_t u8ResDriveReg;
    uint8_t u8OutputReg;
    uint8_t u8SelectionReg;
    uint8_t u8DirectionReg;
    UBase_t uxValue;

    uxValue = (UBase_t) enModeArg;
    uxValue >>= 12U;
    uxValue &= 0xFU;
    u8SelectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 8U;
    uxValue &= 0xFU;
    u8DirectionReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 4U;
    uxValue &= 0xFU;
    u8ResDriveReg = (uint8_t) uxValue;
    uxValue = (UBase_t) enModeArg;
    uxValue >>= 0U;
    uxValue &= 0xFU;
    u8OutputReg = (uint8_t) uxValue;

    enErrorReg = PORT_EXT__enSetSelectionByNumber(enModuleArg, enPinArg, (PORT_nSEL) u8SelectionReg);
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enSetOutputByNumber(enModuleArg, enPinArg, (PORT_nLEVEL) u8OutputReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enSetDirectionByNumber(enModuleArg, enPinArg, (PORT_nDIR) u8DirectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if((uint8_t) PORT_enDIR_INPUT == u8DirectionReg)
        {
            enErrorReg = PORT_EXT__enSetResistorStateByNumber(enModuleArg, enPinArg, (PORT_nSTATE) u8ResDriveReg);
        }
        else
        {
            enErrorReg = PORT_EXT__enSetDriveByNumber(enModuleArg, enPinArg, (PORT_nDRIVE) u8ResDriveReg);
        }
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enGetModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nMODE* penModeMaskArg)
{
    PORT_nERROR enErrorReg;
    PORT_nDRIVE enDriveReg;
    PORT_nSTATE enResistorReg;
    PORT_nLEVEL enOutputReg;
    PORT_nSEL enSelectionReg;
    PORT_nDIR enDirectionReg;
    UBase_t uxValueTemp;
    UBase_t uxValue;

    enDriveReg = PORT_enDRIVE_REDUCED;
    enResistorReg = PORT_enSTATE_DIS;
    enOutputReg = PORT_enLEVEL_LOW;
    enSelectionReg = PORT_enSEL_IO;
    enDirectionReg = PORT_enDIR_INPUT;

    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) penModeMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enGetSelectionByNumber(enModuleArg, enPinArg, (PORT_nSEL*) &enSelectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enGetOutputByNumber(enModuleArg, enPinArg, (PORT_nLEVEL*) &enOutputReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enGetDirectionByNumber(enModuleArg, enPinArg, (PORT_nDIR*) &enDirectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(PORT_enDIR_INPUT == enDirectionReg)
        {
            enErrorReg = PORT__enGetResistorStateByNumber(enModuleArg, enPinArg, (PORT_nSTATE*) &enResistorReg);
        }
        else
        {
            enErrorReg = PORT__enGetDriveByNumber(enModuleArg, enPinArg, (PORT_nDRIVE*) &enDriveReg);
        }
    }

    if(PORT_enERROR_OK == enErrorReg)
    {
        uxValueTemp = (UBase_t) enSelectionReg;
        uxValueTemp &= 0xFU;
        uxValueTemp <<= 12U;
        uxValue = uxValueTemp;

        uxValueTemp = (UBase_t) enDirectionReg;
        uxValueTemp &= 0xFU;
        uxValueTemp <<= 8U;
        uxValue |= uxValueTemp;

        if(PORT_enDIR_INPUT == enDirectionReg)
        {
            uxValueTemp = (UBase_t) enResistorReg;
        }
        else
        {
            uxValueTemp = (UBase_t) enDriveReg;
        }
        uxValueTemp &= 0xFU;
        uxValueTemp <<= 4U;
        uxValue |= uxValueTemp;

        uxValue = (UBase_t) enOutputReg;
        uxValue &= 0xFU;
        uxValue <<= 0U;
        uxValue |= uxValueTemp;

        *penModeMaskArg = (PORT_nMODE) uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nMODE* penModeMaskArg)
{
    PORT_nERROR enErrorReg;
    PORT_nDRIVE enDriveReg;
    PORT_nSTATE enResistorReg;
    PORT_nLEVEL enOutputReg;
    PORT_nSEL enSelectionReg;
    PORT_nDIR enDirectionReg;
    UBase_t uxValueTemp;
    UBase_t uxValue;

    enDriveReg = PORT_enDRIVE_REDUCED;
    enResistorReg = PORT_enSTATE_DIS;
    enOutputReg = PORT_enLEVEL_LOW;
    enSelectionReg = PORT_enSEL_IO;
    enDirectionReg = PORT_enDIR_INPUT;

    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) penModeMaskArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetSelectionByNumber(enModuleArg, enPinArg, (PORT_nSEL*) &enSelectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetOutputByNumber(enModuleArg, enPinArg, (PORT_nLEVEL*) &enOutputReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetDirectionByNumber(enModuleArg, enPinArg, (PORT_nDIR*) &enDirectionReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(PORT_enDIR_INPUT == enDirectionReg)
        {
            enErrorReg = PORT_EXT__enGetResistorStateByNumber(enModuleArg, enPinArg, (PORT_nSTATE*) &enResistorReg);
        }
        else
        {
            enErrorReg = PORT_EXT__enGetDriveByNumber(enModuleArg, enPinArg, (PORT_nDRIVE*) &enDriveReg);
        }
    }

    if(PORT_enERROR_OK == enErrorReg)
    {
        uxValueTemp = (UBase_t) enSelectionReg;
        uxValueTemp &= 0xFU;
        uxValueTemp <<= 12U;
        uxValue = uxValueTemp;

        uxValueTemp = (UBase_t) enDirectionReg;
        uxValueTemp &= 0xFU;
        uxValueTemp <<= 8U;
        uxValue |= uxValueTemp;

        if(PORT_enDIR_INPUT == enDirectionReg)
        {
            uxValueTemp = (UBase_t) enResistorReg;
        }
        else
        {
            uxValueTemp = (UBase_t) enDriveReg;
        }
        uxValueTemp &= 0xFU;
        uxValueTemp <<= 4U;
        uxValue |= uxValueTemp;

        uxValue = (UBase_t) enOutputReg;
        uxValue &= 0xFU;
        uxValue <<= 0U;
        uxValue |= uxValueTemp;

        *penModeMaskArg = (PORT_nMODE) uxValue;
    }

    return (enErrorReg);
}




