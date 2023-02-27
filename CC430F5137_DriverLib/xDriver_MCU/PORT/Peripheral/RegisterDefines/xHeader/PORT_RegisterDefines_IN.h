/**
 *
 * @file PORT_RegisterDefines_IN.h
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
 * @verbatim 6 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IN_H_
#define PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IN_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 1 IN *********************************************
 ******************************************************************************************/
/*-----------*/
#define PORT_IN_R_PIN_ALL_BIT ((UBase_t) 0U)

#define PORT_IN_PIN_ALL_MASK ((UBase_t) 0xFFFFU)
#define PORT_IN_PIN_ALL_LOW ((UBase_t) 0x0000U)
#define PORT_IN_PIN_ALL_HIGH ((UBase_t) 0xFFFFU)

#define PORT_IN_R_PIN_ALL_MASK (PORT_IN_PIN_ALL_MASK << PORT_IN_R_PIN0_BIT)
#define PORT_IN_R_PIN_ALL_LOW (PORT_IN_PIN_ALL_LOW << PORT_IN_R_PIN0_BIT)
#define PORT_IN_R_PIN_ALL_HIGH (PORT_IN_PIN_ALL_HIGH << PORT_IN_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN0_BIT ((UBase_t) 0U)

#define PORT_IN_PIN0_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN0_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN0_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN0_MASK (PORT_IN_PIN0_MASK << PORT_IN_R_PIN0_BIT)
#define PORT_IN_R_PIN0_LOW (PORT_IN_PIN0_LOW << PORT_IN_R_PIN0_BIT)
#define PORT_IN_R_PIN0_HIGH (PORT_IN_PIN0_HIGH << PORT_IN_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN1_BIT ((UBase_t) 1U)

#define PORT_IN_PIN1_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN1_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN1_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN1_MASK (PORT_IN_PIN1_MASK << PORT_IN_R_PIN1_BIT)
#define PORT_IN_R_PIN1_LOW (PORT_IN_PIN1_LOW << PORT_IN_R_PIN1_BIT)
#define PORT_IN_R_PIN1_HIGH (PORT_IN_PIN1_HIGH << PORT_IN_R_PIN1_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN2_BIT ((UBase_t) 2U)

#define PORT_IN_PIN2_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN2_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN2_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN2_MASK (PORT_IN_PIN2_MASK << PORT_IN_R_PIN2_BIT)
#define PORT_IN_R_PIN2_LOW (PORT_IN_PIN2_LOW << PORT_IN_R_PIN2_BIT)
#define PORT_IN_R_PIN2_HIGH (PORT_IN_PIN2_HIGH << PORT_IN_R_PIN2_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN3_BIT ((UBase_t) 3U)

#define PORT_IN_PIN3_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN3_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN3_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN3_MASK (PORT_IN_PIN3_MASK << PORT_IN_R_PIN3_BIT)
#define PORT_IN_R_PIN3_LOW (PORT_IN_PIN3_LOW << PORT_IN_R_PIN3_BIT)
#define PORT_IN_R_PIN3_HIGH (PORT_IN_PIN3_HIGH << PORT_IN_R_PIN3_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN4_BIT ((UBase_t) 4U)

#define PORT_IN_PIN4_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN4_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN4_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN4_MASK (PORT_IN_PIN4_MASK << PORT_IN_R_PIN4_BIT)
#define PORT_IN_R_PIN4_LOW (PORT_IN_PIN4_LOW << PORT_IN_R_PIN4_BIT)
#define PORT_IN_R_PIN4_HIGH (PORT_IN_PIN4_HIGH << PORT_IN_R_PIN4_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN5_BIT ((UBase_t) 5U)

#define PORT_IN_PIN5_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN5_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN5_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN5_MASK (PORT_IN_PIN5_MASK << PORT_IN_R_PIN5_BIT)
#define PORT_IN_R_PIN5_LOW (PORT_IN_PIN5_LOW << PORT_IN_R_PIN5_BIT)
#define PORT_IN_R_PIN5_HIGH (PORT_IN_PIN5_HIGH << PORT_IN_R_PIN5_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN6_BIT ((UBase_t) 6U)

#define PORT_IN_PIN6_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN6_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN6_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN6_MASK (PORT_IN_PIN6_MASK << PORT_IN_R_PIN6_BIT)
#define PORT_IN_R_PIN6_LOW (PORT_IN_PIN6_LOW << PORT_IN_R_PIN6_BIT)
#define PORT_IN_R_PIN6_HIGH (PORT_IN_PIN6_HIGH << PORT_IN_R_PIN6_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN7_BIT ((UBase_t) 7U)

