/**
 *
 * @file PMM_RegisterPeripheral.h
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

#ifndef XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/PMM/Peripheral/xHeader/PMM_RegisterAddress.h>
#include <xDriver_MCU/PMM/Peripheral/xHeader/PMM_StructPeripheral.h>

#define PMM    ((PMM_t*) (PMM_BASE))

/********************************************************************************************
************************************** 1 CTL0 **********************************************
********************************************************************************************/
#define PMM_CTL0    ((PMM_CTL0_t*) (PMM_BASE + PMM_CTL0_OFFSET ))
#define PMM_CTL0_R    (*((volatile UBase_t*) (PMM_BASE + PMM_CTL0_OFFSET)))

/********************************************************************************************
************************************** 2 CTL1 **********************************************
********************************************************************************************/
#define PMM_CTL1    ((PMM_CTL1_t*) (PMM_BASE + PMM_CTL1_OFFSET ))
#define PMM_CTL1_R    (*((volatile UBase_t*) (PMM_BASE + PMM_CTL1_OFFSET)))

/********************************************************************************************
************************************** 3 SVSMHCTL **********************************************
********************************************************************************************/
#define SVSM_HCTL    ((SVSM_HCTL_t*) (PMM_BASE + SVSM_HCTL_OFFSET ))
#define SVSM_HCTL_R    (*((volatile UBase_t*) (PMM_BASE + SVSM_HCTL_OFFSET)))
#define SV_HCTL    ((SV_HCTL_t*) (PMM_BASE + SV_HCTL_OFFSET ))
#define SV_HCTL_R    (*((volatile UBase_t*) (PMM_BASE + SV_HCTL_OFFSET)))
#define SVS_HCTL    ((SVS_HCTL_t*) (PMM_BASE + SVS_HCTL_OFFSET ))
#define SVS_HCTL_R    (*((volatile UBase_t*) (PMM_BASE + SVS_HCTL_OFFSET)))
#define SVM_HCTL    ((SVM_HCTL_t*) (PMM_BASE + SVM_HCTL_OFFSET ))
#define SVM_HCTL_R    (*((volatile UBase_t*) (PMM_BASE + SVM_HCTL_OFFSET)))

/********************************************************************************************
************************************** 4 SVSMLCTL **********************************************
********************************************************************************************/
#define SVSM_LCTL    ((SVSM_LCTL_t*) (PMM_BASE + SVSM_LCTL_OFFSET ))
#define SVSM_LCTL_R    (*((volatile UBase_t*) (PMM_BASE + SVSM_LCTL_OFFSET)))
#define SV_LCTL    ((SV_LCTL_t*) (PMM_BASE + SV_LCTL_OFFSET ))
#define SV_LCTL_R    (*((volatile UBase_t*) (PMM_BASE + SV_LCTL_OFFSET)))
#define SVS_LCTL    ((SVS_LCTL_t*) (PMM_BASE + SVS_LCTL_OFFSET ))
#define SVS_LCTL_R    (*((volatile UBase_t*) (PMM_BASE + SVS_LCTL_OFFSET)))
#define SVM_LCTL    ((SVM_LCTL_t*) (PMM_BASE + SVM_LCTL_OFFSET ))
#define SVM_LCTL_R    (*((volatile UBase_t*) (PMM_BASE + SVM_LCTL_OFFSET)))

/********************************************************************************************
************************************** 5 IFG **********************************************
********************************************************************************************/
#define PMM_IFG    ((PMM_IFG_t*) (PMM_BASE + PMM_IFG_OFFSET ))
#define PMM_IFG_R    (*((volatile UBase_t*) (PMM_BASE + PMM_IFG_OFFSET)))

/********************************************************************************************
************************************** 6 RIE **********************************************
********************************************************************************************/
#define PMM_RIE    ((PMM_RIE_t*) (PMM_BASE + PMM_RIE_OFFSET ))
#define PMM_RIE_R    (*((volatile UBase_t*) (PMM_BASE + PMM_RIE_OFFSET)))

/********************************************************************************************
************************************** 7 PM5CTL0 **********************************************
********************************************************************************************/
#define PMM_PM5CTL0    ((PMM_PM5CTL0_t*) (PMM_BASE + PMM_PM5CTL0_OFFSET ))
#define PMM_PM5CTL0_R    (*((volatile UBase_t*) (PMM_BASE + PMM_PM5CTL0_OFFSET)))

uintptr_t PMM__uptrBlockBaseAddress(void);

#endif /* XDRIVER_MCU_PMM_PERIPHERAL_HEADER_PMM_REGISTERPERIPHERAL_H_ */
