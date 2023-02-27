/**
 *
 * @file SYSCTL_RegisterAddress.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_REGISTERADDRESS_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_REGISTERADDRESS_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

#define SYSCTL_BASE    ((UBase_t) 0x0180UL)

#define SYSCTL_CTL_OFFSET    ((UBase_t) 0x0000UL)
#define SYSCTL_BSLC_OFFSET    ((UBase_t) 0x0002UL)
#define SYSCTL_JMBC_OFFSET    ((UBase_t) 0x0006UL)
#define SYSCTL_JMBI0_OFFSET    ((UBase_t) 0x0008UL)
#define SYSCTL_JMBI1_OFFSET    ((UBase_t) 0x000AUL)
#define SYSCTL_JMBO0_OFFSET    ((UBase_t) 0x000CUL)
#define SYSCTL_JMBO1_OFFSET    ((UBase_t) 0x000EUL)
#define SYSCTL_BERRIV_OFFSET    ((UBase_t) 0x018CUL)
#define SYSCTL_UNIV_OFFSET    ((UBase_t) 0x001AUL)
#define SYSCTL_SNIV_OFFSET    ((UBase_t) 0x001CUL)
#define SYSCTL_RSTIV_OFFSET    ((UBase_t) 0x001EUL)

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_REGISTERADDRESS_H_ */
