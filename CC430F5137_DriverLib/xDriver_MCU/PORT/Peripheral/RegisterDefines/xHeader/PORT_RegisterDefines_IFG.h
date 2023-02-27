/**
 *
 * @file PORT_RegisterDefines_IFG.h
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

#ifndef PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IFG_H_
#define PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IFG_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 9 IFG *********************************************
 ******************************************************************************************/
/*-----------*/
#define PORT_IFG_R_PIN_ALL_BIT ((UBase_t) 0U)

#define PORT_IFG_PIN_ALL_MASK ((UBase_t) 0xFFFFU)
#define PORT_IFG_PIN_ALL_INACTIVE ((UBase_t) 0x0000U)
#define PORT_IFG_PIN_ALL_ACTIVE ((UBase_t) 0xFFFFU)

#define PORT_IFG_R_PIN_ALL_MASK (PORT_IFG_PIN_ALL_MASK << PORT_IFG_R_PIN0_BIT)
#define PORT_IFG_R_PIN_ALL_INACTIVE (PORT_IFG_PIN_ALL_INACTIVE << PORT_IFG_R_PIN0_BIT)
#define PORT_IFG_R_PIN_ALL_ACTIVE (PORT_IFG_PIN_ALL_ACTIVE << PORT_IFG_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN0_BIT ((UBase_t) 0U)

#define PORT_IFG_PIN0_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN0_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN0_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN0_MASK (PORT_IFG_PIN0_MASK << PORT_IFG_R_PIN0_BIT)
#define PORT_IFG_R_PIN0_INACTIVE (PORT_IFG_PIN0_INACTIVE << PORT_IFG_R_PIN0_BIT)
#define PORT_IFG_R_PIN0_ACTIVE (PORT_IFG_PIN0_ACTIVE << PORT_IFG_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN1_BIT ((UBase_t) 1U)

#define PORT_IFG_PIN1_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN1_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN1_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN1_MASK (PORT_IFG_PIN1_MASK << PORT_IFG_R_PIN1_BIT)
#define PORT_IFG_R_PIN1_INACTIVE (PORT_IFG_PIN1_INACTIVE << PORT_IFG_R_PIN1_BIT)
#define PORT_IFG_R_PIN1_ACTIVE (PORT_IFG_PIN1_ACTIVE << PORT_IFG_R_PIN1_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN2_BIT ((UBase_t) 2U)

#define PORT_IFG_PIN2_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN2_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN2_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN2_MASK (PORT_IFG_PIN2_MASK << PORT_IFG_R_PIN2_BIT)
#define PORT_IFG_R_PIN2_INACTIVE (PORT_IFG_PIN2_INACTIVE << PORT_IFG_R_PIN2_BIT)
#define PORT_IFG_R_PIN2_ACTIVE (PORT_IFG_PIN2_ACTIVE << PORT_IFG_R_PIN2_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN3_BIT ((UBase_t) 3U)

#define PORT_IFG_PIN3_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN3_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN3_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN3_MASK (PORT_IFG_PIN3_MASK << PORT_IFG_R_PIN3_BIT)
#define PORT_IFG_R_PIN3_INACTIVE (PORT_IFG_PIN3_INACTIVE << PORT_IFG_R_PIN3_BIT)
#define PORT_IFG_R_PIN3_ACTIVE (PORT_IFG_PIN3_ACTIVE << PORT_IFG_R_PIN3_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN4_BIT ((UBase_t) 4U)

#define PORT_IFG_PIN4_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN4_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN4_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN4_MASK (PORT_IFG_PIN4_MASK << PORT_IFG_R_PIN4_BIT)
#define PORT_IFG_R_PIN4_INACTIVE (PORT_IFG_PIN4_INACTIVE << PORT_IFG_R_PIN4_BIT)
#define PORT_IFG_R_PIN4_ACTIVE (PORT_IFG_PIN4_ACTIVE << PORT_IFG_R_PIN4_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN5_BIT ((UBase_t) 5U)

#define PORT_IFG_PIN5_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN5_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN5_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN5_MASK (PORT_IFG_PIN5_MASK << PORT_IFG_R_PIN5_BIT)
#define PORT_IFG_R_PIN5_INACTIVE (PORT_IFG_PIN5_INACTIVE << PORT_IFG_R_PIN5_BIT)
#define PORT_IFG_R_PIN5_ACTIVE (PORT_IFG_PIN5_ACTIVE << PORT_IFG_R_PIN5_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN6_BIT ((UBase_t) 6U)

#define PORT_IFG_PIN6_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN6_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN6_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN6_MASK (PORT_IFG_PIN6_MASK << PORT_IFG_R_PIN6_BIT)
#define PORT_IFG_R_PIN6_INACTIVE (PORT_IFG_PIN6_INACTIVE << PORT_IFG_R_PIN6_BIT)
#define PORT_IFG_R_PIN6_ACTIVE (PORT_IFG_PIN6_ACTIVE << PORT_IFG_R_PIN6_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN7_BIT ((UBase_t) 7U)

