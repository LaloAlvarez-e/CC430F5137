/**
 *
 * @file CLOCK_ACLK.h
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

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSIGNAL_XHEADER_CLOCK_ACLK_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSIGNAL_XHEADER_CLOCK_ACLK_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_ACLK__enSetPeripheralRequestState(CLOCK_nSTATE enStateArg);
CLOCK_nERROR CLOCK_ACLK__enGetPeripheralRequestState(CLOCK_nSTATE* penStateArg);

CLOCK_nERROR CLOCK_ACLK__enSetClockSource(CLOCK_nSOURCE enClockSourceArg);
CLOCK_nERROR CLOCK_ACLK__enGetClockSource(CLOCK_nSOURCE* penClockSourceArg);

CLOCK_nERROR CLOCK_ACLK__enSetDivider(CLOCK_nDIVIDER enDividerArg);
CLOCK_nERROR CLOCK_ACLK__enGetDivider(CLOCK_nDIVIDER* penDividerArg);
CLOCK_nERROR CLOCK_ACLK__enGetDividerNumber(uint8_t* pu8DividerArg);

CLOCK_nERROR CLOCK_ACLK__enSetOutputDivider(CLOCK_nDIVIDER enDividerArg);
CLOCK_nERROR CLOCK_ACLK__enGetOutputDivider(CLOCK_nDIVIDER* penDividerArg);
CLOCK_nERROR CLOCK_ACLK__enGetOutputDividerNumber(uint8_t* pu8DividerArg);

CLOCK_nERROR CLOCK_ACLK__enGetFrequency(uint32_t* pu32FrequencyArg);
CLOCK_nERROR CLOCK_ACLK__enGetOutputFrequency(uint32_t* pu32FrequencyArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSIGNAL_XHEADER_CLOCK_ACLK_H_ */
