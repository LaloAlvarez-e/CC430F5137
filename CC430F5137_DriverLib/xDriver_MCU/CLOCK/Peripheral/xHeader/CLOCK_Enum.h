/**
 *
 * @file CLOCK_Enum.h
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
 * @verbatim 9 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_ENUM_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    CLOCK_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    CLOCK_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    CLOCK_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    CLOCK_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    CLOCK_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    CLOCK_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}CLOCK_nERROR;

typedef enum
{
    CLOCK_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    CLOCK_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    CLOCK_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} CLOCK_nSTATE;

typedef enum
{
    CLOCK_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    CLOCK_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    CLOCK_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} CLOCK_nSTATUS;

typedef enum
{
    CLOCK_enFALSE = (UBase_t) FALSE,
    CLOCK_enTRUE = (UBase_t) TRUE,
    CLOCK_enPENDSTATE_UNDEF = UNDEF_VALUE,
}CLOCK_nBOOLEAN;

typedef enum
{
    CLOCK_enDCO_RANGE_1_70MHZ = 0U,
    CLOCK_enDCO_RANGE_3_45MHZ = 1U,
    CLOCK_enDCO_RANGE_7_38MHZ = 2U,
    CLOCK_enDCO_RANGE_14_0MHZ = 3U,
    CLOCK_enDCO_RANGE_28_2MHZ = 4U,
    CLOCK_enDCO_RANGE_MAX = 5U,
    CLOCK_enDCO_RANGE_UNDEF = UNDEF_VALUE,
}CLOCK_nDCO_RANGE;

typedef enum
{
    CLOCK_enFLL_REFDIVIDER_1 = 0U,
    CLOCK_enFLL_REFDIVIDER_2 = 1U,
    CLOCK_enFLL_REFDIVIDER_4 = 2U,
    CLOCK_enFLL_REFDIVIDER_8 = 3U,
    CLOCK_enFLL_REFDIVIDER_12 = 4U,
    CLOCK_enFLL_REFDIVIDER_16 = 5U,
    CLOCK_enFLL_REFDIVIDER_MAX = 6U,
    CLOCK_enFLL_REFDIVIDER_UNDEF = UNDEF_VALUE,
}CLOCK_nFLL_REFDIVIDER;

typedef enum
{
    CLOCK_enFLL_MULTI_LOOP_1 = 0U,
    CLOCK_enFLL_MULTI_LOOP_2 = 1U,
    CLOCK_enFLL_MULTI_LOOP_4 = 2U,
    CLOCK_enFLL_MULTI_LOOP_8 = 3U,
    CLOCK_enFLL_MULTI_LOOP_16 = 4U,
    CLOCK_enFLL_MULTI_LOOP_32 = 5U,
    CLOCK_enFLL_MULTI_LOOP_MAX = 6U,
    CLOCK_enFLL_MULTI_LOOP_UNDEF = UNDEF_VALUE,
}CLOCK_nFLL_MULTI_LOOP;

typedef enum
{
    CLOCK_enINT_DCO_FAULT = 0U,
    CLOCK_enINT_XT1_LF_FAULT = 1U,
    CLOCK_enINT_MAX = 2U,
    CLOCK_enINT_UNDEF = UNDEF_VALUE,
}CLOCK_nINT;

typedef enum
{
    CLOCK_enSIGNAL_ACLK = 0U,
    CLOCK_enSIGNAL_SMCLK = 1U,
    CLOCK_enSIGNAL_MCLK = 2U,
    CLOCK_enSIGNAL_UNDEF = UNDEF_VALUE,
}CLOCK_nSIGNAL;

typedef enum
{
    CLOCK_enFLL_REFERENCE_XT1 = 0U,
    CLOCK_enFLL_REFERENCE_REFO = 2U,
    CLOCK_enFLL_REFERENCE_NONE = 7U,
    CLOCK_enFLL_REFERENCE_UNDEF = UNDEF_VALUE,
}CLOCK_nFLL_REFERENCE;

typedef enum
{
    CLOCK_enSOURCE_XT1 = 0U,
    CLOCK_enSOURCE_VLO = 1U,
    CLOCK_enSOURCE_REFO = 2U,
    CLOCK_enSOURCE_FLL = 3U,
    CLOCK_enSOURCE_FLL_DIV = 4U,
    CLOCK_enSOURCE_FLL_UNDEF = UNDEF_VALUE,
}CLOCK_nSOURCE;

typedef enum
{
    CLOCK_enXT1_SOURCE_CRYSTAL = 0U,
    CLOCK_enXT1_SOURCE_SIGNAL = 1U,
    CLOCK_enXT1_SOURCE_UNDEF = UNDEF_VALUE,
}CLOCK_nXT1_SOURCE;

typedef enum
{
    CLOCK_enXT1_MODE_LOWFREQ = 0U,
    CLOCK_enXT1_MODE_HIGHFREQ = 1U,
    CLOCK_enXT1_MODE_UNDEF = UNDEF_VALUE,
}CLOCK_nXT1_MODE;

typedef enum
{
    CLOCK_enXT1_CAP_2_0PF = 0U,
    CLOCK_enXT1_CAP_5_5PF = 1U,
    CLOCK_enXT1_CAP_8_5PF = 2U,
    CLOCK_enXT1_CAP_12_0PF = 3U,
    CLOCK_enXT1_CAP_UNDEF = UNDEF_VALUE,
}CLOCK_nXT1_CAP;

typedef enum
{
    CLOCK_enDIVIDER_1 = 0U,
    CLOCK_enDIVIDER_2 = 1U,
    CLOCK_enDIVIDER_4 = 2U,
    CLOCK_enDIVIDER_8 = 3U,
    CLOCK_enDIVIDER_16 = 4U,
    CLOCK_enDIVIDER_32 = 5U,
    CLOCK_enDIVIDER_MAX = 6U,
    CLOCK_enDIVIDER_UNDEF = UNDEF_VALUE,
}CLOCK_nDIVIDER;


typedef MCU_Register_t CLOCK_Register_t;
typedef MCU_pvfIRQVectorHandler_t CLOCK_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t CLOCK_puxfIRQSourceHandler_t;


#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_ENUM_H_ */
