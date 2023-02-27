/**
 *
 * @file SFR_WriteRegister.h
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

#ifndef XDRIVER_MCU_SFR_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SFR_WRITEREGISTER_H_
#define XDRIVER_MCU_SFR_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SFR_WRITEREGISTER_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h>

SFR_nERROR SFR__enWriteRegister(SFR_nMODULE enModuleArg, SFR_Register_t* pstRegisterDataArg);
SFR_nERROR SFR__enWriteRegisterDirect(SFR_nMODULE enModuleArg, SFR_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_SFR_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SFR_WRITEREGISTER_H_ */
