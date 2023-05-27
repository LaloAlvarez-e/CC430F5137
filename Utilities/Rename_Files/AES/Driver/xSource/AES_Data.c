/**
 *
 * @file AES_Data.c
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
 * @verbatim 7 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/xHeader/AES_Data.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/AES/Driver/Intrinsics/Primitives/AES_Primitives.h>
#include <xDriver_MCU/AES/Peripheral/AES_Peripheral.h>

AES_nERROR AES__enSetDataByte(uint8_t u8Data)
{
    AES_Register8Bits_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) AES_DI_LOW_R_DATA_BIT;
    stRegister.u8Mask = (uint8_t) AES_DI_LOW_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) AES_DI_LOW_OFFSET;
    stRegister.u8Value = (uint8_t) u8Data;
    enErrorReg = AES__enWriteRegister8Bits(&stRegister);

    return (enErrorReg);
}

AES_nERROR AES__enSetDataWord(UBase_t uxData)
{
    AES_Register_t stRegister;
    AES_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) AES_DI_R_DATA_BIT;
    stRegister.uxMask = (UBase_t) AES_DI_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) AES_DI_OFFSET;
    stRegister.uxValue = (UBase_t) uxData;
    enErrorReg = AES__enWriteRegister(&stRegister);

    return (enErrorReg);
}





