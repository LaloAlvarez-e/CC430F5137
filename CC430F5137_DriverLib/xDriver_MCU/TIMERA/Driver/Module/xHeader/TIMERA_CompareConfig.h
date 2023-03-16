/**
 *
 * @file TIMERA_CompareConfig.h
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
 * @verbatim 16 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMERA_DRIVER_MODULE_XHEADER_TIMERA_COMPARECONFIG_H_
#define XDRIVER_MCU_TIMERA_DRIVER_MODULE_XHEADER_TIMERA_COMPARECONFIG_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

TIMERA_nERROR TIMERA_CC__enSetCompareConfig(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                  TIMERA_Compare_Config_t* pstConfigArg);
TIMERA_nERROR TIMERA_CC__enGetCompareConfig(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg,
                                  TIMERA_Compare_Config_t* pstConfigArg);


TIMERA_nERROR TIMERA_CC__enSetCompareConfigExt(TIMERA_nMODULE enModuleArg,  TIMERA_nCC enSubModuleArg,
                                     TIMERA_Compare_ConfigExt_t* pstConfigArg);
TIMERA_nERROR TIMERA_CC__enGetCompareConfigExt(TIMERA_nMODULE enModuleArg,  TIMERA_nCC enSubModuleArg,
                                     TIMERA_Compare_ConfigExt_t* pstConfigArg);


#endif /* XDRIVER_MCU_TIMERA_DRIVER_MODULE_XHEADER_TIMERA_COMPARECONFIG_H_ */
