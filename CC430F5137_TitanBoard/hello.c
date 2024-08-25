#include <stdio.h>
#include <msp430.h> 
#include <xDriver_MCU/xDriver_MCU.h>


uint16_t MAIN_u16Switch(uintptr_t uptrPort, void* pvPinNumber);
uint16_t MAIN_u16Timer(uintptr_t uptrModuleArg, void* pvArgument);
volatile uint16_t u16TimerReady = 0;
/**
 * hello.c
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    RCCTL0 = 0x5AFC;
    TIMERA_Config_t TIMERAConfig;
    SYSCTL__enSetVectorInterrupt(SYSCTL_enVECTOR_RAM);
    PORT->P1.DIR_bits.PIN0 = 1;
    PORT->P2.DIR_bits.PIN6 = 1;
    PORT->P3.DIR_bits.PIN1 = 1;

    PORT->P1.DIR_bits.PIN7 = PORT_DIR_PIN7_INPUT;
    PORT->P1.DS_bits.PIN7 = PORT_DS_PIN7_REDUCED;
    PORT->P1.SEL_bits.PIN7 = PORT_SEL_PIN7_IO;
    PORT->P1.OUT_bits.PIN7 = PORT_OUT_PIN7_HIGH;
    PORT->P1.REN_bits.PIN7 = PORT_REN_PIN7_ENA;
    PORT->P1.IES_bits.PIN7 = PORT_IES_PIN7_FALLING;

    PORT__enRegisterIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_7, &MAIN_u16Switch);
    PORT__enClearInterruptSourceByNumber(PORT_enMODULE_1, PORT_enPIN_7);
    PORT__enSetInterruptSourceStateByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enSTATE_ENA);


    TIMERA__enRegisterIRQSourceHandler(TIMERA_enMODULE_0, &MAIN_u16Timer);
    TIMERA__enClearInterruptSource(TIMERA_enMODULE_0);
    TIMERA__enSetInterruptSourceState(TIMERA_enMODULE_0, TIMERA_enSTATE_ENA);

    TIMERAConfig.enClockDivider = TIMERA_enCLOCK_DIV_16;
    TIMERAConfig.enClockSource = TIMERA_enCLOCK_SMCLK;
    TIMERAConfig.enOperationMode = TIMERA_enMODE_UP;
    TIMERAConfig.uxPeriodTicks = 10000;
    TIMERA__enSetConfig(TIMERA_enMODULE_0, &TIMERAConfig);
    _EINT();
    _NOP();

    //LPM4;
    _NOP();


    volatile unsigned long i;        // volatile to prevent optimization

    while(1)
    {
        PORT->P1.OUT_bits.PIN0 ^= 1;
        PORT->P3.OUT_bits.PIN1 ^= 1;
        LPM0;

    }

    return 0;
}

uint16_t MAIN_u16Timer(uintptr_t uptrModuleArg, void* pvArgument)
{
    u16TimerReady = 1;
    return (0x0);
}


uint16_t MAIN_u16Switch(uintptr_t uptrPort, void* pvPinNumber)
{
    PORT1_t* pstPort = (PORT1_t*) uptrPort;
    uint8_t u8ValuePin;

    u8ValuePin = 1U;
    u8ValuePin <<= (uint8_t) pvPinNumber;

    if(0UL == (pstPort->IN & u8ValuePin))
    {
        if(0UL != (pstPort->IES & u8ValuePin)) /*High-To-Low*/
        {
            pstPort->IES &= ~u8ValuePin;
            PORT2->OUT_bits.PIN6 = 1U;
        }
    }
    else
    {
        if(0UL == (pstPort->IES & u8ValuePin)) /*Low-To-High*/
        {

            pstPort->IES |= u8ValuePin;
            PORT2->OUT_bits.PIN6 = 0U;
        }
    }
    return (0xFF);
}
