/**
 *
 * @file TIMERA_Divider.c
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
 * @verbatim 15 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 15 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/TIMERA/Driver/xHeader/TIMERA_Divider.h>

#include "xDriver_MCU/TIMERA/Driver/Intrinsics/TIMERA_Intrinsics.h"
#include "xDriver_MCU/TIMERA/Peripheral/TIMERA_Peripheral.h"

TIMERA_nERROR TIMERA__enSetClockPredivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_PREDIV enClockPredividerArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_CTL_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enClockPredividerArg;
    pstRegisterData.uxMask = TIMERA_CTL_ID_MASK;
    pstRegisterData.uxShift = TIMERA_CTL_R_ID_BIT;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enSetClockPredividerNum(TIMERA_nMODULE enModuleArg, UBase_t uxClockPredivederArg)
{
    TIMERA_nERROR enErrorReg;
    switch(uxClockPredivederArg)
    {
    case 1U:
        enErrorReg = TIMERA__enSetClockPredivider(enModuleArg, TIMERA_enCLOCK_PREDIV_1);
        break;
    case 2U:
        enErrorReg = TIMERA__enSetClockPredivider(enModuleArg, TIMERA_enCLOCK_PREDIV_2);
        break;
    case 4U:
        enErrorReg = TIMERA__enSetClockPredivider(enModuleArg, TIMERA_enCLOCK_PREDIV_4);
        break;
    case 8U:
        enErrorReg = TIMERA__enSetClockPredivider(enModuleArg, TIMERA_enCLOCK_PREDIV_8);
        break;
    default:
        enErrorReg = TIMERA_enERROR_VALUE;
        break;
    }
    return (enErrorReg);

}

TIMERA_nERROR TIMERA__enGetClockPredivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_PREDIV* penClockPredividerArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penClockPredividerArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_CTL_OFFSET;
        pstRegisterData.uxMask = TIMERA_CTL_ID_MASK;
        pstRegisterData.uxShift = TIMERA_CTL_R_ID_BIT;
        enErrorReg = TIMERA__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penClockPredividerArg = (TIMERA_nCLOCK_PREDIV) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enGetClockPredividerNum(TIMERA_nMODULE enModuleArg, UBase_t* puxClockPredivederArg)
{
    TIMERA_nCLOCK_PREDIV enClockPredividerReg;
    TIMERA_nERROR enErrorReg;

    enClockPredividerReg = TIMERA_enCLOCK_PREDIV_1;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) puxClockPredivederArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetClockPredivider(enModuleArg, &enClockPredividerReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        switch(enClockPredividerReg)
        {
        case TIMERA_enCLOCK_PREDIV_1:
            *puxClockPredivederArg = 1U;
            break;
        case TIMERA_enCLOCK_PREDIV_2:
            *puxClockPredivederArg = 2U;
            break;
        case TIMERA_enCLOCK_PREDIV_4:
            *puxClockPredivederArg = 4U;
            break;
        case TIMERA_enCLOCK_PREDIV_8:
            *puxClockPredivederArg = 8U;
            break;
        default:
            enErrorReg = TIMERA_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enSetClockExdivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_EXDIV enClockExdividerArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    pstRegisterData.uptrAddress = TIMERA_EX0_OFFSET;
    pstRegisterData.uxValue = (UBase_t) enClockExdividerArg;
    pstRegisterData.uxMask = TIMERA_EX0_IDEX_MASK;
    pstRegisterData.uxShift = TIMERA_EX0_R_IDEX_BIT;
    enErrorReg = TIMERA__enWriteRegister(enModuleArg, &pstRegisterData);

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enSetClockExdividerNum(TIMERA_nMODULE enModuleArg, UBase_t enClockExdividerArg)
{
    TIMERA_nERROR enErrorReg;
    switch(enClockExdividerArg)
    {
    case 1U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_1);
        break;
    case 2U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_2);
        break;
    case 3U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_3);
        break;
    case 4U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_4);
        break;
    case 5U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_5);
        break;
    case 6U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_6);
        break;
    case 7U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_7);
        break;
    case 8U:
        enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, TIMERA_enCLOCK_EXDIV_8);
        break;
    default:
        enErrorReg = TIMERA_enERROR_VALUE;
        break;
    }
    return (enErrorReg);

}

TIMERA_nERROR TIMERA__enGetClockExdivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_EXDIV* penClockExdividerArg)
{
    TIMERA_Register_t pstRegisterData;
    TIMERA_nERROR enErrorReg;

    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penClockExdividerArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        pstRegisterData.uptrAddress = TIMERA_EX0_OFFSET;
        pstRegisterData.uxMask = TIMERA_EX0_IDEX_MASK;
        pstRegisterData.uxShift = TIMERA_EX0_R_IDEX_BIT;
        enErrorReg = TIMERA__enReadRegister(enModuleArg, &pstRegisterData);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        *penClockExdividerArg = (TIMERA_nCLOCK_EXDIV) pstRegisterData.uxValue;
    }

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enGetClockExdividerNum(TIMERA_nMODULE enModuleArg, UBase_t* puxClockExdividerArg)
{
    TIMERA_nCLOCK_EXDIV enClockExdividerReg;
    TIMERA_nERROR enErrorReg;

    enClockExdividerReg = TIMERA_enCLOCK_EXDIV_1;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) puxClockExdividerArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetClockExdivider(enModuleArg, &enClockExdividerReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        switch(enClockExdividerReg)
        {
        case TIMERA_enCLOCK_EXDIV_1:
            *puxClockExdividerArg = 1U;
            break;
        case TIMERA_enCLOCK_EXDIV_2:
            *puxClockExdividerArg = 2U;
            break;
        case TIMERA_enCLOCK_EXDIV_3:
            *puxClockExdividerArg = 3U;
            break;
        case TIMERA_enCLOCK_EXDIV_4:
            *puxClockExdividerArg = 4U;
            break;
        case TIMERA_enCLOCK_EXDIV_5:
            *puxClockExdividerArg = 5U;
            break;
        case TIMERA_enCLOCK_EXDIV_6:
            *puxClockExdividerArg = 6U;
            break;
        case TIMERA_enCLOCK_EXDIV_7:
            *puxClockExdividerArg = 7U;
            break;
        case TIMERA_enCLOCK_EXDIV_8:
            *puxClockExdividerArg = 8U;
            break;
        default:
            enErrorReg = TIMERA_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}




TIMERA_nERROR TIMERA__enSetClockDivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_DIV enClockDividerArg)
{
    TIMERA_nCLOCK_EXDIV enClockExdividerReg;
    TIMERA_nCLOCK_PREDIV enClockPredividerReg;
    UBase_t uxClockExdividerReg;
    UBase_t uxClockPredividerReg;
    TIMERA_nERROR enErrorReg;

    uxClockExdividerReg = (UBase_t) enClockDividerArg >> 8U;
    uxClockExdividerReg &= 0xFFU;
    enClockExdividerReg = (TIMERA_nCLOCK_EXDIV) uxClockExdividerReg;

    uxClockPredividerReg = (UBase_t) enClockDividerArg;
    uxClockPredividerReg &= 0xFFU;
    enClockPredividerReg = (TIMERA_nCLOCK_PREDIV) uxClockPredividerReg;

    enErrorReg = TIMERA__enSetClockExdivider(enModuleArg, enClockExdividerReg);
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enSetClockPredivider(enModuleArg, enClockPredividerReg);
    }

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enSetClockDividerNum(TIMERA_nMODULE enModuleArg, UBase_t enClockDividerArg)
{
    TIMERA_nERROR enErrorReg;
    switch(enClockDividerArg)
    {
    case 1U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_1);
        break;
    case 2U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_2);
        break;
    case 3U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_3);
        break;
    case 4U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_4);
        break;
    case 5U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_5);
        break;
    case 6U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_6);
        break;
    case 7U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_7);
        break;
    case 8U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_8);
        break;
    case 10U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_10);
        break;
    case 12U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_12);
        break;
    case 14U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_14);
        break;
    case 16U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_16);
        break;
    case 20U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_20);
        break;
    case 24U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_24);
        break;
    case 28U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_28);
        break;
    case 32U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_32);
        break;
    case 40U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_40);
        break;
    case 48U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_48);
        break;
    case 46U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_56);
        break;
    case 64U:
        enErrorReg = TIMERA__enSetClockDivider(enModuleArg, TIMERA_enCLOCK_DIV_64);
        break;
    default:
        enErrorReg = TIMERA_enERROR_VALUE;
        break;
    }
    return (enErrorReg);

}

TIMERA_nERROR TIMERA__enGetClockDivider(TIMERA_nMODULE enModuleArg, TIMERA_nCLOCK_DIV* penClockDividerArg)
{
    TIMERA_nCLOCK_EXDIV enClockExdividerReg;
    TIMERA_nCLOCK_PREDIV enClockPredividerReg;
    UBase_t uxClockExdividerReg;
    UBase_t uxClockPredividerReg;
    TIMERA_nERROR enErrorReg;

    enClockExdividerReg = TIMERA_enCLOCK_EXDIV_1;
    enClockPredividerReg = TIMERA_enCLOCK_PREDIV_1;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) penClockDividerArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetClockExdivider(enModuleArg, &enClockExdividerReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetClockPredivider(enModuleArg, &enClockPredividerReg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {

        uxClockExdividerReg = (UBase_t) enClockExdividerReg;
        uxClockExdividerReg &= 0xFFU;
        uxClockExdividerReg <<= 8U;

        uxClockPredividerReg = (UBase_t) enClockPredividerReg;
        uxClockPredividerReg &= 0xFFU;
        uxClockPredividerReg <<= 0U;


        *penClockDividerArg = (TIMERA_nCLOCK_DIV) (uxClockExdividerReg | uxClockPredividerReg);
    }

    return (enErrorReg);
}


TIMERA_nERROR TIMERA__enGetClockDividerNum(TIMERA_nMODULE enModuleArg, UBase_t* puxClockDividerArg)
{
    TIMERA_nCLOCK_DIV enClockDividerArg;
    TIMERA_nERROR enErrorReg;

    enClockDividerArg = TIMERA_enCLOCK_DIV_1;
    enErrorReg = TIMERA_enERROR_OK;
    if(0UL == (uintptr_t) puxClockDividerArg)
    {
        enErrorReg = TIMERA_enERROR_POINTER;
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        enErrorReg = TIMERA__enGetClockDivider(enModuleArg, &enClockDividerArg);
    }
    if(TIMERA_enERROR_OK == enErrorReg)
    {
        switch(enClockDividerArg)
        {
        case TIMERA_enCLOCK_DIV_1:
            *puxClockDividerArg = 1U;
            break;
        case TIMERA_enCLOCK_DIV_2:
            *puxClockDividerArg = 2U;
            break;
        case TIMERA_enCLOCK_DIV_3:
            *puxClockDividerArg = 3U;
            break;
        case TIMERA_enCLOCK_DIV_4:
            *puxClockDividerArg = 4U;
            break;
        case TIMERA_enCLOCK_DIV_5:
            *puxClockDividerArg = 5U;
            break;
        case TIMERA_enCLOCK_DIV_6:
            *puxClockDividerArg = 6U;
            break;
        case TIMERA_enCLOCK_DIV_7:
            *puxClockDividerArg = 7U;
            break;
        case TIMERA_enCLOCK_DIV_8:
            *puxClockDividerArg = 8U;
            break;
        case TIMERA_enCLOCK_DIV_10:
            *puxClockDividerArg = 10U;
            break;
        case TIMERA_enCLOCK_DIV_12:
            *puxClockDividerArg = 12U;
            break;
        case TIMERA_enCLOCK_DIV_14:
            *puxClockDividerArg = 14U;
            break;
        case TIMERA_enCLOCK_DIV_16:
            *puxClockDividerArg = 16U;
            break;
        case TIMERA_enCLOCK_DIV_20:
            *puxClockDividerArg = 20U;
            break;
        case TIMERA_enCLOCK_DIV_24:
            *puxClockDividerArg = 24U;
            break;
        case TIMERA_enCLOCK_DIV_28:
            *puxClockDividerArg = 28U;
            break;
        case TIMERA_enCLOCK_DIV_32:
            *puxClockDividerArg = 32U;
            break;
        case TIMERA_enCLOCK_DIV_40:
            *puxClockDividerArg = 40U;
            break;
        case TIMERA_enCLOCK_DIV_48:
            *puxClockDividerArg = 48U;
            break;
        case TIMERA_enCLOCK_DIV_56:
            *puxClockDividerArg = 56U;
            break;
        case TIMERA_enCLOCK_DIV_64:
            *puxClockDividerArg = 64U;
            break;
        default:
            enErrorReg = TIMERA_enERROR_VALUE;
            break;
        }
    }
    return (enErrorReg);
}
