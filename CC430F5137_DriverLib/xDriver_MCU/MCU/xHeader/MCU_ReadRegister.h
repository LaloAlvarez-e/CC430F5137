/**
 *
 * @file MCU_ReadRegister.h
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef MCU_HEADER_MCU_READREGISTER_H_
#define MCU_HEADER_MCU_READREGISTER_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

#pragma CODE_SECTION(MCU__enReadRegister32Bits_RAM, ".TI.ramfunc")
#pragma CODE_SECTION(MCU__enReadRegister8Bits_RAM, ".TI.ramfunc")
#pragma CODE_SECTION(MCU__enReadRegister_RAM, ".TI.ramfunc")

MCU_nERROR MCU__enReadRegister32Bits_RAM(MCU_Register32Bits_t* pstRegisterDataArg);
MCU_nERROR MCU__enReadRegister8Bits_RAM(MCU_Register8Bits_t* pstRegisterDataArg);
MCU_nERROR MCU__enReadRegister_RAM(MCU_Register_t* pstRegisterDataArg);

MCU_nERROR MCU__enReadRegister32Bits(MCU_Register32Bits_t* pstRegisterDataArg);
MCU_nERROR MCU__enReadRegister8Bits(MCU_Register8Bits_t* pstRegisterDataArg);
MCU_nERROR MCU__enReadRegister(MCU_Register_t* pstRegisterDataArg);

#endif /* MCU_HEADER_MCU_READREGISTER_H_ */
