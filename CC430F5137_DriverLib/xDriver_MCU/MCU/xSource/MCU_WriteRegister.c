/**
 *
 * @file MCU_WriteRegister.c
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/MCU/xHeader/MCU_WriteRegister.h"


MCU_nERROR MCU__enWriteRegister_RAM(MCU_Register_t* const pstRegisterDataArg)
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
        if(0UL != ((uintptr_t) pstRegisterDataArg & 1UL))
        {
            enErrorReg = MCU_enERROR_UNALIGNED;
        }
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
        *puxRegisterAddress = (UBase_t) uxReg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegisterDirect_RAM(MCU_Register_t* const pstRegisterDataArg)
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
        if(0UL != ((uintptr_t) pstRegisterDataArg & 1UL))
        {
            enErrorReg = MCU_enERROR_UNALIGNED;
        }
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
        uxReg = *puxRegisterAddress;
        uxRegisterValue &= uxRegisterMask;
        uxRegisterValue <<= uxRegisterShift;
        *puxRegisterAddress = (UBase_t) uxReg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}



MCU_nERROR MCU__enWriteRegister8Bits_RAM(MCU_Register8Bits_t* const pstRegisterDataArg)
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
        *pu8RegisterAddress = (uint8_t) u8Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegisterDirect8Bits_RAM(MCU_Register8Bits_t* const pstRegisterDataArg)
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
        u8Reg = *pu8RegisterAddress;
        u8RegisterValue &= u8RegisterMask;
        u8RegisterValue <<= u8RegisterShift;
        *pu8RegisterAddress = (uint8_t) u8Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegister32Bits_RAM(MCU_Register32Bits_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    uint32_t u32RegisterShift;
    uint16_t u16StatusRegister;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u32Reg = u32RegisterValue;
        u16StatusRegister = _get_interrupt_state();
        _DINT();
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_8 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u32RegisterShift)
            {
                u32RegisterValue <<= u32RegisterShift;
                u32RegisterMask <<= u32RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        *pu32RegisterAddress = (uint32_t) u32Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegisterDirect32Bits_RAM(MCU_Register32Bits_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    uint32_t u32RegisterShift;
    uint16_t u16StatusRegister;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u32Reg = u32RegisterValue;
        u16StatusRegister = _get_interrupt_state();
        _DINT();
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32Reg = *pu32RegisterAddress;
        u32RegisterValue &= u32RegisterMask;
        u32RegisterValue <<= u32RegisterShift;
        *pu32RegisterAddress = (uint32_t) u32Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}

MCU_nERROR MCU__enWriteRegister(MCU_Register_t* const pstRegisterDataArg)
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
        if(0UL != ((uintptr_t) pstRegisterDataArg & 1UL))
        {
            enErrorReg = MCU_enERROR_UNALIGNED;
        }
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
        *puxRegisterAddress = (UBase_t) uxReg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegisterDirect(MCU_Register_t* const pstRegisterDataArg)
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
        if(0UL != ((uintptr_t) pstRegisterDataArg & 1UL))
        {
            enErrorReg = MCU_enERROR_UNALIGNED;
        }
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
        uxReg = *puxRegisterAddress;
        uxRegisterValue &= uxRegisterMask;
        uxRegisterValue <<= uxRegisterShift;
        *puxRegisterAddress = (UBase_t) uxReg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}

MCU_nERROR MCU__enWriteRegister8Bits(MCU_Register8Bits_t* const pstRegisterDataArg)
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
        *pu8RegisterAddress = (uint8_t) u8Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegisterDirect8Bits(MCU_Register8Bits_t* const pstRegisterDataArg)
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
        u8Reg = *pu8RegisterAddress;
        u8RegisterValue &= u8RegisterMask;
        u8RegisterValue <<= u8RegisterShift;
        *pu8RegisterAddress = (uint8_t) u8Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegister32Bits(MCU_Register32Bits_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    uint32_t u32RegisterShift;
    uint16_t u16StatusRegister;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u32Reg = u32RegisterValue;
        u16StatusRegister = _get_interrupt_state();
        _DINT();
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        if(MCU_MASK_8 != u32RegisterMask)
        {
            u32Reg = *pu32RegisterAddress;
            u32RegisterValue &= u32RegisterMask;
            if(0U != u32RegisterShift)
            {
                u32RegisterValue <<= u32RegisterShift;
                u32RegisterMask <<= u32RegisterShift;
            }
            u32Reg &= ~u32RegisterMask;
            u32Reg |= u32RegisterValue;
        }
        *pu32RegisterAddress = (uint32_t) u32Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}


MCU_nERROR MCU__enWriteRegisterDirect32Bits(MCU_Register32Bits_t* const pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32Reg;
    uint32_t u32RegisterShift;
    uint16_t u16StatusRegister;

    enErrorReg = MCU_enERROR_OK;
    if(0U == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u32RegisterValue = pstRegisterDataArg->u32Value;
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        u32Reg = u32RegisterValue;
        u16StatusRegister = _get_interrupt_state();
        _DINT();
        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32Reg = *pu32RegisterAddress;
        u32RegisterValue &= u32RegisterMask;
        u32RegisterValue <<= u32RegisterShift;
        *pu32RegisterAddress = (uint32_t) u32Reg;
        _set_interrupt_state(u16StatusRegister);
    }
    return (enErrorReg);
}
