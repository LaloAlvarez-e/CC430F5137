/**
 *
 * @file PMM_WriteRegister.h
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

#ifndef XDRIVER_MCU_PMM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PMM_WRITEREGISTER_H_
#define XDRIVER_MCU_PMM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PMM_WRITEREGISTER_H_

#include <xDriver_MCU/PMM/Peripheral/xHeader/PMM_Enum.h>

PMM_nERROR PMM__enWriteRegister(PMM_Register_t* pstRegisterDataArg);
PMM_nERROR PMM__enWriteRegisterDirect(PMM_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_PMM_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_PMM_WRITEREGISTER_H_ */
