/**
 *
 * @file SFR_RegisterDefines_RPCR.h
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_RPCR_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_RPCR_H_

#include "xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h"

/******************************************************************************************
 ************************************ 3 RPCR *********************************************
 ******************************************************************************************/
/*-----------*/
#define SFR_RPCR_R_SYSNMI_BIT ((UBase_t) 0U)

#define SFR_RPCR_SYSNMI_MASK ((UBase_t) 0x01U)
#define SFR_RPCR_SYSNMI_RESET ((UBase_t) 0x00U)
#define SFR_RPCR_SYSNMI_NMI ((UBase_t) 0x01U)

#define SFR_RPCR_R_SYSNMI_MASK (SFR_RPCR_SYSNMI_MASK<< SFR_RPCR_R_SYSNMI_BIT)
#define SFR_RPCR_R_SYSNMI_RESET (SFR_RPCR_SYSNMI_RESET << SFR_RPCR_R_SYSNMI_BIT)
#define SFR_RPCR_R_SYSNMI_NMI (SFR_RPCR_SYSNMI_NMI << SFR_RPCR_R_SYSNMI_BIT)
/*-----------*/

/*-----------*/
#define SFR_RPCR_R_SYSNMIIES_BIT ((UBase_t) 1U)

#define SFR_RPCR_SYSNMIIES_MASK ((UBase_t) 0x01U)
#define SFR_RPCR_SYSNMIIES_RISING ((UBase_t) 0x00U)
#define SFR_RPCR_SYSNMIIES_FALLING ((UBase_t) 0x01U)

#define SFR_RPCR_R_SYSNMIIES_MASK (SFR_RPCR_SYSNMIIES_MASK<< SFR_RPCR_R_SYSNMIIES_BIT)
#define SFR_RPCR_R_SYSNMIIES_RISING (SFR_RPCR_SYSNMIIES_RISING << SFR_RPCR_R_SYSNMIIES_BIT)
#define SFR_RPCR_R_SYSNMIIES_FALLING (SFR_RPCR_SYSNMIIES_FALLING << SFR_RPCR_R_SYSNMIIES_BIT)
/*-----------*/

/*-----------*/
#define SFR_RPCR_R_SYSRSTUP_BIT ((UBase_t) 2U)

#define SFR_RPCR_SYSRSTUP_MASK ((UBase_t) 0x01U)
#define SFR_RPCR_SYSRSTUP_PULLDOWN ((UBase_t) 0x00U)
#define SFR_RPCR_SYSRSTUP_PULLUP ((UBase_t) 0x01U)

#define SFR_RPCR_R_SYSRSTUP_MASK (SFR_RPCR_SYSRSTUP_MASK<< SFR_RPCR_R_SYSRSTUP_BIT)
#define SFR_RPCR_R_SYSRSTUP_PULLDOWN (SFR_RPCR_SYSRSTUP_PULLDOWN << SFR_RPCR_R_SYSRSTUP_BIT)
#define SFR_RPCR_R_SYSRSTUP_PULLUP (SFR_RPCR_SYSRSTUP_PULLUP << SFR_RPCR_R_SYSRSTUP_BIT)
/*-----------*/

/*-----------*/
#define SFR_RPCR_R_SYSRSTRE_BIT ((UBase_t) 3U)

#define SFR_RPCR_SYSRSTRE_MASK ((UBase_t) 0x01U)
#define SFR_RPCR_SYSRSTRE_DIS ((UBase_t) 0x00U)
#define SFR_RPCR_SYSRSTRE_ENA ((UBase_t) 0x01U)

#define SFR_RPCR_R_SYSRSTRE_MASK (SFR_RPCR_SYSRSTRE_MASK<< SFR_RPCR_R_SYSRSTRE_BIT)
#define SFR_RPCR_R_SYSRSTRE_DIS (SFR_RPCR_SYSRSTRE_DIS << SFR_RPCR_R_SYSRSTRE_BIT)
#define SFR_RPCR_R_SYSRSTRE_ENA (SFR_RPCR_SYSRSTRE_ENA << SFR_RPCR_R_SYSRSTRE_BIT)
/*-----------*/



#endif /* XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_RPCR_H_ */
