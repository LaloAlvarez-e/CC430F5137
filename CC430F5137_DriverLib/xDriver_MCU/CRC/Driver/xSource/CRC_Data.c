/**
 *
 * @file CRC_Data.c
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
#include <xDriver_MCU/CRC/Driver/xHeader/CRC_Data.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CRC/Driver/Intrinsics/Primitives/CRC_Primitives.h>
#include <xDriver_MCU/CRC/Peripheral/CRC_Peripheral.h>

CRC_nERROR CRC__enSetDataByte(uint8_t u8Data)
{
    CRC_Register8Bits_t stRegister;
    CRC_nERROR enErrorReg;

    stRegister.u8Shift = (uint8_t) CRC_DI_LOW_R_DATA_BIT;
    stRegister.u8Mask = (uint8_t) CRC_DI_LOW_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) CRC_DI_LOW_OFFSET;
    stRegister.u8Value = (uint8_t) u8Data;
    enErrorReg = CRC__enWriteRegister8Bits(&stRegister);

    return (enErrorReg);
}

CRC_nERROR CRC__enSetDataWord(UBase_t uxData)
{
    CRC_Register_t stRegister;
    CRC_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) CRC_DI_R_DATA_BIT;
    stRegister.uxMask = (UBase_t) CRC_DI_DATA_MASK;
    stRegister.uptrAddress = (uintptr_t) CRC_DI_OFFSET;
    stRegister.uxValue = (UBase_t) uxData;
    enErrorReg = CRC__enWriteRegister(&stRegister);

    return (enErrorReg);
}





