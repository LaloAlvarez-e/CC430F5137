/**
 *
 * @file AES_DataArray.c
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
 * @verbatim 12 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/xHeader/AES_DataArray.h>
#include <xDriver_MCU/AES/Driver/xHeader/AES_Data.h>
#include <xDriver_MCU/AES/Driver/xHeader/AES_Init.h>
#include <xDriver_MCU/AES/Driver/xHeader/AES_Result.h>


AES_nERROR AES__enComputeDataByteArray_Opt(UBase_t uxInitValueArg, uint8_t* pu8DataArg, UBase_t CounterArg, UBase_t* puxResultArg)
{
    AES_nERROR enErrorReg;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) pu8DataArg) || (0UL == (uintptr_t) puxResultArg))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if(0U == CounterArg)
        {
            enErrorReg = AES_enERROR_VALUE;
        }
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enSetInitData(uxInitValueArg);
    }

    if(AES_enERROR_OK == enErrorReg)
    {
        uint16_t u16WordCount = CounterArg >> 1U;
        uint16_t u16BytesCount = CounterArg & 1U;
        do
        {
            uint16_t u16DataValue = *((uint16_t*) pu8DataArg);
            enErrorReg = AES__enSetDataWord(u16DataValue);
            pu8DataArg += 2U;
            u16WordCount--;
        }while((0U != u16WordCount) && (AES_enERROR_OK == enErrorReg));


        if((AES_enERROR_OK == enErrorReg) && (0U != u16BytesCount))
        {
            enErrorReg = AES__enSetDataByte(*pu8DataArg);
        }

    }

    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetResultData(puxResultArg);
    }

    return (enErrorReg);
}



AES_nERROR AES__enComputeDataByteArray(UBase_t uxInitValueArg, uint8_t* pu8DataArg, UBase_t CounterArg, UBase_t* puxResultArg)
{
    AES_nERROR enErrorReg;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) pu8DataArg) || (0UL == (uintptr_t) puxResultArg))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if(0U == CounterArg)
        {
            enErrorReg = AES_enERROR_VALUE;
        }
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enSetInitData(uxInitValueArg);
    }

    if(AES_enERROR_OK == enErrorReg)
    {
        do
        {
            uint8_t u8DataValue = *pu8DataArg;
            enErrorReg = AES__enSetDataByte(u8DataValue);
            pu8DataArg ++;
            CounterArg--;
        }while((0U != CounterArg) && (AES_enERROR_OK == enErrorReg));
    }

    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetResultData(puxResultArg);
    }

    return (enErrorReg);
}

AES_nERROR AES__enComputeDataWordArray(UBase_t uxInitValueArg, uint16_t* pu16DataArg, UBase_t CounterArg, UBase_t* puxResultArg)
{
    AES_nERROR enErrorReg;
    enErrorReg = AES_enERROR_OK;
    if((0UL == (uintptr_t) pu16DataArg) || (0UL == (uintptr_t) puxResultArg))
    {
        enErrorReg = AES_enERROR_POINTER;
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        if(0U == CounterArg)
        {
            enErrorReg = AES_enERROR_VALUE;
        }
    }
    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enSetInitData(uxInitValueArg);
    }

    if(AES_enERROR_OK == enErrorReg)
    {
        do
        {
            uint16_t u16DataValue = *pu16DataArg;
            enErrorReg = AES__enSetDataWord(u16DataValue);
            pu16DataArg++;
            CounterArg--;
        }while((0U != CounterArg) && (AES_enERROR_OK == enErrorReg));
    }

    if(AES_enERROR_OK == enErrorReg)
    {
        enErrorReg = AES__enGetResultData(puxResultArg);
    }

    return (enErrorReg);
}



