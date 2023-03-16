/**
 *
 * @file CRC_Data.h
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

#ifndef XDRIVER_MCU_CRC_DRIVER_XHEADER_CRC_DATA_H_
#define XDRIVER_MCU_CRC_DRIVER_XHEADER_CRC_DATA_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

CRC_nERROR CRC__enSetDataByte(CRC_nMODULE enModuleArg, uint8_t u8Data);
CRC_nERROR CRC__enSetDataWord(CRC_nMODULE enModuleArg, UBase_t uxData);

#endif /* XDRIVER_MCU_CRC_DRIVER_XHEADER_CRC_DATA_H_ */