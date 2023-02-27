/**
 *
 * @file SYSCTL_RegisterDefines_BERRIV.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BERRIV_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BERRIV_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

/******************************************************************************************
 ************************************ 11 BERRIV *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_BERRIV_R_BERRIV_BIT ((UBase_t) 0U)

#define SYSCTL_BERRIV_BERRIV_MASK ((UBase_t) 0xFFFFU)
#define SYSCTL_BERRIV_BERRIV_NOINTERRUPT ((UBase_t) 0x00U)
#define SYSCTL_BERRIV_BERRIV_USBTIMEOUT ((UBase_t) 0x02U)

#define SYSCTL_BERRIV_R_BERRIV_MASK (SYSCTL_BERRIV_BERRIV_MASK<< SYSCTL_BERRIV_R_BERRIV_BIT)
#define SYSCTL_BERRIV_R_BERRIV_NOINTERRUPT (SYSCTL_BERRIV_BERRIV_NOINTERRUPT << SYSCTL_BERRIV_R_BERRIV_BIT)
#define SYSCTL_BERRIV_R_BERRIV_USBTIMEOUT (SYSCTL_BERRIV_BERRIV_USBTIMEOUT << SYSCTL_BERRIV_R_BERRIV_BIT)
/*-----------*/




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BERRIV_H_ */
