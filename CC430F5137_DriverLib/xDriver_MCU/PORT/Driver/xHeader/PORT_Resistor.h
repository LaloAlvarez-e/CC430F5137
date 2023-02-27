/**
 *
 * @file PORT_Resistor.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_RESISTOR_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_RESISTOR_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enSetResistorState(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enResistorStateArg);
PORT_nERROR PORT__enSetResistorStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enResistorStateArg);
PORT_nERROR PORT__enSetResistorStateByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg);

PORT_nERROR PORT_EXT__enSetResistorState(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nSTATE enResistorStateArg);
PORT_nERROR PORT_EXT__enSetResistorStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE enResistorStateArg);
PORT_nERROR PORT_EXT__enSetResistorStateByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg);

PORT_nERROR PORT__enGetResistorState(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8ResistorStateMaskArg);
PORT_nERROR PORT__enGetResistorStateByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penResistorStateMaskArg);

PORT_nERROR PORT_EXT__enGetResistorState(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxResistorStateMaskArg);
PORT_nERROR PORT_EXT__enGetResistorStateByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nSTATE* penResistorStateMaskArg);


PORT_nERROR PORT__enSetResistorType(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESTYPE enResistorTypeArg);
PORT_nERROR PORT__enSetResistorTypeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE enResistorTypeArg);
PORT_nERROR PORT__enSetResistorTypeByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg);

PORT_nERROR PORT_EXT__enSetResistorType(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESTYPE enResistorTypeArg);
PORT_nERROR PORT_EXT__enSetResistorTypeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE enResistorTypeArg);
PORT_nERROR PORT_EXT__enSetResistorTypeByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg);

PORT_nERROR PORT__enGetResistorType(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8ResistorTypeMaskArg);
PORT_nERROR PORT__enGetResistorTypeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE* penResistorTypeMaskArg);

PORT_nERROR PORT_EXT__enGetResistorType(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxResistorTypeMaskArg);
PORT_nERROR PORT_EXT__enGetResistorTypeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESTYPE* penResistorTypeMaskArg);

PORT_nERROR PORT__enSetResistorMode(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESISTOR enResistorModeArg);
PORT_nERROR PORT__enSetResistorModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR enResistorModeArg);

PORT_nERROR PORT_EXT__enSetResistorMode(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nRESISTOR enResistorModeArg);
PORT_nERROR PORT_EXT__enSetResistorModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR enResistorModeArg);

PORT_nERROR PORT__enGetResistorModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR* penResistorModeMaskArg);
PORT_nERROR PORT_EXT__enGetResistorModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nRESISTOR* penResistorModeMaskArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_RESISTOR_H_ */
