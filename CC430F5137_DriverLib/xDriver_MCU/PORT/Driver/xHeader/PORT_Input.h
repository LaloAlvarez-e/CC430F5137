/**
 *
 * @file PORT_Input.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_INPUT_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_INPUT_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enGetInput(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8InputMaskArg);
PORT_nERROR PORT__enGetInputByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penInputMaskArg);

PORT_nERROR PORT_EXT__enGetInput(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxInputMaskArg);
PORT_nERROR PORT_EXT__enGetInputByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penInputMaskArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_INPUT_H_ */
