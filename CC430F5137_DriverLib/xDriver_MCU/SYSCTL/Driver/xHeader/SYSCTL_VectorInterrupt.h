/**
 *
 * @file SYSCTL_VectorInterrupt.h
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
 * @verbatim 20 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_VECTORINTERRUPT_H_
#define XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_VECTORINTERRUPT_H_

#include "xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h"

SYSCTL_nERROR SYSCTL__enSetVectorInterrupt(SYSCTL_nVECTOR enVectorArg);
SYSCTL_nERROR SYSCTL__enGetVectorInterrupt(SYSCTL_nVECTOR* penVectorArg);

#endif /* XDRIVER_MCU_SYSCTL_DRIVER_XHEADER_SYSCTL_VECTORINTERRUPT_H_ */
