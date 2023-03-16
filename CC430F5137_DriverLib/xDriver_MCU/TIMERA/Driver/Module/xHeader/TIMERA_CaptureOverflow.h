/**
 *
 * @file TIMERA_CaptureOverflow.h
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
 * @verbatim 15 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMERA_DRIVER_MODULE_XHEADER_TIMERA_CAPTUREOVERFLOW_H_
#define XDRIVER_MCU_TIMERA_DRIVER_MODULE_XHEADER_TIMERA_CAPTUREOVERFLOW_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

TIMERA_nERROR TIMERA_CC__enSetCaptureOverflow(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nBOOLEAN enFlagArg);
TIMERA_nERROR TIMERA_CC__enClearCaptureOverflow(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg);
TIMERA_nERROR TIMERA_CC__enIsCaptureOverflow(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nBOOLEAN* penFlagArg);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_MODULE_XHEADER_TIMERA_CAPTUREOVERFLOW_H_ */
