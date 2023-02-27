/**
 *
 * @file PORT_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_RegisterAddress.h>
#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_StructPeripheral.h>

#define PORT    ((PORT_t*) (PORT_BASE))
#define PORT1    ((PORT1_t*) (PORT1_BASE))
#define PORT2    ((PORT2_t*) (PORT1_BASE))
#define PORTA    ((PORTA_t*) (PORTA_BASE))
#define PORT3    ((PORT35_t*) (PORT3_BASE))
#define PORT4    ((PORT4_t*) (PORT3_BASE))
#define PORTB    ((PORTB_t*) (PORTB_BASE))
#define PORT5    ((PORT35_t*) (PORT5_BASE))
#define PORTC    ((PORTB_t*) (PORTC_BASE))
#define PORTJ    ((PORTJ_t*) (PORTJ_BASE))

/********************************************************************************************
************************************** 1 IN **********************************************
********************************************************************************************/
#define PORT1_IN    ((PORT_REG_CONST_t*) (PORT1_BASE + PORT_IN_OFFSET ))
#define PORT1_IN_R    (*((volatile const uint8_t*) (PORT1_BASE + PORT_IN_OFFSET)))
#define PORT2_IN    ((PORT_REG_CONST_t*) (PORT2_BASE + PORT_IN_OFFSET ))
#define PORT2_IN_R    (*((volatile const uint8_t*) (PORT2_BASE + PORT_IN_OFFSET)))
#define PORTA_IN    ((PORT16_REG_CONST_t*) (PORTA_BASE + PORT_IN_OFFSET ))
#define PORTA_IN_R    (*((volatile const UBase_t*) (PORTA_BASE + PORT_IN_OFFSET)))

#define PORT3_IN    ((PORT_REG_CONST_t*) (PORT3_BASE + PORT_IN_OFFSET ))
#define PORT3_IN_R    (*((volatile const uint8_t*) (PORT3_BASE + PORT_IN_OFFSET)))
#define PORT4_IN    ((PORT_REG_CONST_t*) (PORT4_BASE + PORT_IN_OFFSET ))
#define PORT4_IN_R    (*((volatile const uint8_t*) (PORT4_BASE + PORT_IN_OFFSET)))
#define PORTB_IN    ((PORT16_REG_CONST_t*) (PORTB_BASE + PORT_IN_OFFSET ))
#define PORTB_IN_R    (*((volatile const UBase_t*) (PORTB_BASE + PORT_IN_OFFSET)))

#define PORT5_IN    ((PORT_REG_CONST_t*) (PORT5_BASE + PORT_IN_OFFSET ))
#define PORT5_IN_R    (*((volatile const uint8_t*) (PORT5_BASE + PORT_IN_OFFSET)))
#define PORTC_IN    ((PORT16_REG_CONST_t*) (PORTC_BASE + PORT_IN_OFFSET ))
#define PORTC_IN_R    (*((volatile const UBase_t*) (PORTC_BASE + PORT_IN_OFFSET)))

#define PORTJ_IN    ((PORT16_REG_CONST_t*) (PORTJ_BASE + PORT_IN_OFFSET ))
#define PORTJ_IN_R    (*((volatile const UBase_t*) (PORTJ_BASE + PORT_IN_OFFSET)))

/********************************************************************************************
************************************** 2 OUT **********************************************
********************************************************************************************/
#define PORT1_OUT    ((PORT_REG_t*) (PORT1_BASE + PORT_OUT_OFFSET ))
#define PORT1_OUT_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_OUT_OFFSET)))
#define PORT2_OUT    ((PORT_REG_t*) (PORT2_BASE + PORT_OUT_OFFSET ))
#define PORT2_OUT_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_OUT_OFFSET)))
#define PORTA_OUT    ((PORT16_REG_t*) (PORTA_BASE + PORT_OUT_OFFSET ))
#define PORTA_OUT_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_OUT_OFFSET)))

