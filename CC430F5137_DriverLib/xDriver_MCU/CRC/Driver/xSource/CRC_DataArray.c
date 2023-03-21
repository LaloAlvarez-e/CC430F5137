/**
 *
 * @file CRC_DataArray.c
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
#include <xDriver_MCU/CRC/Driver/xHeader/CRC_DataArray.h>
#include <xDriver_MCU/CRC/Driver/xHeader/CRC_Data.h>
#include <xDriver_MCU/CRC/Driver/xHeader/CRC_Init.h>
#include <xDriver_MCU/CRC/Driver/xHeader/CRC_Result.h>


CRC_nERROR CRC__enComputeDataByteArray_Opt(UBase_t uxInitValueArg, uint8_t* pu8DataArg, UBase_t CounterArg, UBase_t* puxResultArg)
{
    CRC_nERROR enErrorReg;
    enErrorReg = CRC_enERROR_OK;
    if((0UL == (uintptr_t) pu8DataArg) || (0UL == (uintptr_t) puxResultArg))
    {
        enErrorReg = CRC_enERROR_POINTER;
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        if(0U == CounterArg)
        {
            enErrorReg = CRC_enERROR_VALUE;
        }
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        enErrorReg = CRC__enSetInitData(uxInitValueArg);
    }

    if(CRC_enERROR_OK == enErrorReg)
    {
        uint16_t u16WordCount = CounterArg >> 1U;
        uint16_t u16BytesCount = CounterArg & 1U;
        do
        {
            uint16_t u16DataValue = *((uint16_t*) pu8DataArg);
            enErrorReg = CRC__enSetDataWord(u16DataValue);
            pu8DataArg += 2U;
            u16WordCount--;
        }while((0U != u16WordCount) && (CRC_enERROR_OK == enErrorReg));


        if((CRC_enERROR_OK == enErrorReg) && (0U != u16BytesCount))
        {
            enErrorReg = CRC__enSetDataByte(*pu8DataArg);
        }

    }

    if(CRC_enERROR_OK == enErrorReg)
    {
        enErrorReg = CRC__enGetResultData(puxResultArg);
    }

    return (enErrorReg);
}



CRC_nERROR CRC__enComputeDataByteArray(UBase_t uxInitValueArg, uint8_t* pu8DataArg, UBase_t CounterArg, UBase_t* puxResultArg)
{
    CRC_nERROR enErrorReg;
    enErrorReg = CRC_enERROR_OK;
    if((0UL == (uintptr_t) pu8DataArg) || (0UL == (uintptr_t) puxResultArg))
    {
        enErrorReg = CRC_enERROR_POINTER;
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        if(0U == CounterArg)
        {
            enErrorReg = CRC_enERROR_VALUE;
        }
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        enErrorReg = CRC__enSetInitData(uxInitValueArg);
    }

    if(CRC_enERROR_OK == enErrorReg)
    {
        do
        {
            uint8_t u8DataValue = *pu8DataArg;
            enErrorReg = CRC__enSetDataByte(u8DataValue);
            pu8DataArg ++;
            CounterArg--;
        }while((0U != CounterArg) && (CRC_enERROR_OK == enErrorReg));
    }

    if(CRC_enERROR_OK == enErrorReg)
    {
        enErrorReg = CRC__enGetResultData(puxResultArg);
    }

    return (enErrorReg);
}

CRC_nERROR CRC__enComputeDataWordArray(UBase_t uxInitValueArg, uint16_t* pu16DataArg, UBase_t CounterArg, UBase_t* puxResultArg)
{
    CRC_nERROR enErrorReg;
    enErrorReg = CRC_enERROR_OK;
    if((0UL == (uintptr_t) pu16DataArg) || (0UL == (uintptr_t) puxResultArg))
    {
        enErrorReg = CRC_enERROR_POINTER;
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        if(0U == CounterArg)
        {
            enErrorReg = CRC_enERROR_VALUE;
        }
    }
    if(CRC_enERROR_OK == enErrorReg)
    {
        enErrorReg = CRC__enSetInitData(uxInitValueArg);
    }

    if(CRC_enERROR_OK == enErrorReg)
    {
        do
        {
            uint16_t u16DataValue = *pu16DataArg;
            enErrorReg = CRC__enSetDataWord(u16DataValue);
            pu16DataArg++;
            CounterArg--;
        }while((0U != CounterArg) && (CRC_enERROR_OK == enErrorReg));
    }

    if(CRC_enERROR_OK == enErrorReg)
    {
        enErrorReg = CRC__enGetResultData(puxResultArg);
    }

    return (enErrorReg);
}



