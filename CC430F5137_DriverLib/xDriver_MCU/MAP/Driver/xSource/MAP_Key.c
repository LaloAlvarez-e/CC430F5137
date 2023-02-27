/**
 *
 * @file MAP_Key.c
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
 * @verbatim 13 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/MAP/Driver/xHeader/MAP_Key.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/MAP/Driver/Intrinsics/Primitives/MAP_Primitives.h>
#include <xDriver_MCU/MAP/Peripheral/MAP_Peripheral.h>

MAP_nERROR MAP__enWriteKey(void)
{
    MAP_Register_t stRegister;
    MAP_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) MAP_KEYID_R_KEY_BIT;
    stRegister.uxMask = (UBase_t) MAP_KEYID_KEY_MASK;
    stRegister.uptrAddress = (uintptr_t) MAP_KEYID_OFFSET;
    stRegister.uxValue = (UBase_t) MAP_KEYID_KEY_WRITE;
    enErrorReg = MAP__enWriteRegister(&stRegister);

    return (enErrorReg);
}

MAP_nERROR MAP__enReadKey(MAP_nKEY* penKeyArg)
{
    MAP_Register_t stRegister;
    MAP_nERROR enErrorReg;

    enErrorReg = MAP_enERROR_OK;
    if(0U == (uintptr_t) penKeyArg)
    {
        enErrorReg = MAP_enERROR_POINTER;
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) MAP_KEYID_R_KEY_BIT;
        stRegister.uxMask = (UBase_t) MAP_KEYID_KEY_MASK;
        stRegister.uptrAddress = (uintptr_t) MAP_KEYID_OFFSET;
        enErrorReg = MAP__enReadRegister(&stRegister);
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        *penKeyArg = (MAP_nKEY) stRegister.uxValue;
    }

    return (enErrorReg);
}





