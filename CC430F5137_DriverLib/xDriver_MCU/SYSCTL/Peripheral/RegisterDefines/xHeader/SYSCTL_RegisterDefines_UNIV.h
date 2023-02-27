/**
 *
 * @file SYSCTL_RegisterDefines_UNIV.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_UNIV_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_UNIV_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

/******************************************************************************************
 ************************************ 8 UNIV *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_UNIV_R_UNVEC_BIT ((UBase_t) 0U)

#define SYSCTL_UNIV_UNVEC_MASK ((UBase_t) 0xFFFFU)
#define SYSCTL_UNIV_UNVEC_NOINTERRUPT ((UBase_t) 0x00U)
#define SYSCTL_UNIV_UNVEC_NMIIFG ((UBase_t) 0x02U)
#define SYSCTL_UNIV_UNVEC_OFIFG ((UBase_t) 0x04U)
#define SYSCTL_UNIV_UNVEC_ACCVIFG ((UBase_t) 0x06U)
#define SYSCTL_UNIV_UNVEC_BUSIFG ((UBase_t) 0x08U)

#define SYSCTL_UNIV_R_UNVEC_MASK (SYSCTL_UNIV_UNVEC_MASK<< SYSCTL_UNIV_R_UNVEC_BIT)
#define SYSCTL_UNIV_R_UNVEC_NOINTERRUPT (SYSCTL_UNIV_UNVEC_NOINTERRUPT << SYSCTL_UNIV_R_UNVEC_BIT)
#define SYSCTL_UNIV_R_UNVEC_NMIIFG (SYSCTL_UNIV_UNVEC_NMIIFG << SYSCTL_UNIV_R_UNVEC_BIT)
#define SYSCTL_UNIV_R_UNVEC_OFIFG (SYSCTL_UNIV_UNVEC_OFIFG << SYSCTL_UNIV_R_UNVEC_BIT)
#define SYSCTL_UNIV_R_UNVEC_ACCVIFG (SYSCTL_UNIV_UNVEC_ACCVIFG << SYSCTL_UNIV_R_UNVEC_BIT)
#define SYSCTL_UNIV_R_UNVEC_BUSIFG (SYSCTL_UNIV_UNVEC_BUSIFG << SYSCTL_UNIV_R_UNVEC_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_UNIV_H_ */
