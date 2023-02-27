/**
 *
 * @file PORT_ReadRegister.h
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
 * @verbatim 12 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PORT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PORT_READREGISTER_H_
#define XDRIVER_MCU_PORT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PORT_READREGISTER_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

PORT_nERROR PORT_EXT__enReadRegister(PORT_nMODULE_EXT enModuleArg, PORT_Register_t* pstRegisterDataArg);
PORT_nERROR PORT__enReadRegister(PORT_nMODULE enModuleArg, PORT_Register8Bits_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_PORT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PORT_READREGISTER_H_ */
