/**
 *
 * @file PORT_Output.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_OUTPUT_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_OUTPUT_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enSetOutput(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nLEVEL enOutputArg);
PORT_nERROR PORT__enSetOutputByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL enOutputArg);
PORT_nERROR PORT__enSetOutputByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg);

PORT_nERROR PORT_EXT__enSetOutput(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nLEVEL enOutputArg);
PORT_nERROR PORT_EXT__enSetOutputByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL enOutputArg);
PORT_nERROR PORT_EXT__enSetOutputByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg);

PORT_nERROR PORT__enGetOutput(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8OutputMaskArg);
PORT_nERROR PORT__enGetOutputByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penOutputMaskArg);

PORT_nERROR PORT_EXT__enGetOutput(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxOutputMaskArg);
PORT_nERROR PORT_EXT__enGetOutputByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nLEVEL* penOutputMaskArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_OUTPUT_H_ */
