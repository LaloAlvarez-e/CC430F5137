/**
 *
 * @file TIMERA_RegisterPeripheral_CC4.h
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
 * @verbatim 14 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 14 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_TIMERA_PERIPHERAL_REGISTERPERIPHERAL_HEADER_TIMERA_REGISTERPERIPHERAL_CC4_H_
#define XDRIVER_MCU_TIMERA_PERIPHERAL_REGISTERPERIPHERAL_HEADER_TIMERA_REGISTERPERIPHERAL_CC4_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_RegisterAddress.h>
#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_StructPeripheral.h>


#define TIMERA0_CC4 ((TIMERA_CC_t*) TIMERA0_CC4_BASE)

/******************************************************************************************
 ************************************ 1 CTL *********************************************
 ******************************************************************************************/
#define TIMERA0_CC4_CTL_R  (*(volatile UBase_t*) (TIMERA0_CC4_BASE + TIMERA_CC_CTL_OFFSET))
#define TIMERA0_CC4_CTL    ((TIMERA_CC_CTL_t*) (TIMERA0_CC4_BASE + TIMERA_CC_CTL_OFFSET))

/******************************************************************************************
 ************************************ 2 COUNT *********************************************
 ******************************************************************************************/
#define TIMERA0_CC4_COUNT_R (*(volatile UBase_t*) (TIMERA0_CC4_BASE + TIMERA_CC_COUNT_OFFSET))
#define TIMERA0_CC4_COUNT ((TIMERA_CC_COUNT_t*) (TIMERA0_CC4_BASE + TIMERA_CC_COUNT_OFFSET))

#endif /* XDRIVER_MCU_TIMERA_PERIPHERAL_REGISTERPERIPHERAL_HEADER_TIMERA_REGISTERPERIPHERAL_CC4_H_ */
