/**
 *
 * @file WDT_State.h
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

#ifndef XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_STATE_H_
#define XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_STATE_H_

#include "xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h"

WDT_nERROR WDT__enSetState(WDT_nSTATE enStateArg);
WDT_nERROR WDT__enEnable(void);
WDT_nERROR WDT__enDisable(void);

WDT_nERROR WDT__enGetState(WDT_nSTATE* penStateArg);


WDT_nERROR WDT__enSetState_RAM(WDT_nSTATE enStateArg);
WDT_nERROR WDT__enEnable_RAM(void);
WDT_nERROR WDT__enDisable_RAM(void);

WDT_nERROR WDT__enGetState_RAM(WDT_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_WDT_DRIVER_XHEADER_WDT_STATE_H_ */
