/**
 *
 * @file RAM_Sector.h
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

#ifndef XDRIVER_MCU_RAM_DRIVER_XHEADER_RAM_SECTOR_H_
#define XDRIVER_MCU_RAM_DRIVER_XHEADER_RAM_SECTOR_H_

#include "xDriver_MCU/RAM/Peripheral/xHeader/RAM_Enum.h"

RAM_nERROR RAM__enSetSectorState(UBase_t uxSectorArg, RAM_nSTATE enStateArg);

#endif /* XDRIVER_MCU_RAM_DRIVER_XHEADER_RAM_SECTOR_H_ */
