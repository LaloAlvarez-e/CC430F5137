/**
 *
 * @file MAP_Enum.h
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

#ifndef XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_ENUM_H_
#define XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    MAP_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    MAP_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    MAP_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    MAP_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    MAP_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    MAP_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}MAP_nERROR;

typedef enum
{
    MAP_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    MAP_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    MAP_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
} MAP_nSTATE;

typedef enum
{
    MAP_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    MAP_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    MAP_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
} MAP_nSTATUS;

typedef enum
{
    MAP_enFALSE = (UBase_t) FALSE,
    MAP_enTRUE = (UBase_t) TRUE,
    MAP_enPENDSTATE_UNDEF = UNDEF_VALUE,
}MAP_nBOOLEAN;

typedef enum
{
    MAP_enMODULE_1 = 0U,
    MAP_enMODULE_2 = 1U,
    MAP_enMODULE_3 = 2U,
    MAP_enMODULE_MAX = 3U,
    MAP_enMODULE_UNDEF = UNDEF_VALUE,
}MAP_nMODULE;

typedef enum
{
    MAP_enPIN_0 = 0U,
    MAP_enPIN_1 = 1U,
    MAP_enPIN_2 = 2U,
    MAP_enPIN_3 = 3U,
    MAP_enPIN_4 = 4U,
    MAP_enPIN_5 = 5U,
    MAP_enPIN_6 = 6U,
    MAP_enPIN_7 = 7U,
    MAP_enPIN_MAX = 8U,
    MAP_enPIN_MAX_UNDEF = UNDEF_VALUE,
}MAP_nPIN;

typedef enum
{
    MAP_enPINMASK_NONE = 0x00U,
    MAP_enPINMASK_0 = 0x01U,
    MAP_enPINMASK_1 = 0x02U,
    MAP_enPINMASK_2 = 0x04U,
    MAP_enPINMASK_3 = 0x08U,
    MAP_enPINMASK_4 = 0x10U,
    MAP_enPINMASK_5 = 0x20U,
    MAP_enPINMASK_6 = 0x40U,
    MAP_enPINMASK_7 = 0x80U,
    MAP_enPINMASK_ALL = 0xFFU,
    MAP_enPINMASK_MAX = 0x100U,
    MAP_enPINMASK_UNDEF = UNDEF_VALUE,
}MAP_nPINMASK;

typedef enum
{
    MAP_enFUNCTION_NONE = 0U,
    MAP_enFUNCTION_COMPB_OUT0 = 1U,
    MAP_enFUNCTION_TA0_CLK = 1U,
    MAP_enFUNCTION_COMPB_OUT1 = 2U,
    MAP_enFUNCTION_TA1_CLK = 2U,
    MAP_enFUNCTION_A_CLK = 3U,
    MAP_enFUNCTION_M_CLK = 4U,
    MAP_enFUNCTION_SM_CLK = 5U,
    MAP_enFUNCTION_RTC_CLK = 6U,
    MAP_enFUNCTION_ADC12_CLK = 7U,
    MAP_enFUNCTION_DMAE0 = 7U,
    MAP_enFUNCTION_SVM_OUT = 8U,
    MAP_enFUNCTION_TA0_CCR0 = 9U,
    MAP_enFUNCTION_TA0_CCR1 = 10U,
    MAP_enFUNCTION_TA0_CCR2 = 11U,
    MAP_enFUNCTION_TA0_CCR3 = 12U,
    MAP_enFUNCTION_TA0_CCR4 = 13U,
    MAP_enFUNCTION_TA1_CCR0 = 14U,
    MAP_enFUNCTION_TA1_CCR1 = 15U,
    MAP_enFUNCTION_TA1_CCR2 = 16U,
    MAP_enFUNCTION_UCA0_RX = 17U,
    MAP_enFUNCTION_UCA0_MISO = 17U,
    MAP_enFUNCTION_UCA0_TX = 18U,
    MAP_enFUNCTION_UCA0_MOSI = 18U,
    MAP_enFUNCTION_UCA0_CLK = 19U,
    MAP_enFUNCTION_UCB0_STE = 19U,
    MAP_enFUNCTION_UCB0_MISO = 20U,
    MAP_enFUNCTION_UCB0_SCL = 20U,
    MAP_enFUNCTION_UCB0_MOSI = 21U,
    MAP_enFUNCTION_UCB0_SDA = 21U,
    MAP_enFUNCTION_UCB0_CLK = 22U,
    MAP_enFUNCTION_UCA0_STE = 22U,
    MAP_enFUNCTION_RF_GDO0 = 23U,
    MAP_enFUNCTION_RF_GDO1 = 24U,
    MAP_enFUNCTION_RF_GDO2 = 25U,
    MAP_enFUNCTION_ANALOG = 0xFFU,
    MAP_enFUNCTION_MAX = 0x100U,
    MAP_enMODE_UNDEF = UNDEF_VALUE,
}MAP_nFUNCTION;

typedef enum
{
    MAP_enKEY_WRITE = 0x2D52UL,
    MAP_enKEY_READ = 0x96A5UL,
}MAP_nKEY;

typedef MCU_Register8Bits_t MAP_Register8Bits_t;
typedef MCU_Register_t MAP_Register_t;


#endif /* XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_ENUM_H_ */
