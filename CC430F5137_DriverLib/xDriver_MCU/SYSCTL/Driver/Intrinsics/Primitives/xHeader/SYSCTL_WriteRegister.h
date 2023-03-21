/**
 *
 * @file SYSCTL_WriteRegister.h
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

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSCTL_WRITEREGISTER_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSCTL_WRITEREGISTER_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

SYSCTL_nERROR SYSCTL__enWriteRegister(SYSCTL_Register_t* pstRegisterDataArg);
SYSCTL_nERROR SYSCTL__enWriteRegisterDirect(SYSCTL_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_SYSCTL_WRITEREGISTER_H_ */
