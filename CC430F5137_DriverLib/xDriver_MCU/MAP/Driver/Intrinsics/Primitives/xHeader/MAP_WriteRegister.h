/**
 *
 * @file MAP_WriteRegister.h
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

#ifndef XDRIVER_MCU_MAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_MAP_WRITEREGISTER_H_
#define XDRIVER_MCU_MAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_MAP_WRITEREGISTER_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_Enum.h>

MAP_nERROR MAP__enWriteRegister(MAP_Register_t* pstRegisterDataArg);
MAP_nERROR MAP_PORT__enWriteRegister(MAP_nMODULE enModuleArg, MAP_Register8Bits_t* pstRegisterDataArg);


#endif /* XDRIVER_MCU_MAP_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_MAP_WRITEREGISTER_H_ */
