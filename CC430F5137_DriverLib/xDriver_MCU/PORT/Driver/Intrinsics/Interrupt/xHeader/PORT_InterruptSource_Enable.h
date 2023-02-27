/**
 *
 * @file PORT_InterruptSource_Enable.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_ENABLE_H_
#define XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_ENABLE_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>


PORT_nERROR PORT__enSetInterruptSourceStateByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enStateArg);
PORT_nERROR PORT__enEnableInterruptSourceByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg);
PORT_nERROR PORT__enDisableInterruptSourceByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg);

PORT_nERROR PORT__enSetInterruptSourceStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg);
PORT_nERROR PORT__enEnableInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg);
PORT_nERROR PORT__enDisableInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg);

PORT_nERROR PORT__enSetInterruptSourceState(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg);
PORT_nERROR PORT__enEnableInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg);
PORT_nERROR PORT__enDisableInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg);

PORT_nERROR PORT__enGetInterruptSourceStateByMask(PORT_nMODULE enModuleArg, UBase_t uxInterruptMaskArg, UBase_t* puxInterruptMaskArg);
PORT_nERROR PORT__enGetInterruptSourceStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg);
PORT_nERROR PORT__enGetInterruptSourceState(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg);


PORT_nERROR PORT_EXT__enSetInterruptSourceStateByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enStateArg);
PORT_nERROR PORT_EXT__enEnableInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg);
PORT_nERROR PORT_EXT__enDisableInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg);

PORT_nERROR PORT_EXT__enSetInterruptSourceStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg);
PORT_nERROR PORT_EXT__enEnableInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg);
PORT_nERROR PORT_EXT__enDisableInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg);

PORT_nERROR PORT_EXT__enSetInterruptSourceState(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enStateArg);
PORT_nERROR PORT_EXT__enEnableInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg);
PORT_nERROR PORT_EXT__enDisableInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg);

PORT_nERROR PORT_EXT__enGetInterruptSourceStateByMask(PORT_nMODULE_EXT enModuleArg, UBase_t uxInterruptMaskArg, UBase_t* puxInterruptMaskArg);
PORT_nERROR PORT_EXT__enGetInterruptSourceStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg);
PORT_nERROR PORT_EXT__enGetInterruptSourceState(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penStateArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_ENABLE_H_ */
