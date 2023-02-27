/**
 *
 * @file PORT_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_PORT_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_PORT_INTERRUPTREGISTERIRQSOURCE_H_

#include "xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h"


PORT_nERROR PORT__enRegisterIRQSourceHandler(PORT_nMODULE enModuleArg,
                                             PORT_nPIN enPinArg,
                                             PORT_puxfIRQSourceHandler_t pfIrqSourceHandler);

#endif /* XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_PORT_INTERRUPTREGISTERIRQSOURCE_H_ */
