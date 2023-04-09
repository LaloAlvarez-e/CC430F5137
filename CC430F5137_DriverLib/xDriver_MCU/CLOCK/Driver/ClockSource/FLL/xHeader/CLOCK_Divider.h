/**
 *
 * @file CLOCK_Divider.h
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
 * @verbatim 4 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 4 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_DIVIDER_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_DIVIDER_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_FLL__enSetReferenceDivider(CLOCK_nFLL_REFDIVIDER enDividerArg);
CLOCK_nERROR CLOCK_FLL__enGetReferenceDivider(CLOCK_nFLL_REFDIVIDER* penDividerArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_DIVIDER_H_ */
