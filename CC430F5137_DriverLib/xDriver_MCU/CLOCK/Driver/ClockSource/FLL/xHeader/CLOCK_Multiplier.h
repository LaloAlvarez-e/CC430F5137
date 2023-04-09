/**
 *
 * @file CLOCK_Multiplier.h
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
 * @verbatim 3 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 3 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_MULTIPLIER_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_MULTIPLIER_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_FLL__enSetMultiplierLoop(CLOCK_nFLL_MULTI_LOOP enMultiLoopArg);
CLOCK_nERROR CLOCK_FLL__enGetMultiplierLoop(CLOCK_nFLL_MULTI_LOOP* penMultiLoopArg);

CLOCK_nERROR CLOCK_FLL__enSetMultiplier(UBase_t uxMultiArg);
CLOCK_nERROR CLOCK_FLL__enGetMultiplier(UBase_t* puxMultiArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_MULTIPLIER_H_ */
