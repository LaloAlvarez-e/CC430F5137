/**
 *
 * @file PORT_InterruptSource_Enable.c
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/PORT/Driver/Intrinsics/Interrupt/xHeader/PORT_InterruptSource_Enable.h"

#include "xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h"
#include "xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>


static PORT_nERROR PORT__enGetInterruptSourceShift(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, UBase_t* puxShiftArg);
static PORT_nERROR PORT_EXT__enGetInterruptSourceShift(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, UBase_t* puxShiftArg);


static PORT_nERROR PORT__enGetInterruptSourceShift(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, UBase_t* puxShiftArg)
{
    const UBase_t PORT_uxInterruptBit[(UBase_t) PORT_enPIN_8] =
    {
     PORT_IE_R_PIN0_BIT, PORT_IE_R_PIN1_BIT, PORT_IE_R_PIN2_BIT, PORT_IE_R_PIN3_BIT,
     PORT_IE_R_PIN4_BIT, PORT_IE_R_PIN5_BIT, PORT_IE_R_PIN6_BIT, PORT_IE_R_PIN7_BIT,
    };

    PORT_nERROR enErrorReg;
    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) puxShiftArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PORT_enMODULE_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) PORT_enPIN_8);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxShiftArg = PORT_uxInterruptBit[(UBase_t) enPinArg];
    }
    return (enErrorReg);
}

static PORT_nERROR PORT_EXT__enGetInterruptSourceShift(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, UBase_t* puxShiftArg)
{
    const UBase_t PORT_uxInterruptBit[(UBase_t) PORT_enPIN_MAX] =
    {
     PORT_IE_R_PIN0_BIT, PORT_IE_R_PIN1_BIT, PORT_IE_R_PIN2_BIT, PORT_IE_R_PIN3_BIT,
     PORT_IE_R_PIN4_BIT, PORT_IE_R_PIN5_BIT, PORT_IE_R_PIN6_BIT, PORT_IE_R_PIN7_BIT,
     PORT_IE_R_PIN8_BIT, PORT_IE_R_PIN9_BIT, PORT_IE_R_PIN10_BIT, PORT_IE_R_PIN11_BIT,
     PORT_IE_R_PIN12_BIT, PORT_IE_R_PIN13_BIT, PORT_IE_R_PIN14_BIT, PORT_IE_R_PIN15_BIT,
    };

    PORT_nERROR enErrorReg;
    enErrorReg = PORT_enERROR_OK;
    if(0UL == (uintptr_t) puxShiftArg)
    {
        enErrorReg = PORT_enERROR_POINTER;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) PORT_enMODULE_EXT_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) PORT_enPIN_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxShiftArg = PORT_uxInterruptBit[(UBase_t) enPinArg];
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enSetInterruptSourceStateByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enStateArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enPinMaskArg, (UBase_t) PORT_enPINMASK_8);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(PORT_enSTATE_DIS != enStateArg)
        {
            u8Value = (uint8_t) enPinMaskArg;
        }
        else
        {
            u8Value = 0U;
        }

        stRegister.u8Shift = 0U;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IE_OFFSET;
        stRegister.u8Value = u8Value;
        enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PORT_nERROR PORT__enEnableInterruptSourceByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enSetInterruptSourceStateByMask(enModuleArg, enPinMaskArg, PORT_enSTATE_ENA);
    return (enErrorReg);
}

PORT_nERROR PORT__enDisableInterruptSourceByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enSetInterruptSourceStateByMask(enModuleArg, enPinMaskArg, PORT_enSTATE_DIS);
    return (enErrorReg);
}


PORT_nERROR PORT__enSetInterruptSourceStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg)
{
    PORT_nERROR enErrorReg;
    UBase_t uxShiftReg;
    PORT_Register8Bits_t stRegister;

    uxShiftReg = 0UL;
    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) PORT_enPIN_8);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enGetInterruptSourceShift(enModuleArg, enPinArg, &uxShiftReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uptrAddress = PORT_IE_OFFSET;
        stRegister.u8Value = (uint8_t) enStateArg;
        stRegister.u8Mask = PORT_IE_PIN0_MASK;
        stRegister.u8Shift = (uint8_t) uxShiftReg;
        enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enEnableInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enSetInterruptSourceStateByNumber(enModuleArg, enPinArg, PORT_enSTATE_ENA);
    return (enErrorReg);
}

PORT_nERROR PORT__enDisableInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enSetInterruptSourceStateByNumber(enModuleArg, enPinArg, PORT_enSTATE_DIS);
    return (enErrorReg);
}

PORT_nERROR PORT__enSetInterruptSourceState(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enSetInterruptSourceStateByNumber(enModuleArg, enPinArg, enStateArg);
    return (enErrorReg);
}


PORT_nERROR PORT__enEnableInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enEnableInterruptSourceByNumber(enModuleArg, enPinArg);
    return (enErrorReg);
}

PORT_nERROR PORT__enDisableInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enDisableInterruptSourceByNumber(enModuleArg, enPinArg);
    return (enErrorReg);
}


PORT_nERROR PORT__enGetInterruptSourceStateByMask(PORT_nMODULE enModuleArg, UBase_t uxInterruptMaskArg, UBase_t* puxInterruptMaskArg)
{
    PORT_nERROR enErrorReg;
    PORT_Register8Bits_t stRegister;

    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxInterruptMaskArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) uxInterruptMaskArg, (UBase_t) PORT_enPIN_8);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uptrAddress = PORT_IE_OFFSET;
        stRegister.u8Mask = (uint8_t) uxInterruptMaskArg;
        stRegister.u8Shift = (uint8_t) PORT_IE_R_PIN0_BIT;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxInterruptMaskArg = (UBase_t) stRegister.u8Value;
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enGetInterruptSourceStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg)
{
    PORT_Register8Bits_t stRegister;
    UBase_t uxShiftReg;
    PORT_nERROR enErrorReg;

    uxShiftReg = 0U;
    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) penStateArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) PORT_enPIN_8);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enGetInterruptSourceShift(enModuleArg, enPinArg, &uxShiftReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) uxShiftReg;
        stRegister.u8Mask = (uint8_t) PORT_IE_PIN0_MASK;
        stRegister.uptrAddress = PORT_IE_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penStateArg = (PORT_nSTATE) stRegister.u8Value;
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enGetInterruptSourceState(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enGetInterruptSourceStateByNumber(enModuleArg, enPinArg, penStateArg);
    return (enErrorReg);
}





PORT_nERROR PORT_EXT__enSetInterruptSourceStateByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enStateArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(PORT_enSTATE_DIS != enStateArg)
        {
            uxValue = (uint8_t) enPinMaskArg;
        }
        else
        {
            uxValue = 0U;
        }

        stRegister.uxShift = 0U;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IE_OFFSET;
        stRegister.uxValue = uxValue;
        enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}


PORT_nERROR PORT_EXT__enEnableInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enSetInterruptSourceStateByMask(enModuleArg, enPinMaskArg, PORT_enSTATE_ENA);
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enDisableInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enSetInterruptSourceStateByMask(enModuleArg, enPinMaskArg, PORT_enSTATE_DIS);
    return (enErrorReg);
}


PORT_nERROR PORT_EXT__enSetInterruptSourceStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg)
{
    PORT_nERROR enErrorReg;
    UBase_t uxShiftReg;
    PORT_Register_t stRegister;

    uxShiftReg = 0UL;
    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetInterruptSourceShift(enModuleArg, enPinArg, &uxShiftReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uptrAddress = PORT_IE_OFFSET;
        stRegister.uxValue = (UBase_t) enStateArg;
        stRegister.uxMask = PORT_IE_PIN0_MASK;
        stRegister.uxShift = uxShiftReg;
        enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enEnableInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enSetInterruptSourceStateByNumber(enModuleArg, enPinArg, PORT_enSTATE_ENA);
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enDisableInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enSetInterruptSourceStateByNumber(enModuleArg, enPinArg, PORT_enSTATE_DIS);
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetInterruptSourceState(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enSetInterruptSourceStateByNumber(enModuleArg, enPinArg, enStateArg);
    return (enErrorReg);
}


PORT_nERROR PORT_EXT__enEnableInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enEnableInterruptSourceByNumber(enModuleArg, enPinArg);
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enDisableInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enDisableInterruptSourceByNumber(enModuleArg, enPinArg);
    return (enErrorReg);
}


PORT_nERROR PORT_EXT__enGetInterruptSourceStateByMask(PORT_nMODULE_EXT enModuleArg, UBase_t uxInterruptMaskArg, UBase_t* puxInterruptMaskArg)
{
    PORT_nERROR enErrorReg;
    PORT_Register_t stRegister;

    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxInterruptMaskArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uptrAddress = PORT_IE_OFFSET;
        stRegister.uxMask = uxInterruptMaskArg;
        stRegister.uxShift = PORT_IE_R_PIN0_BIT;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxInterruptMaskArg = (UBase_t) stRegister.uxValue;
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetInterruptSourceStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg)
{
    PORT_Register_t stRegister;
    UBase_t uxShiftReg;
    PORT_nERROR enErrorReg;

    uxShiftReg = 0U;
    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) penStateArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetInterruptSourceShift(enModuleArg, enPinArg, &uxShiftReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = PORT_IE_PIN0_MASK;
        stRegister.uptrAddress = PORT_IE_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penStateArg = (PORT_nSTATE) stRegister.uxValue;
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetInterruptSourceState(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enGetInterruptSourceStateByNumber(enModuleArg, enPinArg, penStateArg);
    return (enErrorReg);
}

