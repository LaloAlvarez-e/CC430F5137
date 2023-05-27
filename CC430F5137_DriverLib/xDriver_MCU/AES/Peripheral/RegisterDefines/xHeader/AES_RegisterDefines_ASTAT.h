/**
 *
 * @file AES_RegisterDefines_ASTAT.h
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
 * @verbatim 9 abr. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 abr. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ASTAT_H_
#define XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ASTAT_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

/******************************************************************************************
 ************************************ 2 ASTAT *********************************************
 ******************************************************************************************/
/*-----------*/
#define AES_ASTAT_R_BUSY_BIT ((UBase_t) 0U)

#define AES_ASTAT_BUSY_MASK ((UBase_t) 0x0001U)
#define AES_ASTAT_BUSY_READY ((UBase_t) 0x0000U)
#define AES_ASTAT_BUSY_BUSY ((UBase_t) 0x0001U)

#define AES_ASTAT_R_BUSY_MASK (AES_ASTAT_BUSY_MASK << AES_ASTAT_R_BUSY_BIT)
#define AES_ASTAT_R_BUSY_READY (AES_ASTAT_BUSY_READY << AES_ASTAT_R_BUSY_BIT)
#define AES_ASTAT_R_BUSY_BUSY (AES_ASTAT_BUSY_BUSY << AES_ASTAT_R_BUSY_BIT)
/*-----------*/

/*-----------*/
#define AES_ASTAT_R_KEYWR_BIT ((UBase_t) 1U)

#define AES_ASTAT_KEYWR_MASK ((UBase_t) 0x0001U)
#define AES_ASTAT_KEYWR_MISSING ((UBase_t) 0x0000U)
#define AES_ASTAT_KEYWR_COMPLETED ((UBase_t) 0x0001U)

#define AES_ASTAT_R_KEYWR_MASK (AES_ASTAT_KEYWR_MASK << AES_ASTAT_R_KEYWR_BIT)
#define AES_ASTAT_R_KEYWR_MISSING (AES_ASTAT_KEYWR_MISSING << AES_ASTAT_R_KEYWR_BIT)
#define AES_ASTAT_R_KEYWR_COMPLETED (AES_ASTAT_KEYWR_COMPLETED << AES_ASTAT_R_KEYWR_BIT)
/*-----------*/

/*-----------*/
#define AES_ASTAT_R_DINWR_BIT ((UBase_t) 2U)

#define AES_ASTAT_DINWR_MASK ((UBase_t) 0x0001U)
#define AES_ASTAT_DINWR_MISSING ((UBase_t) 0x0000U)
#define AES_ASTAT_DINWR_COMPLETED ((UBase_t) 0x0001U)

#define AES_ASTAT_R_DINWR_MASK (AES_ASTAT_DINWR_MASK << AES_ASTAT_R_DINWR_BIT)
#define AES_ASTAT_R_DINWR_MISSING (AES_ASTAT_DINWR_MISSING << AES_ASTAT_R_DINWR_BIT)
#define AES_ASTAT_R_DINWR_COMPLETED (AES_ASTAT_DINWR_COMPLETED << AES_ASTAT_R_DINWR_BIT)
/*-----------*/

/*-----------*/
#define AES_ASTAT_R_DOUTRD_BIT ((UBase_t) 3U)

#define AES_ASTAT_DOUTRD_MASK ((UBase_t) 0x0001U)
#define AES_ASTAT_DOUTRD_MISSING ((UBase_t) 0x0000U)
#define AES_ASTAT_DOUTRD_COMPLETED ((UBase_t) 0x0001U)

#define AES_ASTAT_R_DOUTRD_MASK (AES_ASTAT_DOUTRD_MASK << AES_ASTAT_R_DOUTRD_BIT)
#define AES_ASTAT_R_DOUTRD_MISSING (AES_ASTAT_DOUTRD_MISSING << AES_ASTAT_R_DOUTRD_BIT)
#define AES_ASTAT_R_DOUTRD_COMPLETED (AES_ASTAT_DOUTRD_COMPLETED << AES_ASTAT_R_DOUTRD_BIT)
/*-----------*/

/*-----------*/
#define AES_ASTAT_R_KEYCNT_BIT ((UBase_t) 4U)

#define AES_ASTAT_KEYCNT_MASK ((UBase_t) 0x000FU)

#define AES_ASTAT_R_KEYCNT_MASK (AES_ASTAT_KEYCNT_MASK << AES_ASTAT_R_KEYCNT_BIT)
/*-----------*/

/*-----------*/
#define AES_ASTAT_R_DINCNT_BIT ((UBase_t) 8U)

#define AES_ASTAT_DINCNT_MASK ((UBase_t) 0x000FU)

#define AES_ASTAT_R_DINCNT_MASK (AES_ASTAT_DINCNT_MASK << AES_ASTAT_R_DINCNT_BIT)
/*-----------*/

/*-----------*/
#define AES_ASTAT_R_DOUTCNT_BIT ((UBase_t) 12U)

#define AES_ASTAT_DOUTCNT_MASK ((UBase_t) 0x000FU)

#define AES_ASTAT_R_DOUTCNT_MASK (AES_ASTAT_DOUTCNT_MASK << AES_ASTAT_R_DOUTCNT_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ASTAT_H_ */
