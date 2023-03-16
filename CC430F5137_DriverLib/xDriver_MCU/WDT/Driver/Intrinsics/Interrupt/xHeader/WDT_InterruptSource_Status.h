/**
 *
 * @file WDT_InterruptSource_Status.h
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

#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_STATUS_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_STATUS_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

WDT_nERROR WDT__enSetStatusInterruptSource(WDT_nMODULE enModuleArg, WDT_nSTATUS enStatusArg);
WDT_nERROR WDT__enStatusInterruptSource(WDT_nMODULE enModuleArg, WDT_nSTATUS* penStatusArg);
WDT_nERROR WDT__enStatusMaskedInterruptSource(WDT_nMODULE enModuleArg, WDT_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_WDT_INTERRUPTSOURCE_STATUS_H_ */
