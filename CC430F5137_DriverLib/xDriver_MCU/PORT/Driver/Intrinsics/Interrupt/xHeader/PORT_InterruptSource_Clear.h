/**
 *
 * @file PORT_InterruptSource_Clear.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_CLEAR_H_
#define XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_CLEAR_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT_EXT__enClearInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg);
PORT_nERROR PORT_EXT__enClearInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg);
PORT_nERROR PORT_EXT__enClearInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg);

PORT_nERROR PORT__enClearInterruptSourceByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg);
PORT_nERROR PORT__enClearInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg);
PORT_nERROR PORT__enClearInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_CLEAR_H_ */