#define PORT3_OUT    ((PORT_REG_t*) (PORT3_BASE + PORT_OUT_OFFSET ))
#define PORT3_OUT_R    (*((volatile uint8_t*) (PORT3_BASE + PORT_OUT_OFFSET)))
#define PORT4_OUT    ((PORT_REG_t*) (PORT4_BASE + PORT_OUT_OFFSET ))
#define PORT4_OUT_R    (*((volatile uint8_t*) (PORT4_BASE + PORT_OUT_OFFSET)))
#define PORTB_OUT    ((PORT16_REG_t*) (PORTB_BASE + PORT_OUT_OFFSET ))
#define PORTB_OUT_R    (*((volatile UBase_t*) (PORTB_BASE + PORT_OUT_OFFSET)))

#define PORT5_OUT    ((PORT_REG_t*) (PORT5_BASE + PORT_OUT_OFFSET ))
#define PORT5_OUT_R    (*((volatile uint8_t*) (PORT5_BASE + PORT_OUT_OFFSET)))
#define PORTC_OUT    ((PORT16_REG_CONST_t*) (PORTC_BASE + PORT_OUT_OFFSET ))
#define PORTC_OUT_R    (*((volatile UBase_t*) (PORTC_BASE + PORT_OUT_OFFSET)))

#define PORTJ_OUT    ((PORT16_REG_t*) (PORTJ_BASE + PORT_OUT_OFFSET ))
#define PORTJ_OUT_R    (*((volatile UBase_t*) (PORTJ_BASE + PORT_OUT_OFFSET)))

/********************************************************************************************
************************************** 3 DIR **********************************************
********************************************************************************************/
#define PORT1_DIR    ((PORT_REG_t*) (PORT1_BASE + PORT_DIR_OFFSET ))
#define PORT1_DIR_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_DIR_OFFSET)))
#define PORT2_DIR    ((PORT_REG_t*) (PORT2_BASE + PORT_DIR_OFFSET ))
#define PORT2_DIR_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_DIR_OFFSET)))
#define PORTA_DIR    ((PORT16_REG_t*) (PORTA_BASE + PORT_DIR_OFFSET ))
#define PORTA_DIR_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_DIR_OFFSET)))

#define PORT3_DIR    ((PORT_REG_t*) (PORT3_BASE + PORT_DIR_OFFSET ))
#define PORT3_DIR_R    (*((volatile uint8_t*) (PORT3_BASE + PORT_DIR_OFFSET)))
#define PORT4_DIR    ((PORT_REG_t*) (PORT4_BASE + PORT_DIR_OFFSET ))
#define PORT4_DIR_R    (*((volatile uint8_t*) (PORT4_BASE + PORT_DIR_OFFSET)))
#define PORTB_DIR    ((PORT16_REG_t*) (PORTB_BASE + PORT_DIR_OFFSET ))
#define PORTB_DIR_R    (*((volatile UBase_t*) (PORTB_BASE + PORT_DIR_OFFSET)))

#define PORT5_DIR    ((PORT_REG_t*) (PORT5_BASE + PORT_DIR_OFFSET ))
#define PORT5_DIR_R    (*((volatile uint8_t*) (PORT5_BASE + PORT_DIR_OFFSET)))
#define PORTC_DIR    ((PORT16_REG_CONST_t*) (PORTC_BASE + PORT_DIR_OFFSET ))
#define PORTC_DIR_R    (*((volatile UBase_t*) (PORTC_BASE + PORT_DIR_OFFSET)))

#define PORTJ_DIR    ((PORT16_REG_t*) (PORTJ_BASE + PORT_DIR_OFFSET ))
#define PORTJ_DIR_R    (*((volatile UBase_t*) (PORTJ_BASE + PORT_DIR_OFFSET)))

/********************************************************************************************
************************************** 4 REN **********************************************
********************************************************************************************/
#define PORT1_REN    ((PORT_REG_t*) (PORT1_BASE + PORT_REN_OFFSET ))
#define PORT1_REN_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_REN_OFFSET)))
#define PORT2_REN    ((PORT_REG_t*) (PORT2_BASE + PORT_REN_OFFSET ))
#define PORT2_REN_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_REN_OFFSET)))
#define PORTA_REN    ((PORT16_REG_t*) (PORTA_BASE + PORT_REN_OFFSET ))
#define PORTA_REN_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_REN_OFFSET)))

