/**
 *
 * @file PORT_Direction.h
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
 * @verbatim 30 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 30 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_DIRECTION_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_DIRECTION_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enSetDirection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDIR enDirectionArg);
PORT_nERROR PORT__enSetDirectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDIR enDirectionArg);
PORT_nERROR PORT__enSetDirectionByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg);

PORT_nERROR PORT_EXT__enSetDirection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDIR enDirectionArg);
PORT_nERROR PORT_EXT__enSetDirectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDIR enDirectionArg);
PORT_nERROR PORT_EXT__enSetDirectionByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg);

PORT_nERROR PORT__enGetDirection(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8DirectionMaskArg);
PORT_nERROR PORT__enGetDirectionByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDIR* penDirectionMaskArg);

PORT_nERROR PORT_EXT__enGetDirection(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxDirectionMaskArg);
PORT_nERROR PORT_EXT__enGetDirectionByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDIR* penDirectionMaskArg);


#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_DIRECTION_H_ */
