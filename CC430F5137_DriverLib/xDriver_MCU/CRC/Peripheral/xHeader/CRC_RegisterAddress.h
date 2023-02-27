/**
 *
 * @file CRC_RegisterAddress.h
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

#ifndef CRC_PERIPHERAL_HEADER_CRC_REGISTERADDRESS_H_
#define CRC_PERIPHERAL_HEADER_CRC_REGISTERADDRESS_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

#define CRC_BASE (0x150U)

#define CRC_DI_OFFSET (0x00U)
#define CRC_DI_LOW_OFFSET (0x00U)
#define CRC_DI8_OFFSET (0x00U)
#define CRC_DI16_OFFSET (0x00U)

#define CRC_INIRES_OFFSET (0x04U)
#define CRC_RES_OFFSET (0x04U)
#define CRC_INI_OFFSET (0x04U)


#endif /* CRC_PERIPHERAL_HEADER_CRC_REGISTERADDRESS_H_ */
