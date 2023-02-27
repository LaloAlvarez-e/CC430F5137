/**
 *
 * @file PORT_InterruptSource_Status.c
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
#include "xDriver_MCU/PORT/Driver/Intrinsics/Interrupt/xHeader/PORT_InterruptSource_Status.h"
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
     PORT_IFG_R_PIN0_BIT, PORT_IFG_R_PIN1_BIT, PORT_IFG_R_PIN2_BIT, PORT_IFG_R_PIN3_BIT,
     PORT_IFG_R_PIN4_BIT, PORT_IFG_R_PIN5_BIT, PORT_IFG_R_PIN6_BIT, PORT_IFG_R_PIN7_BIT,
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
     PORT_IFG_R_PIN0_BIT, PORT_IFG_R_PIN1_BIT, PORT_IFG_R_PIN2_BIT, PORT_IFG_R_PIN3_BIT,
     PORT_IFG_R_PIN4_BIT, PORT_IFG_R_PIN5_BIT, PORT_IFG_R_PIN6_BIT, PORT_IFG_R_PIN7_BIT,
     PORT_IFG_R_PIN8_BIT, PORT_IFG_R_PIN9_BIT, PORT_IFG_R_PIN10_BIT, PORT_IFG_R_PIN11_BIT,
     PORT_IFG_R_PIN12_BIT, PORT_IFG_R_PIN13_BIT, PORT_IFG_R_PIN14_BIT, PORT_IFG_R_PIN15_BIT,
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


PORT_nERROR PORT__enStatusInterruptSourceByMask(PORT_nMODULE enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxInterruptStatusArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) uxPinMaskArg, (UBase_t) PORT_enPINMASK_8);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = 0U;
        stRegister.u8Mask = (uint8_t) uxPinMaskArg;
        stRegister.uptrAddress = PORT_IFG_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxInterruptStatusArg = (UBase_t) stRegister.u8Value;
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enStatusInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_Register8Bits_t stRegister;
    UBase_t uxShiftReg;
    PORT_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) penStatusArg)
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
        stRegister.u8Mask = (uint8_t) PORT_IFG_PIN0_MASK;
        stRegister.uptrAddress = PORT_IFG_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PORT_nSTATUS) stRegister.u8Value;
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enStatusInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enStatusInterruptSourceByNumber(enModuleArg, enPinArg, penStatusArg);
    return (enErrorReg);
}

PORT_nERROR PORT__enStatusMaskedInterruptSourceByMask(PORT_nMODULE enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg)
{
    PORT_nERROR enErrorReg;
    UBase_t uxInterruptMaskState;
    UBase_t uxInterruptMaskStatus;

    uxInterruptMaskState = 0U;
    uxInterruptMaskStatus = 0U;
    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxInterruptStatusArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enGetInterruptSourceStateByMask(enModuleArg, uxPinMaskArg, &uxInterruptMaskState);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enStatusInterruptSourceByMask(enModuleArg, uxPinMaskArg, &uxInterruptMaskStatus);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uxInterruptMaskStatus &= uxInterruptMaskState;
        *puxInterruptStatusArg = uxInterruptMaskStatus;
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enStatusMaskedInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_nERROR enErrorReg;
    PORT_nSTATE enStateReg;
    PORT_nSTATUS enStatusReg;

    enStateReg = PORT_enSTATE_DIS;
    enStatusReg = PORT_enSTATUS_INACTIVE;
    enErrorReg = PORT_enERROR_VALUE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) penStatusArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enGetInterruptSourceStateByNumber(enModuleArg, enPinArg, &enStateReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT__enStatusInterruptSourceByNumber(enModuleArg, enPinArg, &enStatusReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if((PORT_enSTATE_ENA == enStateReg) && (PORT_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = PORT_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = PORT_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}

PORT_nERROR PORT__enStatusMaskedInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT__enStatusMaskedInterruptSourceByNumber(enModuleArg, enPinArg, penStatusArg);
    return (enErrorReg);
}





PORT_nERROR PORT_EXT__enStatusInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxInterruptStatusArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = 0U;
        stRegister.uxMask = uxPinMaskArg;
        stRegister.uptrAddress = PORT_IFG_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxInterruptStatusArg = (UBase_t) stRegister.uxValue;
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enStatusInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_Register_t stRegister;
    UBase_t uxShiftReg;
    PORT_nERROR enErrorReg;

    uxShiftReg = 0UL;
    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) penStatusArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = (PORT_nERROR) MCU__enCheckParams((UBase_t) enPinArg, (UBase_t) PORT_enPIN_MAX);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetInterruptSourceShift(enModuleArg, enPinArg, &uxShiftReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = uxShiftReg;
        stRegister.uxMask = PORT_IFG_PIN0_MASK;
        stRegister.uptrAddress = PORT_IFG_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penStatusArg = (PORT_nSTATUS) stRegister.uxValue;
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enStatusInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enStatusInterruptSourceByNumber(enModuleArg, enPinArg, penStatusArg);
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enStatusMaskedInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg)
{
    PORT_nERROR enErrorReg;
    UBase_t uxInterruptMaskState;
    UBase_t uxInterruptMaskStatus;

    uxInterruptMaskState = 0U;
    uxInterruptMaskStatus = 0U;
    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) puxInterruptStatusArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetInterruptSourceStateByMask(enModuleArg, uxPinMaskArg, &uxInterruptMaskState);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enStatusInterruptSourceByMask(enModuleArg, uxPinMaskArg, &uxInterruptMaskStatus);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        uxInterruptMaskStatus &= uxInterruptMaskState;
        *puxInterruptStatusArg = uxInterruptMaskStatus;
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enStatusMaskedInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_nERROR enErrorReg;
    PORT_nSTATE enStateReg;
    PORT_nSTATUS enStatusReg;

    enStateReg = PORT_enSTATE_DIS;
    enStatusReg = PORT_enSTATUS_INACTIVE;
    enErrorReg = PORT_enERROR_VALUE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0UL == (uintptr_t) penStatusArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enGetInterruptSourceStateByNumber(enModuleArg, enPinArg, &enStateReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        enErrorReg = PORT_EXT__enStatusInterruptSourceByNumber(enModuleArg, enPinArg, &enStatusReg);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if((PORT_enSTATE_ENA == enStateReg) && (PORT_enSTATUS_ACTIVE == enStatusReg))
        {
            *penStatusArg = PORT_enSTATUS_ACTIVE;
        }
        else
        {
            *penStatusArg = PORT_enSTATUS_INACTIVE;
        }
    }
    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enStatusMaskedInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg)
{
    PORT_nERROR enErrorReg;
    enErrorReg = PORT_EXT__enStatusMaskedInterruptSourceByNumber(enModuleArg, enPinArg, penStatusArg);
    return (enErrorReg);
}