#define PORT3_REN    ((PORT_REG_t*) (PORT3_BASE + PORT_REN_OFFSET ))
#define PORT3_REN_R    (*((volatile uint8_t*) (PORT3_BASE + PORT_REN_OFFSET)))
#define PORT4_REN    ((PORT_REG_t*) (PORT4_BASE + PORT_REN_OFFSET ))
#define PORT4_REN_R    (*((volatile uint8_t*) (PORT4_BASE + PORT_REN_OFFSET)))
#define PORTB_REN    ((PORT16_REG_t*) (PORTB_BASE + PORT_REN_OFFSET ))
#define PORTB_REN_R    (*((volatile UBase_t*) (PORTB_BASE + PORT_REN_OFFSET)))

#define PORT5_REN    ((PORT_REG_t*) (PORT5_BASE + PORT_REN_OFFSET ))
#define PORT5_REN_R    (*((volatile uint8_t*) (PORT5_BASE + PORT_REN_OFFSET)))
#define PORTC_REN    ((PORT16_REG_CONST_t*) (PORTC_BASE + PORT_REN_OFFSET ))
#define PORTC_REN_R    (*((volatile UBase_t*) (PORTC_BASE + PORT_REN_OFFSET)))

#define PORTJ_REN    ((PORT16_REG_t*) (PORTJ_BASE + PORT_REN_OFFSET ))
#define PORTJ_REN_R    (*((volatile UBase_t*) (PORTJ_BASE + PORT_REN_OFFSET)))

/********************************************************************************************
************************************** 5 DS **********************************************
********************************************************************************************/
#define PORT1_DS    ((PORT_REG_t*) (PORT1_BASE + PORT_DS_OFFSET ))
#define PORT1_DS_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_DS_OFFSET)))
#define PORT2_DS    ((PORT_REG_t*) (PORT2_BASE + PORT_DS_OFFSET ))
#define PORT2_DS_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_DS_OFFSET)))
#define PORTA_DS    ((PORT16_REG_t*) (PORTA_BASE + PORT_DS_OFFSET ))
#define PORTA_DS_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_DS_OFFSET)))

#define PORT3_DS    ((PORT_REG_t*) (PORT3_BASE + PORT_DS_OFFSET ))
#define PORT3_DS_R    (*((volatile uint8_t*) (PORT3_BASE + PORT_DS_OFFSET)))
#define PORT4_DS    ((PORT_REG_t*) (PORT4_BASE + PORT_DS_OFFSET ))
#define PORT4_DS_R    (*((volatile uint8_t*) (PORT4_BASE + PORT_DS_OFFSET)))
#define PORTB_DS    ((PORT16_REG_t*) (PORTB_BASE + PORT_DS_OFFSET ))
#define PORTB_DS_R    (*((volatile UBase_t*) (PORTB_BASE + PORT_DS_OFFSET)))

#define PORT5_DS    ((PORT_REG_t*) (PORT5_BASE + PORT_DS_OFFSET ))
#define PORT5_DS_R    (*((volatile uint8_t*) (PORT5_BASE + PORT_DS_OFFSET)))
#define PORTC_DS    ((PORT16_REG_CONST_t*) (PORTC_BASE + PORT_DS_OFFSET ))
#define PORTC_DS_R    (*((volatile UBase_t*) (PORTC_BASE + PORT_DS_OFFSET)))

#define PORTJ_DS    ((PORT16_REG_t*) (PORTJ_BASE + PORT_DS_OFFSET ))
#define PORTJ_DS_R    (*((volatile UBase_t*) (PORTJ_BASE + PORT_DS_OFFSET)))

/********************************************************************************************
************************************** 6 SEL **********************************************
********************************************************************************************/
#define PORT1_SEL    ((PORT_REG_t*) (PORT1_BASE + PORT_SEL_OFFSET ))
#define PORT1_SEL_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_SEL_OFFSET)))
#define PORT2_SEL    ((PORT_REG_t*) (PORT2_BASE + PORT_SEL_OFFSET ))
#define PORT2_SEL_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_SEL_OFFSET)))
#define PORTA_SEL    ((PORT16_REG_t*) (PORTA_BASE + PORT_SEL_OFFSET ))
#define PORTA_SEL_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_SEL_OFFSET)))

