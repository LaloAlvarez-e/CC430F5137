/**
 *
 * @file SFR_InterruptSource_Status.h
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

#ifndef XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_STATUS_H_
#define XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_STATUS_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h>


SFR_nERROR SFR__enStatusInterruptSourceByMask(UBase_t uxInterruptMaskArg, UBase_t* puxInterruptStatusArg);
SFR_nERROR SFR__enStatusInterruptSourceByNumber(SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg);
SFR_nERROR SFR__enStatusInterruptSource(SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg);

SFR_nERROR SFR__enStatusMaskedInterruptSourceByMask(UBase_t uxInterruptMaskArg, UBase_t* puxInterruptStatusArg);
SFR_nERROR SFR__enStatusMaskedInterruptSourceByNumber(SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg);
SFR_nERROR SFR__enStatusMaskedInterruptSource(SFR_nINTERRUPT enInterruptArg, SFR_nSTATUS* penStatusArg);


#endif /* XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_STATUS_H_ */
