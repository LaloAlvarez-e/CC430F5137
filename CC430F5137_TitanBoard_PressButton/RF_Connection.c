/******************************************************************************
* This example realize simple RF connection between 2 MSP430-CCRFLCD boards.    *
* Both boards are sending ~4 packets per second with lenght 10 bytes. 
* Output power is set by default to -30dBm!
* Whenever any board has received a valid packet, it switches-over its LED!
* Packet sending can be enabled/disabled individually for everyone board by pressing its button BUT.
* Warning: This RF code example is setup to operate at 868Mhz frequency, 
* which might be out of allowable range of operation in certain countries. Please
* refer to the appropriate legal sources before performing tests with this code 
* example. 
* 
* The RF packet engine settings specify variable-length-mode with CRC check enabled
* The RX packet also appends 2 status bytes regarding CRC check, RSSI and LQI info.
* For specific register settings please refer to the comments for each register in
* RF1A_REGISTER_CONFIG[] or the CC430x613x User's Guide and the SmartRF Studio
* 
* All required changes, which enable this code to be portable for MSP430-CCRFLCD,
* were made by Penko T. Bozhkov -> Olimex LTD
******************************************************************************/
#include "xDriver_MCU/xDriver_MCU.h"
#include "HAL/RF1A.h"
#include "HAL/cc430x613x_PMM.h"
#include "RF_Connection.h"

#ifdef MHZ_915
  #include "HAL/RF_config_Olimex/smartrf_CC430F5137_915MHz_38k4Baud.h"
#elif defined MHZ_868
  #include "HAL/RF_config_Olimex/smartrf_CC430F5137_868MHz_38k4Baud.h"
#endif

uint16_t PORT1_ISR(uintptr_t uptrPort, void* pvPinNumber);

#define LED_Togg    P2OUT ^= BIT6;  P2DIR |= BIT6;
#define timer1_A3_Stop_Mode     TA1CTL &= (~0x0030)
#define timer1_A3_Up_Mode       TA1CTL |= (0x0010)

unsigned char button_on = 0;

// Chipcon
// Product = CC430Fx13x
// Chip version = C   (PG 0.7)
// Crystal accuracy = 10 ppm
// X-tal frequency = 26 MHz
// RF output power = 0 dBm
// RX filterbandwidth = 101.562500 kHz
// Deviation = 19 kHz
// Datarate = 38.383484 kBaud
// Modulation = (1) GFSK
// Manchester enable = (0) Manchester disabled
// RF Frequency = 867.999939 MHz
// Channel spacing = 199.951172 kHz
// Channel number = 0
// Optimization = -
// Sync mode = (3) 30/32 sync word bits detected
// Format of RX/TX data = (0) Normal mode, use FIFOs for RX and TX
// CRC operation = (1) CRC calculation in TX and CRC check in RX enabled
// Forward Error Correction =
// Length configuration = (0) Fixed packet length, packet length configured by PKTLEN
// Packetlength = 61
// Preamble count = (2)  4 bytes
// Append status = 1
// Address check = (0) No address check
// FIFO autoflush = 0
// Device address = 0
// GDO0 signal selection = ( 6) Asserts when sync word has been sent / received, and de-asserts at the end of the packet
// GDO2 signal selection = (41) RF_RDY
RF_SETTINGS rfSettings = {
    0x08,   // FSCTRL1   Frequency synthesizer control.
    0x00,   // FSCTRL0   Frequency synthesizer control.
    0x21,   // FREQ2     Frequency control word, high byte.
    0x62,   // FREQ1     Frequency control word, middle byte.
    0x76,   // FREQ0     Frequency control word, low byte.
    0xCA,   // MDMCFG4   Modem configuration.
    0x83,   // MDMCFG3   Modem configuration.
    0x93,   // MDMCFG2   Modem configuration.
    0x22,   // MDMCFG1   Modem configuration.
    0xF8,   // MDMCFG0   Modem configuration.
    0x00,   // CHANNR    Channel number.
    0x34,   // DEVIATN   Modem deviation setting (when FSK modulation is enabled).
    0x56,   // FREND1    Front end RX configuration.
    0x10,   // FREND0    Front end TX configuration.
    0x18,   // MCSM0     Main Radio Control State Machine configuration.
    0x16,   // FOCCFG    Frequency Offset Compensation Configuration.
    0x6C,   // BSCFG     Bit synchronization Configuration.
    0x43,   // AGCCTRL2  AGC control.
    0x40,   // AGCCTRL1  AGC control.
    0x91,   // AGCCTRL0  AGC control.
    0xE9,   // FSCAL3    Frequency synthesizer calibration.
    0x2A,   // FSCAL2    Frequency synthesizer calibration.
    0x00,   // FSCAL1    Frequency synthesizer calibration.
    0x1F,   // FSCAL0    Frequency synthesizer calibration.
    0x59,   // FSTEST    Frequency synthesizer calibration.
    0x81,   // TEST2     Various test settings.
    0x35,   // TEST1     Various test settings.
    0x09,   // TEST0     Various test settings.
    0x47,   // FIFOTHR   RXFIFO and TXFIFO thresholds.
    0x29,   // IOCFG2    GDO2 output pin configuration.
    0x06,   // IOCFG0    GDO0 output pin configuration. Refer to SmartRF? Studio User Manual for detailed pseudo register explanation.
    0x04,   // PKTCTRL1  Packet automation control.
    0x04,   // PKTCTRL0  Packet automation control.
    0x00,   // ADDR      Device address.
    0x05    // PKTLEN    Packet length.
};


