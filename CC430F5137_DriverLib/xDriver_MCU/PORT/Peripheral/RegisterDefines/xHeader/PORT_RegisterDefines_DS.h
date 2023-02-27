/**
 *
 * @file PORT_RegisterDefines_DS.h
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
 * @verbatim 28 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 28 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PORT_PERIPHERAL_REGISTERDEFINES_XHEADER_PORT_REGISTERDEFINES_DS_H_
#define XDRIVER_MCU_PORT_PERIPHERAL_REGISTERDEFINES_XHEADER_PORT_REGISTERDEFINES_DS_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 5 DS *********************************************
 ******************************************************************************************/
/*-----------*/
#define PORT_DS_R_PIN_ALL_BIT ((UBase_t) 0U)

#define PORT_DS_PIN_ALL_MASK ((UBase_t) 0xFFFFU)
#define PORT_DS_PIN_ALL_REDUCED ((UBase_t) 0x0000U)
#define PORT_DS_PIN_ALL_FULL ((UBase_t) 0xFFFFU)

#define PORT_DS_R_PIN_ALL_MASK (PORT_DS_PIN_ALL_MASK << PORT_DS_R_PIN0_BIT)
#define PORT_DS_R_PIN_ALL_REDUCED (PORT_DS_PIN_ALL_REDUCED << PORT_DS_R_PIN0_BIT)
#define PORT_DS_R_PIN_ALL_FULL (PORT_DS_PIN_ALL_FULL << PORT_DS_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN0_BIT ((UBase_t) 0U)

#define PORT_DS_PIN0_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN0_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN0_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN0_MASK (PORT_DS_PIN0_MASK << PORT_DS_R_PIN0_BIT)
#define PORT_DS_R_PIN0_REDUCED (PORT_DS_PIN0_REDUCED << PORT_DS_R_PIN0_BIT)
#define PORT_DS_R_PIN0_FULL (PORT_DS_PIN0_FULL << PORT_DS_R_PIN0_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN1_BIT ((UBase_t) 1U)

#define PORT_DS_PIN1_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN1_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN1_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN1_MASK (PORT_DS_PIN1_MASK << PORT_DS_R_PIN1_BIT)
#define PORT_DS_R_PIN1_REDUCED (PORT_DS_PIN1_REDUCED << PORT_DS_R_PIN1_BIT)
#define PORT_DS_R_PIN1_FULL (PORT_DS_PIN1_FULL << PORT_DS_R_PIN1_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN2_BIT ((UBase_t) 2U)

#define PORT_DS_PIN2_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN2_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN2_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN2_MASK (PORT_DS_PIN2_MASK << PORT_DS_R_PIN2_BIT)
#define PORT_DS_R_PIN2_REDUCED (PORT_DS_PIN2_REDUCED << PORT_DS_R_PIN2_BIT)
#define PORT_DS_R_PIN2_FULL (PORT_DS_PIN2_FULL << PORT_DS_R_PIN2_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN3_BIT ((UBase_t) 3U)

#define PORT_DS_PIN3_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN3_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN3_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN3_MASK (PORT_DS_PIN3_MASK << PORT_DS_R_PIN3_BIT)
#define PORT_DS_R_PIN3_REDUCED (PORT_DS_PIN3_REDUCED << PORT_DS_R_PIN3_BIT)
#define PORT_DS_R_PIN3_FULL (PORT_DS_PIN3_FULL << PORT_DS_R_PIN3_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN4_BIT ((UBase_t) 4U)

#define PORT_DS_PIN4_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN4_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN4_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN4_MASK (PORT_DS_PIN4_MASK << PORT_DS_R_PIN4_BIT)
#define PORT_DS_R_PIN4_REDUCED (PORT_DS_PIN4_REDUCED << PORT_DS_R_PIN4_BIT)
#define PORT_DS_R_PIN4_FULL (PORT_DS_PIN4_FULL << PORT_DS_R_PIN4_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN5_BIT ((UBase_t) 5U)

#define PORT_DS_PIN5_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN5_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN5_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN5_MASK (PORT_DS_PIN5_MASK << PORT_DS_R_PIN5_BIT)
#define PORT_DS_R_PIN5_REDUCED (PORT_DS_PIN5_REDUCED << PORT_DS_R_PIN5_BIT)
#define PORT_DS_R_PIN5_FULL (PORT_DS_PIN5_FULL << PORT_DS_R_PIN5_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN6_BIT ((UBase_t) 6U)

#define PORT_DS_PIN6_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN6_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN6_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN6_MASK (PORT_DS_PIN6_MASK << PORT_DS_R_PIN6_BIT)
#define PORT_DS_R_PIN6_REDUCED (PORT_DS_PIN6_REDUCED << PORT_DS_R_PIN6_BIT)
#define PORT_DS_R_PIN6_FULL (PORT_DS_PIN6_FULL << PORT_DS_R_PIN6_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN7_BIT ((UBase_t) 7U)

