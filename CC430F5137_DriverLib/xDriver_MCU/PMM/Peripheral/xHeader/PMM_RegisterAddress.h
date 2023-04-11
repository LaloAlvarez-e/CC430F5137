/**
 *
 * @file PMM_RegisterAddress.h
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

#ifndef XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_REGISTERADDRESS_H_
#define XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_REGISTERADDRESS_H_

#include <xDriver_MCU/PMM/Peripheral/xHeader/PMM_Enum.h>

#define PMM_BASE_    ((UBase_t) 0x0120UL)

#define PMM_CTL0_OFFSET    ((UBase_t) 0x0000UL)
#define PMM_CTL1_OFFSET    ((UBase_t) 0x0002UL)
#define SVSM_HCTL_OFFSET    ((UBase_t) 0x0004UL)
#define SV_HCTL_OFFSET    ((UBase_t) 0x0004UL)
#define SVS_HCTL_OFFSET    ((UBase_t) 0x0004UL)
#define SVM_HCTL_OFFSET    ((UBase_t) 0x0004UL)
#define SVSM_LCTL_OFFSET    ((UBase_t) 0x0006UL)
#define SV_LCTL_OFFSET    ((UBase_t) 0x0006UL)
#define SVS_LCTL_OFFSET    ((UBase_t) 0x0006UL)
#define SVM_LCTL_OFFSET    ((UBase_t) 0x0006UL)
#define PMM_IFG_OFFSET    ((UBase_t) 0x000CUL)
#define PMM_RIE_OFFSET    ((UBase_t) 0x000EUL)
#define PMM_PM5CTL0_OFFSET    ((UBase_t) 0x0010UL)

#endif /* XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_REGISTERADDRESS_H_ */