// Set All 47 Configuration Registers!!!! 
// Two are reserved - writtne to "0". All other 45 are exported by SmartRF Studio!
const unsigned char RF1A_REGISTER_CONFIG[CONF_REG_SIZE]=
{
  SMARTRF_SETTING_IOCFG2  ,  // IOCFG2: GDO2 signals on RF_RDYn     
  SMARTRF_SETTING_IOCFG1  ,  // IOCFG1: GDO1 signals on RSSI_VALID     
  SMARTRF_SETTING_IOCFG0  ,  // IOCFG0: GDO0 signals on PA power down signal to control RX/TX switch         
  SMARTRF_SETTING_FIFOTHR , // FIFOTHR: RX/TX FIFO Threshold: 33 bytes in TX, 32 bytes in RX    
  SMARTRF_SETTING_SYNC1   , // SYNC1: high byte of Sync Word
  SMARTRF_SETTING_SYNC0   , // SYNC0: low byte of Sync Word
  SMARTRF_SETTING_PKTLEN  , // PKTLEN: Packet Length in fixed mode, Maximum Length in variable-length mode      
  SMARTRF_SETTING_PKTCTRL1, // PKTCTRL1: No status bytes appended to the packet    
  SMARTRF_SETTING_PKTCTRL0, // PKTCTRL0: Fixed-Length Mode, No CRC       
  SMARTRF_SETTING_ADDR    , // ADDR: Address for packet filtration       
  SMARTRF_SETTING_CHANNR  , // CHANNR: 8-bit channel number, freq = base freq + CHANNR * channel spacing          
  SMARTRF_SETTING_FSCTRL1 , // FSCTRL1: Frequency Synthesizer Control (refer to User's Guide/SmartRF Studio) 
  SMARTRF_SETTING_FSCTRL0 , // FSCTRL0: Frequency Synthesizer Control (refer to User's Guide/SmartRF Studio) 
  SMARTRF_SETTING_FREQ2   , // FREQ2: base frequency, high byte      
  SMARTRF_SETTING_FREQ1   , // FREQ1: base frequency, middle byte      
  SMARTRF_SETTING_FREQ0   , // FREQ0: base frequency, low byte      
  SMARTRF_SETTING_MDMCFG4 , // MDMCFG4: modem configuration (refer to User's Guide/SmartRF Studio)     
  SMARTRF_SETTING_MDMCFG3 , // MDMCFG3:                "                      "    
  SMARTRF_SETTING_MDMCFG2 , // MDMCFG2:                "                      "        
  SMARTRF_SETTING_MDMCFG1 , // MDMCFG1:                "                      "        
  SMARTRF_SETTING_MDMCFG0 , // MDMCFG0:                "                      "        
  SMARTRF_SETTING_DEVIATN , // DEVIATN: modem deviation setting (refer to User's Guide/SmartRF Studio)         
  SMARTRF_SETTING_MCSM2   , // MCSM2: Main Radio Control State Machine Conf. : timeout for sync word search disabled      
  SMARTRF_SETTING_MCSM1   , // MCSM1: CCA signals when RSSI below threshold, stay in RX after packet has been received      
  SMARTRF_SETTING_MCSM0   , // MCSM0: Auto-calibrate when going from IDLE to RX or TX (or FSTXON )      
  SMARTRF_SETTING_FOCCFG  , // FOCCFG: Frequency Offset Compensation Conf.     
  SMARTRF_SETTING_BSCFG   , // BSCFG: Bit Synchronization Conf.       
  SMARTRF_SETTING_AGCCTRL2, // AGCCTRL2: AGC Control   
  SMARTRF_SETTING_AGCCTRL1, // AGCCTRL1:     "   
  SMARTRF_SETTING_AGCCTRL0, // AGCCTRL0:     "   
  SMARTRF_SETTING_WOREVT1 , // WOREVT1: High Byte Event0 Timeout    
  SMARTRF_SETTING_WOREVT0 , // WOREVT0: High Byte Event0 Timeout
  SMARTRF_SETTING_WORCTRL , // WORCTL: Wave On Radio Control ****Feature unavailable in PG0.6****
  SMARTRF_SETTING_FREND1  , // FREND1: Front End RX Conf.    
  SMARTRF_SETTING_FREND0  , // FREND0: Front End TX Conf.               
  SMARTRF_SETTING_FSCAL3  , // FSCAL3: Frequency Synthesizer Calibration (refer to User's Guide/SmartRF Studio)    
  SMARTRF_SETTING_FSCAL2  , // FSCAL2:              "      
  SMARTRF_SETTING_FSCAL1  , // FSCAL1:              "     
  SMARTRF_SETTING_FSCAL0  , // FSCAL0:              "     
  0x00                    , // Reserved *read as 0*
  0x00                    , // Reserved *read as 0*
  SMARTRF_SETTING_FSTEST  , // FSTEST: For test only, irrelevant for normal use case
  SMARTRF_SETTING_PTEST   , // PTEST: For test only, irrelevant for normal use case
  SMARTRF_SETTING_AGCTEST , // AGCTEST: For test only, irrelevant for normal use case
  SMARTRF_SETTING_TEST2   , // TEST2  : For test only, irrelevant for normal use case    
  SMARTRF_SETTING_TEST1   , // TEST1  : For test only, irrelevant for normal use case
  SMARTRF_SETTING_TEST0     // TEST0  : For test only, irrelevant for normal use case    
};


