/**
 *
 * @file PORT_InterruptEdge.h
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
 * @verbatim 31 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 31 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_INTERRUPTEDGE_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_INTERRUPTEDGE_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enSetInterruptEdge(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nEDGE enInterruptEdgeArg);
PORT_nERROR PORT__enSetInterruptEdgeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE enInterruptEdgeArg);
PORT_nERROR PORT__enSetInterruptEdgeByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg);

PORT_nERROR PORT_EXT__enSetInterruptEdge(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nEDGE enInterruptEdgeArg);
PORT_nERROR PORT_EXT__enSetInterruptEdgeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE enInterruptEdgeArg);
PORT_nERROR PORT_EXT__enSetInterruptEdgeByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg);

PORT_nERROR PORT__enGetInterruptEdge(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8InterruptEdgeMaskArg);
PORT_nERROR PORT__enGetInterruptEdgeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE* penInterruptEdgeMaskArg);

PORT_nERROR PORT_EXT__enGetInterruptEdge(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxInterruptEdgeMaskArg);
PORT_nERROR PORT_EXT__enGetInterruptEdgeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nEDGE* penInterruptEdgeMaskArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_INTERRUPTEDGE_H_ */
