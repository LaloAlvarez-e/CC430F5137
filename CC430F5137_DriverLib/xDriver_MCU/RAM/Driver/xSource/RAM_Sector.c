/**
 *
 * @file RAM_Sector.c
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
 * @verbatim 16 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 16 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/RAM/Driver/xHeader/RAM_Sector.h>

#include "xDriver_MCU/RAM/Driver/Intrinsics/RAM_Intrinsics.h"
#include "xDriver_MCU/RAM/Peripheral/RAM_Peripheral.h"
#include <xDriver_MCU/MCU/MCU.h>

RAM_nERROR RAM__enSetSectorState(UBase_t uxSectorArg, RAM_nSTATE enStateArg)
{
    RAM_Register_t pstRegisterData;
    RAM_nERROR enErrorReg;
    UBase_t uxValue;

    enErrorReg = (RAM_nERROR) MCU__enCheckParams(uxSectorArg, (UBase_t) RAM_enSECTOR_MAX) ;
    if(RAM_enERROR_OK == enErrorReg)
    {
        if(RAM_enSTATE_DIS == enStateArg)
        {
            uxValue = (UBase_t) uxSectorArg;
        }
        else
        {
            uxValue = 0U;
        }
        uxValue |= RAM_CTL0_R_KEY_WRITE;

        pstRegisterData.uptrAddress = RAM_CTL0_OFFSET;
        pstRegisterData.uxValue = (UBase_t) uxValue;
        pstRegisterData.uxMask = RAM_CTL0_R_KEY_MASK | uxSectorArg;
        pstRegisterData.uxShift = 0U;
        enErrorReg = RAM__enWriteRegister(&pstRegisterData);
    }

    return (enErrorReg);
}


