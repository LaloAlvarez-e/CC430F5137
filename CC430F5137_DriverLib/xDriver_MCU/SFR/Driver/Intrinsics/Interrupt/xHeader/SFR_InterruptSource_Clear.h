/**
 *
 * @file SFR_InterruptSource_Clear.h
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

#ifndef XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_CLEAR_H_
#define XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_CLEAR_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h>

SFR_nERROR SFR__enClearInterruptSourceByMask(SFR_nINTMASK enInterruptMaskArg);
SFR_nERROR SFR__enClearInterruptSourceByNumber(SFR_nINTERRUPT enInterruptArg);
SFR_nERROR SFR__enClearInterruptSource(SFR_nINTERRUPT enInterruptArg);

#endif /* XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_CLEAR_H_ */
