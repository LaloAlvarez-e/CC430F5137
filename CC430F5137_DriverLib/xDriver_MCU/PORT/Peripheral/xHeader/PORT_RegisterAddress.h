/**
 *
 * @file PORT_RegisterAddress.h
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

#ifndef XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_REGISTERADDRESS_H_
#define XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_REGISTERADDRESS_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

#define PORT_BASE    ((UBase_t) 0x0200UL)

#define PORT1_BASE ((UBase_t) 0x0200UL)
#define PORT2_BASE ((UBase_t) 0x0201UL)
#define PORTA_BASE ((UBase_t) 0x0200UL)

#define PORT3_BASE ((UBase_t) 0x0220UL)
#define PORT4_BASE ((UBase_t) 0x0221UL)
#define PORTB_BASE ((UBase_t) 0x0200UL)

#define PORT5_BASE ((UBase_t) 0x0240UL)
#define PORTC_BASE ((UBase_t) 0x0240UL)
#define PORTJ_BASE ((UBase_t) 0x0320UL)


#define PORT_IN_OFFSET ((UBase_t) 0x0000UL)
#define PORT_OUT_OFFSET ((UBase_t) 0x0002UL)
#define PORT_DIR_OFFSET ((UBase_t) 0x0004UL)
#define PORT_REN_OFFSET ((UBase_t) 0x0006UL)
#define PORT_DS_OFFSET ((UBase_t) 0x0008UL)
#define PORT_SEL_OFFSET ((UBase_t) 0x000AUL)
#define PORT1_IV_OFFSET ((UBase_t) 0x000EUL)
#define PORT_IES_OFFSET ((UBase_t) 0x0018UL)
#define PORT_IE_OFFSET ((UBase_t) 0x001AUL)
#define PORT_IFG_OFFSET ((UBase_t) 0x001CUL)
#define PORT2_IV_OFFSET ((UBase_t) 0x001EUL)

#endif /* XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_REGISTERADDRESS_H_ */
