/**
 *
 * @file CLOCK_FLL.h
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

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_CLOCK_FLL_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_CLOCK_FLL_H_

#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_Reference.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_DCO.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_Divider.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_MOD.h>
#include <xDriver_MCU/CLOCK/Driver/ClockSource/FLL/xHeader/CLOCK_Multiplier.h>

CLOCK_nERROR CLOCK_FLL__enGetFrequency(uint32_t* pu32FrequencyArg);
CLOCK_nERROR CLOCK_FLLDIV__enGetFrequency(uint32_t* pu32FrequencyArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_CLOCK_FLL_H_ */
