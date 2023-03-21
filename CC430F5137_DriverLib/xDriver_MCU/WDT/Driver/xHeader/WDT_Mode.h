/**
 *
 * @file WDT_Mode.h
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

#ifndef XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_MODE_H_
#define XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_MODE_H_

#include "xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h"

WDT_nERROR WDT__enSetMode(WDT_nMODE enModeArg);
WDT_nERROR WDT__enGetMode(WDT_nMODE* penModeArg);

WDT_nERROR WDT__enSetMode_RAM(WDT_nMODE enModeArg);
WDT_nERROR WDT__enGetMode_RAM(WDT_nMODE* penModeArg);

#endif /* XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_MODE_H_ */
