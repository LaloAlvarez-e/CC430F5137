/**
 *
 * @file PORT_InterruptEdge.c
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
#include <xDriver_MCU/PORT/Driver/xHeader/PORT_InterruptEdge.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/PORT/Driver/Intrinsics/Primitives/PORT_Primitives.h>
#include <xDriver_MCU/PORT/Peripheral/PORT_Peripheral.h>

PORT_nERROR PORT__enSetInterruptEdge(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nEDGE enInterruptEdgeArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;
    uint8_t u8Value;

    enErrorReg = PORT_enERROR_RANGE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(PORT_enEDGE_RISING != enInterruptEdgeArg)
        {
            u8Value = (uint8_t) enPinMaskArg;
        }
        else
        {
            u8Value = 0U;
        }

        stRegister.u8Shift = (uint8_t) PORT_IES_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        stRegister.u8Value = u8Value;
        enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enSetInterruptEdgeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE enInterruptEdgeArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_IES_PIN0_MASK;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        stRegister.u8Value = (uint8_t) enInterruptEdgeArg;
        enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enSetInterruptEdgeByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_IES_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        stRegister.u8Value = u8PinValueArg;
        enErrorReg = PORT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetInterruptEdge(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nEDGE enInterruptEdgeArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;
    UBase_t uxValue;

    enErrorReg = PORT_enERROR_RANGE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(PORT_enEDGE_RISING != enInterruptEdgeArg)
        {
            uxValue = (UBase_t) enPinMaskArg;
        }
        else
        {
            uxValue = 0U;
        }

        stRegister.uxShift = PORT_IES_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        stRegister.uxValue = uxValue;
        enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetInterruptEdgeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE enInterruptEdgeArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_IES_PIN0_MASK;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        stRegister.uxValue = (UBase_t) enInterruptEdgeArg;
        enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enSetInterruptEdgeByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_IES_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        stRegister.uxValue = uxPinValueArg;
        enErrorReg = PORT_EXT__enWriteRegister(enModuleArg, &stRegister);
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetInterruptEdge(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8InterruptEdgeMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0U == (uintptr_t) pu8InterruptEdgeMaskArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) PORT_IES_R_PIN0_BIT;
        stRegister.u8Mask = (uint8_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *pu8InterruptEdgeMaskArg = stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT__enGetInterruptEdgeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE* penInterruptEdgeMaskArg)
{
    PORT_Register8Bits_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if((PORT_enMODULE_1 == enModuleArg) || (PORT_enMODULE_2 == enModuleArg))
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0U == (uintptr_t) penInterruptEdgeMaskArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) enPinArg;
        stRegister.u8Mask = (uint8_t) PORT_IES_PIN0_MASK;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        enErrorReg = PORT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penInterruptEdgeMaskArg = (PORT_nEDGE) stRegister.u8Value;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetInterruptEdge(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxInterruptEdgeMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0U == (uintptr_t) puxInterruptEdgeMaskArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = PORT_IES_R_PIN0_BIT;
        stRegister.uxMask = (UBase_t) enPinMaskArg;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *puxInterruptEdgeMaskArg = stRegister.uxValue;
    }

    return (enErrorReg);
}

PORT_nERROR PORT_EXT__enGetInterruptEdgeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE* penInterruptEdgeMaskArg)
{
    PORT_Register_t stRegister;
    PORT_nERROR enErrorReg;

    enErrorReg = PORT_enERROR_RANGE;
    if(PORT_enMODULE_EXT_A == enModuleArg)
    {
        enErrorReg = PORT_enERROR_OK;
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        if(0U == (uintptr_t) penInterruptEdgeMaskArg)
        {
            enErrorReg = PORT_enERROR_POINTER;
        }
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) enPinArg;
        stRegister.uxMask = PORT_IES_PIN0_MASK;
        stRegister.uptrAddress = PORT_IES_OFFSET;
        enErrorReg = PORT_EXT__enReadRegister(enModuleArg, &stRegister);
    }
    if(PORT_enERROR_OK == enErrorReg)
    {
        *penInterruptEdgeMaskArg = (PORT_nEDGE) stRegister.uxValue;
    }

    return (enErrorReg);
}