#define PORT_IFG_PIN7_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN7_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN7_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN7_MASK (PORT_IFG_PIN7_MASK << PORT_IFG_R_PIN7_BIT)
#define PORT_IFG_R_PIN7_INACTIVE (PORT_IFG_PIN7_INACTIVE << PORT_IFG_R_PIN7_BIT)
#define PORT_IFG_R_PIN7_ACTIVE (PORT_IFG_PIN7_ACTIVE << PORT_IFG_R_PIN7_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN8_BIT ((UBase_t) 8U)

#define PORT_IFG_PIN8_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN8_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN8_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN8_MASK (PORT_IFG_PIN8_MASK << PORT_IFG_R_PIN8_BIT)
#define PORT_IFG_R_PIN8_INACTIVE (PORT_IFG_PIN8_INACTIVE << PORT_IFG_R_PIN8_BIT)
#define PORT_IFG_R_PIN8_ACTIVE (PORT_IFG_PIN8_ACTIVE << PORT_IFG_R_PIN8_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN9_BIT ((UBase_t) 9U)

#define PORT_IFG_PIN9_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN9_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN9_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN9_MASK (PORT_IFG_PIN9_MASK << PORT_IFG_R_PIN9_BIT)
#define PORT_IFG_R_PIN9_INACTIVE (PORT_IFG_PIN9_INACTIVE << PORT_IFG_R_PIN9_BIT)
#define PORT_IFG_R_PIN9_ACTIVE (PORT_IFG_PIN9_ACTIVE << PORT_IFG_R_PIN9_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN10_BIT ((UBase_t) 10U)

#define PORT_IFG_PIN10_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN10_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN10_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN10_MASK (PORT_IFG_PIN10_MASK << PORT_IFG_R_PIN10_BIT)
#define PORT_IFG_R_PIN10_INACTIVE (PORT_IFG_PIN10_INACTIVE << PORT_IFG_R_PIN10_BIT)
#define PORT_IFG_R_PIN10_ACTIVE (PORT_IFG_PIN10_ACTIVE << PORT_IFG_R_PIN10_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN11_BIT ((UBase_t) 11U)

#define PORT_IFG_PIN11_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN11_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN11_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN11_MASK (PORT_IFG_PIN11_MASK << PORT_IFG_R_PIN11_BIT)
#define PORT_IFG_R_PIN11_INACTIVE (PORT_IFG_PIN11_INACTIVE << PORT_IFG_R_PIN11_BIT)
#define PORT_IFG_R_PIN11_ACTIVE (PORT_IFG_PIN11_ACTIVE << PORT_IFG_R_PIN11_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN12_BIT ((UBase_t) 12U)

#define PORT_IFG_PIN12_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN12_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN12_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN12_MASK (PORT_IFG_PIN12_MASK << PORT_IFG_R_PIN12_BIT)
#define PORT_IFG_R_PIN12_INACTIVE (PORT_IFG_PIN12_INACTIVE << PORT_IFG_R_PIN12_BIT)
#define PORT_IFG_R_PIN12_ACTIVE (PORT_IFG_PIN12_ACTIVE << PORT_IFG_R_PIN12_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN13_BIT ((UBase_t) 13U)

#define PORT_IFG_PIN13_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN13_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN13_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN13_MASK (PORT_IFG_PIN13_MASK << PORT_IFG_R_PIN13_BIT)
#define PORT_IFG_R_PIN13_INACTIVE (PORT_IFG_PIN13_INACTIVE << PORT_IFG_R_PIN13_BIT)
#define PORT_IFG_R_PIN13_ACTIVE (PORT_IFG_PIN13_ACTIVE << PORT_IFG_R_PIN13_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN14_BIT ((UBase_t) 14U)

#define PORT_IFG_PIN14_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN14_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN14_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN14_MASK (PORT_IFG_PIN14_MASK << PORT_IFG_R_PIN14_BIT)
#define PORT_IFG_R_PIN14_INACTIVE (PORT_IFG_PIN14_INACTIVE << PORT_IFG_R_PIN14_BIT)
#define PORT_IFG_R_PIN14_ACTIVE (PORT_IFG_PIN14_ACTIVE << PORT_IFG_R_PIN14_BIT)
/*-----------*/

/*-----------*/
#define PORT_IFG_R_PIN15_BIT ((UBase_t) 15U)

#define PORT_IFG_PIN15_MASK ((UBase_t) 0x01U)
#define PORT_IFG_PIN15_INACTIVE ((UBase_t) 0x00U)
#define PORT_IFG_PIN15_ACTIVE ((UBase_t) 0x01U)

#define PORT_IFG_R_PIN15_MASK (PORT_IFG_PIN15_MASK << PORT_IFG_R_PIN15_BIT)
#define PORT_IFG_R_PIN15_INACTIVE (PORT_IFG_PIN15_INACTIVE << PORT_IFG_R_PIN15_BIT)
#define PORT_IFG_R_PIN15_ACTIVE (PORT_IFG_PIN15_ACTIVE << PORT_IFG_R_PIN15_BIT)
/*-----------*/

#endif /* PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IFG_H_ */
