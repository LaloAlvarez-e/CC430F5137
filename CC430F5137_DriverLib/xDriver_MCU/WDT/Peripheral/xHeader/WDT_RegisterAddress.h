/**
 *
 * @file WDT_RegisterAddress.h
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

#ifndef WDT_PERIPHERAL_HEADER_WDT_REGISTERADDRESS_H_
#define WDT_PERIPHERAL_HEADER_WDT_REGISTERADDRESS_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

#define WDT_BASE (0x0100U)

#define WDT_IE1_OFFSET (0x00U)
#define WDT_IFG1_OFFSET (0x02U)
#define WDT_CTL_OFFSET (0x5CU)

#endif /* WDT_PERIPHERAL_HEADER_WDT_REGISTERADDRESS_H_ */
