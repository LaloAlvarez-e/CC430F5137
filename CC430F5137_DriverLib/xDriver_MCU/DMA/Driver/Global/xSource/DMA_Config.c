/**
 *
 * @file DMA_Config.c
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
 * @verbatim 27 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/DMA/Driver/Global/xHeader/DMA_Config.h>


#include <xDriver_MCU/DMA/Driver/Global/xHeader/DMA_NMI.h>
#include <xDriver_MCU/DMA/Driver/Global/xHeader/DMA_Fetch.h>
#include <xDriver_MCU/DMA/Driver/Global/xHeader/DMA_Priority.h>

#include "xDriver_MCU/DMA/Driver/Intrinsics/DMA_Intrinsics.h"
#include "xDriver_MCU/DMA/Peripheral/DMA_Peripheral.h"

DMA_nERROR DMA__enSetConfig(DMA_Config_t* pstConfigArg)
{
    DMA_CTL4_t stConfigReg = {0};
    DMA_Register_t pstRegisterData;
    DMA_nERROR enErrorReg;

    enErrorReg = DMA_enERROR_OK;
    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        stConfigReg.DMA_RM_WDIS = (UBase_t) pstConfigArg->enFetchMode;
        stConfigReg.EN_NMI = (UBase_t) pstConfigArg->enNmiStop;
        stConfigReg.ROUND_ROBIN = (UBase_t) pstConfigArg->enPriorityMode;

        pstRegisterData.uptrAddress = DMA_CTL4_OFFSET;
        pstRegisterData.uxValue = (*(UBase_t*) &stConfigReg);
        pstRegisterData.uxMask = MCU_MASK_BASE;
        pstRegisterData.uxShift = 0U;
        enErrorReg = DMA__enWriteRegister(&pstRegisterData);
    }
    return (enErrorReg);
}


DMA_nERROR DMA__enGetConfig(DMA_Config_t* pstConfigArg)
{
    DMA_nERROR enErrorReg;
    DMA_nFETCH* enFetchMode;
    DMA_nSTATE* enNmiStop;
    DMA_nPRIORITY* enPriorityMode;

    enErrorReg = DMA_enERROR_OK;
    enFetchMode = 0U;
    enNmiStop = 0U;
    enPriorityMode = 0U;

    if(0UL == (uintptr_t) pstConfigArg)
    {
        enErrorReg = DMA_enERROR_POINTER;
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enFetchMode = &(pstConfigArg->enFetchMode);
        enErrorReg = DMA__enGetFetchMode(enFetchMode);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enNmiStop = &(pstConfigArg->enNmiStop);
        enErrorReg = DMA__enGetNMITranferStop(enNmiStop);
    }
    if(DMA_enERROR_OK == enErrorReg)
    {
        enPriorityMode = &(pstConfigArg->enPriorityMode);
        enErrorReg = DMA__enGetPriorityMode(enPriorityMode);
    }
    return (enErrorReg);
}



