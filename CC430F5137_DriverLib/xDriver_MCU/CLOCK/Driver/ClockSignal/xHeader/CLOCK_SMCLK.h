/**
 *
 * @file CLOCK_SMCLK.h
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

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSIGNAL_XHEADER_CLOCK_SMCLK_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSIGNAL_XHEADER_CLOCK_SMCLK_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_SMCLK__enSetPeripheralRequestState(CLOCK_nSTATE enStateArg);
CLOCK_nERROR CLOCK_SMCLK__enGetPeripheralRequestState(CLOCK_nSTATE* penStateArg);

CLOCK_nERROR CLOCK_SMCLK__enSetClockSource(CLOCK_nSOURCE enClockSourceArg);
CLOCK_nERROR CLOCK_SMCLK__enGetClockSource(CLOCK_nSOURCE* penClockSourceArg);

CLOCK_nERROR CLOCK_SMCLK__enSetDivider(CLOCK_nDIVIDER enDividerArg);
CLOCK_nERROR CLOCK_SMCLK__enGetDivider(CLOCK_nDIVIDER* penDividerArg);
CLOCK_nERROR CLOCK_SMCLK__enGetDividerNumber(uint8_t* pu8DividerArg);

CLOCK_nERROR CLOCK_SMCLK__enSetConditionalState(CLOCK_nSTATE enStateArg);
CLOCK_nERROR CLOCK_SMCLK__enGetConditionalState(CLOCK_nSTATE* penStateArg);

CLOCK_nERROR CLOCK_SMCLK__enGetFrequency(uint32_t* pu32FrequencyArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSIGNAL_XHEADER_CLOCK_SMCLK_H_ */
