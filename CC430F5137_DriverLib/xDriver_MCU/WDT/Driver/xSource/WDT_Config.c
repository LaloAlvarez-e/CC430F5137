/**
 *
 * @file WDT_Config.c
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
#include <xDriver_MCU/WDT/Driver/xHeader/WDT_Config.h>

#include <xDriver_MCU/WDT/Driver/xHeader/WDT_State.h>
#include "xDriver_MCU/WDT/Driver/Intrinsics/WDT_Intrinsics.h"
#include "xDriver_MCU/WDT/Peripheral/WDT_Peripheral.h"

WDT_nERROR WDT__enSetConfig(WDT_Config_t* pstConfig)
{
    WDT_Register_t pstRegisterData;
    WDT_nERROR enErrorReg;

    UBase_t uxEnableReg;
    UBase_t uxMode;
    UBase_t uxClock;
    UBase_t uxInterval;
    UBase_t uxValue;
    UBase_t uxState;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) pstConfig)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enDisable();
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        if(WDT_enSTATE_DIS == pstConfig->enEnable)
        {
            uxState = 1U;
        }
        else
        {
            uxState = 0U;
        }
        uxEnableReg = (uint16_t) uxState;
        uxEnableReg <<= WDT_CTL_R_HOLD_BIT;

        uxMode = (uint16_t) (pstConfig->enMode);
        uxMode <<= WDT_CTL_R_TMSEL_BIT;

        uxClock = (uint16_t) (pstConfig->enClock);
        uxClock <<= WDT_CTL_R_SSEL_BIT;

        uxInterval = (uint16_t) (pstConfig->enInterval);
        uxInterval <<= WDT_CTL_R_IS_BIT;


        uxValue = WDT_CTL_R_PW_WRITE;
        uxValue |= WDT_CTL_R_CNTCL_CLEAR;
        uxValue |= uxEnableReg;
        uxValue |= uxMode;
        uxValue |= uxClock;
        uxValue |= uxInterval;

        pstRegisterData.uptrAddress = WDT_CTL_OFFSET;
        pstRegisterData.uxValue = (UBase_t) uxValue;
        pstRegisterData.uxMask = MCU_MASK_BASE;
        pstRegisterData.uxShift = 0U;
        enErrorReg = WDT__enWriteRegister(&pstRegisterData);
    }

    return (enErrorReg);
}


WDT_nERROR WDT__enSetConfigExt(WDT_ConfigExt_t* pstConfig)
{
    WDT_nERROR enErrorReg;

    enErrorReg = WDT_enERROR_OK;
    if(0UL == (uintptr_t) pstConfig)
    {
        enErrorReg = WDT_enERROR_POINTER;
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetInterruptSourceState(WDT_enSTATE_DIS);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetConfig(&(pstConfig->stConfig));
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetStatusInterruptSource(pstConfig->enInterruptStatus);
    }
    if(WDT_enERROR_OK == enErrorReg)
    {
        enErrorReg = WDT__enSetInterruptSourceState(pstConfig->enInterruptEnable);
    }

    return (enErrorReg);
}



