/**
 *
 * @file AES_Data.h
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
 * @verbatim 7 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 7 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_AES_DRIVER_XHEADER_AES_DATA_H_
#define XDRIVER_MCU_AES_DRIVER_XHEADER_AES_DATA_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

AES_nERROR AES__enSetDataByte(uint8_t u8Data);
AES_nERROR AES__enSetDataWord(UBase_t uxData);

#endif /* XDRIVER_MCU_AES_DRIVER_XHEADER_AES_DATA_H_ */
