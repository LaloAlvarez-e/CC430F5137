/**
 *
 * @file TIMERA_Enum.h
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

#ifndef TIMERA_PERIPHERAL_HEADER_TIMERA_ENUM_H_
#define TIMERA_PERIPHERAL_HEADER_TIMERA_ENUM_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

typedef enum
{
    TIMERA_enERROR_OK = (UBase_t) MCU_enERROR_OK,
    TIMERA_enERROR_POINTER = (UBase_t) MCU_enERROR_POINTER,
    TIMERA_enERROR_VALUE = (UBase_t) MCU_enERROR_VALUE,
    TIMERA_enERROR_RANGE = (UBase_t) MCU_enERROR_RANGE,
    TIMERA_enERROR_EMPTY = (UBase_t) MCU_enERROR_EMPTY,
    TIMERA_enERROR_UNDEF = (UBase_t) MCU_enERROR_UNDEF,
}TIMERA_nERROR;

typedef enum
{
    TIMERA_enSTATE_DIS = (UBase_t) MCU_enSTATE_DIS,
    TIMERA_enSTATE_ENA = (UBase_t) MCU_enSTATE_ENA,
    TIMERA_enSTATE_UNDEF = (UBase_t) MCU_enSTATE_UNDEF,
}TIMERA_nSTATE;

typedef enum
{
    TIMERA_enSTATUS_INACTIVE = (UBase_t) MCU_enSTATUS_INACTIVE,
    TIMERA_enSTATUS_ACTIVE = (UBase_t) MCU_enSTATUS_ACTIVE,
    TIMERA_enSTATUS_UNDEF = (UBase_t) MCU_enSTATUS_UNDEF,
}TIMERA_nSTATUS;

typedef enum
{
    TIMERA_enFALSE = (UBase_t) FALSE,
    TIMERA_enTRUE = (UBase_t) TRUE,
    TIMERA_enBOOLEAN_UNDEF = UNDEF_VALUE,
}TIMERA_nBOOLEAN;

typedef enum
{
    TIMERA_enMODULE_0 = 0U,
    TIMERA_enMODULE_1 = 1U,
    TIMERA_enMODULE_MAX = 2U,
    TIMERA_enMODULE_UNDEF = UNDEF_VALUE,
}TIMERA_nMODULE;


typedef enum
{
    TIMERA_enCC_0 = 0U,
    TIMERA_enCC_1 = 1U,
    TIMERA_enCC_2 = 2U,
    TIMERA_enCC_3 = 3U,
    TIMERA_enCC_4 = 4U,
    TIMERA_enCC_MAX = 5U,
    TIMERA_enCC_UNDEF = UNDEF_VALUE,
}TIMERA_nCC;


typedef enum
{
    TIMERA_enCC_MODE_COMPARE = 0U,
    TIMERA_enCC_MODE_CAPTURE = 1U,
    TIMERA_enCC_MODE_MAX = 2U,
    TIMERA_enCC_MODE_UNDEF = UNDEF_VALUE,
}TIMERA_nCC_MODE;

typedef enum
{
    TIMERA_enCC_CAPTUREMODE_NONE = 0U,
    TIMERA_enCC_CAPTUREMODE_RISING = 1U,
    TIMERA_enCC_CAPTUREMODE_FALLING = 2U,
    TIMERA_enCC_CAPTUREMODE_BOTH = 3U,
    TIMERA_enCC_CAPTUREMODE_UNDEF = UNDEF_VALUE,
}TIMERA_nCC_CAPTUREMODE;

typedef enum
{
    TIMERA_enCC_CAPTUREINPUT_A = 0U,
    TIMERA_enCC_CAPTUREINPUT_B = 1U,
    TIMERA_enCC_CAPTUREINPUT_GND = 2U,
    TIMERA_enCC_CAPTUREINPUT_VCC = 3U,
    TIMERA_enCC_CAPTUREINPUT_UNDEF = UNDEF_VALUE,
}TIMERA_nCC_CAPTUREINPUT;

typedef enum
{
    TIMERA_enCC_CAPTURESYNC_ASYNC = 0U,
    TIMERA_enCC_CAPTURESYNC_SYNC = 1U,
    TIMERA_enCC_CAPTURESYNC_UNDEF = UNDEF_VALUE,
}TIMERA_nCC_CAPTURESYNC;

typedef enum
{
    TIMERA_enCC_COMPAREMODE_OUT = 0U,
    TIMERA_enCC_COMPAREMODE_SET = 1U,
    TIMERA_enCC_COMPAREMODE_TOGGLE_RESET = 2U,
    TIMERA_enCC_COMPAREMODE_SET_RESET = 3U,
    TIMERA_enCC_COMPAREMODE_TOGGLE = 4U,
    TIMERA_enCC_COMPAREMODE_RESET = 5U,
    TIMERA_enCC_COMPAREMODE_TOGGLE_SET = 6U,
    TIMERA_enCC_COMPAREMODE_RESET_SET = 7U,
    TIMERA_enCC_COMPAREMODE_UNDEF = UNDEF_VALUE,
}TIMERA_nCC_COMPAREMODE;


typedef enum
{
    TIMERA_enLEVEL_LOW = 0U,
    TIMERA_enLEVEL_HIGH = 1U,
    TIMERA_enLEVEL_UNDEF = UNDEF_VALUE,
}TIMERA_nLEVEL;


typedef enum
{
    TIMERA_enMODE_STOP = 0U,
    TIMERA_enMODE_UP = 1U,
    TIMERA_enMODE_CONTINUOS = 2U,
    TIMERA_enMODE_UP_DOWN = 3U,
    TIMERA_enMODE_MAX = 4U,
}TIMERA_nMODE;

typedef enum
{
    TIMERA_enCLOCK_TACLK = 0U,
    TIMERA_enCLOCK_ACLK = 1U,
    TIMERA_enCLOCK_SMCLK = 2U,
    TIMERA_enCLOCK_INCLK = 3U,
    TIMERA_enCLOCK_MAX = 4U,
    TIMERA_enCLOCK_UNDEF = UNDEF_VALUE,
}TIMERA_nCLOCK;

typedef enum
{
    TIMERA_enCLOCK_PREDIV_1 = 0U,
    TIMERA_enCLOCK_PREDIV_2 = 1U,
    TIMERA_enCLOCK_PREDIV_4 = 2U,
    TIMERA_enCLOCK_PREDIV_8 = 3U,
    TIMERA_enCLOCK_PREDIV_MAX = 4U,
    TIMERA_enCLOCK_PREDIV_UNDEF = UNDEF_VALUE,
}TIMERA_nCLOCK_PREDIV;

typedef enum
{
    TIMERA_enCLOCK_EXDIV_1 = 0U,
    TIMERA_enCLOCK_EXDIV_2 = 1U,
    TIMERA_enCLOCK_EXDIV_3 = 2U,
    TIMERA_enCLOCK_EXDIV_4 = 3U,
    TIMERA_enCLOCK_EXDIV_5 = 4U,
    TIMERA_enCLOCK_EXDIV_6 = 5U,
    TIMERA_enCLOCK_EXDIV_7 = 6U,
    TIMERA_enCLOCK_EXDIV_8 = 7U,
    TIMERA_enCLOCK_EXDIV_MAX = 8U,
    TIMERA_enCLOCK_EXDIV_UNDEF = UNDEF_VALUE,
}TIMERA_nCLOCK_EXDIV;

typedef enum
{
    TIMERA_enCLOCK_DIV_1 = ((UBase_t) TIMERA_enCLOCK_EXDIV_1 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_2 = ((UBase_t) TIMERA_enCLOCK_EXDIV_2 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_3 = ((UBase_t) TIMERA_enCLOCK_EXDIV_3 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_4 = ((UBase_t) TIMERA_enCLOCK_EXDIV_4 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_5 = ((UBase_t) TIMERA_enCLOCK_EXDIV_5 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_6 = ((UBase_t) TIMERA_enCLOCK_EXDIV_6 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_7 = ((UBase_t) TIMERA_enCLOCK_EXDIV_7 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_8 = ((UBase_t) TIMERA_enCLOCK_EXDIV_8 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_1 << 0UL),
    TIMERA_enCLOCK_DIV_10 = ((UBase_t) TIMERA_enCLOCK_EXDIV_5 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_2 << 0UL),
    TIMERA_enCLOCK_DIV_12 = ((UBase_t) TIMERA_enCLOCK_EXDIV_6 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_2 << 0UL),
    TIMERA_enCLOCK_DIV_14 = ((UBase_t) TIMERA_enCLOCK_EXDIV_7 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_2 << 0UL),
    TIMERA_enCLOCK_DIV_16 = ((UBase_t) TIMERA_enCLOCK_EXDIV_8 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_2 << 0UL),
    TIMERA_enCLOCK_DIV_20 = ((UBase_t) TIMERA_enCLOCK_EXDIV_5 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_4 << 0UL),
    TIMERA_enCLOCK_DIV_24 = ((UBase_t) TIMERA_enCLOCK_EXDIV_6 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_4 << 0UL),
    TIMERA_enCLOCK_DIV_28 = ((UBase_t) TIMERA_enCLOCK_EXDIV_7 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_4 << 0UL),
    TIMERA_enCLOCK_DIV_32 = ((UBase_t) TIMERA_enCLOCK_EXDIV_8 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_4 << 0UL),
    TIMERA_enCLOCK_DIV_40 = ((UBase_t) TIMERA_enCLOCK_EXDIV_5 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_8 << 0UL),
    TIMERA_enCLOCK_DIV_48 = ((UBase_t) TIMERA_enCLOCK_EXDIV_6 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_8 << 0UL),
    TIMERA_enCLOCK_DIV_56 = ((UBase_t) TIMERA_enCLOCK_EXDIV_7 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_8 << 0UL),
    TIMERA_enCLOCK_DIV_64 = ((UBase_t) TIMERA_enCLOCK_EXDIV_8 << 8UL) | ((UBase_t) TIMERA_enCLOCK_PREDIV_8 << 0UL),
    TIMERA_enCLOCK_DIV_MAX = UNDEF_VALUE,
}TIMERA_nCLOCK_DIV;

typedef MCU_pvfIRQVectorHandler_t TIMERA_pvfIRQVectorHandler_t;
typedef MCU_puxfIRQSourceHandler_t TIMERA_puxfIRQSourceHandler_t;

typedef MCU_Register_t TIMERA_Register_t;

typedef struct
{
    UBase_t uxPeriodTicks;
    TIMERA_nCLOCK enClockSource;
    TIMERA_nCLOCK_DIV enClockDivider;
    TIMERA_nMODE enOperationMode;
}TIMERA_Config_t;

typedef struct
{
    TIMERA_Config_t stConfig;
    TIMERA_nSTATE enInterruptEnable;
    TIMERA_nSTATUS enInterruptStatus;
}TIMERA_ConfigExt_t;

typedef struct
{
    TIMERA_nCC_CAPTUREMODE enCaptureMode;
    TIMERA_nCC_CAPTURESYNC enSyncMode;
    TIMERA_nCC_CAPTUREINPUT enCaptureInput;
}TIMERA_Capture_Config_t;

typedef struct
{
    TIMERA_Capture_Config_t stConfig;
    TIMERA_nSTATE enInterruptEnable;
    TIMERA_nSTATUS enInterruptStatus;
}TIMERA_Capture_ConfigExt_t;

typedef struct
{
    UBase_t uxCompareValue;
    TIMERA_nCC_COMPAREMODE enCompareMode;
    TIMERA_nLEVEL enOutputLevel;
}TIMERA_Compare_Config_t;

typedef struct
{

    TIMERA_Compare_Config_t stConfig;
    TIMERA_nSTATE enInterruptEnable;
    TIMERA_nSTATUS enInterruptStatus;
}TIMERA_Compare_ConfigExt_t;

typedef struct
{
    UBase_t uxMode;
    UBase_t uxPinLatch;
    UBase_t uxPinValue;
    UBase_t uxCounter;
}TIMERA_InterruptInfo_t;

#endif /* TIMERA_PERIPHERAL_HEADER_TIMERA_ENUM_H_ */
