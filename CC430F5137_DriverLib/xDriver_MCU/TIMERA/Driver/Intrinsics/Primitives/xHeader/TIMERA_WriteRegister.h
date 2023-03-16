/**
 *
 * @file TIMERA_WriteRegister.h
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

#ifndef XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMERA_WRITEREGISTER_H_
#define XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMERA_WRITEREGISTER_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h>

TIMERA_nERROR TIMERA__enWriteRegister(TIMERA_nMODULE enModuleArg, TIMERA_Register_t* pstRegisterDataArg);
TIMERA_nERROR TIMERA_CC__enWriteRegister(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg, TIMERA_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_TIMERA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_TIMERA_WRITEREGISTER_H_ */
