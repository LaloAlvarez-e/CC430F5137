/**
 *
 * @file CLOCK_RegisterDefines_CTL2.h
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
 * @verbatim 21 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 21 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL2_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL2_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

/******************************************************************************************
 ************************************ 1 CTL2 *********************************************
 ******************************************************************************************/
/*-----------*/
#define CLOCK_CTL2_R_FLL_MULTI_BIT ((UBase_t) 0U)

#define CLOCK_CTL2_FLL_MULTI_MASK ((UBase_t) 0x3FFU)

#define CLOCK_CTL2_R_FLL_MULTI_MASK (CLOCK_CTL2_FLL_MULTI_MASK<< CLOCK_CTL2_R_FLL_MULTI_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT ((UBase_t) 12U)

#define CLOCK_CTL2_FLL_MULTI_LOOP_MASK ((UBase_t) 0x07U)
#define CLOCK_CTL2_FLL_MULTI_LOOP_1 ((UBase_t) 0x00U)
#define CLOCK_CTL2_FLL_MULTI_LOOP_2 ((UBase_t) 0x01U)
#define CLOCK_CTL2_FLL_MULTI_LOOP_4 ((UBase_t) 0x02U)
#define CLOCK_CTL2_FLL_MULTI_LOOP_8 ((UBase_t) 0x03U)
#define CLOCK_CTL2_FLL_MULTI_LOOP_16 ((UBase_t) 0x04U)
#define CLOCK_CTL2_FLL_MULTI_LOOP_32 ((UBase_t) 0x05U)

#define CLOCK_CTL2_R_FLL_MULTI_LOOP_MASK (CLOCK_CTL2_FLL_MULTI_LOOP_MASK<< CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT)
#define CLOCK_CTL2_R_FLL_MULTI_LOOP_1 (CLOCK_CTL2_FLL_MULTI_LOOP_1 << CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT)
#define CLOCK_CTL2_R_FLL_MULTI_LOOP_2 (CLOCK_CTL2_FLL_MULTI_LOOP_2 << CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT)
#define CLOCK_CTL2_R_FLL_MULTI_LOOP_4 (CLOCK_CTL2_FLL_MULTI_LOOP_4 << CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT)
#define CLOCK_CTL2_R_FLL_MULTI_LOOP_8 (CLOCK_CTL2_FLL_MULTI_LOOP_8 << CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT)
#define CLOCK_CTL2_R_FLL_MULTI_LOOP_16 (CLOCK_CTL2_FLL_MULTI_LOOP_16 << CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT)
#define CLOCK_CTL2_R_FLL_MULTI_LOOP_32 (CLOCK_CTL2_FLL_MULTI_LOOP_32 << CLOCK_CTL2_R_FLL_MULTI_LOOP_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL2_H_ */