#define PORT_IN_PIN7_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN7_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN7_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN7_MASK (PORT_IN_PIN7_MASK << PORT_IN_R_PIN7_BIT)
#define PORT_IN_R_PIN7_LOW (PORT_IN_PIN7_LOW << PORT_IN_R_PIN7_BIT)
#define PORT_IN_R_PIN7_HIGH (PORT_IN_PIN7_HIGH << PORT_IN_R_PIN7_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN8_BIT ((UBase_t) 8U)

#define PORT_IN_PIN8_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN8_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN8_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN8_MASK (PORT_IN_PIN8_MASK << PORT_IN_R_PIN8_BIT)
#define PORT_IN_R_PIN8_LOW (PORT_IN_PIN8_LOW << PORT_IN_R_PIN8_BIT)
#define PORT_IN_R_PIN8_HIGH (PORT_IN_PIN8_HIGH << PORT_IN_R_PIN8_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN9_BIT ((UBase_t) 9U)

#define PORT_IN_PIN9_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN9_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN9_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN9_MASK (PORT_IN_PIN9_MASK << PORT_IN_R_PIN9_BIT)
#define PORT_IN_R_PIN9_LOW (PORT_IN_PIN9_LOW << PORT_IN_R_PIN9_BIT)
#define PORT_IN_R_PIN9_HIGH (PORT_IN_PIN9_HIGH << PORT_IN_R_PIN9_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN10_BIT ((UBase_t) 10U)

#define PORT_IN_PIN10_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN10_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN10_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN10_MASK (PORT_IN_PIN10_MASK << PORT_IN_R_PIN10_BIT)
#define PORT_IN_R_PIN10_LOW (PORT_IN_PIN10_LOW << PORT_IN_R_PIN10_BIT)
#define PORT_IN_R_PIN10_HIGH (PORT_IN_PIN10_HIGH << PORT_IN_R_PIN10_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN11_BIT ((UBase_t) 11U)

#define PORT_IN_PIN11_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN11_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN11_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN11_MASK (PORT_IN_PIN11_MASK << PORT_IN_R_PIN11_BIT)
#define PORT_IN_R_PIN11_LOW (PORT_IN_PIN11_LOW << PORT_IN_R_PIN11_BIT)
#define PORT_IN_R_PIN11_HIGH (PORT_IN_PIN11_HIGH << PORT_IN_R_PIN11_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN12_BIT ((UBase_t) 12U)

#define PORT_IN_PIN12_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN12_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN12_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN12_MASK (PORT_IN_PIN12_MASK << PORT_IN_R_PIN12_BIT)
#define PORT_IN_R_PIN12_LOW (PORT_IN_PIN12_LOW << PORT_IN_R_PIN12_BIT)
#define PORT_IN_R_PIN12_HIGH (PORT_IN_PIN12_HIGH << PORT_IN_R_PIN12_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN13_BIT ((UBase_t) 13U)

#define PORT_IN_PIN13_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN13_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN13_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN13_MASK (PORT_IN_PIN13_MASK << PORT_IN_R_PIN13_BIT)
#define PORT_IN_R_PIN13_LOW (PORT_IN_PIN13_LOW << PORT_IN_R_PIN13_BIT)
#define PORT_IN_R_PIN13_HIGH (PORT_IN_PIN13_HIGH << PORT_IN_R_PIN13_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN14_BIT ((UBase_t) 14U)

#define PORT_IN_PIN14_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN14_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN14_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN14_MASK (PORT_IN_PIN14_MASK << PORT_IN_R_PIN14_BIT)
#define PORT_IN_R_PIN14_LOW (PORT_IN_PIN14_LOW << PORT_IN_R_PIN14_BIT)
#define PORT_IN_R_PIN14_HIGH (PORT_IN_PIN14_HIGH << PORT_IN_R_PIN14_BIT)
/*-----------*/

/*-----------*/
#define PORT_IN_R_PIN15_BIT ((UBase_t) 15U)

#define PORT_IN_PIN15_MASK ((UBase_t) 0x01U)
#define PORT_IN_PIN15_LOW ((UBase_t) 0x00U)
#define PORT_IN_PIN15_HIGH ((UBase_t) 0x01U)

#define PORT_IN_R_PIN15_MASK (PORT_IN_PIN15_MASK << PORT_IN_R_PIN15_BIT)
#define PORT_IN_R_PIN15_LOW (PORT_IN_PIN15_LOW << PORT_IN_R_PIN15_BIT)
#define PORT_IN_R_PIN15_HIGH (PORT_IN_PIN15_HIGH << PORT_IN_R_PIN15_BIT)
/*-----------*/


#endif /* PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IN_H_ */
