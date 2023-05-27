/**
 *
 * @file AES_InterruptRegisterIRQSource.h
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

#ifndef XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_AES_INTERRUPTREGISTERIRQSOURCE_H_
#define XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_AES_INTERRUPTREGISTERIRQSOURCE_H_

#include "xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h"

AES_nERROR AES__enRegisterIRQSourceHandler(AES_puxfIRQSourceHandler_t pfIrqSourceHandler);

#endif /* XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_INTERRUPTREGISTER_XHEADER_AES_INTERRUPTREGISTERIRQSOURCE_H_ */
