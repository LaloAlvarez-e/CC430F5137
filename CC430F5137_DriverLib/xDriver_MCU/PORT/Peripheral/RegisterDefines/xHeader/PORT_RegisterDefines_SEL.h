/**
 *
 * @file PORT_RegisterDefines_SEL.h
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

#ifndef PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_SEL_H_
#define PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_SEL_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 6 SEL *********************************************
 ******************************************************************************************/
/*-----------*/
#define PORT_SEL_R_PIN_ALL_BIT ((UBase_t) 0U)

#define PORT_SEL_PIN_ALL_MASK ((UBase_t) 0xFFFFU)
#define PORT_SEL_PIN_ALL_IO ((UBase_t) 0x0000U)
#define PORT_SEL_PIN_ALL_PERIPHERAL ((UBase_t) 0xFFFFU)

#define PORT_SEL_R_PIN_ALL_MASK (PORT_SEL_PIN_ALL_MASK << PORT_SEL_R_PIN0_BIT)
#define PORT_SEL_R_PIN_ALL_IO (PORT_SEL_PIN_ALL_IO << PORT_SEL_R_PIN0_BIT)
#define PORT_SEL_R_PIN_ALL_PERIPHERAL (PORT_SEL_PIN_ALL_PERIPHERAL << PORT_SEL_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN0_BIT ((UBase_t) 0U)

#define PORT_SEL_PIN0_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN0_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN0_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN0_MASK (PORT_SEL_PIN0_MASK << PORT_SEL_R_PIN0_BIT)
#define PORT_SEL_R_PIN0_IO (PORT_SEL_PIN0_IO << PORT_SEL_R_PIN0_BIT)
#define PORT_SEL_R_PIN0_PERIPHERAL (PORT_SEL_PIN0_PERIPHERAL << PORT_SEL_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN1_BIT ((UBase_t) 1U)

#define PORT_SEL_PIN1_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN1_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN1_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN1_MASK (PORT_SEL_PIN1_MASK << PORT_SEL_R_PIN1_BIT)
#define PORT_SEL_R_PIN1_IO (PORT_SEL_PIN1_IO << PORT_SEL_R_PIN1_BIT)
#define PORT_SEL_R_PIN1_PERIPHERAL (PORT_SEL_PIN1_PERIPHERAL << PORT_SEL_R_PIN1_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN2_BIT ((UBase_t) 2U)

#define PORT_SEL_PIN2_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN2_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN2_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN2_MASK (PORT_SEL_PIN2_MASK << PORT_SEL_R_PIN2_BIT)
#define PORT_SEL_R_PIN2_IO (PORT_SEL_PIN2_IO << PORT_SEL_R_PIN2_BIT)
#define PORT_SEL_R_PIN2_PERIPHERAL (PORT_SEL_PIN2_PERIPHERAL << PORT_SEL_R_PIN2_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN3_BIT ((UBase_t) 3U)

#define PORT_SEL_PIN3_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN3_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN3_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN3_MASK (PORT_SEL_PIN3_MASK << PORT_SEL_R_PIN3_BIT)
#define PORT_SEL_R_PIN3_IO (PORT_SEL_PIN3_IO << PORT_SEL_R_PIN3_BIT)
#define PORT_SEL_R_PIN3_PERIPHERAL (PORT_SEL_PIN3_PERIPHERAL << PORT_SEL_R_PIN3_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN4_BIT ((UBase_t) 4U)

#define PORT_SEL_PIN4_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN4_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN4_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN4_MASK (PORT_SEL_PIN4_MASK << PORT_SEL_R_PIN4_BIT)
#define PORT_SEL_R_PIN4_IO (PORT_SEL_PIN4_IO << PORT_SEL_R_PIN4_BIT)
#define PORT_SEL_R_PIN4_PERIPHERAL (PORT_SEL_PIN4_PERIPHERAL << PORT_SEL_R_PIN4_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN5_BIT ((UBase_t) 5U)

#define PORT_SEL_PIN5_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN5_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN5_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN5_MASK (PORT_SEL_PIN5_MASK << PORT_SEL_R_PIN5_BIT)
#define PORT_SEL_R_PIN5_IO (PORT_SEL_PIN5_IO << PORT_SEL_R_PIN5_BIT)
#define PORT_SEL_R_PIN5_PERIPHERAL (PORT_SEL_PIN5_PERIPHERAL << PORT_SEL_R_PIN5_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN6_BIT ((UBase_t) 6U)

#define PORT_SEL_PIN6_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN6_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN6_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN6_MASK (PORT_SEL_PIN6_MASK << PORT_SEL_R_PIN6_BIT)
#define PORT_SEL_R_PIN6_IO (PORT_SEL_PIN6_IO << PORT_SEL_R_PIN6_BIT)
#define PORT_SEL_R_PIN6_PERIPHERAL (PORT_SEL_PIN6_PERIPHERAL << PORT_SEL_R_PIN6_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN7_BIT ((UBase_t) 7U)

