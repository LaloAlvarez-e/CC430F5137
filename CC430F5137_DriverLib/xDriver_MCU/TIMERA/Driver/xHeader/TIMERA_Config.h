    /**
 *
 * @file TIMERA_Config.h
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

#ifndef XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_CONFIG_H_
#define XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_CONFIG_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

TIMERA_nERROR TIMERA__enSetConfig(TIMERA_nMODULE enModuleArg, TIMERA_Config_t* pstConfigArg);
TIMERA_nERROR TIMERA__enGetConfig(TIMERA_nMODULE enModuleArg, TIMERA_Config_t* pstConfigArg);

TIMERA_nERROR TIMERA__enSetConfigExt(TIMERA_nMODULE enModuleArg, TIMERA_ConfigExt_t* pstConfigArg);
TIMERA_nERROR TIMERA__enGetConfigExt(TIMERA_nMODULE enModuleArg, TIMERA_ConfigExt_t* pstConfigArg);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_CONFIG_H_ */
