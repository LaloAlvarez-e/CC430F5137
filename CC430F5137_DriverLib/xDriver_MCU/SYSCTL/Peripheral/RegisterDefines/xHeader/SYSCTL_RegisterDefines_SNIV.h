/**
 *
 * @file SYSCTL_RegisterDefines_SNIV.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SNIV_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SNIV_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

/******************************************************************************************
 ************************************ 9 SNIV *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_SNIV_R_SNVEC_BIT ((UBase_t) 0U)

#define SYSCTL_SNIV_SNVEC_MASK ((UBase_t) 0xFFFFU)
#define SYSCTL_SNIV_SNVEC_NOINTERRUPT ((UBase_t) 0x00U)
#define SYSCTL_SNIV_SNVEC_SVMLIFG ((UBase_t) 0x02U)
#define SYSCTL_SNIV_SNVEC_SVMHIFG ((UBase_t) 0x04U)
#define SYSCTL_SNIV_SNVEC_SVSMLDLYIFG ((UBase_t) 0x06U)
#define SYSCTL_SNIV_SNVEC_SVSMHDLYIFG ((UBase_t) 0x08U)
#define SYSCTL_SNIV_SNVEC_VMAIFG ((UBase_t) 0x0AU)
#define SYSCTL_SNIV_SNVEC_JMBINIFG ((UBase_t) 0x0CU)
#define SYSCTL_SNIV_SNVEC_JMBOUTIFG ((UBase_t) 0x0EU)
#define SYSCTL_SNIV_SNVEC_SVMLVLRIFG ((UBase_t) 0x10U)
#define SYSCTL_SNIV_SNVEC_SVMHVLRIFG ((UBase_t) 0x12U)

#define SYSCTL_SNIV_R_SNVEC_MASK (SYSCTL_SNIV_SNVEC_MASK<< SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_NOINTERRUPT (SYSCTL_SNIV_SNVEC_NOINTERRUPT << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_SVMLIFG (SYSCTL_SNIV_SNVEC_SVMLIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_SVMHIFG (SYSCTL_SNIV_SNVEC_SVMHIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_SVSMLDLYIFG (SYSCTL_SNIV_SNVEC_SVSMLDLYIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_SVSMHDLYIFG (SYSCTL_SNIV_SNVEC_SVSMHDLYIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_VMAIFG (SYSCTL_SNIV_SNVEC_VMAIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_JMBINIFG (SYSCTL_SNIV_SNVEC_JMBINIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_JMBOUTIFG (SYSCTL_SNIV_SNVEC_JMBOUTIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_SVMLVLRIFG (SYSCTL_SNIV_SNVEC_SVMLVLRIFG << SYSCTL_SNIV_R_SNVEC_BIT)
#define SYSCTL_SNIV_R_SNVEC_SVMHVLRIFG (SYSCTL_SNIV_SNVEC_SVMHVLRIFG << SYSCTL_SNIV_R_SNVEC_BIT)
/*-----------*/





#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_SNIV_H_ */
