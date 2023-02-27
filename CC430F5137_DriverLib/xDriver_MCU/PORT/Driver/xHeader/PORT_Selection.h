/**
 *
 * @file PORT_Selection.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_SELECTION_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_SELECTION_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enSetSelection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSEL enSelectionArg);
PORT_nERROR PORT__enSetSelectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSEL enSelectionArg);
PORT_nERROR PORT__enSetSelectionByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg);

PORT_nERROR PORT_EXT__enSetSelection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSEL enSelectionArg);
PORT_nERROR PORT_EXT__enSetSelectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSEL enSelectionArg);
PORT_nERROR PORT_EXT__enSetSelectionByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg);

PORT_nERROR PORT__enGetSelection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8SelectionMaskArg);
PORT_nERROR PORT__enGetSelectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSEL* penSelectionMaskArg);

PORT_nERROR PORT_EXT__enGetSelection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxSelectionMaskArg);
PORT_nERROR PORT_EXT__enGetSelectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSEL* penSelectionMaskArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_SELECTION_H_ */
