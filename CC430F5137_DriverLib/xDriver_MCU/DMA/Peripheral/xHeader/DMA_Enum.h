/**
 *
 * @file DMA_Enum.h
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DMA_PERIPHERAL_HEADER_DMA_ENUM_H_
#define DMA_PERIPHERAL_HEADER_DMA_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    DMA_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    DMA_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    DMA_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    DMA_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    DMA_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    DMA_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}DMA_nERROR;

typedef enum
{
    DMA_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    DMA_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    DMA_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
}DMA_nSTATE;

typedef enum
{
    DMA_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    DMA_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    DMA_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
}DMA_nSTATUS;

typedef enum
{
    DMA_enFALSE = (UBase_t) FALSE,
    DMA_enTRUE = (UBase_t) TRUE,
    DMA_enPENDSTATE_UNDEF = UNDEF_VALUE,
}DMA_nBOOLEAN;

typedef enum
{
    DMA_enCH0 = 0U,
    DMA_enCH1 = 1U,
    DMA_enCH2 = 2U,
    DMA_enCH_MAX = 3U,
    DMA_enCH_UNDEF = UNDEF_VALUE,
}DMA_nCH;

typedef enum
{
    DMA_enFETCH_IMMEDIATE = 0U,
    DMA_enFETCH_NEXT = 1U,
}DMA_nFETCH;

typedef enum
{
    DMA_enPRIORITY_STATIC = 0U,
    DMA_enPRIORITY_ROUND_ROBIN = 1U,
}DMA_nPRIORITY;


typedef enum
{
    DMA_enTRIGGER_SW = 0U,
    DMA_enTRIGGER_TA0CCR0 = 1U,
    DMA_enTRIGGER_TA0CCR2 = 2U,
    DMA_enTRIGGER_TA2CCR0 = 3U,
    DMA_enTRIGGER_TA2CCR2 = 4U,
    DMA_enTRIGGER_RESERVED0 = 5U,
    DMA_enTRIGGER_RESERVED1 = 6U,
    DMA_enTRIGGER_RESERVED2 = 7U,
    DMA_enTRIGGER_RESERVED3 = 8U,
    DMA_enTRIGGER_RESERVED4 = 9U,
    DMA_enTRIGGER_RESERVED5 = 10U,
    DMA_enTRIGGER_RESERVED6 = 11U,
    DMA_enTRIGGER_RESERVED7 = 12U,
    DMA_enTRIGGER_RESERVED8 = 13U,
    DMA_enTRIGGER_RESERVED9 = 14U,
    DMA_enTRIGGER_RESERVED10 = 15U,
    DMA_enTRIGGER_UCA0_RX = 16U,
    DMA_enTRIGGER_UCA0_TX = 17U,
    DMA_enTRIGGER_UCB0_RX = 18U,
    DMA_enTRIGGER_UCB0_TX = 19U,
    DMA_enTRIGGER_RESERVED11 = 20U,
    DMA_enTRIGGER_RESERVED12 = 21U,
    DMA_enTRIGGER_RESERVED13 = 22U,
    DMA_enTRIGGER_RESERVED14 = 23U,
    DMA_enTRIGGER_ADC12x = 24U,
    DMA_enTRIGGER_RESERVED15 = 25U,
    DMA_enTRIGGER_RESERVED16 = 26U,
    DMA_enTRIGGER_RESERVED17 = 27U,
    DMA_enTRIGGER_RESERVED18 = 28U,
    DMA_enTRIGGER_MPY = 29U,
    DMA_enTRIGGER_DMA = 30U,
    DMA_enTRIGGER_EXTERNAL = 31U,
    DMA_enTRIGGER_MAX = 32U,
}DMA_nTRIGGER;

typedef enum
{
    DMA_enMODE_SINGLE = 0U,
    DMA_enMODE_BLOCK = 1U,
    DMA_enMODE_BLOCK_BURST = 2U,
    DMA_enMODE_BLOCK_BURST1 = 3U,
    DMA_enMODE_REPEAT_SINGLE = 4U,
    DMA_enMODE_REPEAT_BLOCK = 5U,
    DMA_enMODE_REPEAT_BLOCK_BURST = 6U,
    DMA_enMODE_REPEAT_BLOCK_BURST1 = 7U,
    DMA_enMODE_MAX = 8U,
}DMA_nMODE;

typedef enum
{
    DMA_enINCMODE_UNCHANGED = 0U,
    DMA_enINCMODE_UNCHANGED1 = 1U,
    DMA_enINCMODE_DECREMENT = 2U,
    DMA_enINCMODE_INCREMENT = 3U,
    DMA_enINCMODE_MAX = 4U,
}DMA_nINCMODE;

typedef enum
{
    DMA_enDATASIZE_WORD = 0U,
    DMA_enDATASIZE_BYTE = 1U,
    DMA_enDATASIZE_MAX = 2U,
}DMA_nDATASIZE;

typedef enum
{
    DMA_enSENSE_EDGE = 0U,
    DMA_enSENSE_LEVEL = 1U,
    DMA_enSENSE_MAX = 2U,
}DMA_nSENSE;

typedef MCU_pvfIRQVectorHandler_t DMA_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t DMA_puxfIRQSourceHandler_t;

typedef MCU_Register_t DMA_Register_t;
typedef MCU_Register8Bits_t DMA_Register8Bits_t;
typedef MCU_Register32Bits_t DMA_Register32Bits_t;

typedef struct
{
    DMA_nSTATE enNmiStop;
    DMA_nPRIORITY enPriorityMode;
    DMA_nFETCH enFetchMode;
}DMA_Config_t;

typedef struct
{
    UBase_t uxTranferSize;
    uintptr_t uptrSourceAddress;
    uintptr_t uptrDestAddress;
    DMA_nTRIGGER enTrigger;
    DMA_nMODE enTransferMode;
    DMA_nINCMODE enSourceIncMode;
    DMA_nINCMODE enDestIncMode;
    DMA_nDATASIZE enSourceDataSize;
    DMA_nDATASIZE enDestDataSize;
    DMA_nSENSE enSense;
    DMA_nSTATE enEnable;
    DMA_nBOOLEAN enAbort;
}DMA_CH_Config_t;

typedef struct
{
    DMA_CH_Config_t stConfig;
    DMA_nSTATE enInterruptEnable;
    DMA_nSTATUS enInterruptStatus;
}DMA_CH_ConfigExt_t;

#endif /* DMA_PERIPHERAL_HEADER_DMA_ENUM_H_ */
