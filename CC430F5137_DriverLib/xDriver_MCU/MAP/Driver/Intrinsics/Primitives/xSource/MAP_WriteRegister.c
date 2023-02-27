/**
 *
 * @file MAP_WriteRegister.c
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
 * @verbatim 12 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/MAP/Driver/Intrinsics/Primitives/xHeader/MAP_WriteRegister.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/MAP/Peripheral/MAP_Peripheral.h>

static MCU_nERROR MAP__enWriteRegister8Bits(MCU_Register8Bits_t* const pstRegisterDataArg);
static MCU_nERROR MAP__enWriteRegister16Bits(MCU_Register_t* const pstRegisterDataArg);

MAP_nERROR MAP__enWriteRegister(MAP_Register_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    MAP_nERROR enErrorReg;
    enErrorReg = MAP_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MAP_enERROR_POINTER;
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = MAP__uptrBlockBaseAddress();
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (MAP_nERROR) MAP__enWriteRegister16Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

MAP_nERROR MAP_PORT__enWriteRegister(MAP_nMODULE enModuleArg, MAP_Register8Bits_t* pstRegisterDataArg)
{
    uintptr_t uptrModuleBase;
    MAP_nERROR enErrorReg;
    enErrorReg = MAP_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MAP_enERROR_POINTER;
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        enErrorReg = (MAP_nERROR) MCU__enCheckParams((UBase_t) enModuleArg, (UBase_t) MAP_enMODULE_MAX);
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        uptrModuleBase = MAP_PORT__uptrBlockBaseAddress(enModuleArg);
        pstRegisterDataArg->uptrAddress += uptrModuleBase;
        enErrorReg = (MAP_nERROR) MAP__enWriteRegister8Bits(pstRegisterDataArg);
    }
    return (enErrorReg);
}

static MCU_nERROR MAP__enWriteRegister16Bits(MCU_Register_t* const pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxReg;
    UBase_t uxRegisterShift;
    uint16_t u16StatusRegister;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        uxRegisterValue = pstRegisterDataArg->uxValue;
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        uxReg = uxRegisterValue;
        u16StatusRegister = _get_interrupt_state();
        _DINT();
        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxReg = *puxRegisterAddress;
            uxRegisterValue &= uxRegisterMask;
            if(0U != uxRegisterShift)
            {
                uxRegisterValue <<= uxRegisterShift;
                uxRegisterMask <<= uxRegisterShift;
            }
            uxReg &= ~uxRegisterMask;
            uxReg |= uxRegisterValue;
        }
        MAP_KEYID_R = MAP_KEYID_R_KEY_WRITE;
        *puxRegisterAddress = (uint8_t) uxReg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


static MCU_nERROR MAP__enWriteRegister8Bits(MCU_Register8Bits_t* const pstRegisterDataArg)
{
    volatile uint8_t* pu8RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint8_t u8RegisterValue;
    uint8_t u8RegisterMask;
    uint8_t u8Reg;
    uint8_t u8RegisterShift;
    uint16_t u16StatusRegister;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u8RegisterValue = pstRegisterDataArg->u8Value;
        u8RegisterMask = pstRegisterDataArg->u8Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u8Reg = u8RegisterValue;
        u16StatusRegister = _get_interrupt_state();
        _DINT();
        pu8RegisterAddress = (volatile uint8_t*) uptrRegisterAddress;
        if(MCU_MASK_8 != u8RegisterMask)
        {
            u8Reg = *pu8RegisterAddress;
            u8RegisterValue &= u8RegisterMask;
            if(0U != u8RegisterShift)
            {
                u8RegisterValue <<= u8RegisterShift;
                u8RegisterMask <<= u8RegisterShift;
            }
            u8Reg &= ~u8RegisterMask;
            u8Reg |= u8RegisterValue;
        }
        MAP_KEYID_R = MAP_KEYID_R_KEY_WRITE;
        *pu8RegisterAddress = (uint8_t) u8Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}




