/**
 *
 * @file MAP_RegisterAddress.h
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

#ifndef XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_REGISTERADDRESS_H_
#define XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_REGISTERADDRESS_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_Enum.h>

#define MAP_BASE    ((UBase_t) 0x01C0UL)

#define MAP_CTL_BASE    ((UBase_t) 0x01C0UL)

#define MAP_PORT1_BASE ((UBase_t) 0x01C8UL)
#define MAP_PORT2_BASE ((UBase_t) 0x01D0UL)
#define MAP_PORT3_BASE ((UBase_t) 0x01D8UL)


#define MAP_KEYID_OFFSET ((UBase_t) 0x0000UL)
#define MAP_CTL_OFFSET ((UBase_t) 0x0002UL)

#define MAP_PIN0_OFFSET ((UBase_t) 0x0000UL)
#define MAP_PIN1_OFFSET ((UBase_t) 0x0001UL)
#define MAP_PIN2_OFFSET ((UBase_t) 0x0002UL)
#define MAP_PIN3_OFFSET ((UBase_t) 0x0003UL)
#define MAP_PIN4_OFFSET ((UBase_t) 0x0004UL)
#define MAP_PIN5_OFFSET ((UBase_t) 0x0005UL)
#define MAP_PIN6_OFFSET ((UBase_t) 0x0006UL)
#define MAP_PIN7_OFFSET ((UBase_t) 0x0007UL)


#define MAP_CTL_KEYID_OFFSET (MAP_CTL_BASE + (UBase_t) 0x0000UL)
#define MAP_CTL_CTL_OFFSET (MAP_CTL_BASE + (UBase_t) 0x0002UL)

#define MAP_PORT1_PIN0_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0000UL)
#define MAP_PORT1_PIN1_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0001UL)
#define MAP_PORT1_PIN2_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0002UL)
#define MAP_PORT1_PIN3_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0003UL)
#define MAP_PORT1_PIN4_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0004UL)
#define MAP_PORT1_PIN5_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0005UL)
#define MAP_PORT1_PIN6_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0006UL)
#define MAP_PORT1_PIN7_OFFSET (MAP_PORT1_BASE + (UBase_t) 0x0007UL)

#define MAP_PORT2_PIN0_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0000UL)
#define MAP_PORT2_PIN1_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0001UL)
#define MAP_PORT2_PIN2_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0002UL)
#define MAP_PORT2_PIN3_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0003UL)
#define MAP_PORT2_PIN4_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0004UL)
#define MAP_PORT2_PIN5_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0005UL)
#define MAP_PORT2_PIN6_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0006UL)
#define MAP_PORT2_PIN7_OFFSET (MAP_PORT2_BASE + (UBase_t) 0x0007UL)

#define MAP_PORT3_PIN0_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0000UL)
#define MAP_PORT3_PIN1_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0001UL)
#define MAP_PORT3_PIN2_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0002UL)
#define MAP_PORT3_PIN3_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0003UL)
#define MAP_PORT3_PIN4_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0004UL)
#define MAP_PORT3_PIN5_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0005UL)
#define MAP_PORT3_PIN6_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0006UL)
#define MAP_PORT3_PIN7_OFFSET (MAP_PORT3_BASE + (UBase_t) 0x0007UL)

#endif /* XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_REGISTERADDRESS_H_ */
