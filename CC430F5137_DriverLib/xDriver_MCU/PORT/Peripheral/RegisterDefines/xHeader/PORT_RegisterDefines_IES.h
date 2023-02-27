/**
 *
 * @file PORT_RegisterDefines_IES.h
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

#ifndef PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IES_H_
#define PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IES_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 7 IES *********************************************
 ******************************************************************************************/
/*-----------*/
#define PORT_IES_R_PIN_ALL_BIT ((UBase_t) 0U)

#define PORT_IES_PIN_ALL_MASK ((UBase_t) 0xFFFFU)
#define PORT_IES_PIN_ALL_RISING ((UBase_t) 0x0000U)
#define PORT_IES_PIN_ALL_FALLING ((UBase_t) 0xFFFFU)

#define PORT_IES_R_PIN_ALL_MASK (PORT_IES_PIN_ALL_MASK << PORT_IES_R_PIN0_BIT)
#define PORT_IES_R_PIN_ALL_RISING (PORT_IES_PIN_ALL_RISING << PORT_IES_R_PIN0_BIT)
#define PORT_IES_R_PIN_ALL_FALLING (PORT_IES_PIN_ALL_FALLING << PORT_IES_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN0_BIT ((UBase_t) 0U)

#define PORT_IES_PIN0_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN0_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN0_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN0_MASK (PORT_IES_PIN0_MASK << PORT_IES_R_PIN0_BIT)
#define PORT_IES_R_PIN0_RISING (PORT_IES_PIN0_RISING << PORT_IES_R_PIN0_BIT)
#define PORT_IES_R_PIN0_FALLING (PORT_IES_PIN0_FALLING << PORT_IES_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN1_BIT ((UBase_t) 1U)

#define PORT_IES_PIN1_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN1_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN1_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN1_MASK (PORT_IES_PIN1_MASK << PORT_IES_R_PIN1_BIT)
#define PORT_IES_R_PIN1_RISING (PORT_IES_PIN1_RISING << PORT_IES_R_PIN1_BIT)
#define PORT_IES_R_PIN1_FALLING (PORT_IES_PIN1_FALLING << PORT_IES_R_PIN1_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN2_BIT ((UBase_t) 2U)

#define PORT_IES_PIN2_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN2_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN2_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN2_MASK (PORT_IES_PIN2_MASK << PORT_IES_R_PIN2_BIT)
#define PORT_IES_R_PIN2_RISING (PORT_IES_PIN2_RISING << PORT_IES_R_PIN2_BIT)
#define PORT_IES_R_PIN2_FALLING (PORT_IES_PIN2_FALLING << PORT_IES_R_PIN2_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN3_BIT ((UBase_t) 3U)

#define PORT_IES_PIN3_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN3_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN3_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN3_MASK (PORT_IES_PIN3_MASK << PORT_IES_R_PIN3_BIT)
#define PORT_IES_R_PIN3_RISING (PORT_IES_PIN3_RISING << PORT_IES_R_PIN3_BIT)
#define PORT_IES_R_PIN3_FALLING (PORT_IES_PIN3_FALLING << PORT_IES_R_PIN3_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN4_BIT ((UBase_t) 4U)

#define PORT_IES_PIN4_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN4_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN4_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN4_MASK (PORT_IES_PIN4_MASK << PORT_IES_R_PIN4_BIT)
#define PORT_IES_R_PIN4_RISING (PORT_IES_PIN4_RISING << PORT_IES_R_PIN4_BIT)
#define PORT_IES_R_PIN4_FALLING (PORT_IES_PIN4_FALLING << PORT_IES_R_PIN4_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN5_BIT ((UBase_t) 5U)

#define PORT_IES_PIN5_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN5_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN5_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN5_MASK (PORT_IES_PIN5_MASK << PORT_IES_R_PIN5_BIT)
#define PORT_IES_R_PIN5_RISING (PORT_IES_PIN5_RISING << PORT_IES_R_PIN5_BIT)
#define PORT_IES_R_PIN5_FALLING (PORT_IES_PIN5_FALLING << PORT_IES_R_PIN5_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN6_BIT ((UBase_t) 6U)

#define PORT_IES_PIN6_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN6_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN6_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN6_MASK (PORT_IES_PIN6_MASK << PORT_IES_R_PIN6_BIT)
#define PORT_IES_R_PIN6_RISING (PORT_IES_PIN6_RISING << PORT_IES_R_PIN6_BIT)
#define PORT_IES_R_PIN6_FALLING (PORT_IES_PIN6_FALLING << PORT_IES_R_PIN6_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN7_BIT ((UBase_t) 7U)

