/**
 *
 * @file SFR_RegisterDefines_IFG1.h
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_IFG1_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_IFG1_H_

#include "xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h"

/******************************************************************************************
 ************************************ 2 IFG1 *********************************************
 ******************************************************************************************/
/*-----------*/
#define SFR_IFG1_R_WDTIFG_BIT ((UBase_t) 0U)

#define SFR_IFG1_WDTIFG_MASK ((UBase_t) 0x01U)
#define SFR_IFG1_WDTIFG_NOOCCUR ((UBase_t) 0x00U)
#define SFR_IFG1_WDTIFG_OCCUR ((UBase_t) 0x01U)

#define SFR_IFG1_R_WDTIFG_MASK (SFR_IFG1_WDTIFG_MASK<< SFR_IFG1_R_WDTIFG_BIT)
#define SFR_IFG1_R_WDTIFG_NOOCCUR (SFR_IFG1_WDTIFG_NOOCCUR << SFR_IFG1_R_WDTIFG_BIT)
#define SFR_IFG1_R_WDTIFG_OCCUR (SFR_IFG1_WDTIFG_OCCUR << SFR_IFG1_R_WDTIFG_BIT)
/*-----------*/

/*-----------*/
#define SFR_IFG1_R_OFIFG_BIT ((UBase_t) 1U)

#define SFR_IFG1_OFIFG_MASK ((UBase_t) 0x01U)
#define SFR_IFG1_OFIFG_NOOCCUR ((UBase_t) 0x00U)
#define SFR_IFG1_OFIFG_OCCUR ((UBase_t) 0x01U)

#define SFR_IFG1_R_OFIFG_MASK (SFR_IFG1_OFIFG_MASK<< SFR_IFG1_R_OFIFG_BIT)
#define SFR_IFG1_R_OFIFG_NOOCCUR (SFR_IFG1_OFIFG_NOOCCUR << SFR_IFG1_R_OFIFG_BIT)
#define SFR_IFG1_R_OFIFG_OCCUR (SFR_IFG1_OFIFG_OCCUR << SFR_IFG1_R_OFIFG_BIT)
/*-----------*/

/*-----------*/
#define SFR_IFG1_R_VMAIFG_BIT ((UBase_t) 3U)

#define SFR_IFG1_VMAIFG_MASK ((UBase_t) 0x01U)
#define SFR_IFG1_VMAIFG_NOOCCUR ((UBase_t) 0x00U)
#define SFR_IFG1_VMAIFG_OCCUR ((UBase_t) 0x01U)

#define SFR_IFG1_R_VMAIFG_MASK (SFR_IFG1_VMAIFG_MASK<< SFR_IFG1_R_VMAIFG_BIT)
#define SFR_IFG1_R_VMAIFG_NOOCCUR (SFR_IFG1_VMAIFG_NOOCCUR << SFR_IFG1_R_VMAIFG_BIT)
#define SFR_IFG1_R_VMAIFG_OCCUR (SFR_IFG1_VMAIFG_OCCUR << SFR_IFG1_R_VMAIFG_BIT)
/*-----------*/

/*-----------*/
#define SFR_IFG1_R_NMIIFG_BIT ((UBase_t) 4U)

#define SFR_IFG1_NMIIFG_MASK ((UBase_t) 0x01U)
#define SFR_IFG1_NMIIFG_NOOCCUR ((UBase_t) 0x00U)
#define SFR_IFG1_NMIIFG_OCCUR ((UBase_t) 0x01U)

#define SFR_IFG1_R_NMIIFG_MASK (SFR_IFG1_NMIIFG_MASK<< SFR_IFG1_R_NMIIFG_BIT)
#define SFR_IFG1_R_NMIIFG_NOOCCUR (SFR_IFG1_NMIIFG_NOOCCUR << SFR_IFG1_R_NMIIFG_BIT)
#define SFR_IFG1_R_NMIIFG_OCCUR (SFR_IFG1_NMIIFG_OCCUR << SFR_IFG1_R_NMIIFG_BIT)
/*-----------*/

/*-----------*/
#define SFR_IFG1_R_JMBINIFG_BIT ((UBase_t) 6U)

#define SFR_IFG1_JMBINIFG_MASK ((UBase_t) 0x01U)
#define SFR_IFG1_JMBINIFG_NOOCCUR ((UBase_t) 0x00U)
#define SFR_IFG1_JMBINIFG_OCCUR ((UBase_t) 0x01U)

#define SFR_IFG1_R_JMBINIFG_MASK (SFR_IFG1_JMBINIFG_MASK<< SFR_IFG1_R_JMBINIFG_BIT)
#define SFR_IFG1_R_JMBINIFG_NOOCCUR (SFR_IFG1_JMBINIFG_NOOCCUR << SFR_IFG1_R_JMBINIFG_BIT)
#define SFR_IFG1_R_JMBINIFG_OCCUR (SFR_IFG1_JMBINIFG_OCCUR << SFR_IFG1_R_JMBINIFG_BIT)
/*-----------*/

/*-----------*/
#define SFR_IFG1_R_JMBOUTIFG_BIT ((UBase_t) 7U)

#define SFR_IFG1_JMBOUTIFG_MASK ((UBase_t) 0x01U)
#define SFR_IFG1_JMBOUTIFG_NOOCCUR ((UBase_t) 0x00U)
#define SFR_IFG1_JMBOUTIFG_OCCUR ((UBase_t) 0x01U)

#define SFR_IFG1_R_JMBOUTIFG_MASK (SFR_IFG1_JMBOUTIFG_MASK<< SFR_IFG1_R_JMBOUTIFG_BIT)
#define SFR_IFG1_R_JMBOUTIFG_NOOCCUR (SFR_IFG1_JMBOUTIFG_NOOCCUR << SFR_IFG1_R_JMBOUTIFG_BIT)
#define SFR_IFG1_R_JMBOUTIFG_OCCUR (SFR_IFG1_JMBOUTIFG_OCCUR << SFR_IFG1_R_JMBOUTIFG_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_IFG1_H_ */
