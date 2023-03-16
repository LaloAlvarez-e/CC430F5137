/**
 *
 * @file TIMERA_RegisterPeripheral.h
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef TIMERA_PERIPHERAL_REGISTERPERIPHERAL_TIMERA_REGISTERPERIPHERAL_H_
#define TIMERA_PERIPHERAL_REGISTERPERIPHERAL_TIMERA_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/TIMERA/Peripheral/RegisterPeripheral/xHeader/TIMERA_RegisterPeripheral_CC0.h>
#include <xDriver_MCU/TIMERA/Peripheral/RegisterPeripheral/xHeader/TIMERA_RegisterPeripheral_CC1.h>
#include <xDriver_MCU/TIMERA/Peripheral/RegisterPeripheral/xHeader/TIMERA_RegisterPeripheral_CC2.h>
#include <xDriver_MCU/TIMERA/Peripheral/RegisterPeripheral/xHeader/TIMERA_RegisterPeripheral_CC3.h>
#include <xDriver_MCU/TIMERA/Peripheral/RegisterPeripheral/xHeader/TIMERA_RegisterPeripheral_CC4.h>

#define TIMERA ((TIMERA_ARRAY_t*) TIMERA_BASE)
#define TIMERA0 ((TIMERA_t*) TIMERA0_BASE)
#define TIMERA1 ((TIMERA_t*) TIMERA1_BASE)


/******************************************************************************************
 ************************************ 1 CTL *********************************************
 ******************************************************************************************/
#define TIMERA0_CTL_R  (*(volatile UBase_t*) (TIMERA0_BASE + TIMERA_CTL_OFFSET))
#define TIMERA0_CTL    ((TIMERA_CTL_t*) (TIMERA0_BASE + TIMERA_CTL_OFFSET))
#define TIMERA1_CTL_R  (*(volatile UBase_t*) (TIMERA1_BASE + TIMERA_CTL_OFFSET))
#define TIMERA1_CTL    ((TIMERA_CTL_t*) (TIMERA1_BASE + TIMERA_CTL_OFFSET))

/******************************************************************************************
 ************************************ 2 COUNT *********************************************
 ******************************************************************************************/
#define TIMERA0_COUNT_R  (*(volatile UBase_t*) (TIMERA0_BASE + TIMERA_COUNT_OFFSET))
#define TIMERA0_COUNT    ((TIMERA_R_t*) (TIMERA0_BASE + TIMERA_COUNT_OFFSET))
#define TIMERA1_COUNT_R  (*(volatile UBase_t*) (TIMERA1_BASE + TIMERA_COUNT_OFFSET))
#define TIMERA1_COUNT    ((TIMERA_R_t*) (TIMERA1_BASE + TIMERA_COUNT_OFFSET))

/******************************************************************************************
 ************************************ 3 EX0 *********************************************
 ******************************************************************************************/
#define TIMERA0_EX0_R  (*(volatile UBase_t*) (TIMERA0_BASE + TIMERA_EX0_OFFSET))
#define TIMERA0_EX0    ((TIMERA_EX0_t*) (TIMERA0_BASE + TIMERA_EX0_OFFSET))
#define TIMERA1_EX0_R  (*(volatile UBase_t*) (TIMERA0_BASE + TIMERA_EX0_OFFSET))
#define TIMERA1_EX0    ((TIMERA_EX0_t*) (TIMERA0_BASE + TIMERA_EX0_OFFSET))

/******************************************************************************************
 ************************************ 3 IV *********************************************
 ******************************************************************************************/
#define TIMERA0_IV_R  (*(volatile UBase_t*) (TIMERA0_BASE + TIMERA_IV_OFFSET))
#define TIMERA0_IV    ((TIMERA_IV_t*) (TIMERA0_BASE + TIMERA_IV_OFFSET))
#define TIMERA1_IV_R  (*(volatile UBase_t*) (TIMERA1_BASE + TIMERA_IV_OFFSET))
#define TIMERA1_IV    ((TIMERA_IV_t*) (TIMERA1_BASE + TIMERA_IV_OFFSET))


uintptr_t TIMERA_CC__uptrBlockBaseAddress(TIMERA_nMODULE enModuleArg, TIMERA_nCC enSubModuleArg);
uintptr_t TIMERA__uptrBlockBaseAddress(TIMERA_nMODULE enModuleArg);

#endif /* TIMERA_PERIPHERAL_REGISTERPERIPHERAL_TIMERA_REGISTERPERIPHERAL_H_ */
