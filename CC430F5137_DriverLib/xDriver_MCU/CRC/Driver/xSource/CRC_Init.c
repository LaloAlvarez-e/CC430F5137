/**
 *
 * @file CRC_Init.c
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
#include <xDriver_MCU/CRC/Driver/xHeader/CRC_Init.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/CRC/Driver/Intrinsics/Primitives/CRC_Primitives.h>
#include <xDriver_MCU/CRC/Peripheral/CRC_Peripheral.h>


CRC_nERROR CRC__enSetInitData(CRC_nMODULE enModuleArg, UBase_t uxData)
{
    CRC_Register_t stRegister;
    CRC_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) CRC_INI_R_INIT_BIT;
    stRegister.uxMask = (UBase_t) CRC_INI_INIT_MASK;
    stRegister.uptrAddress = (uintptr_t) CRC_INI_OFFSET;
    stRegister.uxValue = (UBase_t) uxData;
    enErrorReg = CRC__enWriteRegister(enModuleArg, &stRegister);

    return (enErrorReg);
}





