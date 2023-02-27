/**
 *
 * @file PORT_RegisterDefines_IV.h
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

#ifndef XDRIVER_MCU_PORT_PERIPHERAL_REGISTERDEFINES_XHEADER_PORT_REGISTERDEFINES_IV_H_
#define XDRIVER_MCU_PORT_PERIPHERAL_REGISTERDEFINES_XHEADER_PORT_REGISTERDEFINES_IV_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

/******************************************************************************************
 ************************************ 10 IV *********************************************
 ******************************************************************************************/

/*-----------*/
#define PORT_IV_R_PIN_BIT ((UBase_t) 0U)

#define PORT_IV_PIN_MASK ((UBase_t) 0xFFFFU)
#define PORT_IV_PIN_0 ((UBase_t) 0x02U)
#define PORT_IV_PIN_1 ((UBase_t) 0x04U)
#define PORT_IV_PIN_2 ((UBase_t) 0x06U)
#define PORT_IV_PIN_3 ((UBase_t) 0x08U)
#define PORT_IV_PIN_4 ((UBase_t) 0x0AU)
#define PORT_IV_PIN_5 ((UBase_t) 0x0CU)
#define PORT_IV_PIN_6 ((UBase_t) 0x0EU)
#define PORT_IV_PIN_7 ((UBase_t) 0x10U)

#define PORT_IV_R_PIN0_MASK (PORT_IV_PIN_MASK << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_0 (PORT_IV_PIN_0 << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_1 (PORT_IV_PIN_1 << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_2 (PORT_IV_PIN_2 << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_3 (PORT_IV_PIN_3 << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_4 (PORT_IV_PIN_4 << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_5 (PORT_IV_PIN_5 << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_6 (PORT_IV_PIN_6 << PORT_IV_R_PIN_BIT)
#define PORT_IV_R_PIN_7 (PORT_IV_PIN_7 << PORT_IV_R_PIN_BIT)
/*-----------*/



#endif /* XDRIVER_MCU_PORT_PERIPHERAL_REGISTERDEFINES_XHEADER_PORT_REGISTERDEFINES_IV_H_ */
