/**
 *
 * @file SYSCTL_RegisterDefines_CTL.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CTL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CTL_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

/******************************************************************************************
 ************************************ 1 CTL *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_CTL_R_RIVECT_BIT ((UBase_t) 0U)

#define SYSCTL_CTL_RIVECT_MASK ((UBase_t) 0x01U)
#define SYSCTL_CTL_RIVECT_FLASH ((UBase_t) 0x00U)
#define SYSCTL_CTL_RIVECT_RAM ((UBase_t) 0x01U)

#define SYSCTL_CTL_R_RIVECT_MASK (SYSCTL_CTL_RIVECT_MASK<< SYSCTL_CTL_R_RIVECT_BIT)
#define SYSCTL_CTL_R_RIVECT_FLASH (SYSCTL_CTL_RIVECT_FLASH << SYSCTL_CTL_R_RIVECT_BIT)
#define SYSCTL_CTL_R_RIVECT_RAM (SYSCTL_CTL_RIVECT_RAM << SYSCTL_CTL_R_RIVECT_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_CTL_R_PMMPE_BIT ((UBase_t) 2U)

#define SYSCTL_CTL_PMMPE_MASK ((UBase_t) 0x01U)
#define SYSCTL_CTL_PMMPE_UNPROTECTED ((UBase_t) 0x00U)
#define SYSCTL_CTL_PMMPE_PROTECTED ((UBase_t) 0x01U)

#define SYSCTL_CTL_R_PMMPE_MASK (SYSCTL_CTL_PMMPE_MASK<< SYSCTL_CTL_R_PMMPE_BIT)
#define SYSCTL_CTL_R_PMMPE_UNPROTECTED (SYSCTL_CTL_PMMPE_UNPROTECTED << SYSCTL_CTL_R_PMMPE_BIT)
#define SYSCTL_CTL_R_PMMPE_PROTECTED (SYSCTL_CTL_PMMPE_PROTECTED << SYSCTL_CTL_R_PMMPE_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_CTL_R_BSLIND_BIT ((UBase_t) 4U)

#define SYSCTL_CTL_BSLIND_MASK ((UBase_t) 0x01U)
#define SYSCTL_CTL_BSLIND_NODETECTED ((UBase_t) 0x00U)
#define SYSCTL_CTL_BSLIND_DETECTED ((UBase_t) 0x01U)

#define SYSCTL_CTL_R_BSLIND_MASK (SYSCTL_CTL_BSLIND_MASK<< SYSCTL_CTL_R_BSLIND_BIT)
#define SYSCTL_CTL_R_BSLIND_UNODETECTED (SYSCTL_CTL_BSLIND_NODETECTED << SYSCTL_CTL_R_BSLIND_BIT)
#define SYSCTL_CTL_R_BSLIND_DETECTED (SYSCTL_CTL_BSLIND_DETECTED << SYSCTL_CTL_R_BSLIND_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_CTL_R_JTAGPIN_BIT ((UBase_t) 5U)

#define SYSCTL_CTL_JTAGPIN_MASK ((UBase_t) 0x01U)
#define SYSCTL_CTL_JTAGPIN_SHARED ((UBase_t) 0x00U)
#define SYSCTL_CTL_JTAGPIN_DEDICATED ((UBase_t) 0x01U)

#define SYSCTL_CTL_R_JTAGPIN_MASK (SYSCTL_CTL_JTAGPIN_MASK<< SYSCTL_CTL_R_JTAGPIN_BIT)
#define SYSCTL_CTL_R_JTAGPIN_SHARED (SYSCTL_CTL_JTAGPIN_SHARED << SYSCTL_CTL_R_JTAGPIN_BIT)
#define SYSCTL_CTL_R_JTAGPIN_DEDICATED (SYSCTL_CTL_JTAGPIN_DEDICATED << SYSCTL_CTL_R_JTAGPIN_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_CTL_H_ */
