/**
 *
 * @file TIMERA_InterruptRegisterIRQSource.h
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
 * @verbatim 20 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_TIMERA_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_TIMERA_INTERRUPTREGISTERIRQSOURCE_H_

#include "xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h"

TIMERA_nERROR TIMERA__enRegisterIRQSourceHandler(TIMERA_nMODULE enModuleArg,
                                                 TIMERA_puxfIRQSourceHandler_t pfIrqSourceHandler);
TIMERA_nERROR TIMERA_CC__enRegisterIRQSourceHandler(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_nCC_MODE enModeArg,
                                                 TIMERA_puxfIRQSourceHandler_t pfIrqSourceHandler);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_TIMERA_INTERRUPTREGISTERIRQSOURCE_H_ */
