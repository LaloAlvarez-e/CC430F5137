/**
 *
 * @file AES_Data.c
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
 * @verbatim 11 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/xHeader/AES_Data.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enSetDataByte(uint8_t u8Data)
{
    AES_Register8Bits_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) AES_ADIN_LOW_R_DATA_BIT;
    stRegister.u8Mask = (uint8_t) AES_ADIN_LOW_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) AES_ADIN_LOW_OFFSET;
    stRegister.u8Value = (uint8_t) u8Data;
    enErrorReg = AES__enWriteRegister8Bits(&stRegister);

    return (enErrorReg);
}

AES_nERROR AES__enSetDataWord(UBase_t uxData)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) AES_ADIN_R_DATA_BIT;
    stRegister.uxMask = (UBase_t) AES_ADIN_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) AES_ADIN_OFFSET;
    stRegister.uxValue = (UBase_t) uxData;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}


AES_nERROR AES__enSetDataByteArray(uint8_t* pu8DataArg, uint8_t* pu8ByteWritten)
{
    AES_nERROR enErrorReg;
    uint8_t u8CounterReg;

    u8CounterReg = 0U;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) pu8DataArg))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetDataBytesWritten(&u8CounterReg);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if(0U != u8CounterReg)
        {
            enErrorReg = AES_enERROR_VALUE;
        }
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *pu8ByteWritten = 0U;
        do
        {
            if(AES_enERROR_OK == enErrorReg)
            {
                uint8_t u8DataValue = *pu8DataArg;
                enErrorReg = AES__enSetDataByte(u8DataValue);
            }
            if(AES_enERROR_OK == enErrorReg)
            {
                u8CounterReg++;
                pu8DataArg ++;
                *pu8ByteWritten = u8CounterReg;
            }
        }while((16U != u8CounterReg) && (AES_enERROR_OK == enErrorReg));
    }
    return (enErrorReg);
}


AES_nERROR AES__enSetDataWordArray(UBase_t* puxDataArg, uint8_t* pu8ByteWritten)
{
    AES_nERROR enErrorReg;
    uint8_t u8CounterReg;

    u8CounterReg = 0U;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) puxDataArg))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetDataBytesWritten(&u8CounterReg);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if(0U != u8CounterReg)
        {
            enErrorReg = AES_enERROR_VALUE;
        }
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *pu8ByteWritten = 0U;
        do
        {
            if(AES_enERROR_OK == enErrorReg)
            {
                UBase_t uxDataValue = *puxDataArg;
                enErrorReg = AES__enSetDataWord(uxDataValue);
            }
            if(AES_enERROR_OK == enErrorReg)
            {
                u8CounterReg++;
                puxDataArg ++;
                *pu8ByteWritten = u8CounterReg;
            }
        }while((16U != u8CounterReg) && (AES_enERROR_OK == enErrorReg));
    }
    return (enErrorReg);
}

AES_nERROR AES__enGetDataBytesWritten(uint8_t* pu8Data)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxValidReg;

    uxCountReg = 0U;
    uxValidReg = 0U;
    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) pu8Data)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ASTAT_R_DINCNT_BIT;
        stRegister.uxMask = (UBase_t) AES_ASTAT_DINCNT_MASK;
        stRegister.uptrAddress = AES_ASTAT_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uxCountReg = (UBase_t) stRegister.uxValue;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ASTAT_R_DINWR_BIT;
        stRegister.uxMask = (UBase_t) AES_ASTAT_DINWR_MASK;
        stRegister.uptrAddress = AES_ASTAT_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uxValidReg = (UBase_t) stRegister.uxValue;
        uxValidReg <<= 4U;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uxCountReg |= uxValidReg;
        *pu8Data = (uint8_t) uxCountReg;
    }
    return (enErrorReg);
}

AES_nERROR AES__enGetDataByte(uint8_t* pu8Data)
{
    AES_Register8Bits_t stRegister;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) pu8Data)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.u8Shift = (uint8_t) AES_ADOUT_LOW_R_DATA_BIT;
        stRegister.u8Mask = (uint8_t) AES_ADOUT_LOW_DATA_MASK;
        stRegister.uptrAddress = AES_ADOUT_LOW_OFFSET;
        enErrorReg = AES__enReadRegister8Bits(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *pu8Data = (uint8_t) stRegister.u8Value;
    }
    return (enErrorReg);
}


AES_nERROR AES__enGetDataWord(UBase_t* puxData)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) puxData)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ADOUT_R_DATA_BIT;
        stRegister.uxMask = (UBase_t) AES_ADOUT_DATA_MASK;
        stRegister.uptrAddress = AES_ADOUT_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        *puxData = (UBase_t) stRegister.uxValue;
    }
    return (enErrorReg);
}

AES_nERROR AES__enGetDataByteArray(uint8_t* pu8DataArg, uint8_t* pu8ByteRead)
{
    AES_nERROR enErrorReg;
    uint8_t u8CounterReg;

    u8CounterReg = 0U;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) pu8DataArg) || (0UL == (uintptr_t) pu8ByteRead))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetDataBytesRead(&u8CounterReg);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if(16U == u8CounterReg)
        {
            enErrorReg = AES_enERROR_VALUE;
        }
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        do
        {
            if(AES_enERROR_OK == enErrorReg)
            {
                enErrorReg = AES__enGetDataByte(pu8DataArg);
            }
            if(AES_enERROR_OK == enErrorReg)
            {
                enErrorReg = AES__enGetDataBytesRead(&u8CounterReg);
            }
            if(AES_enERROR_OK == enErrorReg)
            {
                pu8DataArg ++;
                *pu8ByteRead = u8CounterReg;
            }
        }while((16U != u8CounterReg) && (AES_enERROR_OK == enErrorReg));
    }
    return (enErrorReg);
}



AES_nERROR AES__enGetDataWordArray(UBase_t* puxDataArg, uint8_t* pu8ByteRead)
{
    AES_nERROR enErrorReg;
    uint8_t u8CounterReg;

    u8CounterReg = 0U;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) puxDataArg) || (0UL == (uintptr_t) pu8ByteRead))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetDataBytesRead(&u8CounterReg);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if(16U == u8CounterReg)
        {
            enErrorReg = AES_enERROR_VALUE;
        }
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        do
        {
            if(AES_enERROR_OK == enErrorReg)
            {
                enErrorReg = AES__enGetDataWord(puxDataArg);
            }
            if(AES_enERROR_OK == enErrorReg)
            {
                enErrorReg = AES__enGetDataBytesRead(&u8CounterReg);
            }
            if(AES_enERROR_OK == enErrorReg)
            {
                puxDataArg ++;
                *pu8ByteRead = u8CounterReg;
            }
        }while((16U != u8CounterReg) && (AES_enERROR_OK == enErrorReg));
    }
    return (enErrorReg);
}


AES_nERROR AES__enGetDataBytesRead(uint8_t* pu8Data)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxValidReg;

    uxCountReg = 0U;
    uxValidReg = 0U;
    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) pu8Data)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ASTAT_R_DOUTCNT_BIT;
        stRegister.uxMask = (UBase_t) AES_ASTAT_DOUTCNT_MASK;
        stRegister.uptrAddress = AES_ASTAT_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uxCountReg = (UBase_t) stRegister.uxValue;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ASTAT_R_DOUTRD_BIT;
        stRegister.uxMask = (UBase_t) AES_ASTAT_DOUTRD_MASK;
        stRegister.uptrAddress = AES_ASTAT_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uxValidReg = (UBase_t) stRegister.uxValue;
        uxValidReg <<= 4U;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uxCountReg |= uxValidReg;
        *pu8Data = (uint8_t) uxCountReg;
    }
    return (enErrorReg);
}

