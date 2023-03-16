/**
 *
 * @file TIMERA_RegisterPeripheral_CC1.h
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
 * @verbatim 9 abr. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 abr. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMERA_PERIPHERAL_REGISTERPERIPHERAL_HEADER_TIMERA_REGISTERPERIPHERAL_CC1_H_
#define DRIVERLIB_TIMERA_PERIPHERAL_REGISTERPERIPHERAL_HEADER_TIMERA_REGISTERPERIPHERAL_CC1_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_RegisterAddress.h>
#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_StructPeripheral.h>


#define TIMERA0_CC1 ((TIMERA_CC_t*) TIMERA0_CC1_BASE)
#define TIMERA1_CC1 ((TIMERA_CC_t*) TIMERA1_CC1_BASE)

/******************************************************************************************
 ************************************ 1 CTL *********************************************
 ******************************************************************************************/
#define TIMERA0_CC1_CTL_R  (*(volatile UBase_t*) (TIMERA0_CC1_BASE + TIMERA_CC_CTL_OFFSET))
#define TIMERA0_CC1_CTL    ((TIMERA_CC_CTL_t*) (TIMERA0_CC1_BASE + TIMERA_CC_CTL_OFFSET))
#define TIMERA1_CC1_CTL_R  (*(volatile UBase_t*) (TIMERA1_CC1_BASE + TIMERA_CC_CTL_OFFSET))
#define TIMERA1_CC1_CTL    ((TIMERA_CC_CTL_t*) (TIMERA1_CC1_BASE + TIMERA_CC_CTL_OFFSET))

/******************************************************************************************
 ************************************ 2 COUNT *********************************************
 ******************************************************************************************/
#define TIMERA0_CC1_COUNT_R (*(volatile UBase_t*) (TIMERA0_CC1_BASE + TIMERA_CC_COUNT_OFFSET))
#define TIMERA0_CC1_COUNT ((TIMERA_CC_COUNT_t*) (TIMERA0_CC1_BASE + TIMERA_CC_COUNT_OFFSET))
#define TIMERA1_CC1_COUNT_R (*(volatile UBase_t*) (TIMERA1_CC1_BASE + TIMERA_CC_COUNT_OFFSET))
#define TIMERA1_CC1_COUNT ((TIMERA_CC_COUNT_t*) (TIMERA1_CC1_BASE + TIMERA_CC_COUNT_OFFSET))

#endif /* DRIVERLIB_TIMERA_PERIPHERAL_REGISTERPERIPHERAL_HEADER_TIMERA_REGISTERPERIPHERAL_CC1_H_ */
