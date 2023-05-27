/**
 *
 * @file AES_WriteRegister.h
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

#ifndef XDRIVER_MCU_AES_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_AES_WRITEREGISTER_H_
#define XDRIVER_MCU_AES_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_AES_WRITEREGISTER_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

AES_nERROR AES__enWriteRegister8Bits(AES_Register8Bits_t* pstRegisterDataArg);
AES_nERROR AES__enWriteRegister(AES_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_AES_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_AES_WRITEREGISTER_H_ */
