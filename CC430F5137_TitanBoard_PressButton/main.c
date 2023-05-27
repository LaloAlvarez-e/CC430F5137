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
#include "xDriver_MCU/xDriver_MCU.h"
#include "RF_Connection.h"


int main(void){
  WDTCTL = WDTPW + WDTHOLD; /*Stop WDT*/
  _DINT();
  while(1){ 
    __asm(" NOP");
    RF_Connection_Test();
    __asm(" NOP");
  }
  
}




