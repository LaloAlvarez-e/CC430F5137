/**
 *
 * @file TIMERA_Divider.h
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

#ifndef XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_DIVIDER_H_
#define XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_DIVIDER_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

TIMERA_nERROR TIMERA__enSetClockPredivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_PREDIV enClockPredividerArg);
TIMERA_nERROR TIMERA__enSetClockPredividerNum(TIMERA_nMODULE enModuleArg, UBase_t uxClockPredivederArg);
TIMERA_nERROR TIMERA__enGetClockPredivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_PREDIV* penClockPredividerArg);
TIMERA_nERROR TIMERA__enGetClockPredividerNum(TIMERA_nMODULE enModuleArg, UBase_t* puxClockPredivederArg);

TIMERA_nERROR TIMERA__enSetClockExdivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_EXDIV enClockExdividerArg);
TIMERA_nERROR TIMERA__enSetClockExdividerNum(TIMERA_nMODULE enModuleArg, UBase_t enClockExdividerArg);
TIMERA_nERROR TIMERA__enGetClockExdivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_EXDIV* penClockExdividerArg);
TIMERA_nERROR TIMERA__enGetClockExdividerNum(TIMERA_nMODULE enModuleArg, UBase_t* puxClockExdividerArg);


TIMERA_nERROR TIMERA__enSetClockDivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_DIV enClockDividerArg);
TIMERA_nERROR TIMERA__enSetClockDividerNum(TIMERA_nMODULE enModuleArg, UBase_t enClockDividerArg);
TIMERA_nERROR TIMERA__enGetClockDivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_DIV* penClockDividerArg);
TIMERA_nERROR TIMERA__enGetClockDividerNum(TIMERA_nMODULE enModuleArg, UBase_t* puxClockDividerArg);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_XHEADER_TIMERA_DIVIDER_H_ */
