/**
 *
 * @file MCU_ReadRegister.c
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
#include "xDriver_MCU/MCU/xHeader/MCU_ReadRegister.h"

MCU_nERROR MCU__enReadRegister(MCU_Register_t* pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxRegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
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
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue = *puxRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxRegisterValue >>= uxRegisterShift;
            uxRegisterValue &= uxRegisterMask;
        }
        pstRegisterDataArg->uxValue = (UBase_t) uxRegisterValue;
    }

    return (enErrorReg);
}


MCU_nERROR MCU__enReadRegister8Bits(MCU_Register8Bits_t* pstRegisterDataArg)
{
    volatile uint8_t* pu8RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint8_t u8RegisterValue;
    uint8_t u8RegisterMask;
    uint8_t u8RegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u8RegisterMask = pstRegisterDataArg->u8Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu8RegisterAddress = (volatile uint8_t*) uptrRegisterAddress;
        u8RegisterValue = *pu8RegisterAddress;
        if(MCU_MASK_8 != u8RegisterMask)
        {
            u8RegisterValue >>= u8RegisterShift;
            u8RegisterValue &= u8RegisterMask;
        }
        pstRegisterDataArg->u8Value = (uint8_t) u8RegisterValue;
    }

    return (enErrorReg);
}


MCU_nERROR MCU__enReadRegister32Bits(MCU_Register32Bits_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32RegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue = *pu32RegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32RegisterValue >>= u32RegisterShift;
            u32RegisterValue &= u32RegisterMask;
        }
        pstRegisterDataArg->u32Value = (uint32_t) u32RegisterValue;
    }

    return (enErrorReg);
}





MCU_nERROR MCU__enReadRegister_RAM(MCU_Register_t* pstRegisterDataArg)
{
    volatile UBase_t* puxRegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    UBase_t uxRegisterValue;
    UBase_t uxRegisterMask;
    UBase_t uxRegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
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
        uxRegisterMask = pstRegisterDataArg->uxMask;
        uxRegisterShift = pstRegisterDataArg->uxShift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        puxRegisterAddress = (volatile UBase_t*) uptrRegisterAddress;
        uxRegisterValue = *puxRegisterAddress;
        if(MCU_MASK_BASE != uxRegisterMask)
        {
            uxRegisterValue >>= uxRegisterShift;
            uxRegisterValue &= uxRegisterMask;
        }
        pstRegisterDataArg->uxValue = (UBase_t) uxRegisterValue;
    }

    return (enErrorReg);
}


MCU_nERROR MCU__enReadRegister8Bits_RAM(MCU_Register8Bits_t* pstRegisterDataArg)
{
    volatile uint8_t* pu8RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint8_t u8RegisterValue;
    uint8_t u8RegisterMask;
    uint8_t u8RegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u8RegisterMask = pstRegisterDataArg->u8Mask;
        u8RegisterShift = pstRegisterDataArg->u8Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu8RegisterAddress = (volatile uint8_t*) uptrRegisterAddress;
        u8RegisterValue = *pu8RegisterAddress;
        if(MCU_MASK_8 != u8RegisterMask)
        {
            u8RegisterValue >>= u8RegisterShift;
            u8RegisterValue &= u8RegisterMask;
        }
        pstRegisterDataArg->u8Value = (uint8_t) u8RegisterValue;
    }

    return (enErrorReg);
}

MCU_nERROR MCU__enReadRegister32Bits_RAM(MCU_Register32Bits_t* pstRegisterDataArg)
{
    volatile uint32_t* pu32RegisterAddress;
    uintptr_t uptrRegisterAddress;
    MCU_nERROR enErrorReg;
    uint32_t u32RegisterValue;
    uint32_t u32RegisterMask;
    uint32_t u32RegisterShift;

    enErrorReg = MCU_enERROR_OK;
    if(0UL == (uintptr_t) pstRegisterDataArg)
    {
        enErrorReg = MCU_enERROR_POINTER;
    }
    if(MCU_enERROR_OK == enErrorReg)
    {
        u32RegisterMask = pstRegisterDataArg->u32Mask;
        u32RegisterShift = pstRegisterDataArg->u32Shift;
        uptrRegisterAddress = pstRegisterDataArg->uptrAddress;

        pu32RegisterAddress = (volatile uint32_t*) uptrRegisterAddress;
        u32RegisterValue = *pu32RegisterAddress;
        if(MCU_MASK_32 != u32RegisterMask)
        {
            u32RegisterValue >>= u32RegisterShift;
            u32RegisterValue &= u32RegisterMask;
        }
        pstRegisterDataArg->u32Value = (uint32_t) u32RegisterValue;
    }

    return (enErrorReg);
}
