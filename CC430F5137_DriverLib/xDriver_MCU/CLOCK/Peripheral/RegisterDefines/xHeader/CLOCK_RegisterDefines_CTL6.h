/**
 *
 * @file CLOCK_RegisterDefines_CTL6.h
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

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL6_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL6_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

/******************************************************************************************
 ************************************ 1 CTL6 *********************************************
 ******************************************************************************************/

/*-----------*/
#define CLOCK_CTL6_R_XT1_OFF_BIT ((UBase_t) 0U)

#define CLOCK_CTL6_XT1_OFF_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL6_XT1_OFF_ON ((UBase_t) 0x00U)
#define CLOCK_CTL6_XT1_OFF_OFF ((UBase_t) 0x01U)

#define CLOCK_CTL6_R_XT1_OFF_MASK (CLOCK_CTL6_XT1_OFF_MASK<< CLOCK_CTL6_R_XT1_OFF_BIT)
#define CLOCK_CTL6_R_XT1_OFF_ON (CLOCK_CTL6_XT1_OFF_ON << CLOCK_CTL6_R_XT1_OFF_BIT)
#define CLOCK_CTL6_R_XT1_OFF_OFF (CLOCK_CTL6_XT1_OFF_OFF << CLOCK_CTL6_R_XT1_OFF_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL6_R_SMCLK_OFF_BIT ((UBase_t) 1U)

#define CLOCK_CTL6_SMCLK_OFF_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL6_SMCLK_OFF_ON ((UBase_t) 0x00U)
#define CLOCK_CTL6_SMCLK_OFF_OFF ((UBase_t) 0x01U)

#define CLOCK_CTL6_R_SMCLK_OFF_MASK (CLOCK_CTL6_SMCLK_OFF_MASK<< CLOCK_CTL6_R_SMCLK_OFF_BIT)
#define CLOCK_CTL6_R_SMCLK_OFF_ON (CLOCK_CTL6_SMCLK_OFF_ON << CLOCK_CTL6_R_SMCLK_OFF_BIT)
#define CLOCK_CTL6_R_SMCLK_OFF_OFF (CLOCK_CTL6_SMCLK_OFF_OFF << CLOCK_CTL6_R_SMCLK_OFF_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL6_R_XT1_CAP_BIT ((UBase_t) 2U)

#define CLOCK_CTL6_XT1_CAP_MASK ((UBase_t) 0x03U)
#define CLOCK_CTL6_XT1_CAP_2_0PF ((UBase_t) 0x00U)
#define CLOCK_CTL6_XT1_CAP_5_5PF ((UBase_t) 0x01U)
#define CLOCK_CTL6_XT1_CAP_8_5PF ((UBase_t) 0x02U)
#define CLOCK_CTL6_XT1_CAP_12_0PF ((UBase_t) 0x03U)

#define CLOCK_CTL6_R_XT1_CAP_MASK (CLOCK_CTL6_XT1_CAP_MASK<< CLOCK_CTL6_R_XT1_CAP_BIT)
#define CLOCK_CTL6_R_XT1_CAP_2_0PF (CLOCK_CTL6_XT1_CAP_2_0PF << CLOCK_CTL6_R_XT1_CAP_BIT)
#define CLOCK_CTL6_R_XT1_CAP_5_5PF (CLOCK_CTL6_XT1_CAP_5_5PF << CLOCK_CTL6_R_XT1_CAP_BIT)
#define CLOCK_CTL6_R_XT1_CAP_8_5PF (CLOCK_CTL6_XT1_CAP_8_5PF << CLOCK_CTL6_R_XT1_CAP_BIT)
#define CLOCK_CTL6_R_XT1_CAP_12_0PF (CLOCK_CTL6_XT1_CAP_12_0PF << CLOCK_CTL6_R_XT1_CAP_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL6_R_XT1_BYPASS_BIT ((UBase_t) 4U)

#define CLOCK_CTL6_XT1_BYPASS_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL6_XT1_BYPASS_CRYSTAL ((UBase_t) 0x00U)
#define CLOCK_CTL6_XT1_BYPASS_SIGNAL ((UBase_t) 0x01U)

#define CLOCK_CTL6_R_XT1_BYPASS_MASK (CLOCK_CTL6_XT1_BYPASS_MASK<< CLOCK_CTL6_R_XT1_BYPASS_BIT)
#define CLOCK_CTL6_R_XT1_BYPASS_CRYSTAL (CLOCK_CTL6_XT1_BYPASS_CRYSTAL << CLOCK_CTL6_R_XT1_BYPASS_BIT)
#define CLOCK_CTL6_R_XT1_BYPASS_SIGNAL (CLOCK_CTL6_XT1_BYPASS_SIGNAL << CLOCK_CTL6_R_XT1_BYPASS_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL6_R_XT1_MODE_BIT ((UBase_t) 5U)

#define CLOCK_CTL6_XT1_MODE_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL6_XT1_MODE_LOWFREQ ((UBase_t) 0x00U)
#define CLOCK_CTL6_XT1_MODE_HIGHFREQ ((UBase_t) 0x01U)

#define CLOCK_CTL6_R_XT1_MODE_MASK (CLOCK_CTL6_XT1_MODE_MASK<< CLOCK_CTL6_R_XT1_MODE_BIT)
#define CLOCK_CTL6_R_XT1_MODE_LOWFREQ (CLOCK_CTL6_XT1_MODE_LOWFREQ << CLOCK_CTL6_R_XT1_MODE_BIT)
#define CLOCK_CTL6_R_XT1_MODE_HIGHFREQ (CLOCK_CTL6_XT1_MODE_HIGHFREQ << CLOCK_CTL6_R_XT1_MODE_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL6_R_XT1_DRIVE_BIT ((UBase_t) 6U)

#define CLOCK_CTL6_XT1_DRIVE_MASK ((UBase_t) 0x03U)
#define CLOCK_CTL6_XT1_DRIVE_LOW ((UBase_t) 0x00U)
#define CLOCK_CTL6_XT1_DRIVE_MID_LOW ((UBase_t) 0x01U)
#define CLOCK_CTL6_XT1_DRIVE_MID_HIGH ((UBase_t) 0x02U)
#define CLOCK_CTL6_XT1_DRIVE_HIGH ((UBase_t) 0x03U)

#define CLOCK_CTL6_R_XT1_DRIVE_MASK (CLOCK_CTL6_XT1_DRIVE_MASK<< CLOCK_CTL6_R_XT1_DRIVE_BIT)
#define CLOCK_CTL6_R_XT1_DRIVE_LOW (CLOCK_CTL6_XT1_DRIVE_LOW << CLOCK_CTL6_R_XT1_DRIVE_BIT)
#define CLOCK_CTL6_R_XT1_DRIVE_MID_LOW (CLOCK_CTL6_XT1_DRIVE_MID_LOW << CLOCK_CTL6_R_XT1_DRIVE_BIT)
#define CLOCK_CTL6_R_XT1_DRIVE_MID_HIGH (CLOCK_CTL6_XT1_DRIVE_MID_HIGH << CLOCK_CTL6_R_XT1_DRIVE_BIT)
#define CLOCK_CTL6_R_XT1_DRIVE_HIGH (CLOCK_CTL6_XT1_DRIVE_HIGH << CLOCK_CTL6_R_XT1_DRIVE_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL6_H_ */
