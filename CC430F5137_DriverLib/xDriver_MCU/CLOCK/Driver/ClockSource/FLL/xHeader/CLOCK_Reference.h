/**
 *
 * @file CLOCK_Reference.h
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

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_REFERENCE_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_REFERENCE_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_FLL__enSetReference(CLOCK_nFLL_REFERENCE enReferenceArg);
CLOCK_nERROR CLOCK_FLL__enGetReference(CLOCK_nFLL_REFERENCE* penReferenceArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_REFERENCE_H_ */