extern unsigned char packetReceived;
extern unsigned char packetTransmit; 

unsigned char RxBuffer[255], RxBufferLength = 0;
const unsigned char TxBufferOn[] = "Connected   ";
const unsigned char TxBufferOff[]= "Disconnected";
const unsigned char* TxBuffer;
unsigned char buttonPressed = 0;
unsigned int i = 0; 


/**********************************************************************************/
/*  Function name: InitButtonLed               	                                  */
/*  	Parameters                                                                */
/*          Input   :  No       			                          */
/*          Output  :  No	                                                  */
/*	Action: Initialize Led and Button directions.                          	  */
/**********************************************************************************/
void InitButtonLed(void)
{
    /*Set P1.0 as output as Direct Logic*/
    PORT->P1.DS_bits.PIN0 = PORT_DS_PIN0_REDUCED;
    PORT->P1.OUT_bits.PIN0 = PORT_OUT_PIN0_LOW;
    PORT->P1.REN_bits.PIN0 = PORT_REN_PIN0_DIS;
    PORT->P1.DIR_bits.PIN0 = PORT_DIR_PIN0_OUTPUT;
    PORT->P1.SEL_bits.PIN0 = PORT_SEL_PIN0_IO;
    PORT->P1.IFG_bits.PIN0 = PORT_IFG_PIN0_INACTIVE;
    PORT->P1.IE_bits.PIN0 = PORT_IE_PIN0_DIS;


    /*Set P2.0 as output with inversed logic*/
    PORT->P2.DS_bits.PIN6 = PORT_DS_PIN6_REDUCED;
    PORT->P2.OUT_bits.PIN6 = PORT_OUT_PIN6_HIGH;
    PORT->P2.REN_bits.PIN6 = PORT_REN_PIN6_DIS;
    PORT->P2.DIR_bits.PIN6 = PORT_DIR_PIN6_OUTPUT;
    PORT->P2.SEL_bits.PIN6 = PORT_SEL_PIN6_IO;
    PORT->P2.IFG_bits.PIN6 = PORT_IFG_PIN6_INACTIVE;
    PORT->P2.IE_bits.PIN6 = PORT_IE_PIN6_DIS;


    /*Set P1.7 as input with interruption Pull-Up*/
    PORT__enRegisterIRQSourceHandler(PORT_enMODULE_1, PORT_enPIN_7, &PORT1_ISR);
    PORT->P1.DIR_bits.PIN7 = PORT_DIR_PIN7_INPUT;
    PORT->P1.DS_bits.PIN7 = PORT_DS_PIN7_REDUCED;
    PORT->P1.SEL_bits.PIN7 = PORT_SEL_PIN7_IO;
    PORT->P1.OUT_bits.PIN7 = PORT_OUT_PIN7_HIGH;
    PORT->P1.REN_bits.PIN7 = PORT_REN_PIN7_ENA;
    PORT->P1.IES_bits.PIN7 = PORT_IES_PIN7_FALLING;
    PORT__enClearInterruptSourceByNumber(PORT_enMODULE_1, PORT_enPIN_7);
    PORT__enSetInterruptSourceStateByNumber(PORT_enMODULE_1, PORT_enPIN_7, PORT_enSTATE_ENA);
}

