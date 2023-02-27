/**
 *
 * @file PORT_RegisterDefines_IE.h
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

#ifndef PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IE_H_
#define PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IE_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 8 IE *********************************************
 ******************************************************************************************/
/*-----------*/
#define PORT_IE_R_PIN_ALL_BIT ((UBase_t) 0U)

#define PORT_IE_PIN_ALL_MASK ((UBase_t) 0xFFFFU)
#define PORT_IE_PIN_ALL_DIS ((UBase_t) 0x0000U)
#define PORT_IE_PIN_ALL_ENA ((UBase_t) 0xFFFFU)

#define PORT_IE_R_PIN_ALL_MASK (PORT_IE_PIN_ALL_MASK << PORT_IE_R_PIN0_BIT)
#define PORT_IE_R_PIN_ALL_DIS (PORT_IE_PIN_ALL_DIS << PORT_IE_R_PIN0_BIT)
#define PORT_IE_R_PIN_ALL_ENA (PORT_IE_PIN_ALL_ENA << PORT_IE_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN0_BIT ((UBase_t) 0U)

#define PORT_IE_PIN0_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN0_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN0_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN0_MASK (PORT_IE_PIN0_MASK << PORT_IE_R_PIN0_BIT)
#define PORT_IE_R_PIN0_DIS (PORT_IE_PIN0_DIS << PORT_IE_R_PIN0_BIT)
#define PORT_IE_R_PIN0_ENA (PORT_IE_PIN0_ENA << PORT_IE_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN1_BIT ((UBase_t) 1U)

#define PORT_IE_PIN1_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN1_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN1_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN1_MASK (PORT_IE_PIN1_MASK << PORT_IE_R_PIN1_BIT)
#define PORT_IE_R_PIN1_DIS (PORT_IE_PIN1_DIS << PORT_IE_R_PIN1_BIT)
#define PORT_IE_R_PIN1_ENA (PORT_IE_PIN1_ENA << PORT_IE_R_PIN1_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN2_BIT ((UBase_t) 2U)

#define PORT_IE_PIN2_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN2_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN2_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN2_MASK (PORT_IE_PIN2_MASK << PORT_IE_R_PIN2_BIT)
#define PORT_IE_R_PIN2_DIS (PORT_IE_PIN2_DIS << PORT_IE_R_PIN2_BIT)
#define PORT_IE_R_PIN2_ENA (PORT_IE_PIN2_ENA << PORT_IE_R_PIN2_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN3_BIT ((UBase_t) 3U)

#define PORT_IE_PIN3_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN3_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN3_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN3_MASK (PORT_IE_PIN3_MASK << PORT_IE_R_PIN3_BIT)
#define PORT_IE_R_PIN3_DIS (PORT_IE_PIN3_DIS << PORT_IE_R_PIN3_BIT)
#define PORT_IE_R_PIN3_ENA (PORT_IE_PIN3_ENA << PORT_IE_R_PIN3_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN4_BIT ((UBase_t) 4U)

#define PORT_IE_PIN4_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN4_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN4_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN4_MASK (PORT_IE_PIN4_MASK << PORT_IE_R_PIN4_BIT)
#define PORT_IE_R_PIN4_DIS (PORT_IE_PIN4_DIS << PORT_IE_R_PIN4_BIT)
#define PORT_IE_R_PIN4_ENA (PORT_IE_PIN4_ENA << PORT_IE_R_PIN4_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN5_BIT ((UBase_t) 5U)

#define PORT_IE_PIN5_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN5_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN5_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN5_MASK (PORT_IE_PIN5_MASK << PORT_IE_R_PIN5_BIT)
#define PORT_IE_R_PIN5_DIS (PORT_IE_PIN5_DIS << PORT_IE_R_PIN5_BIT)
#define PORT_IE_R_PIN5_ENA (PORT_IE_PIN5_ENA << PORT_IE_R_PIN5_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN6_BIT ((UBase_t) 6U)

#define PORT_IE_PIN6_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN6_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN6_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN6_MASK (PORT_IE_PIN6_MASK << PORT_IE_R_PIN6_BIT)
#define PORT_IE_R_PIN6_DIS (PORT_IE_PIN6_DIS << PORT_IE_R_PIN6_BIT)
#define PORT_IE_R_PIN6_ENA (PORT_IE_PIN6_ENA << PORT_IE_R_PIN6_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN7_BIT ((UBase_t) 7U)