#define PORT_IES_PIN7_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN7_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN7_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN7_MASK (PORT_IES_PIN7_MASK << PORT_IES_R_PIN7_BIT)
#define PORT_IES_R_PIN7_RISING (PORT_IES_PIN7_RISING << PORT_IES_R_PIN7_BIT)
#define PORT_IES_R_PIN7_FALLING (PORT_IES_PIN7_FALLING << PORT_IES_R_PIN7_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN8_BIT ((UBase_t) 8U)

#define PORT_IES_PIN8_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN8_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN8_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN8_MASK (PORT_IES_PIN8_MASK << PORT_IES_R_PIN8_BIT)
#define PORT_IES_R_PIN8_RISING (PORT_IES_PIN8_RISING << PORT_IES_R_PIN8_BIT)
#define PORT_IES_R_PIN8_FALLING (PORT_IES_PIN8_FALLING << PORT_IES_R_PIN8_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN9_BIT ((UBase_t) 9U)

#define PORT_IES_PIN9_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN9_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN9_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN9_MASK (PORT_IES_PIN9_MASK << PORT_IES_R_PIN9_BIT)
#define PORT_IES_R_PIN9_RISING (PORT_IES_PIN9_RISING << PORT_IES_R_PIN9_BIT)
#define PORT_IES_R_PIN9_FALLING (PORT_IES_PIN9_FALLING << PORT_IES_R_PIN9_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN10_BIT ((UBase_t) 10U)

#define PORT_IES_PIN10_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN10_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN10_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN10_MASK (PORT_IES_PIN10_MASK << PORT_IES_R_PIN10_BIT)
#define PORT_IES_R_PIN10_RISING (PORT_IES_PIN10_RISING << PORT_IES_R_PIN10_BIT)
#define PORT_IES_R_PIN10_FALLING (PORT_IES_PIN10_FALLING << PORT_IES_R_PIN10_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN11_BIT ((UBase_t) 11U)

#define PORT_IES_PIN11_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN11_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN11_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN11_MASK (PORT_IES_PIN11_MASK << PORT_IES_R_PIN11_BIT)
#define PORT_IES_R_PIN11_RISING (PORT_IES_PIN11_RISING << PORT_IES_R_PIN11_BIT)
#define PORT_IES_R_PIN11_FALLING (PORT_IES_PIN11_FALLING << PORT_IES_R_PIN11_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN12_BIT ((UBase_t) 12U)

#define PORT_IES_PIN12_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN12_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN12_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN12_MASK (PORT_IES_PIN12_MASK << PORT_IES_R_PIN12_BIT)
#define PORT_IES_R_PIN12_RISING (PORT_IES_PIN12_RISING << PORT_IES_R_PIN12_BIT)
#define PORT_IES_R_PIN12_FALLING (PORT_IES_PIN12_FALLING << PORT_IES_R_PIN12_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN13_BIT ((UBase_t) 13U)

#define PORT_IES_PIN13_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN13_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN13_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN13_MASK (PORT_IES_PIN13_MASK << PORT_IES_R_PIN13_BIT)
#define PORT_IES_R_PIN13_RISING (PORT_IES_PIN13_RISING << PORT_IES_R_PIN13_BIT)
#define PORT_IES_R_PIN13_FALLING (PORT_IES_PIN13_FALLING << PORT_IES_R_PIN13_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN14_BIT ((UBase_t) 14U)

#define PORT_IES_PIN14_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN14_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN14_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN14_MASK (PORT_IES_PIN14_MASK << PORT_IES_R_PIN14_BIT)
#define PORT_IES_R_PIN14_RISING (PORT_IES_PIN14_RISING << PORT_IES_R_PIN14_BIT)
#define PORT_IES_R_PIN14_FALLING (PORT_IES_PIN14_FALLING << PORT_IES_R_PIN14_BIT)
/*-----------*/

/*-----------*/
#define PORT_IES_R_PIN15_BIT ((UBase_t) 15U)

#define PORT_IES_PIN15_MASK ((UBase_t) 0x01U)
#define PORT_IES_PIN15_RISING ((UBase_t) 0x00U)
#define PORT_IES_PIN15_FALLING ((UBase_t) 0x01U)

#define PORT_IES_R_PIN15_MASK (PORT_IES_PIN15_MASK << PORT_IES_R_PIN15_BIT)
#define PORT_IES_R_PIN15_RISING (PORT_IES_PIN15_RISING << PORT_IES_R_PIN15_BIT)
#define PORT_IES_R_PIN15_FALLING (PORT_IES_PIN15_FALLING << PORT_IES_R_PIN15_BIT)
/*-----------*/

#endif /* PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IES_H_ */
