/**
 *
 * @file SFR_InterruptSource_Enable.h
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

#ifndef XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_ENABLE_H_
#define XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_ENABLE_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h>

SFR_nERROR SFR__enSetEnableInterruptSourceByMask(SFR_nMODULE enModuleArg, SFR_nINTMASK enInterruptMaskArg,
                                                 SFR_nSTATE enStateArg);
SFR_nERROR SFR__enEnableInterruptSourceByMask(SFR_nMODULE enModuleArg, SFR_nINTMASK enInterruptMaskArg);
SFR_nERROR SFR__enDisableInterruptSourceByMask(SFR_nMODULE enModuleArg, SFR_nINTMASK enInterruptMaskArg);

SFR_nERROR SFR__enSetEnableInterruptSourceByNumber(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg,
                                                   SFR_nSTATE enStateArg);
SFR_nERROR SFR__enEnableInterruptSourceByNumber(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg);
SFR_nERROR SFR__enDisableInterruptSourceByNumber(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg);

SFR_nERROR SFR__enSetEnableInterruptSource(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg,
                                           SFR_nSTATE enStateArg);
SFR_nERROR SFR__enEnableInterruptSource(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg);
SFR_nERROR SFR__enDisableInterruptSource(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg);


SFR_nERROR SFR__enGetInterruptSourceStateByMask(SFR_nMODULE enModuleArg, UBase_t uxInterruptMaskArg,
                                                   UBase_t* puxInterruptMaskArg);
SFR_nERROR SFR__enGetInterruptSourceStateByNumber(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, SFR_nSTATE* penStateArg);
SFR_nERROR SFR__enGetInterruptSourceState(SFR_nMODULE enModuleArg, SFR_nINTERRUPT enInterruptArg, SFR_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_SFR_DRIVER_INTRINSICS_INTERRUPT_XHEADER_SFR_INTERRUPTSOURCE_ENABLE_H_ */
