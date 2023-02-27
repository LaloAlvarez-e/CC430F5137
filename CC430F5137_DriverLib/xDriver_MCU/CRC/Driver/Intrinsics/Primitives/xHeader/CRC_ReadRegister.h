/**
 *
 * @file CRC_ReadRegister.h
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

#ifndef XDRIVER_MCU_CRC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_CRC_READREGISTER_H_
#define XDRIVER_MCU_CRC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_CRC_READREGISTER_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

CRC_nERROR CRC__enReadRegister8Bits(CRC_nMODULE enModuleArg, CRC_Register8Bits_t* pstRegisterDataArg);
CRC_nERROR CRC__enReadRegister(CRC_nMODULE enModuleArg, CRC_Register_t* pstRegisterDataArg);


#endif /* XDRIVER_MCU_CRC_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_CRC_READREGISTER_H_ */