#define PORT_DS_PIN7_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN7_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN7_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN7_MASK (PORT_DS_PIN7_MASK << PORT_DS_R_PIN7_BIT)
#define PORT_DS_R_PIN7_REDUCED (PORT_DS_PIN7_REDUCED << PORT_DS_R_PIN7_BIT)
#define PORT_DS_R_PIN7_FULL (PORT_DS_PIN7_FULL << PORT_DS_R_PIN7_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN8_BIT ((UBase_t) 8U)

#define PORT_DS_PIN8_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN8_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN8_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN8_MASK (PORT_DS_PIN8_MASK << PORT_DS_R_PIN8_BIT)
#define PORT_DS_R_PIN8_REDUCED (PORT_DS_PIN8_REDUCED << PORT_DS_R_PIN8_BIT)
#define PORT_DS_R_PIN8_FULL (PORT_DS_PIN8_FULL << PORT_DS_R_PIN8_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN9_BIT ((UBase_t) 9U)

#define PORT_DS_PIN9_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN9_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN9_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN9_MASK (PORT_DS_PIN9_MASK << PORT_DS_R_PIN9_BIT)
#define PORT_DS_R_PIN9_REDUCED (PORT_DS_PIN9_REDUCED << PORT_DS_R_PIN9_BIT)
#define PORT_DS_R_PIN9_FULL (PORT_DS_PIN9_FULL << PORT_DS_R_PIN9_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN10_BIT ((UBase_t) 10U)

#define PORT_DS_PIN10_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN10_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN10_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN10_MASK (PORT_DS_PIN10_MASK << PORT_DS_R_PIN10_BIT)
#define PORT_DS_R_PIN10_REDUCED (PORT_DS_PIN10_REDUCED << PORT_DS_R_PIN10_BIT)
#define PORT_DS_R_PIN10_FULL (PORT_DS_PIN10_FULL << PORT_DS_R_PIN10_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN11_BIT ((UBase_t) 11U)

#define PORT_DS_PIN11_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN11_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN11_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN11_MASK (PORT_DS_PIN11_MASK << PORT_DS_R_PIN11_BIT)
#define PORT_DS_R_PIN11_REDUCED (PORT_DS_PIN11_REDUCED << PORT_DS_R_PIN11_BIT)
#define PORT_DS_R_PIN11_FULL (PORT_DS_PIN11_FULL << PORT_DS_R_PIN11_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN12_BIT ((UBase_t) 12U)

#define PORT_DS_PIN12_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN12_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN12_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN12_MASK (PORT_DS_PIN12_MASK << PORT_DS_R_PIN12_BIT)
#define PORT_DS_R_PIN12_REDUCED (PORT_DS_PIN12_REDUCED << PORT_DS_R_PIN12_BIT)
#define PORT_DS_R_PIN12_FULL (PORT_DS_PIN12_FULL << PORT_DS_R_PIN12_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN13_BIT ((UBase_t) 13U)

#define PORT_DS_PIN13_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN13_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN13_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN13_MASK (PORT_DS_PIN13_MASK << PORT_DS_R_PIN13_BIT)
#define PORT_DS_R_PIN13_REDUCED (PORT_DS_PIN13_REDUCED << PORT_DS_R_PIN13_BIT)
#define PORT_DS_R_PIN13_FULL (PORT_DS_PIN13_FULL << PORT_DS_R_PIN13_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN14_BIT ((UBase_t) 14U)

#define PORT_DS_PIN14_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN14_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN14_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN14_MASK (PORT_DS_PIN14_MASK << PORT_DS_R_PIN14_BIT)
#define PORT_DS_R_PIN14_REDUCED (PORT_DS_PIN14_REDUCED << PORT_DS_R_PIN14_BIT)
#define PORT_DS_R_PIN14_FULL (PORT_DS_PIN14_FULL << PORT_DS_R_PIN14_BIT)
/*-----------*/

/*-----------*/
#define PORT_DS_R_PIN15_BIT ((UBase_t) 15U)

#define PORT_DS_PIN15_MASK ((UBase_t) 0x01U)
#define PORT_DS_PIN15_REDUCED ((UBase_t) 0x00U)
#define PORT_DS_PIN15_FULL ((UBase_t) 0x01U)

#define PORT_DS_R_PIN15_MASK (PORT_DS_PIN15_MASK << PORT_DS_R_PIN15_BIT)
#define PORT_DS_R_PIN15_REDUCED (PORT_DS_PIN15_REDUCED << PORT_DS_R_PIN15_BIT)
#define PORT_DS_R_PIN15_FULL (PORT_DS_PIN15_FULL << PORT_DS_R_PIN15_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_PORT_PERIPHERAL_REGISTERDEFINES_XHEADER_PORT_REGISTERDEFINES_DS_H_ */
