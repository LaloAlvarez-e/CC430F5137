/**
 *
 * @file CLOCK_RegisterDefines_CTL7.h
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
 * @verbatim 23 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL7_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL7_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

/******************************************************************************************
 ************************************ 1 CTL7 *********************************************
 ******************************************************************************************/

/*-----------*/
#define CLOCK_CTL7_R_DCO_FFG_BIT ((UBase_t) 0U)

#define CLOCK_CTL7_DCO_FFG_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL7_DCO_FFG_NOOCCUR ((UBase_t) 0x00U)
#define CLOCK_CTL7_DCO_FFG_OCCUR ((UBase_t) 0x01U)

#define CLOCK_CTL7_R_DCO_FFG_MASK (CLOCK_CTL7_DCO_FFG_MASK<< CLOCK_CTL7_R_DCO_FFG_BIT)
#define CLOCK_CTL7_R_DCO_FFG_NOOCCUR (CLOCK_CTL7_DCO_FFG_NOOCCUR << CLOCK_CTL7_R_DCO_FFG_BIT)
#define CLOCK_CTL7_R_DCO_FFG_OCCUR (CLOCK_CTL7_DCO_FFG_OCCUR << CLOCK_CTL7_R_DCO_FFG_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL7_R_XT1_LFOSC_FFG_BIT ((UBase_t) 1U)

#define CLOCK_CTL7_XT1_LFOSC_FFG_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL7_XT1_LFOSC_FFG_NOOCCUR ((UBase_t) 0x00U)
#define CLOCK_CTL7_XT1_LFOSC_FFG_OCCUR ((UBase_t) 0x01U)

#define CLOCK_CTL7_R_XT1_LFOSC_FFG_MASK (CLOCK_CTL7_XT1_LFOSC_FFG_MASK<< CLOCK_CTL7_R_XT1_LFOSC_FFG_BIT)
#define CLOCK_CTL7_R_XT1_LFOSC_FFG_NOOCCUR (CLOCK_CTL7_XT1_LFOSC_FFG_NOOCCUR << CLOCK_CTL7_R_XT1_LFOSC_FFG_BIT)
#define CLOCK_CTL7_R_XT1_LFOSC_FFG_OCCUR (CLOCK_CTL7_XT1_LFOSC_FFG_OCCUR << CLOCK_CTL7_R_XT1_LFOSC_FFG_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL7_R_XT1_HFOSC_FFG_BIT ((UBase_t) 2U)

#define CLOCK_CTL7_XT1_HFOSC_FFG_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL7_XT1_HFOSC_FFG_NOOCCUR ((UBase_t) 0x00U)
#define CLOCK_CTL7_XT1_HFOSC_FFG_OCCUR ((UBase_t) 0x01U)

#define CLOCK_CTL7_R_XT1_HFOSC_FFG_MASK (CLOCK_CTL7_XT1_HFOSC_FFG_MASK<< CLOCK_CTL7_R_XT1_HFOSC_FFG_BIT)
#define CLOCK_CTL7_R_XT1_HFOSC_FFG_NOOCCUR (CLOCK_CTL7_XT1_HFOSC_FFG_NOOCCUR << CLOCK_CTL7_R_XT1_HFOSC_FFG_BIT)
#define CLOCK_CTL7_R_XT1_HFOSC_FFG_OCCUR (CLOCK_CTL7_XT1_HFOSC_FFG_OCCUR << CLOCK_CTL7_R_XT1_HFOSC_FFG_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL7_H_ */
