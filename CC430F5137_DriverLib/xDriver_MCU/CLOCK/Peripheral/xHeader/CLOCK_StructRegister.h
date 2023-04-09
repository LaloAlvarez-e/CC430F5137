/**
 *
 * @file CLOCK_StructRegister.h
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

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_STRUCTREGISTER_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_STRUCTREGISTER_H_

#include <xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h>

typedef volatile struct
{
    const UBase_t reserved :3;
    volatile UBase_t MOD :5;
    volatile UBase_t DCO :5;
    const UBase_t reserved1 :3;
}CLOCK_CTL0_t;

typedef volatile struct
{
    volatile UBase_t MOD_DIS :1;
    const UBase_t reserved :3;
    volatile UBase_t DCO_RSEL :3;
    const UBase_t reserved1 :9;
}CLOCK_CTL1_t;

typedef volatile struct
{
    volatile UBase_t FLL_MULTI :10;
    const UBase_t reserved :2;
    volatile UBase_t FLL_MULTI_LOOP :3;
    const UBase_t reserved1 :1;
}CLOCK_CTL2_t;

typedef volatile struct
{
    volatile UBase_t FLL_REFDIV :3;
    const UBase_t reserved :1;
    volatile UBase_t FLL_SELREF :3;
    const UBase_t reserved1 :9;
}CLOCK_CTL3_t;

typedef volatile struct
{
    volatile UBase_t MCLK_SEL :3;
    const UBase_t reserved :1;
    volatile UBase_t SMCLK_SEL :3;
    const UBase_t reserved1 :1;
    volatile UBase_t ACLK_SEL :3;
    const UBase_t reserved2 :5;
}CLOCK_CTL4_t;

typedef volatile struct
{
    volatile UBase_t MCLK_DIV :3;
    const UBase_t reserved :1;
    volatile UBase_t SMCLK_DIV :3;
    const UBase_t reserved1 :1;
    volatile UBase_t ACLK_DIV :3;
    const UBase_t reserved21 :1;
    volatile UBase_t ACLK_PINDIV :3;
    const UBase_t reserved3 :1;
}CLOCK_CTL5_t;

typedef volatile struct
{
    volatile UBase_t XT1_OFF :1;
    volatile UBase_t SMCLK_OFF :1;
    volatile UBase_t XT1_CAP :2;
    volatile UBase_t XT1_BYPASS :1;
    volatile UBase_t XT1_MODE :1;
    volatile UBase_t XT1_DRIVE :2;
    const UBase_t reserved :8;
}CLOCK_CTL6_t;

typedef volatile struct
{
    volatile UBase_t DCO_FFG :1;
    volatile UBase_t XT1_LFOSC_FFG :1;
    volatile UBase_t XT1_HFOSC_FFG :1;
    const UBase_t reserved :13;
}CLOCK_CTL7_t;

typedef volatile struct
{
    volatile UBase_t ACLK_REQEN :1;
    volatile UBase_t MCLK_REQEN :1;
    volatile UBase_t SMCLK_REQEN :1;
    volatile UBase_t MODOSC_REQEN :1;
    const UBase_t reserved :12;
}CLOCK_CTL8_t;

#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_STRUCTREGISTER_H_ */