#define PORT3_SEL    ((PORT_REG_t*) (PORT3_BASE + PORT_SEL_OFFSET ))
#define PORT3_SEL_R    (*((volatile uint8_t*) (PORT3_BASE + PORT_SEL_OFFSET)))
#define PORT4_SEL    ((PORT_REG_t*) (PORT4_BASE + PORT_SEL_OFFSET ))
#define PORT4_SEL_R    (*((volatile uint8_t*) (PORT4_BASE + PORT_SEL_OFFSET)))
#define PORTB_SEL    ((PORT16_REG_t*) (PORTB_BASE + PORT_SEL_OFFSET ))
#define PORTB_SEL_R    (*((volatile UBase_t*) (PORTB_BASE + PORT_SEL_OFFSET)))

#define PORT5_SEL    ((PORT_REG_t*) (PORT5_BASE + PORT_SEL_OFFSET ))
#define PORT5_SEL_R    (*((volatile uint8_t*) (PORT5_BASE + PORT_SEL_OFFSET)))
#define PORTC_SEL    ((PORT16_REG_CONST_t*) (PORTC_BASE + PORT_SEL_OFFSET ))
#define PORTC_SEL_R    (*((volatile UBase_t*) (PORTC_BASE + PORT_SEL_OFFSET)))

/********************************************************************************************
************************************** 7 IES **********************************************
********************************************************************************************/
#define PORT1_IES    ((PORT_REG_t*) (PORT1_BASE + PORT_IES_OFFSET ))
#define PORT1_IES_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_IES_OFFSET)))
#define PORT2_IES    ((PORT_REG_t*) (PORT2_BASE + PORT_IES_OFFSET ))
#define PORT2_IES_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_IES_OFFSET)))
#define PORTA_IES    ((PORT16_REG_t*) (PORTA_BASE + PORT_IES_OFFSET ))
#define PORTA_IES_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_IES_OFFSET)))

/********************************************************************************************
************************************** 8 IE **********************************************
********************************************************************************************/
#define PORT1_IE    ((PORT_REG_t*) (PORT1_BASE + PORT_IE_OFFSET ))
#define PORT1_IE_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_IE_OFFSET)))
#define PORT2_IE    ((PORT_REG_t*) (PORT2_BASE + PORT_IE_OFFSET ))
#define PORT2_IE_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_IE_OFFSET)))
#define PORTA_IE    ((PORT16_REG_t*) (PORTA_BASE + PORT_IE_OFFSET ))
#define PORTA_IE_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_IE_OFFSET)))

/********************************************************************************************
************************************** 9 IFG **********************************************
********************************************************************************************/
#define PORT1_IFG    ((PORT_REG_t*) (PORT1_BASE + PORT_IFG_OFFSET ))
#define PORT1_IFG_R    (*((volatile uint8_t*) (PORT1_BASE + PORT_IFG_OFFSET)))
#define PORT2_IFG    ((PORT_REG_t*) (PORT2_BASE + PORT_IFG_OFFSET ))
#define PORT2_IFG_R    (*((volatile uint8_t*) (PORT2_BASE + PORT_IFG_OFFSET)))
#define PORTA_IFG    ((PORT16_REG_t*) (PORTA_BASE + PORT_IFG_OFFSET ))
#define PORTA_IFG_R    (*((volatile UBase_t*) (PORTA_BASE + PORT_IFG_OFFSET)))

/********************************************************************************************
************************************** 9 IV **********************************************
********************************************************************************************/
#define PORT1_IV    ((PORT_REG_t*) (PORT1_BASE + PORT1_IV_OFFSET ))
#define PORT1_IV_R    (*((volatile uint8_t*) (PORT1_BASE + PORT1_IV_OFFSET)))
#define PORT2_IV    ((PORT_REG_t*) (PORT2_BASE + PORT2_IV_OFFSET ))
#define PORT2_IV_R    (*((volatile uint8_t*) (PORT2_BASE + PORT2_IV_OFFSET)))


uintptr_t PORT__uptrBlockBaseAddress(PORT_nMODULE enModuleArg);
uintptr_t PORT_EXT__uptrBlockBaseAddress(PORT_nMODULE_EXT enModuleArg);

#endif /* XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_REGISTERPERIPHERAL_H_ */
