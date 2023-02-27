/**
 *
 * @file MAP_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_RegisterAddress.h>
#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_StructPeripheral.h>

#define MAP    ((MAP_t*) (MAP_BASE))
#define MAP_PORT1    ((MAP_PORT_t*) (MAP_PORT1_BASE))
#define MAP_PORT2    ((MAP_PORT_t*) (MAP_PORT2_BASE))
#define MAP_PORT3    ((MAP_PORT_t*) (MAP_PORT3_BASE))

/********************************************************************************************
************************************** 1 KEYID **********************************************
********************************************************************************************/
#define MAP_KEYID    ((MAP_KEYID_t*) (MAP_BASE + MAP_KEYID_OFFSET ))
#define MAP_KEYID_R    (*((volatile UBase_t*) (MAP_BASE + MAP_KEYID_OFFSET)))

/********************************************************************************************
************************************** 2 CTL **********************************************
********************************************************************************************/
#define MAP_CTL    ((MAP_CTL_t*) (MAP_BASE + MAP_CTL_OFFSET ))
#define MAP_CTL_R    (*((volatile UBase_t*) (MAP_BASE + MAP_CTL_OFFSET)))

/********************************************************************************************
************************************** 3 PIN **********************************************
********************************************************************************************/
#define MAP_PORT1_PIN0    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN0_OFFSET ))
#define MAP_PORT1_PIN0_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN0_OFFSET)))
#define MAP_PORT1_PIN1    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN1_OFFSET ))
#define MAP_PORT1_PIN1_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN1_OFFSET)))
#define MAP_PORT1_PIN2    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN2_OFFSET ))
#define MAP_PORT1_PIN2_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN2_OFFSET)))
#define MAP_PORT1_PIN3    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN3_OFFSET ))
#define MAP_PORT1_PIN3_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN3_OFFSET)))
#define MAP_PORT1_PIN4    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN4_OFFSET ))
#define MAP_PORT1_PIN4_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN4_OFFSET)))
#define MAP_PORT1_PIN5    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN5_OFFSET ))
#define MAP_PORT1_PIN5_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN5_OFFSET)))
#define MAP_PORT1_PIN6    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN6_OFFSET ))
#define MAP_PORT1_PIN6_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN6_OFFSET)))
#define MAP_PORT1_PIN7    ((MAP_PIN_t*) (MAP_PORT1_BASE + MAP_PIN7_OFFSET ))
#define MAP_PORT1_PIN7_R    (*((volatile uint8_t*) (MAP_PORT1_BASE + MAP_PIN7_OFFSET)))

#define MAP_PORT2_PIN0    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN0_OFFSET ))
#define MAP_PORT2_PIN0_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN0_OFFSET)))
#define MAP_PORT2_PIN1    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN1_OFFSET ))
#define MAP_PORT2_PIN1_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN1_OFFSET)))
#define MAP_PORT2_PIN2    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN2_OFFSET ))
#define MAP_PORT2_PIN2_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN2_OFFSET)))
#define MAP_PORT2_PIN3    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN3_OFFSET ))
#define MAP_PORT2_PIN3_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN3_OFFSET)))
#define MAP_PORT2_PIN4    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN4_OFFSET ))
#define MAP_PORT2_PIN4_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN4_OFFSET)))
#define MAP_PORT2_PIN5    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN5_OFFSET ))
#define MAP_PORT2_PIN5_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN5_OFFSET)))
#define MAP_PORT2_PIN6    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN6_OFFSET ))
#define MAP_PORT2_PIN6_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN6_OFFSET)))
#define MAP_PORT2_PIN7    ((MAP_PIN_t*) (MAP_PORT2_BASE + MAP_PIN7_OFFSET ))
#define MAP_PORT2_PIN7_R    (*((volatile uint8_t*) (MAP_PORT2_BASE + MAP_PIN7_OFFSET)))

#define MAP_PORT3_PIN0    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN0_OFFSET ))
#define MAP_PORT3_PIN0_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN0_OFFSET)))
#define MAP_PORT3_PIN1    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN1_OFFSET ))
#define MAP_PORT3_PIN1_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN1_OFFSET)))
#define MAP_PORT3_PIN2    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN2_OFFSET ))
#define MAP_PORT3_PIN2_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN2_OFFSET)))
#define MAP_PORT3_PIN3    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN3_OFFSET ))
#define MAP_PORT3_PIN3_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN3_OFFSET)))
#define MAP_PORT3_PIN4    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN4_OFFSET ))
#define MAP_PORT3_PIN4_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN4_OFFSET)))
#define MAP_PORT3_PIN5    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN5_OFFSET ))
#define MAP_PORT3_PIN5_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN5_OFFSET)))
#define MAP_PORT3_PIN6    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN6_OFFSET ))
#define MAP_PORT3_PIN6_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN6_OFFSET)))
#define MAP_PORT3_PIN7    ((MAP_PIN_t*) (MAP_PORT3_BASE + MAP_PIN7_OFFSET ))
#define MAP_PORT3_PIN7_R    (*((volatile uint8_t*) (MAP_PORT3_BASE + MAP_PIN7_OFFSET)))

uintptr_t MAP_PORT__uptrBlockBaseAddress(MAP_nMODULE enModuleArg);
uintptr_t MAP__uptrBlockBaseAddress(void);

#endif /* XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_REGISTERPERIPHERAL_H_ */
