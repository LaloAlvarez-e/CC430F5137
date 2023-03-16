/**
 *
 * @file WDT_ReadRegister.h
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

#ifndef XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_READREGISTER_H_
#define XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_READREGISTER_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

#pragma CODE_SECTION(WDT__enReadRegister_RAM, ".TI.ramfunc")

WDT_nERROR WDT__enReadRegister(WDT_nMODULE enModuleArg, WDT_Register_t* pstRegisterDataArg);
WDT_nERROR WDT__enReadRegister_RAM(WDT_nMODULE enModuleArg, WDT_Register_t* pstRegisterDataArg);


#endif /* XDRIVER_MCU_WDT_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_WDT_READREGISTER_H_ */
