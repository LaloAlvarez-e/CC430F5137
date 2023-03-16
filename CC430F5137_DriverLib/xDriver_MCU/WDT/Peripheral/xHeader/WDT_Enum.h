/**
 *
 * @file WDT_Enum.h
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

#ifndef WDT_PERIPHERAL_HEADER_WDT_ENUM_H_
#define WDT_PERIPHERAL_HEADER_WDT_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    WDT_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    WDT_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    WDT_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    WDT_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    WDT_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    WDT_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}WDT_nERROR;

typedef enum
{
    WDT_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    WDT_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    WDT_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
}WDT_nSTATE;

typedef enum
{
    WDT_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    WDT_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    WDT_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
}WDT_nSTATUS;

typedef enum
{
    WDT_enFALSE = (UBase_t) FALSE,
    WDT_enTRUE = (UBase_t) TRUE,
    WDT_enBOOLEAN_UNDEF = UNDEF_VALUE,
}WDT_nBOOLEAN;

typedef enum
{
    WDT_enMODULE_0 = 0U,
    WDT_enMODULE_MAX = 1U,
    WDT_enMODULE_UNDEF = UNDEF_VALUE,
}WDT_nMODULE;

typedef enum
{
    WDT_enINT_TIMEOUT = 0U,
    WDT_enINT_PASSWORD = 1U,
    WDT_enINT_INTERVAL = 2U,
    WDT_enINT_MAX = 3U,
    WDT_enINT_UNDEF = UNDEF_VALUE,
}WDT_nINT;

typedef enum
{
    WDT_enMODE_WDT = 0U,
    WDT_enMODE_INTERVAL = 1U,
    WDT_enMODE_UNDEF = UNDEF_VALUE,
}WDT_nMODE;

typedef enum
{
    WDT_enCLOCK_SMCLK = 0U,
    WDT_enCLOCK_ACLK = 1U,
    WDT_enCLOCK_VLOCLK = 2U,
    WDT_enCLOCK_UNDEF = UNDEF_VALUE,
}WDT_nCLOCK;

typedef enum
{
    WDT_enINTERVAL_2147483648 = 0U,
    WDT_enINTERVAL_134217728 = 1U,
    WDT_enINTERVAL_8388608= 2U,
    WDT_enINTERVAL_524288 = 3U,
    WDT_enINTERVAL_32768 = 4U,
    WDT_enINTERVAL_8192 = 5U,
    WDT_enINTERVAL_512 = 6U,
    WDT_enINTERVAL_64 = 7U,
    WDT_enINTERVAL_MAX = 8U,
}WDT_nINTERVAL;


typedef MCU_pvfIRQVectorHandler_t WDT_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t WDT_puxfIRQSourceHandler_t;

typedef MCU_Register_t WDT_Register_t;

typedef struct
{
    WDT_nSTATE enEnable;
    WDT_nMODE enMode;
    WDT_nCLOCK enClock;
    WDT_nINTERVAL enInterval;
}WDT_Config_t;

typedef struct
{
    WDT_Config_t stConfig;
    WDT_nSTATE enInterruptEnable;
    WDT_nSTATUS enInterruptStatus;
}WDT_ConfigExt_t;

#endif /* WDT_PERIPHERAL_HEADER_WDT_ENUM_H_ */
