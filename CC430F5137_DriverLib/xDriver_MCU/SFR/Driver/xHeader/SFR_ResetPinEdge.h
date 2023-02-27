/**
 *
 * @file SFR_ResetPinEdge.h
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SFR_DRIVER_XHEADER_SFR_RESETPINEDGE_H_
#define XDRIVER_MCU_SFR_DRIVER_XHEADER_SFR_RESETPINEDGE_H_

#include "xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h"

SFR_nERROR SFR__enSetNMIPinEdge(SFR_nMODULE enModuleArg, SFR_nRESETPIN_EDGE enEdgeArg);
SFR_nERROR SFR__enGetNMIPinEdge(SFR_nMODULE enModuleArg, SFR_nRESETPIN_EDGE* penEdgeArg);

#endif /* XDRIVER_MCU_SFR_DRIVER_XHEADER_SFR_RESETPINEDGE_H_ */