/**********************************************************************************/
/*  Function name: Init_RF               	                                  */
/*  	Parameters                                                                */
/*          Input   :  No       			                          */
/*          Output  :  No	                                                  */
/*	Action: Initialize RF radio core.                               	  */
/**********************************************************************************/
void Init_RF(void){
  
  /* Increase PMMCOREV level to 2 for proper radio operation */
  SetVCore(2);
  ResetRadioCore();
  InitRadio();
  /* WriteBurstReg(IOCFG2, (unsigned char*)RF1A_REGISTER_CONFIG, CONF_REG_SIZE); */
  /* WritePATable(); */
  InitButtonLed();
  ReceiveOn();  
  //Wait for RX status to be reached
  while((Strobe(RF_SNOP) & 0x70) != 0x10);
  
}

#define  PATABLE_VAL        (0x51)          // 0 dBm output

void InitRadio(void)
{
    /* Set the High-Power Mode Request Enable bit so LPM3 can be entered
     * with active radio enabled
     */
    PMMCTL0_H = 0xA5U;
    PMMCTL0_L |= PMMHPMRE_L;
    PMMCTL0_H = 0x00;

    WriteRfSettings(&rfSettings);

    WriteSinglePATable(PATABLE_VAL);
}

void WriteSinglePATable(unsigned char value)
{
  while( !(RF1AIFCTL1 & RFINSTRIFG));
  RF1AINSTRW = 0x3E00 + value;              // PA Table single write

  while( !(RF1AIFCTL1 & RFINSTRIFG));
  RF1AINSTRB = RF_SNOP;                     // reset PA_Table pointer
}

void WriteRfSettings(RF_SETTINGS *pRfSettings) {
    WriteSingleReg(FSCTRL1,  pRfSettings->fsctrl1);
    WriteSingleReg(FSCTRL0,  pRfSettings->fsctrl0);
    WriteSingleReg(FREQ2,    pRfSettings->freq2);
    WriteSingleReg(FREQ1,    pRfSettings->freq1);
    WriteSingleReg(FREQ0,    pRfSettings->freq0);
    WriteSingleReg(MDMCFG4,  pRfSettings->mdmcfg4);
    WriteSingleReg(MDMCFG3,  pRfSettings->mdmcfg3);
    WriteSingleReg(MDMCFG2,  pRfSettings->mdmcfg2);
    WriteSingleReg(MDMCFG1,  pRfSettings->mdmcfg1);
    WriteSingleReg(MDMCFG0,  pRfSettings->mdmcfg0);
    WriteSingleReg(CHANNR,   pRfSettings->channr);
    WriteSingleReg(DEVIATN,  pRfSettings->deviatn);
    WriteSingleReg(FREND1,   pRfSettings->frend1);
    WriteSingleReg(FREND0,   pRfSettings->frend0);
    WriteSingleReg(MCSM0 ,   pRfSettings->mcsm0);
    WriteSingleReg(FOCCFG,   pRfSettings->foccfg);
    WriteSingleReg(BSCFG,    pRfSettings->bscfg);
    WriteSingleReg(AGCCTRL2, pRfSettings->agcctrl2);
    WriteSingleReg(AGCCTRL1, pRfSettings->agcctrl1);
    WriteSingleReg(AGCCTRL0, pRfSettings->agcctrl0);
    WriteSingleReg(FSCAL3,   pRfSettings->fscal3);
    WriteSingleReg(FSCAL2,   pRfSettings->fscal2);
    WriteSingleReg(FSCAL1,   pRfSettings->fscal1);
    WriteSingleReg(FSCAL0,   pRfSettings->fscal0);
    WriteSingleReg(FSTEST,   pRfSettings->fstest);
    WriteSingleReg(TEST2,    pRfSettings->test2);
    WriteSingleReg(TEST1,    pRfSettings->test1);
    WriteSingleReg(TEST0,    pRfSettings->test0);
    WriteSingleReg(FIFOTHR,  pRfSettings->fifothr);
    WriteSingleReg(IOCFG2,   pRfSettings->iocfg2);
    WriteSingleReg(IOCFG0,   pRfSettings->iocfg0);
    WriteSingleReg(PKTCTRL1, pRfSettings->pktctrl1);
    WriteSingleReg(PKTCTRL0, pRfSettings->pktctrl0);
    WriteSingleReg(ADDR,     pRfSettings->addr);
    WriteSingleReg(PKTLEN,   pRfSettings->pktlen);
}

