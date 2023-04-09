/**
 *
 * @file CLOCK_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_RegisterAddress.h>
#include <xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_StructPeripheral.h>

#define CLOCK    ((CLOCK_t*) (CLOCK_BASE))

/********************************************************************************************
************************************** 1 CTL0 **********************************************
********************************************************************************************/
#define CLOCK_CTL0    ((CLOCK_CTL0_t*) (CLOCK_BASE + CLOCK_CTL0_OFFSET ))
#define CLOCK_CTL0_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL0_OFFSET)))

/********************************************************************************************
************************************** 1 CTL1 **********************************************
********************************************************************************************/
#define CLOCK_CTL1    ((CLOCK_CTL1_t*) (CLOCK_BASE + CLOCK_CTL1_OFFSET ))
#define CLOCK_CTL1_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL1_OFFSET)))

/********************************************************************************************
************************************** 1 CTL2 **********************************************
********************************************************************************************/
#define CLOCK_CTL2    ((CLOCK_CTL2_t*) (CLOCK_BASE + CLOCK_CTL2_OFFSET ))
#define CLOCK_CTL2_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL2_OFFSET)))

/********************************************************************************************
************************************** 1 CTL3 **********************************************
********************************************************************************************/
#define CLOCK_CTL3    ((CLOCK_CTL3_t*) (CLOCK_BASE + CLOCK_CTL3_OFFSET ))
#define CLOCK_CTL3_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL3_OFFSET)))

/********************************************************************************************
************************************** 1 CTL4 **********************************************
********************************************************************************************/
#define CLOCK_CTL4    ((CLOCK_CTL4_t*) (CLOCK_BASE + CLOCK_CTL4_OFFSET ))
#define CLOCK_CTL4_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL4_OFFSET)))

/********************************************************************************************
************************************** 1 CTL5 **********************************************
********************************************************************************************/
#define CLOCK_CTL5    ((CLOCK_CTL5_t*) (CLOCK_BASE + CLOCK_CTL5_OFFSET ))
#define CLOCK_CTL5_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL5_OFFSET)))

/********************************************************************************************
************************************** 1 CTL6 **********************************************
********************************************************************************************/
#define CLOCK_CTL6    ((CLOCK_CTL6_t*) (CLOCK_BASE + CLOCK_CTL6_OFFSET ))
#define CLOCK_CTL6_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL6_OFFSET)))

/********************************************************************************************
************************************** 1 CTL7 **********************************************
********************************************************************************************/
#define CLOCK_CTL7    ((CLOCK_CTL7_t*) (CLOCK_BASE + CLOCK_CTL7_OFFSET ))
#define CLOCK_CTL7_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL7_OFFSET)))

/********************************************************************************************
************************************** 1 CTL8 **********************************************
********************************************************************************************/
#define CLOCK_CTL8    ((CLOCK_CTL8_t*) (CLOCK_BASE + CLOCK_CTL8_OFFSET ))
#define CLOCK_CTL8_R    (*((volatile UBase_t*) (CLOCK_BASE + CLOCK_CTL8_OFFSET)))

uintptr_t CLOCK__uptrBlockBaseAddress(void);

#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_HEADER_CLOCK_REGISTERPERIPHERAL_H_ */
