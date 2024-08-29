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
    TIMERA_Config_t TIMERAConfig;

    WDT__enDisable();
    RAM__enSetSectorState(0xFC, RAM_enSTATE_ENA);
    SYSCTL__enSetVectorInterrupt(SYSCTL_enVECTOR_RAM);

   /*
    * PORT Configuration
    */
    PORT__enSetDirectionByNumber(PORT_enMODULE_1, PORT_enPIN_0, PORT_enDIR_OUTPUT);
    PORT__enSetDirectionByNumber(PORT_enMODULE_3, PORT_enPIN_6, PORT_enDIR_OUTPUT);
    PORT__enSetOutputByNumber(PORT_enMODULE_3, PORT_enPIN_6, PORT_enLEVEL_HIGH);

    PORT__enSetDirectionByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enDIR_INPUT);
    PORT__enSetDriveByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enDRIVE_REDUCED);
    PORT__enSetSelectionByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enSEL_IO);
    PORT__enSetResistorModeByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enRESISTOR_PULLUP);
    PORT__enSetInterruptEdgeByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enEDGE_FALLING);
    PORT__enRegisterIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_7, &MAIN_u16Switch);
    PORT__enClearInterruptSourceByNumber(PORT_enMODULE_1, PORT_enPIN_7);
    PORT__enSetInterruptSourceStateByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enSTATE_ENA);

    /*
     *  TIMER A Configuration
     */

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

    while(1)
    {
        PORT->P1.OUT_bits.PIN0 ^= 1;
        LPM0;

    }

}

uint16_t MAIN_u16Timer(uintptr_t uptrModuleArg, void* pvArgument)
{
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
            PORT3->OUT_bits.PIN6 = 0U;
        }
    }
    else
    {
        if(0UL == (pstPort->IES & u8ValuePin)) /*Low-To-High*/
        {

            pstPort->IES |= u8ValuePin;
            PORT3->OUT_bits.PIN6 = 1U;
        }
    }
    return (0xFF);
}
