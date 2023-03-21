/**
 *
 * @file WDT_Clock.h
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
 * @verbatim 12 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_CLOCK_H_
#define XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_CLOCK_H_

#include "xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h"

WDT_nERROR WDT__enSetClockSource(WDT_nCLOCK enClockSourceArg);
WDT_nERROR WDT__enGetClockSource(WDT_nCLOCK* penClockSourceArg);


#endif /* XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_CLOCK_H_ */
