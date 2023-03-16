/**
 *
 * @file TIMERA_RegisterAddress.h
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef TIMERA_PERIPHERAL_HEADER_TIMERA_REGISTERADDRESS_H_
#define TIMERA_PERIPHERAL_HEADER_TIMERA_REGISTERADDRESS_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h>

#define TIMERA_BASE (0x0340U)

#define TIMERA0_BASE (0x0340U)
#define TIMERA1_BASE (0x0380U)


#define TIMERA0_CC0_BASE (0x342U)
#define TIMERA0_CC1_BASE (0x344U)
#define TIMERA0_CC2_BASE (0x346U)
#define TIMERA0_CC3_BASE (0x348U)
#define TIMERA0_CC4_BASE (0x34AU)

#define TIMERA0_CC0_OFFSET (TIMERA0_CC0_BASE - TIMERA0_BASE)
#define TIMERA0_CC1_OFFSET (TIMERA0_CC1_BASE - TIMERA0_BASE)
#define TIMERA0_CC2_OFFSET (TIMERA0_CC2_BASE - TIMERA0_BASE)
#define TIMERA0_CC3_OFFSET (TIMERA0_CC3_BASE - TIMERA0_BASE)
#define TIMERA0_CC4_OFFSET (TIMERA0_CC4_BASE - TIMERA0_BASE)


#define TIMERA1_CC0_BASE (0x382U)
#define TIMERA1_CC1_BASE (0x384U)
#define TIMERA1_CC2_BASE (0x386U)

#define TIMERA1_CC0_OFFSET (TIMERA1_CC0_BASE - TIMERA1_BASE)
#define TIMERA1_CC1_OFFSET (TIMERA1_CC1_BASE - TIMERA1_BASE)
#define TIMERA1_CC2_OFFSET (TIMERA1_CC2_BASE - TIMERA1_BASE)


#define TIMERA_CTL_OFFSET (0x00U)
#define TIMERA_COUNT_OFFSET (0x10U)
#define TIMERA_EX0_OFFSET (0x20U)
#define TIMERA_IV_OFFSET (0x2EU)

#define TIMERA_CC_CTL_OFFSET (0x00U)
#define TIMERA_CC_COUNT_OFFSET (0x10U)

#endif /* TIMERA_PERIPHERAL_HEADER_TIMERA_REGISTERADDRESS_H_ */
