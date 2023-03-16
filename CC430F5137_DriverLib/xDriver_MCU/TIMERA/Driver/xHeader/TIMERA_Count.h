/**
 *
 * @file TIMERA_Count.h
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

#ifndef XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_COUNT_H_
#define XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_COUNT_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

TIMERA_nERROR TIMERA__enSetCountValue(TIMERA_nMODULE enModuleArg, UBase_t uxCountValue);
TIMERA_nERROR TIMERA__enClearCountValue(TIMERA_nMODULE enModuleArg);
TIMERA_nERROR TIMERA__enGetCountValue(TIMERA_nMODULE enModuleArg, UBase_t* puxCountValue);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_COUNT_H_ */
