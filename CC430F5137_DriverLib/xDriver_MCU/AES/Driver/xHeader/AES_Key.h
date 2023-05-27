/**
 *
 * @file AES_Key.h
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
 * @verbatim 11 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 11 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_AES_DRIVER_XHEADER_AES_KEY_H_
#define XDRIVER_MCU_AES_DRIVER_XHEADER_AES_KEY_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

AES_nERROR AES__enSetKeyByte(uint8_t u8Key);
AES_nERROR AES__enSetKeyWord(UBase_t uxKey);
AES_nERROR AES__enGetKeyBytesWritten(uint8_t* pu8Key);
AES_nERROR AES__enSetKeyByteArray(uint8_t* pu8KeyArg);
AES_nERROR AES__enSetKeyWordArray(UBase_t* puxKeyArg);

AES_nERROR AES__enSetKeyValid(void);

#endif /* XDRIVER_MCU_AES_DRIVER_XHEADER_AES_KEY_H_ */
