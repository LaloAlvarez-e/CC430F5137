/**
 *
 * @file AES_RegisterAddress.h
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

#ifndef AES_PERIPHERAL_HEADER_AES_REGISTERADDRESS_H_
#define AES_PERIPHERAL_HEADER_AES_REGISTERADDRESS_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

#define AES_BASE (0x150U)

#define AES_DI_OFFSET (0x00U)
#define AES_DI_LOW_OFFSET (0x00U)
#define AES_DI8_OFFSET (0x00U)
#define AES_DI16_OFFSET (0x00U)

#define AES_INIRES_OFFSET (0x04U)
#define AES_RES_OFFSET (0x04U)
#define AES_INI_OFFSET (0x04U)


#endif /* AES_PERIPHERAL_HEADER_AES_REGISTERADDRESS_H_ */
