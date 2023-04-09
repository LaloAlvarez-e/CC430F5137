/**
 *
 * @file CLOCK_SourceFrequency.h
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
 * @verbatim 9 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XHEADER_CLOCK_SOURCEFREQUENCY_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XHEADER_CLOCK_SOURCEFREQUENCY_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK__enGetSourceFrequency(CLOCK_nSOURCE enSourceArg, uint32_t* pu32FrequencyArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XHEADER_CLOCK_SOURCEFREQUENCY_H_ */
