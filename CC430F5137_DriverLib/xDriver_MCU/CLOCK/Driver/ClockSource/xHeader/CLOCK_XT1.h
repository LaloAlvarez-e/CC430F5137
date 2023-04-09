/**
 *
 * @file CLOCK_XT1.h
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

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XT1_CLOCK_XT1_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XT1_CLOCK_XT1_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_XT1__enSetFrequency(uint32_t u32FrequencyArg);
CLOCK_nERROR CLOCK_XT1__enGetFrequency(uint32_t* pu32FrequencyArg);

CLOCK_nERROR CLOCK_XT1__enSetSource(CLOCK_nXT1_SOURCE enSourceArg);
CLOCK_nERROR CLOCK_XT1__enGetSource(CLOCK_nXT1_SOURCE* penSourceArg);

CLOCK_nERROR CLOCK_XT1__enSetCapacitance(CLOCK_nXT1_CAP enCapacitanceArg);
CLOCK_nERROR CLOCK_XT1__enGetCapacitance(CLOCK_nXT1_CAP* penCapacitanceArg);

CLOCK_nERROR CLOCK_XT1__enSetMode(CLOCK_nXT1_MODE enModeArg);
CLOCK_nERROR CLOCK_XT1__enGetMode(CLOCK_nXT1_MODE* penModeArg);

CLOCK_nERROR CLOCK_XT1__enSetConditionalState(CLOCK_nSTATE enStateArg);
CLOCK_nERROR CLOCK_XT1__enGetConditionalState(CLOCK_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_XT1_CLOCK_XT1_H_ */
