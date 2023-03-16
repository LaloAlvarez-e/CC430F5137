/**
 *
 * @file RAM_ReadRegister.h
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

#ifndef XDRIVER_MCU_RAM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_RAM_READREGISTER_H_
#define XDRIVER_MCU_RAM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_RAM_READREGISTER_H_

#include <xDriver_MCU/RAM/Peripheral/xHeader/RAM_Enum.h>

RAM_nERROR RAM__enReadRegister(RAM_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_RAM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_RAM_READREGISTER_H_ */
