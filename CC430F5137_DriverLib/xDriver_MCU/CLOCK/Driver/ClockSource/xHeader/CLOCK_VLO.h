/**
 *
 * @file CLOCK_VLO.h
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
 * @verbatim 2 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 2 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XHEADER_CLOCK_VLO_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XHEADER_CLOCK_VLO_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_VLO__enSetFrequency(uint32_t u32FrequencyArg);
CLOCK_nERROR CLOCK_VLO__enGetFrequency(uint32_t* pu32FrequencyArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XHEADER_CLOCK_VLO_H_ */
