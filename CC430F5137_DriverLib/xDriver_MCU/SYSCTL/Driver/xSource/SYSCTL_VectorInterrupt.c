/**
 *
 * @file SYSCTL_VectorInterrupt.c
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
 * @verbatim 20 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/SYSCTL/Driver/xHeader/SYSCTL_VectorInterrupt.h>

#include <xDriver_MCU/MCU/MCU.h>
#include <xDriver_MCU/SYSCTL/Driver/Intrinsics/Primitives/SYSCTL_Primitives.h>
#include <xDriver_MCU/SYSCTL/Peripheral/SYSCTL_Peripheral.h>

SYSCTL_nERROR SYSCTL__enSetVectorInterrupt(SYSCTL_nVECTOR enVectorArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    stRegister.uxShift = SYSCTL_CTL_R_RIVECT_BIT;
    stRegister.uxMask = SYSCTL_CTL_RIVECT_MASK;
    stRegister.uptrAddress = SYSCTL_CTL_OFFSET;
    stRegister.uxValue = (UBase_t) enVectorArg;
    enErrorReg = SYSCTL__enWriteRegister(&stRegister);

    return (enErrorReg);
}


SYSCTL_nERROR SYSCTL__enGetVectorInterrupt(SYSCTL_nVECTOR* penVectorArg)
{
    SYSCTL_Register_t stRegister;
    SYSCTL_nERROR enErrorReg;

    enErrorReg = SYSCTL_enERROR_OK;
    if(0U == (uintptr_t) penVectorArg)
    {
        enErrorReg = SYSCTL_enERROR_POINTER;
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        stRegister.uxShift = SYSCTL_CTL_R_RIVECT_BIT;
        stRegister.uxMask = SYSCTL_CTL_RIVECT_MASK;
        stRegister.uptrAddress = SYSCTL_CTL_OFFSET;
        enErrorReg = SYSCTL__enReadRegister(&stRegister);
    }
    if(SYSCTL_enERROR_OK == enErrorReg)
    {
        *penVectorArg = (SYSCTL_nVECTOR) stRegister.uxValue;
    }

    return (enErrorReg);
}


