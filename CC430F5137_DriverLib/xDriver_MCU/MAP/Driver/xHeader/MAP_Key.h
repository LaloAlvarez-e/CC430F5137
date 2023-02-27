/**
 *
 * @file MAP_Key.h
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
 * @verbatim 13 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_MAP_DRIVER_XHEADER_MAP_KEY_H_
#define XDRIVER_MCU_MAP_DRIVER_XHEADER_MAP_KEY_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_Enum.h>

MAP_nERROR MAP__enWriteKey(void);
MAP_nERROR MAP__enReadKey(MAP_nKEY* penKeyArg);

#endif /* XDRIVER_MCU_MAP_DRIVER_XHEADER_MAP_KEY_H_ */
