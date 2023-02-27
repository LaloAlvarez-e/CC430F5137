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
void (* const INTERRUPT__pfvVector[63U])(void) =
{
    &IntDefaultHandler,                /* The Reserved00 handler*/
    &IntDefaultHandler,                /* The Reserved01 handler*/
    &IntDefaultHandler,                /* The Reserved02 handler*/
    &IntDefaultHandler,                /* The Reserved03 handler*/
    &IntDefaultHandler,                /* The Reserved04 handler*/
    &IntDefaultHandler,                /* The Reserved05 handler*/
    &IntDefaultHandler,                /* The Reserved06 handler*/
    &IntDefaultHandler,                /* The Reserved07 handler*/
    &IntDefaultHandler,                /* The Reserved08 handler*/
    &IntDefaultHandler,                /* The Reserved09 handler*/
    &IntDefaultHandler,                /* The Reserved10 handler*/
    &IntDefaultHandler,                /* The Reserved11 handler*/
    &IntDefaultHandler,                /* The Reserved12 handler*/
    &IntDefaultHandler,                /* The Reserved13 handler*/
    &IntDefaultHandler,                /* The Reserved14 handler*/
    &IntDefaultHandler,                /* The Reserved15 handler*/
    &IntDefaultHandler,                /* The Reserved16 handler*/
    &IntDefaultHandler,                /* The Reserved17 handler*/
    &IntDefaultHandler,                /* The Reserved18 handler*/
    &IntDefaultHandler,                /* The Reserved19 handler*/
    &IntDefaultHandler,                /* The Reserved20 handler*/
    &IntDefaultHandler,                /* The Reserved21 handler*/
    &IntDefaultHandler,                /* The Reserved22 handler*/
    &IntDefaultHandler,                /* The Reserved23 handler*/
    &IntDefaultHandler,                /* The Reserved24 handler*/
    &IntDefaultHandler,                /* The Reserved25 handler*/
    &IntDefaultHandler,                /* The Reserved26 handler*/
    &IntDefaultHandler,                /* The Reserved27 handler*/
    &IntDefaultHandler,                /* The Reserved28 handler*/
    &IntDefaultHandler,                /* The Reserved29 handler*/
    &IntDefaultHandler,                /* The Reserved30 handler*/
    &IntDefaultHandler,                /* The Reserved31 handler*/
    &IntDefaultHandler,                /* The Reserved32 handler*/
    &IntDefaultHandler,                /* The Reserved33 handler*/
    &IntDefaultHandler,                /* The Reserved34 handler*/
    &IntDefaultHandler,                /* The Reserved35 handler*/
    &IntDefaultHandler,                /* The Reserved36 handler*/
    &IntDefaultHandler,                /* The Reserved37 handler*/
    &IntDefaultHandler,                /* The Reserved38 handler*/
    &IntDefaultHandler,                /* The Reserved39 handler*/
    &IntDefaultHandler,                /* The Reserved40 handler*/
    &IntDefaultHandler,                /* The Reserved41 handler*/
    &IntDefaultHandler,                /* The Reserved42 handler*/
    &IntDefaultHandler,                /* The Reserved43 handler*/
    &IntDefaultHandler,                /* The Reserved44 handler*/
    &IntDefaultHandler,                /* The AES        handler*/
    &IntDefaultHandler,                /* The RTC        handler*/
    &IntDefaultHandler,                /* The Reserved47 handler*/
    &PORT2__IRQVectorHandler,          /* The PORT2      handler*/
    &PORT1__IRQVectorHandler,          /* The PORT1      handler*/
    &IntDefaultHandler,                /* The TIMER1_A1  handler*/
    &IntDefaultHandler,                /* The TIMER1_A0  handler*/
    &DMA__IRQVectorHandler,            /* The DMA        handler*/
    &CC1101_ISR,                       /* The CC1101     handler*/
    &IntDefaultHandler,                /* The TIMER0_A1  handler*/
    &IntDefaultHandler,                /* The TIMER0_A0  handler*/
    &IntDefaultHandler,                /* The ADC12      handler*/
    &IntDefaultHandler,                /* The USCI_B0    handler*/
    &IntDefaultHandler,                /* The USCI_A0    handler*/
    &IntDefaultHandler,                /* The WDT        handler*/
    &IntDefaultHandler,                /* The COMP_B     handler*/
    &SYSCTL_USERNMI__IRQVectorHandler, /* The UNMI       handler*/
    &SYSCTL_SYSNMI__IRQVectorHandler,  /* The SYSNMI     handler*/
};

__interrupt void IntDefaultHandler(void)
{
    while(1U)
    {

    }
}


