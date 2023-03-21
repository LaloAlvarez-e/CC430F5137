/**
 *
 * @file SYSCTL_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_RegisterAddress.h>
#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_StructPeripheral.h>

#define SYSCTL    ((SYSCTL_t*) (SYSCTL_BASE))

/********************************************************************************************
************************************** 1 CTL **********************************************
********************************************************************************************/
#define SYSCTL_CTL    ((SYSCTL_CTL_t*) (SYSCTL_BASE + SYSCTL_CTL_OFFSET ))
#define SYSCTL_CTL_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_CTL_OFFSET)))

/********************************************************************************************
************************************** 2 BSLC **********************************************
********************************************************************************************/
#define SYSCTL_BSLC    ((SYSCTL_BSLC_t*) (SYSCTL_BASE + SYSCTL_BSLC_OFFSET ))
#define SYSCTL_BSLC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_BSLC_OFFSET)))

/********************************************************************************************
************************************** 3 JMBC **********************************************
********************************************************************************************/
#define SYSCTL_JMBC    ((SYSCTL_JMBC_t*) (SYSCTL_BASE + SYSCTL_JMBC_OFFSET ))
#define SYSCTL_JMBC_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_JMBC_OFFSET)))

/********************************************************************************************
************************************** 4 JMBI0 **********************************************
********************************************************************************************/
#define SYSCTL_JMBI0    ((SYSCTL_JMBI0_t*) (SYSCTL_BASE + SYSCTL_JMBI0_OFFSET ))
#define SYSCTL_JMBI0_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_JMBI0_OFFSET)))

/********************************************************************************************
************************************** 5 JMBI1 **********************************************
********************************************************************************************/
#define SYSCTL_JMBI1    ((SYSCTL_JMBI1_t*) (SYSCTL_BASE + SYSCTL_JMBI1_OFFSET ))
#define SYSCTL_JMBI1_R    (*((volatile const UBase_t*) (SYSCTL_BASE + SYSCTL_JMBI1_OFFSET)))

/********************************************************************************************
************************************** 6 JMBO0 **********************************************
********************************************************************************************/
#define SYSCTL_JMBO0    ((SYSCTL_JMBO0_t*) (SYSCTL_BASE + SYSCTL_JMBO0_OFFSET ))
#define SYSCTL_JMBO0_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_JMBO0_OFFSET)))

/********************************************************************************************
************************************** 7 JMBO1 **********************************************
********************************************************************************************/
#define SYSCTL_JMBO1    ((SYSCTL_JMBO1_t*) (SYSCTL_BASE + SYSCTL_JMBO1_OFFSET ))
#define SYSCTL_JMBO1_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_JMBO1_OFFSET)))

/********************************************************************************************
************************************** 8 BERRIV **********************************************
********************************************************************************************/
#define SYSCTL_BERRIV    ((SYSCTL_BERRIV_t*) (SYSCTL_BASE + SYSCTL_BERRIV_OFFSET ))
#define SYSCTL_BERRIV_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_BERRIV_OFFSET)))

/********************************************************************************************
************************************** 9 UNIV **********************************************
********************************************************************************************/
#define SYSCTL_UNIV    ((SYSCTL_UNIV_t*) (SYSCTL_BASE + SYSCTL_UNIV_OFFSET ))
#define SYSCTL_UNIV_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_UNIV_OFFSET)))

/********************************************************************************************
************************************** 10 SNIV **********************************************
********************************************************************************************/
#define SYSCTL_SNIV    ((SYSCTL_SNIV_t*) (SYSCTL_BASE + SYSCTL_SNIV_OFFSET ))
#define SYSCTL_SNIV_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_SNIV_OFFSET)))

/********************************************************************************************
************************************** 11 RSTIV **********************************************
********************************************************************************************/
#define SYSCTL_RSTIV    ((SYSCTL_RSTIV_t*) (SYSCTL_BASE + SYSCTL_RSTIV_OFFSET ))
#define SYSCTL_RSTIV_R    (*((volatile UBase_t*) (SYSCTL_BASE + SYSCTL_RSTIV_OFFSET)))

uintptr_t SYSCTL__uptrBlockBaseAddress(void);

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_REGISTERPERIPHERAL_H_ */
