/**
 *
 * @file MAP_Function.h
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
 * @verbatim 14 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_MAP_DRIVER_XHEADER_MAP_FUNCTION_H_
#define XDRIVER_MCU_MAP_DRIVER_XHEADER_MAP_FUNCTION_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_Enum.h>

MAP_nERROR MAP_PORT__enSetFunctionByNumber(MAP_nMODULE enModuleArg, MAP_nPIN enPinArg, MAP_nFUNCTION enFunctionArg);
MAP_nERROR MAP_PORT__enSetFunction(MAP_nMODULE enModuleArg, MAP_nPINMASK enPinMaskArg, MAP_nFUNCTION enFunctionArg);
MAP_nERROR MAP_PORT__enSetFunctionByMask(MAP_nMODULE enModuleArg, MAP_nPINMASK enPinMaskArg, MAP_nFUNCTION enFunctionArg);

MAP_nERROR MAP_PORT__enGetFunctionByNumber(MAP_nMODULE enModuleArg, MAP_nPIN enPinArg, MAP_nFUNCTION* penFunctionArg);

#endif /* XDRIVER_MCU_MAP_DRIVER_XHEADER_MAP_FUNCTION_H_ */
