/**
 *
 * @file MCU_CheckParams.h
 * @copyright
 * @verbatim InDeviceMex 2020 @endverbatim
 *
 * @par Responsibility
 * @verbatim InDeviceMex Developers @endverbatim
 *
 * @version
 * @verbatim 1.0 @endverbatim
 *
 * @date
 * @verbatim 24 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 24 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */
#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

#pragma CODE_SECTION(MCU__enCheckParams_RAM, ".TI.ramfunc")
MCU_nERROR MCU__enCheckParams_RAM(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);


#pragma CHECK_MISRA("-8.5")
MCU_nERROR MCU__enCheckParams(UBase_t uxModuleArg, UBase_t uxModuleMaxArg);
#pragma RESET_MISRA("8.5")

#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_CHECKPARAMS_H_ */
