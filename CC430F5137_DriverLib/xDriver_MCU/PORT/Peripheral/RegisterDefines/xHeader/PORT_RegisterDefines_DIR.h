/**
 *
 * @file PORT_RegisterDefines_DIR.h
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

#ifndef PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_DIR_H_
#define PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_DIR_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 3 DIR *********************************************
 ******************************************************************************************/
/*-----------*/
#define PORT_DIR_R_PIN_ALL_BIT ((UBase_t) 0U)

#define PORT_DIR_PIN_ALL_MASK ((UBase_t) 0xFFFFU)
#define PORT_DIR_PIN_ALL_INPUT ((UBase_t) 0x0000U)
#define PORT_DIR_PIN_ALL_OUTPUT ((UBase_t) 0xFFFFU)

#define PORT_DIR_R_PIN_ALL_MASK (PORT_DIR_PIN_ALL_MASK << PORT_DIR_R_PIN0_BIT)
#define PORT_DIR_R_PIN_ALL_INPUT (PORT_DIR_PIN_ALL_INPUT << PORT_DIR_R_PIN0_BIT)
#define PORT_DIR_R_PIN_ALL_OUTPUT (PORT_DIR_PIN_ALL_OUTPUT << PORT_DIR_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN0_BIT ((UBase_t) 0U)

#define PORT_DIR_PIN0_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN0_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN0_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN0_MASK (PORT_DIR_PIN0_MASK << PORT_DIR_R_PIN0_BIT)
#define PORT_DIR_R_PIN0_INPUT (PORT_DIR_PIN0_INPUT << PORT_DIR_R_PIN0_BIT)
#define PORT_DIR_R_PIN0_OUTPUT (PORT_DIR_PIN0_OUTPUT << PORT_DIR_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN1_BIT ((UBase_t) 1U)

#define PORT_DIR_PIN1_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN1_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN1_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN1_MASK (PORT_DIR_PIN1_MASK << PORT_DIR_R_PIN1_BIT)
#define PORT_DIR_R_PIN1_INPUT (PORT_DIR_PIN1_INPUT << PORT_DIR_R_PIN1_BIT)
#define PORT_DIR_R_PIN1_OUTPUT (PORT_DIR_PIN1_OUTPUT << PORT_DIR_R_PIN1_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN2_BIT ((UBase_t) 2U)

#define PORT_DIR_PIN2_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN2_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN2_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN2_MASK (PORT_DIR_PIN2_MASK << PORT_DIR_R_PIN2_BIT)
#define PORT_DIR_R_PIN2_INPUT (PORT_DIR_PIN2_INPUT << PORT_DIR_R_PIN2_BIT)
#define PORT_DIR_R_PIN2_OUTPUT (PORT_DIR_PIN2_OUTPUT << PORT_DIR_R_PIN2_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN3_BIT ((UBase_t) 3U)

#define PORT_DIR_PIN3_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN3_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN3_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN3_MASK (PORT_DIR_PIN3_MASK << PORT_DIR_R_PIN3_BIT)
#define PORT_DIR_R_PIN3_INPUT (PORT_DIR_PIN3_INPUT << PORT_DIR_R_PIN3_BIT)
#define PORT_DIR_R_PIN3_OUTPUT (PORT_DIR_PIN3_OUTPUT << PORT_DIR_R_PIN3_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN4_BIT ((UBase_t) 4U)

#define PORT_DIR_PIN4_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN4_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN4_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN4_MASK (PORT_DIR_PIN4_MASK << PORT_DIR_R_PIN4_BIT)
#define PORT_DIR_R_PIN4_INPUT (PORT_DIR_PIN4_INPUT << PORT_DIR_R_PIN4_BIT)
#define PORT_DIR_R_PIN4_OUTPUT (PORT_DIR_PIN4_OUTPUT << PORT_DIR_R_PIN4_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN5_BIT ((UBase_t) 5U)

#define PORT_DIR_PIN5_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN5_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN5_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN5_MASK (PORT_DIR_PIN5_MASK << PORT_DIR_R_PIN5_BIT)
#define PORT_DIR_R_PIN5_INPUT (PORT_DIR_PIN5_INPUT << PORT_DIR_R_PIN5_BIT)
#define PORT_DIR_R_PIN5_OUTPUT (PORT_DIR_PIN5_OUTPUT << PORT_DIR_R_PIN5_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN6_BIT ((UBase_t) 6U)

#define PORT_DIR_PIN6_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN6_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN6_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN6_MASK (PORT_DIR_PIN6_MASK << PORT_DIR_R_PIN6_BIT)
#define PORT_DIR_R_PIN6_INPUT (PORT_DIR_PIN6_INPUT << PORT_DIR_R_PIN6_BIT)
#define PORT_DIR_R_PIN6_OUTPUT (PORT_DIR_PIN6_OUTPUT << PORT_DIR_R_PIN6_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN7_BIT ((UBase_t) 7U)

