/**
 *
 * @file TIMERA_Mode.h
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

#ifndef XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_MODE_H_
#define XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_MODE_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

TIMERA_nERROR TIMERA__enSetMode(TIMERA_nMODULE enModuleArg, TIMERA_nMODE enModeArg);
TIMERA_nERROR TIMERA__enGetMode(TIMERA_nMODULE enModuleArg, TIMERA_nMODE* penModeArg);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_MODE_H_ */
