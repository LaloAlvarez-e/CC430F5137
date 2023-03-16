/**
 *
 * @file TIMERA_InterruptSource_Enable.h
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

#ifndef XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMERA_INTERRUPTSOURCE_ENABLE_H_
#define XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMERA_INTERRUPTSOURCE_ENABLE_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h>

TIMERA_nERROR TIMERA__enSetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nSTATE enStateArg);
TIMERA_nERROR TIMERA__enEnableInterruptSource(TIMERA_nMODULE enModuleArg);
TIMERA_nERROR TIMERA__enDisableInterruptSource(TIMERA_nMODULE enModuleArg);
TIMERA_nERROR TIMERA__enGetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nSTATE* penStateArg);


TIMERA_nERROR TIMERA_CC__enSetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nSTATE enStateArg);
TIMERA_nERROR TIMERA_CC__enEnableInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg);
TIMERA_nERROR TIMERA_CC__enDisableInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg);
TIMERA_nERROR TIMERA_CC__enGetInterruptSourceState(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMERA_INTERRUPTSOURCE_ENABLE_H_ */
