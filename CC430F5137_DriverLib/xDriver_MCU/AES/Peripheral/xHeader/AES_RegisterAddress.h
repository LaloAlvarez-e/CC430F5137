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

#define AES_BASE_ (0x9C0U)


#define AES_ACTL0_OFFSET (0x00U)
#define AES_ASTAT_OFFSET (0x04U)

#define AES_AKEY_OFFSET (0x06U)
#define AES_AKEY_LOW_OFFSET (0x06U)
#define AES_AKEY8_OFFSET (0x06U)
#define AES_AKEY16_OFFSET (0x06U)

#define AES_ADIN_OFFSET (0x08U)
#define AES_ADIN_LOW_OFFSET (0x08U)
#define AES_ADIN8_OFFSET (0x08U)
#define AES_ADIN16_OFFSET (0x08U)

#define AES_ADOUT_OFFSET (0x0AU)
#define AES_ADOUT_LOW_OFFSET (0x0AU)
#define AES_ADOUT8_OFFSET (0x0AU)
#define AES_ADOUT16_OFFSET (0x0AU)

#endif /* AES_PERIPHERAL_HEADER_AES_REGISTERADDRESS_H_ */
