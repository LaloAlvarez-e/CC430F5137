/**
 *
 * @file AES_InterruptSource_Status.h
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

#ifndef XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_XHEADER_AES_INTERRUPTSOURCE_STATUS_H_
#define XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_XHEADER_AES_INTERRUPTSOURCE_STATUS_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

AES_nERROR AES__enSetStatusInterruptSource(AES_nSTATUS enStatusArg);
AES_nERROR AES__enStatusInterruptSource(AES_nSTATUS* penStatusArg);
AES_nERROR AES__enStatusMaskedInterruptSource(AES_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_XHEADER_AES_INTERRUPTSOURCE_STATUS_H_ */
