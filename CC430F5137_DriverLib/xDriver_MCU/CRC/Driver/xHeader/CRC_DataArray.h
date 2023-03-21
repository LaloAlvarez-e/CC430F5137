/**
 *
 * @file CRC_DataArray.h
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
 * @verbatim 12 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 12 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CRC_DRIVER_XHEADER_CRC_DATAARRAY_H_
#define XDRIVER_MCU_CRC_DRIVER_XHEADER_CRC_DATAARRAY_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

CRC_nERROR CRC__enComputeDataByteArray_Opt(UBase_t uxInitValueArg, uint8_t* pu8DataArg, UBase_t CounterArg, UBase_t* puxResultArg);
CRC_nERROR CRC__enComputeDataByteArray(UBase_t uxInitValueArg, uint8_t* pu8DataArg, UBase_t CounterArg, UBase_t* puxResultArg);
CRC_nERROR CRC__enComputeDataWordArray(UBase_t uxInitValueArg, uint16_t* pu16DataArg, UBase_t CounterArg, UBase_t* puxResultArg);

#endif /* XDRIVER_MCU_CRC_DRIVER_XHEADER_CRC_DATAARRAY_H_ */
