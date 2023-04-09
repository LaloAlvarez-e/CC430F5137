/**
 *
 * @file CLOCK_ACLK.c
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
 * @verbatim 5 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/CLOCK/Driver/ClockSignal/xHeader/CLOCK_ACLK.h>

#include <xDriver_MCU/CLOCK/Driver/ClockSource/CLOCK_ClockSource.h>
#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CLOCK/Driver/Intrinsics/Primitives/CLOCK_Primitives.h>
#include <xDriver_MCU/CLOCK/Peripheral/CLOCK_Peripheral.h>


CLOCK_nERROR CLOCK_ACLK__enSetPeripheralRequestState(CLOCK_nSTATE enStateArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL8_R_ACLK_REQ_BIT;
    stRegister.uxMask = CLOCK_CTL8_ACLK_REQ_MASK;
    stRegister.uptrAddress = CLOCK_CTL8_OFFSET;
    stRegister.uxValue = (UBase_t) enStateArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}

CLOCK_nERROR CLOCK_ACLK__enGetPeripheralRequestState(CLOCK_nSTATE* penStateArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penStateArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL8_R_ACLK_REQ_BIT;
        stRegister.uxMask = CLOCK_CTL8_ACLK_REQ_MASK;
        stRegister.uptrAddress = CLOCK_CTL8_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penStateArg = (CLOCK_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}



CLOCK_nERROR CLOCK_ACLK__enSetClockSource(CLOCK_nSOURCE enClockSourceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL4_R_ACLK_SEL_BIT;
    stRegister.uxMask = CLOCK_CTL4_ACLK_SEL_MASK;
    stRegister.uptrAddress = CLOCK_CTL4_OFFSET;
    stRegister.uxValue = (UBase_t) enClockSourceArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}

CLOCK_nERROR CLOCK_ACLK__enGetClockSource(CLOCK_nSOURCE* penClockSourceArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penClockSourceArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL4_R_ACLK_SEL_BIT;
        stRegister.uxMask = CLOCK_CTL4_ACLK_SEL_MASK;
        stRegister.uptrAddress = CLOCK_CTL4_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penClockSourceArg = (CLOCK_nSOURCE) stRegister.uxValue;
    }

    return (enErrorReg);
}



CLOCK_nERROR CLOCK_ACLK__enSetDivider(CLOCK_nDIVIDER enDividerArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL5_R_ACLK_DIV_BIT;
    stRegister.uxMask = CLOCK_CTL5_ACLK_DIV_MASK;
    stRegister.uptrAddress = CLOCK_CTL5_OFFSET;
    stRegister.uxValue = (UBase_t) enDividerArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}

CLOCK_nERROR CLOCK_ACLK__enGetDivider(CLOCK_nDIVIDER* penDividerArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penDividerArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL5_R_ACLK_DIV_BIT;
        stRegister.uxMask = CLOCK_CTL5_ACLK_DIV_MASK;
        stRegister.uptrAddress = CLOCK_CTL5_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penDividerArg = (CLOCK_nDIVIDER) stRegister.uxValue;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_ACLK__enGetDividerNumber(uint8_t* pu8DividerArg)
{
    uint8_t const pu8DividerRef[(UBase_t) CLOCK_enDIVIDER_MAX] = {1,2,4,8,16,32};
    CLOCK_nDIVIDER enDividerReg;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    enDividerReg = CLOCK_enDIVIDER_1;
    if(0U == (uintptr_t) pu8DividerArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_ACLK__enGetDivider(&enDividerReg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *pu8DividerArg = (uint8_t) pu8DividerRef[(UBase_t) enDividerReg];
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_ACLK__enSetOutputDivider(CLOCK_nDIVIDER enOutputDividerArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    stRegister.uxShift = CLOCK_CTL5_R_ACLK_PINDIV_BIT;
    stRegister.uxMask = CLOCK_CTL5_ACLK_PINDIV_MASK;
    stRegister.uptrAddress = CLOCK_CTL5_OFFSET;
    stRegister.uxValue = (UBase_t) enOutputDividerArg;
    enErrorReg = CLOCK__enWriteRegister(&stRegister);

    return (enErrorReg);
}

CLOCK_nERROR CLOCK_ACLK__enGetOutputDivider(CLOCK_nDIVIDER* penOutputDividerArg)
{
    CLOCK_Register_t stRegister;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) penOutputDividerArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = CLOCK_CTL5_R_ACLK_PINDIV_BIT;
        stRegister.uxMask = CLOCK_CTL5_ACLK_PINDIV_MASK;
        stRegister.uptrAddress = CLOCK_CTL5_OFFSET;
        enErrorReg = CLOCK__enReadRegister(&stRegister);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *penOutputDividerArg = (CLOCK_nDIVIDER) stRegister.uxValue;
    }

    return (enErrorReg);
}


CLOCK_nERROR CLOCK_ACLK__enGetOutputDividerNumber(uint8_t* pu8DividerArg)
{
    uint8_t const pu8DividerRef[(UBase_t) CLOCK_enDIVIDER_MAX] = {1,2,4,8,16,32};
    CLOCK_nDIVIDER enDividerReg;
    CLOCK_nERROR enErrorReg;

    enErrorReg = CLOCK_enERROR_OK;
    enDividerReg = CLOCK_enDIVIDER_1;
    if(0U == (uintptr_t) pu8DividerArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_ACLK__enGetOutputDivider(&enDividerReg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        *pu8DividerArg = (uint8_t) pu8DividerRef[(UBase_t) enDividerReg];
    }

    return (enErrorReg);
}

CLOCK_nERROR CLOCK_ACLK__enGetFrequency(uint32_t* pu32FrequencyArg)
{
    uint8_t u8DividerArg;
    uint32_t u32Frequency;
    CLOCK_nSOURCE enSource;
    CLOCK_nERROR enErrorReg;

    enSource = CLOCK_enSOURCE_XT1;
    u8DividerArg = 0U;
    u32Frequency = 0U;
    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_ACLK__enGetDividerNumber(&u8DividerArg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_ACLK__enGetClockSource(&enSource);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK__enGetSourceFrequency(enSource, &u32Frequency);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        u32Frequency /= u8DividerArg;
        *pu32FrequencyArg = (uint32_t) u32Frequency;
    }

    return (enErrorReg);
}



CLOCK_nERROR CLOCK_ACLK__enGetOutputFrequency(uint32_t* pu32FrequencyArg)
{
    uint8_t u8DividerArg;
    uint32_t u32Frequency;
    CLOCK_nERROR enErrorReg;

    u8DividerArg = 0U;
    u32Frequency = 0U;
    enErrorReg = CLOCK_enERROR_OK;
    if(0U == (uintptr_t) pu32FrequencyArg)
    {
        enErrorReg = CLOCK_enERROR_POINTER;
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_ACLK__enGetOutputDividerNumber(&u8DividerArg);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        enErrorReg = CLOCK_ACLK__enGetFrequency(&u32Frequency);
    }
    if(CLOCK_enERROR_OK == enErrorReg)
    {
        u32Frequency /= u8DividerArg;
        *pu32FrequencyArg = (uint32_t) u32Frequency;
    }

    return (enErrorReg);
}
