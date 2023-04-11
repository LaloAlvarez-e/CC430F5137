/**
 *
 * @file SFR_RegisterAddress.h
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
 * @verbatim 9 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_REGISTERADDRESS_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_REGISTERADDRESS_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h>

#define SFR_BASE_    ((UBase_t) 0x0100UL)

#define SFR_IE1_OFFSET    ((UBase_t) 0x0000UL)
#define SFR_IFG1_OFFSET    ((UBase_t) 0x0002UL)
#define SFR_RPCR_OFFSET    ((UBase_t) 0x0004UL)

#endif /* XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_REGISTERADDRESS_H_ */
