/**
 *
 * @file CLOCK_RegisterDefines_CTL1.h
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

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL1_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL1_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

/******************************************************************************************
 ************************************ 1 CTL1 *********************************************
 ******************************************************************************************/
/*-----------*/
#define CLOCK_CTL1_R_MOD_DIS_BIT ((UBase_t) 0U)

#define CLOCK_CTL1_MOD_DIS_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL1_MOD_DIS_ENA ((UBase_t) 0x00U)
#define CLOCK_CTL1_MOD_DIS_DIS ((UBase_t) 0x01U)

#define CLOCK_CTL1_R_MOD_DIS_MASK (CLOCK_CTL1_MOD_DIS_MASK<< CLOCK_CTL1_R_MOD_DIS_BIT)
#define CLOCK_CTL1_R_MOD_DIS_ENA (CLOCK_CTL1_MOD_DIS_ENA << CLOCK_CTL1_R_MOD_DIS_BIT)
#define CLOCK_CTL1_R_MOD_DIS_DIS (CLOCK_CTL1_MOD_DIS_DIS << CLOCK_CTL1_R_MOD_DIS_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL1_R_DCO_RSEL_BIT ((UBase_t) 4U)

#define CLOCK_CTL1_DCO_RSEL_MASK ((UBase_t) 0x07U)
#define CLOCK_CTL1_DCO_RSEL_0 ((UBase_t) 0x00U)
#define CLOCK_CTL1_DCO_RSEL_1 ((UBase_t) 0x01U)
#define CLOCK_CTL1_DCO_RSEL_2 ((UBase_t) 0x02U)
#define CLOCK_CTL1_DCO_RSEL_3 ((UBase_t) 0x03U)
#define CLOCK_CTL1_DCO_RSEL_4 ((UBase_t) 0x04U)
#define CLOCK_CTL1_DCO_RSEL_5 ((UBase_t) 0x05U)
#define CLOCK_CTL1_DCO_RSEL_6 ((UBase_t) 0x06U)
#define CLOCK_CTL1_DCO_RSEL_7 ((UBase_t) 0x07U)

#define CLOCK_CTL1_R_DCO_RSEL_MASK (CLOCK_CTL1_DCO_RSEL_MASK<< CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_0 (CLOCK_CTL1_DCO_RSEL_0 << CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_1 (CLOCK_CTL1_DCO_RSEL_1 << CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_2 (CLOCK_CTL1_DCO_RSEL_2 << CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_3 (CLOCK_CTL1_DCO_RSEL_3 << CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_4 (CLOCK_CTL1_DCO_RSEL_4 << CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_5 (CLOCK_CTL1_DCO_RSEL_5 << CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_6 (CLOCK_CTL1_DCO_RSEL_6 << CLOCK_CTL1_R_DCO_RSEL_BIT)
#define CLOCK_CTL1_R_DCO_RSEL_7 (CLOCK_CTL1_DCO_RSEL_7 << CLOCK_CTL1_R_DCO_RSEL_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL1_H_ */
