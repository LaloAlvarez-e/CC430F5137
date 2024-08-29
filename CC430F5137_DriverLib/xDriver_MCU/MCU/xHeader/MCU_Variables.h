/**
 *
 * @file MCU_Variables.h
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
 * @verbatim 13 ago. 2021 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ago. 2021     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_VARIABLES_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_VARIABLES_H_

#include <xUtils/Standard/Standard.h>

#include "msp430.h"
/*
#include "in430.h"
#include <intrinsics.h>
*/

/************************************************************
* STANDARD BITS
************************************************************/
/*
#define BIT0                   (0x0001)
#define BIT1                   (0x0002)
#define BIT2                   (0x0004)
#define BIT3                   (0x0008)
#define BIT4                   (0x0010)
#define BIT5                   (0x0020)
#define BIT6                   (0x0040)
#define BIT7                   (0x0080)
#define BIT8                   (0x0100)
#define BIT9                   (0x0200)
#define BITA                   (0x0400)
#define BITB                   (0x0800)
#define BITC                   (0x1000)
#define BITD                   (0x2000)
#define BITE                   (0x4000)
#define BITF                   (0x8000)
*/
/************************************************************
* STATUS REGISTER BITS
************************************************************/
/*
#define C                      (0x0001)
#define Z                      (0x0002)
#define N                      (0x0004)
#define V                      (0x0100)
#define GIE                    (0x0008)
#define CPUOFF                 (0x0010)
#define OSCOFF                 (0x0020)
#define SCG0                   (0x0040)
#define SCG1                   (0x0080)

#define LPM0_bits              (CPUOFF)
#define LPM1_bits              (SCG0+CPUOFF)
#define LPM2_bits              (SCG1+CPUOFF)
#define LPM3_bits              (SCG1+SCG0+CPUOFF)
#define LPM4_bits              (SCG1+SCG0+OSCOFF+CPUOFF)
*/
/*#define LPM0      __bis_SR_register(LPM0_bits)          Enter Low Power Mode 0 */
/*#define LPM0_EXIT __bic_SR_register_on_exit(LPM0_bits)  Exit Low Power Mode 0 */
/*#define LPM1      __bis_SR_register(LPM1_bits)          Enter Low Power Mode 1 */
/*#define LPM1_EXIT __bic_SR_register_on_exit(LPM1_bits)  Exit Low Power Mode 1 */
/*#define LPM2      __bis_SR_register(LPM2_bits)          Enter Low Power Mode 2 */
/*#define LPM2_EXIT __bic_SR_register_on_exit(LPM2_bits)  Exit Low Power Mode 2 */
/*#define LPM3      __bis_SR_register(LPM3_bits)          Enter Low Power Mode 3 */
/*#define LPM3_EXIT __bic_SR_register_on_exit(LPM3_bits)  Exit Low Power Mode 3 */
/*#define LPM4      __bis_SR_register(LPM4_bits)          Enter Low Power Mode 4 */
/*#define LPM4_EXIT __bic_SR_register_on_exit(LPM4_bits)  Exit Low Power Mode 4 */



#define MCU_MASK_8 (0xFFU)
#define MCU_MASK_16 (0xFFFFU)
#define MCU_MASK_32 (0xFFFFFFFFUL)
#define MCU_MASK_BASE (MCU_MASK_16)

typedef enum
{
    MCU_enISR_RETURN_RUN = 0UL,
    MCU_enISR_RETURN_LOW_MODE_0 = LPM0_bits,
    MCU_enISR_RETURN_LOW_MODE_1 = LPM1_bits,
    MCU_enISR_RETURN_LOW_MODE_2 = LPM2_bits,
    MCU_enISR_RETURN_LOW_MODE_3 = LPM3_bits,
    MCU_enISR_RETURN_LOW_MODE_4 = LPM4_bits,
    MCU_enISR_RETURN_UNCHANGED = 0xFFU,
    MCU_enISR_RETURN_UNDEF = UNDEF_VALUE,
}MCU_nISR_RETURN;


typedef void (*MCU_pvfIRQVectorHandler_t)(void);
typedef MCU_nISR_RETURN (*MCU_puxfIRQSourceHandler_t)(uintptr_t uptrModuleArg, void* pvArgument);

MCU_nISR_RETURN MCU_uxIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument);
MCU_nISR_RETURN MCU_uxIRQSourceHandler_DummyNonBlocking(uintptr_t uptrModuleArg, void* pvArgument);

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_VARIABLES_H_ */
