/**
 *
 * @file CLOCK_DCO.h
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

#ifndef XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_DCO_H_
#define XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_DCO_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

CLOCK_nERROR CLOCK_FLL__enSetDCOValue(UBase_t uxValueArg);
CLOCK_nERROR CLOCK_FLL__enGetDCOValue(UBase_t* puxValueArg);


CLOCK_nERROR CLOCK_FLL__enSetDCORange(CLOCK_nDCO_RANGE enRangeArg);
CLOCK_nERROR CLOCK_FLL__enGetDCORange(CLOCK_nDCO_RANGE* penRangeArg);

#endif /* XDRIVER_MCU_CLOCK_DRIVER_CLOCKSOURCE_FLL_XHEADER_CLOCK_DCO_H_ */
