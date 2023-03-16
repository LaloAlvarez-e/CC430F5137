/**
 *
 * @file TIMERA_InterruptSource_Clear.h
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

#ifndef XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMERA_INTERRUPTSOURCE_CLEAR_H_
#define XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMERA_INTERRUPTSOURCE_CLEAR_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h>

TIMERA_nERROR TIMERA__enClearInterruptSource(TIMERA_nMODULE enModuleArg);
TIMERA_nERROR TIMERA_CC__enClearInterruptSource(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_INTERRUPT_XHEADER_TIMERA_INTERRUPTSOURCE_CLEAR_H_ */
