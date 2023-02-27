/**
 *
 * @file MCU_WriteRegister.h
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

#ifndef MCU_HEADER_MCU_WRITEREGISTER_H_
#define MCU_HEADER_MCU_WRITEREGISTER_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

#pragma CODE_SECTION(MCU__enWriteRegister8Bits_RAM, ".TI.ramfunc")
#pragma CODE_SECTION(MCU__enWriteRegisterDirect8Bits_RAM, ".TI.ramfunc")

#pragma CODE_SECTION(MCU__enWriteRegister32Bits_RAM, ".TI.ramfunc")
#pragma CODE_SECTION(MCU__enWriteRegisterDirect32Bits_RAM, ".TI.ramfunc")

#pragma CODE_SECTION(MCU__enWriteRegister_RAM, ".TI.ramfunc")
#pragma CODE_SECTION(MCU__enWriteRegisterDirect_RAM, ".TI.ramfunc")

MCU_nERROR MCU__enWriteRegister32Bits_RAM(MCU_Register32Bits_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegisterDirect32Bits_RAM(MCU_Register32Bits_t* const pstRegisterDataArg);

MCU_nERROR MCU__enWriteRegister8Bits_RAM(MCU_Register8Bits_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegisterDirect8Bits_RAM(MCU_Register8Bits_t* const pstRegisterDataArg);

MCU_nERROR MCU__enWriteRegister_RAM(MCU_Register_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegisterDirect_RAM(MCU_Register_t* const pstRegisterDataArg);



#pragma CHECK_MISRA("-8.5")

MCU_nERROR MCU__enWriteRegister32Bits(MCU_Register32Bits_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegisterDirect32Bits(MCU_Register32Bits_t* const pstRegisterDataArg);

MCU_nERROR MCU__enWriteRegister8Bits(MCU_Register8Bits_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegisterDirect8Bits(MCU_Register8Bits_t* const pstRegisterDataArg);

MCU_nERROR MCU__enWriteRegister(MCU_Register_t* const pstRegisterDataArg);
MCU_nERROR MCU__enWriteRegisterDirect(MCU_Register_t* const pstRegisterDataArg);
#pragma RESET_MISRA("8.5")


#endif /* MCU_HEADER_MCU_WRITEREGISTER_H_ */
