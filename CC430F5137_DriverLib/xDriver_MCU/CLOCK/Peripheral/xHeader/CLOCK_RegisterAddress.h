/**
 *
 * @file CLOCK_RegisterAddress.h
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

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_REGISTERADDRESS_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_REGISTERADDRESS_H_

#include <xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h>

#define CLOCK_BASE    ((UBase_t) 0x0160UL)

#define CLOCK_CTL0_OFFSET    ((UBase_t) 0x0000UL)
#define CLOCK_CTL1_OFFSET    ((UBase_t) 0x0002UL)
#define CLOCK_CTL2_OFFSET    ((UBase_t) 0x0004UL)
#define CLOCK_CTL3_OFFSET    ((UBase_t) 0x0006UL)
#define CLOCK_CTL4_OFFSET    ((UBase_t) 0x0008UL)
#define CLOCK_CTL5_OFFSET    ((UBase_t) 0x000AUL)
#define CLOCK_CTL6_OFFSET    ((UBase_t) 0x000CUL)
#define CLOCK_CTL7_OFFSET    ((UBase_t) 0x000EUL)
#define CLOCK_CTL8_OFFSET    ((UBase_t) 0x0010UL)

#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_REGISTERADDRESS_H_ */