#define PORT_DIR_PIN7_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN7_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN7_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN7_MASK (PORT_DIR_PIN7_MASK << PORT_DIR_R_PIN7_BIT)
#define PORT_DIR_R_PIN7_INPUT (PORT_DIR_PIN7_INPUT << PORT_DIR_R_PIN7_BIT)
#define PORT_DIR_R_PIN7_OUTPUT (PORT_DIR_PIN7_OUTPUT << PORT_DIR_R_PIN7_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN8_BIT ((UBase_t) 8U)

#define PORT_DIR_PIN8_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN8_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN8_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN8_MASK (PORT_DIR_PIN8_MASK << PORT_DIR_R_PIN8_BIT)
#define PORT_DIR_R_PIN8_INPUT (PORT_DIR_PIN8_INPUT << PORT_DIR_R_PIN8_BIT)
#define PORT_DIR_R_PIN8_OUTPUT (PORT_DIR_PIN8_OUTPUT << PORT_DIR_R_PIN8_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN9_BIT ((UBase_t) 9U)

#define PORT_DIR_PIN9_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN9_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN9_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN9_MASK (PORT_DIR_PIN9_MASK << PORT_DIR_R_PIN9_BIT)
#define PORT_DIR_R_PIN9_INPUT (PORT_DIR_PIN9_INPUT << PORT_DIR_R_PIN9_BIT)
#define PORT_DIR_R_PIN9_OUTPUT (PORT_DIR_PIN9_OUTPUT << PORT_DIR_R_PIN9_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN10_BIT ((UBase_t) 10U)

#define PORT_DIR_PIN10_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN10_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN10_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN10_MASK (PORT_DIR_PIN10_MASK << PORT_DIR_R_PIN10_BIT)
#define PORT_DIR_R_PIN10_INPUT (PORT_DIR_PIN10_INPUT << PORT_DIR_R_PIN10_BIT)
#define PORT_DIR_R_PIN10_OUTPUT (PORT_DIR_PIN10_OUTPUT << PORT_DIR_R_PIN10_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN11_BIT ((UBase_t) 11U)

#define PORT_DIR_PIN11_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN11_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN11_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN11_MASK (PORT_DIR_PIN11_MASK << PORT_DIR_R_PIN11_BIT)
#define PORT_DIR_R_PIN11_INPUT (PORT_DIR_PIN11_INPUT << PORT_DIR_R_PIN11_BIT)
#define PORT_DIR_R_PIN11_OUTPUT (PORT_DIR_PIN11_OUTPUT << PORT_DIR_R_PIN11_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN12_BIT ((UBase_t) 12U)

#define PORT_DIR_PIN12_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN12_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN12_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN12_MASK (PORT_DIR_PIN12_MASK << PORT_DIR_R_PIN12_BIT)
#define PORT_DIR_R_PIN12_INPUT (PORT_DIR_PIN12_INPUT << PORT_DIR_R_PIN12_BIT)
#define PORT_DIR_R_PIN12_OUTPUT (PORT_DIR_PIN12_OUTPUT << PORT_DIR_R_PIN12_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN13_BIT ((UBase_t) 13U)

#define PORT_DIR_PIN13_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN13_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN13_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN13_MASK (PORT_DIR_PIN13_MASK << PORT_DIR_R_PIN13_BIT)
#define PORT_DIR_R_PIN13_INPUT (PORT_DIR_PIN13_INPUT << PORT_DIR_R_PIN13_BIT)
#define PORT_DIR_R_PIN13_OUTPUT (PORT_DIR_PIN13_OUTPUT << PORT_DIR_R_PIN13_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN14_BIT ((UBase_t) 14U)

#define PORT_DIR_PIN14_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN14_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN14_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN14_MASK (PORT_DIR_PIN14_MASK << PORT_DIR_R_PIN14_BIT)
#define PORT_DIR_R_PIN14_INPUT (PORT_DIR_PIN14_INPUT << PORT_DIR_R_PIN14_BIT)
#define PORT_DIR_R_PIN14_OUTPUT (PORT_DIR_PIN14_OUTPUT << PORT_DIR_R_PIN14_BIT)
/*-----------*/

/*-----------*/
#define PORT_DIR_R_PIN15_BIT ((UBase_t) 15U)

#define PORT_DIR_PIN15_MASK ((UBase_t) 0x01U)
#define PORT_DIR_PIN15_INPUT ((UBase_t) 0x00U)
#define PORT_DIR_PIN15_OUTPUT ((UBase_t) 0x01U)

#define PORT_DIR_R_PIN15_MASK (PORT_DIR_PIN15_MASK << PORT_DIR_R_PIN15_BIT)
#define PORT_DIR_R_PIN15_INPUT (PORT_DIR_PIN15_INPUT << PORT_DIR_R_PIN15_BIT)
#define PORT_DIR_R_PIN15_OUTPUT (PORT_DIR_PIN15_OUTPUT << PORT_DIR_R_PIN15_BIT)
/*-----------*/


#endif /* PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_DIR_H_ */
