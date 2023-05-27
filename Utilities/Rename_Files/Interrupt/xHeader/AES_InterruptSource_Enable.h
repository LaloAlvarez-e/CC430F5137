/**
 *
 * @file AES_InterruptSource_Enable.h
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

#ifndef XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_XHEADER_AES_INTERRUPTSOURCE_ENABLE_H_
#define XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_XHEADER_AES_INTERRUPTSOURCE_ENABLE_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

AES_nERROR AES__enSetInterruptSourceState(AES_nSTATE enStateArg);
AES_nERROR AES__enEnableInterruptSource(void);
AES_nERROR AES__enDisableInterruptSource(void);

AES_nERROR AES__enGetInterruptSourceState(AES_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_AES_DRIVER_INTRINSICS_INTERRUPT_XHEADER_AES_INTERRUPTSOURCE_ENABLE_H_ */