#define PORT_SEL_PIN7_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN7_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN7_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN7_MASK (PORT_SEL_PIN7_MASK << PORT_SEL_R_PIN7_BIT)
#define PORT_SEL_R_PIN7_IO (PORT_SEL_PIN7_IO << PORT_SEL_R_PIN7_BIT)
#define PORT_SEL_R_PIN7_PERIPHERAL (PORT_SEL_PIN7_PERIPHERAL << PORT_SEL_R_PIN7_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN8_BIT ((UBase_t) 8U)

#define PORT_SEL_PIN8_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN8_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN8_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN8_MASK (PORT_SEL_PIN8_MASK << PORT_SEL_R_PIN8_BIT)
#define PORT_SEL_R_PIN8_IO (PORT_SEL_PIN8_IO << PORT_SEL_R_PIN8_BIT)
#define PORT_SEL_R_PIN8_PERIPHERAL (PORT_SEL_PIN8_PERIPHERAL << PORT_SEL_R_PIN8_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN9_BIT ((UBase_t) 9U)

#define PORT_SEL_PIN9_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN9_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN9_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN9_MASK (PORT_SEL_PIN9_MASK << PORT_SEL_R_PIN9_BIT)
#define PORT_SEL_R_PIN9_IO (PORT_SEL_PIN9_IO << PORT_SEL_R_PIN9_BIT)
#define PORT_SEL_R_PIN9_PERIPHERAL (PORT_SEL_PIN9_PERIPHERAL << PORT_SEL_R_PIN9_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN10_BIT ((UBase_t) 10U)

#define PORT_SEL_PIN10_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN10_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN10_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN10_MASK (PORT_SEL_PIN10_MASK << PORT_SEL_R_PIN10_BIT)
#define PORT_SEL_R_PIN10_IO (PORT_SEL_PIN10_IO << PORT_SEL_R_PIN10_BIT)
#define PORT_SEL_R_PIN10_PERIPHERAL (PORT_SEL_PIN10_PERIPHERAL << PORT_SEL_R_PIN10_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN11_BIT ((UBase_t) 11U)

#define PORT_SEL_PIN11_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN11_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN11_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN11_MASK (PORT_SEL_PIN11_MASK << PORT_SEL_R_PIN11_BIT)
#define PORT_SEL_R_PIN11_IO (PORT_SEL_PIN11_IO << PORT_SEL_R_PIN11_BIT)
#define PORT_SEL_R_PIN11_PERIPHERAL (PORT_SEL_PIN11_PERIPHERAL << PORT_SEL_R_PIN11_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN12_BIT ((UBase_t) 12U)

#define PORT_SEL_PIN12_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN12_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN12_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN12_MASK (PORT_SEL_PIN12_MASK << PORT_SEL_R_PIN12_BIT)
#define PORT_SEL_R_PIN12_IO (PORT_SEL_PIN12_IO << PORT_SEL_R_PIN12_BIT)
#define PORT_SEL_R_PIN12_PERIPHERAL (PORT_SEL_PIN12_PERIPHERAL << PORT_SEL_R_PIN12_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN13_BIT ((UBase_t) 13U)

#define PORT_SEL_PIN13_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN13_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN13_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN13_MASK (PORT_SEL_PIN13_MASK << PORT_SEL_R_PIN13_BIT)
#define PORT_SEL_R_PIN13_IO (PORT_SEL_PIN13_IO << PORT_SEL_R_PIN13_BIT)
#define PORT_SEL_R_PIN13_PERIPHERAL (PORT_SEL_PIN13_PERIPHERAL << PORT_SEL_R_PIN13_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN14_BIT ((UBase_t) 14U)

#define PORT_SEL_PIN14_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN14_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN14_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN14_MASK (PORT_SEL_PIN14_MASK << PORT_SEL_R_PIN14_BIT)
#define PORT_SEL_R_PIN14_IO (PORT_SEL_PIN14_IO << PORT_SEL_R_PIN14_BIT)
#define PORT_SEL_R_PIN14_PERIPHERAL (PORT_SEL_PIN14_PERIPHERAL << PORT_SEL_R_PIN14_BIT)
/*-----------*/

/*-----------*/
#define PORT_SEL_R_PIN15_BIT ((UBase_t) 15U)

#define PORT_SEL_PIN15_MASK ((UBase_t) 0x01U)
#define PORT_SEL_PIN15_IO ((UBase_t) 0x00U)
#define PORT_SEL_PIN15_PERIPHERAL ((UBase_t) 0x01U)

#define PORT_SEL_R_PIN15_MASK (PORT_SEL_PIN15_MASK << PORT_SEL_R_PIN15_BIT)
#define PORT_SEL_R_PIN15_IO (PORT_SEL_PIN15_IO << PORT_SEL_R_PIN15_BIT)
#define PORT_SEL_R_PIN15_PERIPHERAL (PORT_SEL_PIN15_PERIPHERAL << PORT_SEL_R_PIN15_BIT)
/*-----------*/


#endif /* PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_SEL_H_ */