#define PORT_IE_PIN7_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN7_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN7_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN7_MASK (PORT_IE_PIN7_MASK << PORT_IE_R_PIN7_BIT)
#define PORT_IE_R_PIN7_DIS (PORT_IE_PIN7_DIS << PORT_IE_R_PIN7_BIT)
#define PORT_IE_R_PIN7_ENA (PORT_IE_PIN7_ENA << PORT_IE_R_PIN7_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN8_BIT ((UBase_t) 8U)

#define PORT_IE_PIN8_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN8_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN8_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN8_MASK (PORT_IE_PIN8_MASK << PORT_IE_R_PIN8_BIT)
#define PORT_IE_R_PIN8_DIS (PORT_IE_PIN8_DIS << PORT_IE_R_PIN8_BIT)
#define PORT_IE_R_PIN8_ENA (PORT_IE_PIN8_ENA << PORT_IE_R_PIN8_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN9_BIT ((UBase_t) 9U)

#define PORT_IE_PIN9_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN9_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN9_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN9_MASK (PORT_IE_PIN9_MASK << PORT_IE_R_PIN9_BIT)
#define PORT_IE_R_PIN9_DIS (PORT_IE_PIN9_DIS << PORT_IE_R_PIN9_BIT)
#define PORT_IE_R_PIN9_ENA (PORT_IE_PIN9_ENA << PORT_IE_R_PIN9_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN10_BIT ((UBase_t) 10U)

#define PORT_IE_PIN10_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN10_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN10_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN10_MASK (PORT_IE_PIN10_MASK << PORT_IE_R_PIN10_BIT)
#define PORT_IE_R_PIN10_DIS (PORT_IE_PIN10_DIS << PORT_IE_R_PIN10_BIT)
#define PORT_IE_R_PIN10_ENA (PORT_IE_PIN10_ENA << PORT_IE_R_PIN10_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN11_BIT ((UBase_t) 11U)

#define PORT_IE_PIN11_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN11_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN11_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN11_MASK (PORT_IE_PIN11_MASK << PORT_IE_R_PIN11_BIT)
#define PORT_IE_R_PIN11_DIS (PORT_IE_PIN11_DIS << PORT_IE_R_PIN11_BIT)
#define PORT_IE_R_PIN11_ENA (PORT_IE_PIN11_ENA << PORT_IE_R_PIN11_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN12_BIT ((UBase_t) 12U)

#define PORT_IE_PIN12_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN12_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN12_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN12_MASK (PORT_IE_PIN12_MASK << PORT_IE_R_PIN12_BIT)
#define PORT_IE_R_PIN12_DIS (PORT_IE_PIN12_DIS << PORT_IE_R_PIN12_BIT)
#define PORT_IE_R_PIN12_ENA (PORT_IE_PIN12_ENA << PORT_IE_R_PIN12_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN13_BIT ((UBase_t) 13U)

#define PORT_IE_PIN13_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN13_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN13_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN13_MASK (PORT_IE_PIN13_MASK << PORT_IE_R_PIN13_BIT)
#define PORT_IE_R_PIN13_DIS (PORT_IE_PIN13_DIS << PORT_IE_R_PIN13_BIT)
#define PORT_IE_R_PIN13_ENA (PORT_IE_PIN13_ENA << PORT_IE_R_PIN13_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN14_BIT ((UBase_t) 14U)

#define PORT_IE_PIN14_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN14_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN14_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN14_MASK (PORT_IE_PIN14_MASK << PORT_IE_R_PIN14_BIT)
#define PORT_IE_R_PIN14_DIS (PORT_IE_PIN14_DIS << PORT_IE_R_PIN14_BIT)
#define PORT_IE_R_PIN14_ENA (PORT_IE_PIN14_ENA << PORT_IE_R_PIN14_BIT)
/*-----------*/

/*-----------*/
#define PORT_IE_R_PIN15_BIT ((UBase_t) 15U)

#define PORT_IE_PIN15_MASK ((UBase_t) 0x01U)
#define PORT_IE_PIN15_DIS ((UBase_t) 0x00U)
#define PORT_IE_PIN15_ENA ((UBase_t) 0x01U)

#define PORT_IE_R_PIN15_MASK (PORT_IE_PIN15_MASK << PORT_IE_R_PIN15_BIT)
#define PORT_IE_R_PIN15_DIS (PORT_IE_PIN15_DIS << PORT_IE_R_PIN15_BIT)
#define PORT_IE_R_PIN15_ENA (PORT_IE_PIN15_ENA << PORT_IE_R_PIN15_BIT)
/*-----------*/

#endif /* PORT_PERIPHERAL_REGISTERDEFINES_HEADER_PORT_REGISTERDEFINES_IE_H_ */
