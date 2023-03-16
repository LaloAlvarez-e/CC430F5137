/**
 *
 * @file TIMERA_RegisterDefines_IV.h
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
 * @verbatim 9 abr. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 abr. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMERA_PERIPHERAL_REGISTERDEFINES_HEADER_TIMERA_REGISTERDEFINES_IV_H_
#define DRIVERLIB_TIMERA_PERIPHERAL_REGISTERDEFINES_HEADER_TIMERA_REGISTERDEFINES_IV_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h>

/******************************************************************************************
 ************************************ 5 IV *********************************************
 ******************************************************************************************/

/*-----------*/
#define TIMERA_IV_R_IV_BIT ((UBase_t) 0U)

#define TIMERA_IV_IV_MASK ((UBase_t) 0xFFFFU)
#define TIMERA_IV_IV_NONE ((UBase_t) 0x00U)
#define TIMERA_IV_IV_CC1 ((UBase_t) 0x02U)
#define TIMERA_IV_IV_CC2 ((UBase_t) 0x04U)
#define TIMERA_IV_IV_CC3 ((UBase_t) 0x06U)
#define TIMERA_IV_IV_CC4 ((UBase_t) 0x08U)
#define TIMERA_IV_IV_CC5 ((UBase_t) 0x0AU)
#define TIMERA_IV_IV_CC6 ((UBase_t) 0x0CU)
#define TIMERA_IV_IV_OV ((UBase_t) 0x0EU)

#define TIMERA_IV_R_IV_MASK (TIMERA_IV_IV_MASK << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_NONE (TIMERA_IV_IV_NONE << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_CC1 (TIMERA_IV_IV_CC1 << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_CC2 (TIMERA_IV_IV_CC2 << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_CC3 (TIMERA_IV_IV_CC3 << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_CC4 (TIMERA_IV_IV_CC4 << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_CC5 (TIMERA_IV_IV_CC5 << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_CC6 (TIMERA_IV_IV_CC6 << TIMERA_IV_R_IV_BIT)
#define TIMERA_IV_R_IV_OV (TIMERA_IV_IV_OV << TIMERA_IV_R_IV_BIT)
/*-----------*/


#endif /* DRIVERLIB_TIMERA_PERIPHERAL_REGISTERDEFINES_HEADER_TIMERA_REGISTERDEFINES_IV_H_ */
