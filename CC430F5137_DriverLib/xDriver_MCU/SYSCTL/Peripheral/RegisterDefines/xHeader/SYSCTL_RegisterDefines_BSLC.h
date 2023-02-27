/**
 *
 * @file SYSCTL_RegisterDefines_BSLC.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BSLC_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BSLC_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

/******************************************************************************************
 ************************************ 2 BSLC *********************************************
 ******************************************************************************************/
/*-----------*/
#define SYSCTL_BSLC_R_BSLSIZE_BIT ((UBase_t) 0U)

#define SYSCTL_BSLC_BSLSIZE_MASK ((UBase_t) 0x3U)
#define SYSCTL_BSLC_BSLSIZE_1SEGMENT_3 ((UBase_t) 0x00U)
#define SYSCTL_BSLC_BSLSIZE_2SEGMENT_23 ((UBase_t) 0x01U)
#define SYSCTL_BSLC_BSLSIZE_3SEGMENT_123 ((UBase_t) 0x02U)
#define SYSCTL_BSLC_BSLSIZE_4SEGMENT_1234 ((UBase_t) 0x03U)

#define SYSCTL_BSLC_R_BSLSIZE_MASK (SYSCTL_BSLC_BSLSIZE_MASK<< SYSCTL_BSLC_R_BSLSIZE_BIT)
#define SYSCTL_BSLC_R_BSLSIZE_1SEGMENT_3 (SYSCTL_BSLC_BSLSIZE_1SEGMENT_3 << SYSCTL_BSLC_R_BSLSIZE_BIT)
#define SYSCTL_BSLC_R_BSLSIZE_2SEGMENT_23 (SYSCTL_BSLC_BSLSIZE_2SEGMENT_23 << SYSCTL_BSLC_R_BSLSIZE_BIT)
#define SYSCTL_BSLC_R_BSLSIZE_3SEGMENT_123 (SYSCTL_BSLC_BSLSIZE_3SEGMENT_123 << SYSCTL_BSLC_R_BSLSIZE_BIT)
#define SYSCTL_BSLC_R_BSLSIZE_4SEGMENT_1234 (SYSCTL_BSLC_BSLSIZE_4SEGMENT_1234 << SYSCTL_BSLC_R_BSLSIZE_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_BSLC_R_BSLR_BIT ((UBase_t) 2U)

#define SYSCTL_BSLC_BSLR_MASK ((UBase_t) 0x01U)
#define SYSCTL_BSLC_BSLR_0BYTES ((UBase_t) 0x00U)
#define SYSCTL_BSLC_BSLR_16BYTES ((UBase_t) 0x01U)

#define SYSCTL_BSLC_R_BSLR_MASK (SYSCTL_BSLC_BSLR_MASK<< SYSCTL_BSLC_R_BSLR_BIT)
#define SYSCTL_BSLC_R_BSLR_0BYTES (SYSCTL_BSLC_BSLR_0BYTES << SYSCTL_BSLC_R_BSLR_BIT)
#define SYSCTL_BSLC_R_BSLR_16BYTES (SYSCTL_BSLC_BSLR_16BYTES << SYSCTL_BSLC_R_BSLR_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_BSLC_R_BSLOFF_BIT ((UBase_t) 14U)

#define SYSCTL_BSLC_BSLOFF_MASK ((UBase_t) 0x01U)
#define SYSCTL_BSLC_BSLOFF_ON ((UBase_t) 0x00U)
#define SYSCTL_BSLC_BSLOFF_OFF ((UBase_t) 0x01U)

#define SYSCTL_BSLC_R_BSLOFF_MASK (SYSCTL_BSLC_BSLOFF_MASK<< SYSCTL_BSLC_R_BSLOFF_BIT)
#define SYSCTL_BSLC_R_BSLOFF_ON (SYSCTL_BSLC_BSLOFF_ON << SYSCTL_BSLC_R_BSLOFF_BIT)
#define SYSCTL_BSLC_R_BSLOFF_OFF (SYSCTL_BSLC_BSLOFF_OFF << SYSCTL_BSLC_R_BSLOFF_BIT)
/*-----------*/

/*-----------*/
#define SYSCTL_BSLPE_R_BSLOFF_BIT ((UBase_t) 15U)

#define SYSCTL_BSLPE_BSLOFF_MASK ((UBase_t) 0x01U)
#define SYSCTL_BSLPE_BSLOFF_NOTPROTECTED ((UBase_t) 0x00U)
#define SYSCTL_BSLPE_BSLOFF_PROTECTED ((UBase_t) 0x01U)

#define SYSCTL_BSLPE_R_BSLOFF_MASK (SYSCTL_BSLPE_BSLOFF_MASK<< SYSCTL_BSLPE_R_BSLOFF_BIT)
#define SYSCTL_BSLPE_R_BSLOFF_NOTPROTECTED (SYSCTL_BSLPE_BSLOFF_NOTPROTECTED << SYSCTL_BSLPE_R_BSLOFF_BIT)
#define SYSCTL_BSLPE_R_BSLOFF_PROTECTED (SYSCTL_BSLPE_BSLOFF_PROTECTED << SYSCTL_BSLPE_R_BSLOFF_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_REGISTERDEFINES_XHEADER_SYSCTL_REGISTERDEFINES_BSLC_H_ */
