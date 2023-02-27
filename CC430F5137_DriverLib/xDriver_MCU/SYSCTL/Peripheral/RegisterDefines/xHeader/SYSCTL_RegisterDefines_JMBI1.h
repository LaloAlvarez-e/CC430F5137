/**
 *
 * @file SYSCTL_RegisterDefines_JMBI1.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_JMBI1_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_JMBI1_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

/******************************************************************************************
 ************************************ 5 JMBI1 *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_JMBI1_R_MSGLO_BIT ((UBase_t) 0U)

#define SYSCTL_JMBI1_MSGLO_MASK ((UBase_t) 0xFFU)

#define SYSCTL_JMBI1_R_MSGLO_MASK (SYSCTL_JMBI1_MSGLO_MASK<< SYSCTL_JMBI1_R_MSGLO_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_JMBI1_R_MSGHI_BIT ((UBase_t) 8U)

#define SYSCTL_JMBI1_MSGHI_MASK ((UBase_t) 0xFFU)

#define SYSCTL_JMBI1_R_MSGHI_MASK (SYSCTL_JMBI1_MSGHI_MASK<< SYSCTL_JMBI1_R_MSGHI_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_JMBI1_H_ */
