/**
 *
 * @file MAP_Reconfig.c
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
#include <xDriver_MCU/MAP/Driver/xHeader/MAP_Reconfig.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/MAP/Driver/Intrinsics/Primitives/MAP_Primitives.h>
#include <xDriver_MCU/MAP/Peripheral/MAP_Peripheral.h>

MAP_nERROR MAP__enSetReconfig(MAP_nSTATE enReconfigArg)
{
    MAP_Register_t stRegister;
    MAP_nERROR enErrorReg;

    stRegister.uxShift = (UBase_t) MAP_CTL_R_RECFG_BIT;
    stRegister.uxMask = (UBase_t) MAP_CTL_RECFG_MASK;
    stRegister.uptrAddress = (uintptr_t) MAP_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enReconfigArg;
    enErrorReg = MAP__enWriteRegister(&stRegister);

    return (enErrorReg);
}

MAP_nERROR MAP__enGetReconfig(MAP_nSTATE* penReconfigArg)
{
    MAP_Register_t stRegister;
    MAP_nERROR enErrorReg;

    enErrorReg = MAP_enERROR_OK;
    if(0U == (uintptr_t) penReconfigArg)
    {
        enErrorReg = MAP_enERROR_POINTER;
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = (UBase_t) MAP_CTL_R_RECFG_BIT;
        stRegister.uxMask = (UBase_t) MAP_CTL_RECFG_MASK;
        stRegister.uptrAddress = (uintptr_t) MAP_CTL_OFFSET;
        enErrorReg = MAP__enReadRegister(&stRegister);
    }
    if(MAP_enERROR_OK == enErrorReg)
    {
        *penReconfigArg = (MAP_nSTATE) stRegister.uxValue;
    }

    return (enErrorReg);
}