/**********************************************************************************/
/*  Function name: RF_Connection_Test         	                                  */
/*  	Parameters                                                                */
/*          Input   :  No       			                          */
/*          Output  :  True or False                                              */
/*	Action: Send packet when BUT is pressed and receive echo.       	  */
/**********************************************************************************/
void RF_Connection_Test(void)
{  
  Init_RF();
  buttonPressed = 0;
  button_on = 0;
  timer1_A3_Stop_Mode;
  
  while(1){
    
    if (0U != buttonPressed)                      // Process a button pressed --> transmit
    {
      //P3OUT |= BIT6;                        // Pulse LED during Transmit
      buttonPressed = 0; 
      
      ReceiveOff();
      Transmit( (unsigned char*)TxBuffer, 12);
      
      //Wait for TX status to be reached before going back to low power mode
      while((Strobe(RF_SNOP) & 0x70) != 0x20);    
    }
    else if (packetTransmit)
    {
      RF1AIE &= ~BIT9;                      // Disable RFIFG9 TX end-of-packet interrupts
      //P3OUT &= ~BIT6;                       // Turn off LED after Transmit 
      
      ReceiveOn();
      
      //Wait for RX status to be reached
      while((Strobe(RF_SNOP) & 0x70) != 0x10); 
    
      packetTransmit = 0; 
      for(long i = 0xFFFFFU ; i >0; i--);
      PORT1->OUT_bits.PIN0 = 0U;
      PORT1->IE_bits.PIN7 = 1U;
    }
    else if(packetReceived)                 // Process a received packet 
    {
      char toggle = 1; 
      
      // Read the length byte from the FIFO       
      RxBufferLength = ReadSingleReg( RXBYTES );               
      ReadBurstReg(RF_RXFIFORD, RxBuffer, 12);
    
      // Check the packet contents and don't toggle LED if they are different 
      for(i = 0; i < RxBuffer[0]; i++)
      {
        if(RxBuffer[i] != TxBuffer[i]) toggle = 0; 
      }      
        
      if(toggle){
        LED_Togg;                  // Toggle LED
        packetReceived = 0; 
      }
      
    }
  }
}


/**********************************************************************************/
/*      PORT1, interrupt service routine.                                         */
/**********************************************************************************/
uint16_t PORT1_ISR(uintptr_t uptrPort, void* pvPinNumber)
{
    PORT1_t* pstPort = (PORT1_t*) uptrPort;
    uint8_t u8ValuePin;

    u8ValuePin = 1U;
    u8ValuePin <<= (uint8_t) pvPinNumber;

    if(0UL == (pstPort->IN & u8ValuePin))
    {
        if(0UL != (pstPort->IES & u8ValuePin)) /*High-To-Low*/
        {
            //pstPort->IES &= ~u8ValuePin;
            PORT1->OUT_bits.PIN0 = 1U;
            PORT1->IE_bits.PIN7 = 0U;
            buttonPressed = 1U;
        }
    }
    else
    {
        if(0UL == (pstPort->IES & u8ValuePin)) /*Low-To-High*/
        {
            pstPort->IES |= u8ValuePin;
            PORT1->OUT_bits.PIN0 = 0U;
        }
    }
    return (0xFF);
}


/****************************************************************************/
/*  Timer1_A3 CC0 interrupt service routine.                                */
/****************************************************************************/
__interrupt void TIMER1_A0_Capture_Compare_ISR(void)
{
}

