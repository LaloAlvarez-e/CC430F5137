/****************************************************************************/
/*    Demo program for: 						    */
/*	  Board: MSP430-CCRFLCD                                             */
/*    Manufacture: OLIMEX                                                   */
/*	  COPYRIGHT (C) 2011                                                */
/*    Designed by:	Penko Todorov Bozhkov                               */
/*    Module Name:  main                                                    */
/*    File   Name:  main.c		                	            */
/*    Revision:		initial          	   		            */
/*    Date:  		07.06.2011		                            */
/*    Built with IAR Embedded Workbench C/C++ Compiler for MSP430 4.21.2    */
/****************************************************************************/
// Target : CC430F5137
#include <cc430x513x.h>
#include  <intrinsics.h>
#include "RF_Connection.h"

//Definitions
#define LED_On			P2OUT |= BIT6;		P2DIR |= BIT6;
#define LED_Off		        P2OUT &= (~BIT6);	P2DIR |= BIT6;
#define LED_Togg		P2OUT ^= BIT6;		P2DIR |= BIT6;
#define LED_Chk		        (P2IN & BIT6)
#define timer1_A3_Stop_Mode     TA1CTL &= (~0x0030)
#define timer1_A3_Up_Mode       TA1CTL |= (0x0010)


/****************************************************************************/
/*  Function name: delay                                                    */
/*  	Parameters                                                          */
/*          Input   :  p	                                            */
/*          Output  :  No	                                            */
/*	Action: Simple delay                                                */
/****************************************************************************/
void delay(volatile unsigned long p){
	while(p){p--;}
}


/****************************************************************************/
/*  Function name: ports_init                                               */
/*  	Parameters                                                          */
/*          Input   :  No	                                            */
/*          Output  :  No	                                            */
/*	Action: Initialize all Port's directions and states                 */
/****************************************************************************/
void ports_init(void)
{
  P1OUT = 0x00;
  P1DIR = 0x00; // Led out
  P1REN = 0x00;
  P2OUT = 0x00;
  P2DIR = BIT6;
  P2REN = 0x00;
  P3OUT = 0x00;
  P3DIR = 0x00;
  P3REN = 0x00;
}


/****************************************************************************/
/*  Function name: RTC_Clock_init                                           */
/*  	Parameters                                                          */
/*          Input   :  No	                                            */
/*          Output  :  No	                                            */
/*	Action: Set up RTC clock operation                                  */
/****************************************************************************/
void RTC_Clock_init(void)
{
  P5OUT = 0x00;
  //P5DIR = 0x02;  // If this is uncommented RTC doesn't work!!!!!!!!!!!!!!!!!! P5DIR register must be set to 0x00!!!!!!
  P5SEL = 0x03; // Enabled alternative functions 
  
  _BIC_SR(OSCOFF);          // Enable the LFXT1 crystal oscillator
  UCSCTL6 &= (~XTS);        // Select Low-frequency mode. XCAP bits define the capacitance at the XIN and XOUT pins.
  UCSCTL6 |= (XCAP0);       // Set XCAP0
  UCSCTL6 |= (XCAP1);       // Set XCAP1
  // Then Qrystal Load Capacitance is:  
  //  (XCAP1=0),(XCAP0=0) -> 2pF     (XCAP1=0),(XCAP0=1) -> 5.5pF
  //  (XCAP1=1),(XCAP0=0) -> 8.5pF   (XCAP1=1),(XCAP0=1) -> 12pF
  UCSCTL6 &= (~XT1OFF);     // Turns on the XT1.
  
  // Loop until XT1,XT2 & DCO stabilizes
  do
  {
    UCSCTL7 &= ~(XT2OFFG + XT1LFOFFG + XT1HFOFFG + DCOFFG); // Clear XT2,XT1,DCO fault flags
    SFRIFG1 &= ~OFIFG;                      // Clear fault flags
  }while (SFRIFG1&OFIFG);                   // Test oscillator fault flag
  
  UCSCTL4 = ((SELA__XT1CLK | SELS__DCOCLKDIV) | SELM__DCOCLKDIV);   // ACLK source: XT1CLK, SMCLK: DCOCLKDIV, MCLK: DCOCLKDIV
  SFRIFG1 &= (~OFIFG);      // Oscillator fault interrupt flag
  SFRIE1 |= (OFIE);         // Oscillator fault interrupt enable
  
}


/****************************************************************************/
/*  Function name: timer1_A3_init                                           */
/*  	Parameters                                                          */
/*          Input   :  No                                                   */
/*          Output  :  No	                                            */
/*	Action: Initialize Timer1_A3 operation                              */
/****************************************************************************/
//TIMER1 initialize - prescale:0 
// desired value:	2Hz, i.e. 32768/2 = 16384(0x4000)
void timer1_A3_init(void)
{
  TA1CTL = 0x0004;   // Timer1_A3 clear.
  TA1CCTL0 = 0x0010; // Timer1_A3 Capture/compare 0 interrupt enable.
  TA1CCR0 = 0x4000;  // Set TACCR0 value
  TA1CTL = 0x0110;   // Selected: ACLK, divider:0, Up mode.
}


/****************************************************************************/
/*  Function name: init_devices                                             */
/*  	Parameters                                                          */
/*          Input   :  No	                                            */
/*          Output  :  No	                                            */
/*	Action: Initialize all peripherals                                  */
/****************************************************************************/
void init_devices(void)
{
 //1. Stop errant interrupts until set up
 _BIC_SR(GIE); // Disable interrupts during initialization process
 //2. Init System Clock
 // By defaut the FLL stabilizes MCLK and SMCLK to 1.048576 MHz and fDCO = 2.097152 MHz.
 
 //3. Init Peripherals
 //RTC_Clock_init();
 ports_init();
 //timer1_A3_init();
 //timer1_A3_Stop_Mode;
  
 //P3DIR |= BIT7;                  // Show SMCLK to P3.7
 //P3SEL |= BIT7;

 _BIS_SR(GIE); // Global Interrupt enabled. Do this at the END of the initialization!!!!!!!!
 //all peripherals are now initialized
}


int main(void){
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
  init_devices();
  while(1){ 
    __asm(" NOP");
    RF_Connection_Test();
    __asm(" NOP");
  }
  
}

