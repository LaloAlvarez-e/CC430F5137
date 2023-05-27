/**
 *
 * @file AES_Key.c
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
#include <xDriver_MCU/AES/Driver/xHeader/AES_Key.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enSetKeyByte(uint8_t u8Key)
{
    AES_Register8Bits_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) AES_AKEY_LOW_R_DATA_BIT;
    stRegister.u8Mask = (uint8_t) AES_AKEY_LOW_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) AES_AKEY_LOW_OFFSET;
    stRegister.u8Value = (uint8_t) u8Key;
    enErrorReg = AES__enWriteRegister8Bits(&stRegister);

    return (enErrorReg);
}

AES_nERROR AES__enSetKeyWord(UBase_t uxKey)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) AES_AKEY_R_DATA_BIT;
    stRegister.uxMask = (UBase_t) AES_AKEY_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) AES_AKEY_OFFSET;
    stRegister.uxValue = (UBase_t) uxKey;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}


AES_nERROR AES__enGetKeyBytesWritten(uint8_t* pu8Key)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;
    UBase_t uxCountReg;
    UBase_t uxValidReg;

    uxCountReg = 0U;
    uxValidReg = 0U;
    enErrorReg = AES_enERROR_OK;
    if(0UL == (uintptr_t) pu8Key)
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ASTAT_R_KEYCNT_BIT;
        stRegister.uxMask = (UBase_t) AES_ASTAT_KEYCNT_MASK;
        stRegister.uptrAddress = AES_ASTAT_OFFSET;
        enErrorReg = AES__enReadRegister(&stRegister);
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        uxCountReg = (UBase_t) stRegister.uxValue;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) AES_ASTAT_R_KEYWR_BIT;
        stRegister.uxMask = (UBase_t) AES_ASTAT_KEYWR_MASK;
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
        *pu8Key = (uint8_t) uxCountReg;
    }
    return (enErrorReg);
}



AES_nERROR AES__enSetKeyValid(void)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) AES_ASTAT_R_KEYWR_BIT;
    stRegister.uxMask = (UBase_t) AES_ASTAT_KEYWR_MASK;
    stRegister.uptrAddress = AES_ASTAT_OFFSET;
    stRegister.uxValue = (UBase_t) AES_ASTAT_KEYWR_COMPLETED;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}


AES_nERROR AES__enSetKeyByteArray(uint8_t* pu8KeyArg)
{
    AES_nERROR enErrorReg;
    uint8_t u8CounterReg;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) pu8KeyArg))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        u8CounterReg = 16U;
        do
        {
            uint8_t u8KeyValue = *pu8KeyArg;
            enErrorReg = AES__enSetKeyByte(u8KeyValue);
            pu8KeyArg ++;
            u8CounterReg--;
        }while((0U != u8CounterReg) && (AES_enERROR_OK == enErrorReg));
    }
    return (enErrorReg);
}

AES_nERROR AES__enSetKeyWordArray(UBase_t* puxKeyArg)
{
    AES_nERROR enErrorReg;
    uint8_t u8CounterReg;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) puxKeyArg))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        u8CounterReg = 8U;
        do
        {
            UBase_t uxKeyValue = *puxKeyArg;
            enErrorReg = AES__enSetKeyWord(uxKeyValue);
            puxKeyArg ++;
            u8CounterReg--;
        }while((0U != u8CounterReg) && (AES_enERROR_OK == enErrorReg));
    }
    return (enErrorReg);
}
