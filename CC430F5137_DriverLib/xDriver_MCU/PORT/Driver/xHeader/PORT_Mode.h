/**
 *
 * @file PORT_Mode.h
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
 * @verbatim 5 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_MODE_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_MODE_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enSetMode(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nMODE enModeArg);
PORT_nERROR PORT__enSetModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nMODE enModeArg);

PORT_nERROR PORT_EXT__enSetMode(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nMODE enModeArg);
PORT_nERROR PORT_EXT__enSetModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nMODE enModeArg);

PORT_nERROR PORT__enGetModeByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nMODE* penModeMaskArg);
PORT_nERROR PORT_EXT__enGetModeByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nMODE* penModeMaskArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_MODE_H_ */
