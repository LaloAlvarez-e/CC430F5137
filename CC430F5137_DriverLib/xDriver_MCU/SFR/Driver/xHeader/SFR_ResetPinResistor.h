/**
 *
 * @file SFR_ResetPinResistor.h
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

#ifndef XDRIVER_MCU_SFR_DRIVER_XHEADER_SFR_RESETPINRESISTOR_H_
#define XDRIVER_MCU_SFR_DRIVER_XHEADER_SFR_RESETPINRESISTOR_H_

#include "xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h"

SFR_nERROR SFR__enSetNMIPinResistorState(SFR_nMODULE enModuleArg, SFR_nSTATE enStateArg);
SFR_nERROR SFR__enSetNMIPinResistor(SFR_nMODULE enModuleArg, SFR_nRESETPIN_RESISTOR enResitorArg);

SFR_nERROR SFR__enGetNMIPinResistorState(SFR_nMODULE enModuleArg, SFR_nSTATE* penStateArg);
SFR_nERROR SFR__enGetNMIPinResistor(SFR_nMODULE enModuleArg, SFR_nRESETPIN_RESISTOR* penResitorArg);

#endif /* XDRIVER_MCU_SFR_DRIVER_XHEADER_SFR_RESETPINRESISTOR_H_ */
