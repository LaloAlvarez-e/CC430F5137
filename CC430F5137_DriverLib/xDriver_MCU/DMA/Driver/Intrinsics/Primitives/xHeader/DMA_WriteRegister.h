/**
 *
 * @file DMA_WriteRegister.h
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

#ifndef XDRIVER_MCU_DMA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DMA_WRITEREGISTER_H_
#define XDRIVER_MCU_DMA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DMA_WRITEREGISTER_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

DMA_nERROR DMA__enWriteRegister32Bits(DMA_Register32Bits_t* pstRegisterDataArg);
DMA_nERROR DMA__enWriteRegister8Bits(DMA_Register8Bits_t* pstRegisterDataArg);
DMA_nERROR DMA__enWriteRegister(DMA_Register_t* pstRegisterDataArg);

DMA_nERROR DMA_CH__enWriteRegister32Bits(DMA_nCH enChannelArg, DMA_Register32Bits_t* pstRegisterDataArg);
DMA_nERROR DMA_CH__enWriteRegister8Bits(DMA_nCH enChannelArg, DMA_Register8Bits_t* pstRegisterDataArg);
DMA_nERROR DMA_CH__enWriteRegister(DMA_nCH enChannelArg, DMA_Register_t* pstRegisterDataArg);

#endif /* XDRIVER_MCU_DMA_DRIVER_INTRINSICS_PRIMITIVES_XHEADER_DMA_WRITEREGISTER_H_ */
