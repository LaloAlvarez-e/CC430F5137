/**
 *
 * @file msp430f169_startup.c
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
 * @verbatim 25 mar. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 mar. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */
#include "xDriver_MCU/xDriver_MCU.h"

__interrupt void IntDefaultHandler(void);
extern __interrupt void PORT1_ISR(void);
extern __interrupt void CC1101_ISR(void);

#pragma RETAIN (INTERRUPT__pfvVector)
#pragma DATA_SECTION(INTERRUPT__pfvVector, ".ramvect")
uint16_t INTERRUPT__pfvVector[63U] =
{
    (uint16_t) &IntDefaultHandler,                /* The Reserved00 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved01 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved02 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved03 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved04 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved05 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved06 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved07 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved08 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved09 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved10 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved11 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved12 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved13 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved14 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved15 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved16 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved17 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved18 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved19 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved20 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved21 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved22 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved23 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved24 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved25 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved26 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved27 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved28 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved29 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved30 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved31 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved32 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved33 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved34 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved35 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved36 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved37 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved38 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved39 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved40 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved41 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved42 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved43 handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved44 handler*/
    (uint16_t) &AES__IRQVectorHandler,            /* The AES        handler*/
    (uint16_t) &IntDefaultHandler,                /* The RTC        handler*/
    (uint16_t) &IntDefaultHandler,                /* The Reserved47 handler*/
    (uint16_t) &PORT2__IRQVectorHandler,          /* The PORT2      handler*/
    (uint16_t) &PORT1__IRQVectorHandler,          /* The PORT1      handler*/
    (uint16_t) &TIMERA1__IRQVectorHandler,        /* The TIMER1_A1  handler*/
    (uint16_t) &TIMERA1_CC0__IRQVectorHandler,    /* The TIMER1_A0  handler*/
    (uint16_t) &DMA__IRQVectorHandler,            /* The DMA        handler*/
    (uint16_t) &CC1101_ISR,                       /* The CC1101     handler*/
    (uint16_t) &TIMERA0__IRQVectorHandler,        /* The TIMER0_A1  handler*/
    (uint16_t) &TIMERA0_CC0__IRQVectorHandler,    /* The TIMER0_A0  handler*/
    (uint16_t) &IntDefaultHandler,                /* The ADC12      handler*/
    (uint16_t) &IntDefaultHandler,                /* The USCI_B0    handler*/
    (uint16_t) &IntDefaultHandler,                /* The USCI_A0    handler*/
    (uint16_t) &WDT__IRQVectorHandler,            /* The WDT        handler*/
    (uint16_t) &IntDefaultHandler,                /* The COMP_B     handler*/
    (uint16_t) &SYSCTL_USERNMI__IRQVectorHandler, /* The UNMI       handler*/
    (uint16_t) &SYSCTL_SYSNMI__IRQVectorHandler,  /* The SYSNMI     handler*/
};

__interrupt void IntDefaultHandler(void)
{
    while(1U)
    {

    }
}


