/**
 *
 * @file PORT_Drive.h
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

#ifndef XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_DRIVE_H_
#define XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_DRIVE_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT__enSetDrive(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDRIVE enDriveArg);
PORT_nERROR PORT__enSetDriveByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE enDriveArg);
PORT_nERROR PORT__enSetDriveByMask(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t u8PinValueArg);

PORT_nERROR PORT_EXT__enSetDrive(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, PORT_nDRIVE enDriveArg);
PORT_nERROR PORT_EXT__enSetDriveByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE enDriveArg);
PORT_nERROR PORT_EXT__enSetDriveByMask(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t uxPinValueArg);

PORT_nERROR PORT__enGetDrive(PORT_nMODULE enModuleArg, PORT_nPINMASK enPinMaskArg, uint8_t* pu8DriveMaskArg);
PORT_nERROR PORT__enGetDriveByNumber(PORT_nMODULE enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE* penDriveMaskArg);

PORT_nERROR PORT_EXT__enGetDrive(PORT_nMODULE_EXT enModuleArg, PORT_nPINMASK enPinMaskArg, UBase_t* puxDriveMaskArg);
PORT_nERROR PORT_EXT__enGetDriveByNumber(PORT_nMODULE_EXT enModuleArg, PORT_nPIN enPinArg, PORT_nDRIVE* penDriveMaskArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_XHEADER_PORT_DRIVE_H_ */
