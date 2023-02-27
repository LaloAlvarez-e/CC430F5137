/**
 *
 * @file PORT_InterruptSource_Status.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_STATUS_H_
#define XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_STATUS_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enStatusInterruptSourceByMask(PORT_nMODULE enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg);
PORT_nERROR PORT__enStatusInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);
PORT_nERROR PORT__enStatusInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);

PORT_nERROR PORT__enStatusMaskedInterruptSourceByMask(PORT_nMODULE enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg);
PORT_nERROR PORT__enStatusMaskedInterruptSourceByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);
PORT_nERROR PORT__enStatusMaskedInterruptSource(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);

PORT_nERROR PORT_EXT__enStatusInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg);
PORT_nERROR PORT_EXT__enStatusInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);
PORT_nERROR PORT_EXT__enStatusInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);

PORT_nERROR PORT_EXT__enStatusMaskedInterruptSourceByMask(PORT_nMODULE_EXT enModuleArg, UBase_t uxPinMaskArg, UBase_t* puxInterruptStatusArg);
PORT_nERROR PORT_EXT__enStatusMaskedInterruptSourceByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);
PORT_nERROR PORT_EXT__enStatusMaskedInterruptSource(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATUS* penStatusArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_INTRINSICS_INTERRUPT_XHEADER_PORT_INTERRUPTSOURCE_STATUS_H_ */
