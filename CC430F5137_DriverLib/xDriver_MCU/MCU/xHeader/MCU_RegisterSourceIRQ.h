/**
 *
 * @file MCU_RegisterSourceIRQ.h
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
 * @verbatim 27 ene. 2021 @endverbatim
 *
 * @author
 * @verbatim vyldram @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 27 ene. 2021     vyldram    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_
#define XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_

#include <xDriver_MCU/MCU/xHeader/MCU_Enum.h>

#pragma CODE_SECTION(MCU__enRegisterIRQSourceHandler_RAM, ".TI.ramfunc")

MCU_nERROR MCU__enRegisterIRQSourceHandler_RAM(MCU_puxfIRQSourceHandler_t pfIrqSourceHandler,
                                               MCU_puxfIRQSourceHandler_t* pfIrqArrayHandler,
                                               UBase_t uxInterruptSource,
                                               UBase_t uxInterruptSourceMax);


MCU_nERROR MCU__enRegisterIRQSourceHandler(MCU_puxfIRQSourceHandler_t pfIrqSourceHandler,
                                           MCU_puxfIRQSourceHandler_t* pfIrqArrayHandler,
                                           UBase_t uxInterruptSource,
                                           UBase_t uxInterruptSourceMax);


#endif /* XDRIVER_MCU_COMMON_XHEADER_MCU_REGISTERSOURCEIRQ_H_ */
