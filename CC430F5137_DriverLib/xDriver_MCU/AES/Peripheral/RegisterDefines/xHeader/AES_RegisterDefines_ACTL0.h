/**
 *
 * @file AES_RegisterDefines_ACTL0.h
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

#ifndef XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ACTL0_H_
#define XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ACTL0_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

/******************************************************************************************
 ************************************ 1 ACTL0 *********************************************
 ******************************************************************************************/
/*-----------*/
#define AES_ACTL0_R_OP_BIT ((UBase_t) 0U)

#define AES_ACTL0_OP_MASK ((UBase_t) 0x0003U)
#define AES_ACTL0_OP_ENCRYPTION ((UBase_t) 0x0000U)
#define AES_ACTL0_OP_DECRYPTION_ENCRYPKEY ((UBase_t) 0x0001U)
#define AES_ACTL0_OP_KEYGEN ((UBase_t) 0x0002U)
#define AES_ACTL0_OP_DECRYPTION_KEYGEN ((UBase_t) 0x0003U)

#define AES_ACTL0_R_OP_MASK (AES_ACTL0_OP_MASK << AES_ACTL0_R_OP_BIT)
#define AES_ACTL0_R_OP_ENCRYPTION (AES_ACTL0_OP_ENCRYPTION << AES_ACTL0_R_OP_BIT)
#define AES_ACTL0_R_OP_DECRYPTION_ENCRYPKEY (AES_ACTL0_OP_DECRYPTION_ENCRYPKEY << AES_ACTL0_R_OP_BIT)
#define AES_ACTL0_R_OP_KEYGEN (AES_ACTL0_OP_KEYGEN << AES_ACTL0_R_OP_BIT)
#define AES_ACTL0_R_OP_DECRYPTION_KEYGEN (AES_ACTL0_OP_DECRYPTION_KEYGEN << AES_ACTL0_R_OP_BIT)
/*-----------*/

/*-----------*/
#define AES_ACTL0_R_KL_BIT ((UBase_t) 2U)

#define AES_ACTL0_KL_MASK ((UBase_t) 0x0003U)
#define AES_ACTL0_KL_128 ((UBase_t) 0x0000U)
#define AES_ACTL0_KL_192 ((UBase_t) 0x0001U)
#define AES_ACTL0_KL_256 ((UBase_t) 0x0002U)

#define AES_ACTL0_R_KL_MASK (AES_ACTL0_KL_MASK << AES_ACTL0_R_KL_BIT)
#define AES_ACTL0_R_KL_128 (AES_ACTL0_KL_128 << AES_ACTL0_R_KL_BIT)
#define AES_ACTL0_R_KL_192 (AES_ACTL0_KL_192 << AES_ACTL0_R_KL_BIT)
#define AES_ACTL0_R_KL_256 (AES_ACTL0_KL_256 << AES_ACTL0_R_KL_BIT)
/*-----------*/

/*-----------*/
#define AES_ACTL0_R_CM_BIT ((UBase_t) 5U)

#define AES_ACTL0_CM_MASK ((UBase_t) 0x0003U)
#define AES_ACTL0_CM_ECB ((UBase_t) 0x0000U)
#define AES_ACTL0_CM_CBC ((UBase_t) 0x0001U)
#define AES_ACTL0_CM_OFB ((UBase_t) 0x0002U)
#define AES_ACTL0_CM_CFB ((UBase_t) 0x0003U)

#define AES_ACTL0_R_CM_MASK (AES_ACTL0_CM_MASK << AES_ACTL0_R_CM_BIT)
#define AES_ACTL0_R_CM_ECB (AES_ACTL0_CM_ECB << AES_ACTL0_R_CM_BIT)
#define AES_ACTL0_R_CM_CBC (AES_ACTL0_CM_CBC << AES_ACTL0_R_CM_BIT)
#define AES_ACTL0_R_CM_OFB (AES_ACTL0_CM_OFB << AES_ACTL0_R_CM_BIT)
#define AES_ACTL0_R_CM_CFB (AES_ACTL0_CM_CFB << AES_ACTL0_R_CM_BIT)
/*-----------*/

/*-----------*/
#define AES_ACTL0_R_SWRST_BIT ((UBase_t) 7U)

#define AES_ACTL0_SWRST_MASK ((UBase_t) 0x0001U)
#define AES_ACTL0_SWRST_NA ((UBase_t) 0x0000U)
#define AES_ACTL0_SWRST_RESET ((UBase_t) 0x0001U)

#define AES_ACTL0_R_SWRST_MASK (AES_ACTL0_SWRST_MASK << AES_ACTL0_R_SWRST_BIT)
#define AES_ACTL0_R_SWRST_NA (AES_ACTL0_SWRST_NA << AES_ACTL0_R_SWRST_BIT)
#define AES_ACTL0_R_SWRST_RESET (AES_ACTL0_SWRST_RESET << AES_ACTL0_R_SWRST_BIT)
/*-----------*/

/*-----------*/
#define AES_ACTL0_R_RDYIFG_BIT ((UBase_t) 8U)

#define AES_ACTL0_RDYIFG_MASK ((UBase_t) 0x0001U)
#define AES_ACTL0_RDYIFG_NOOCCUR ((UBase_t) 0x0000U)
#define AES_ACTL0_RDYIFG_OCCUR ((UBase_t) 0x0001U)

#define AES_ACTL0_R_RDYIFG_MASK (AES_ACTL0_RDYIFG_MASK << AES_ACTL0_R_RDYIFG_BIT)
#define AES_ACTL0_R_RDYIFG_NOOCCUR (AES_ACTL0_RDYIFG_NOOCCUR << AES_ACTL0_R_RDYIFG_BIT)
#define AES_ACTL0_R_RDYIFG_OCCUR (AES_ACTL0_RDYIFG_OCCUR << AES_ACTL0_R_RDYIFG_BIT)
/*-----------*/

/*-----------*/
#define AES_ACTL0_R_ERRFG_BIT ((UBase_t) 11U)

#define AES_ACTL0_ERRFG_MASK ((UBase_t) 0x0001U)
#define AES_ACTL0_ERRFG_NOOCCUR ((UBase_t) 0x0000U)
#define AES_ACTL0_ERRFG_OCCUR ((UBase_t) 0x0001U)

#define AES_ACTL0_R_ERRFG_MASK (AES_ACTL0_ERRFG_MASK << AES_ACTL0_R_ERRFG_BIT)
#define AES_ACTL0_R_ERRFG_NOOCCUR (AES_ACTL0_ERRFG_NOOCCUR << AES_ACTL0_R_ERRFG_BIT)
#define AES_ACTL0_R_ERRFG_OCCUR (AES_ACTL0_ERRFG_OCCUR << AES_ACTL0_R_ERRFG_BIT)
/*-----------*/

/*-----------*/
#define AES_ACTL0_R_RDYIE_BIT ((UBase_t) 12U)

#define AES_ACTL0_RDYIE_MASK ((UBase_t) 0x0001U)
#define AES_ACTL0_RDYIE_DIS ((UBase_t) 0x0000U)
#define AES_ACTL0_RDYIE_ENA ((UBase_t) 0x0001U)

#define AES_ACTL0_R_RDYIE_MASK (AES_ACTL0_RDYIE_MASK << AES_ACTL0_R_RDYIE_BIT)
#define AES_ACTL0_R_RDYIE_DIS (AES_ACTL0_RDYIE_DIS << AES_ACTL0_R_RDYIE_BIT)
#define AES_ACTL0_R_RDYIE_ENA (AES_ACTL0_RDYIE_ENA << AES_ACTL0_R_RDYIE_BIT)
/*-----------*/

/*-----------*/
#define AES_ACTL0_R_CMEN_BIT ((UBase_t) 15U)

#define AES_ACTL0_CMEN_MASK ((UBase_t) 0x0001U)
#define AES_ACTL0_CMEN_DIS ((UBase_t) 0x0000U)
#define AES_ACTL0_CMEN_ENA ((UBase_t) 0x0001U)

#define AES_ACTL0_R_CMEN_MASK (AES_ACTL0_CMEN_MASK << AES_ACTL0_R_CMEN_BIT)
#define AES_ACTL0_R_CMEN_DIS (AES_ACTL0_CMEN_DIS << AES_ACTL0_R_CMEN_BIT)
#define AES_ACTL0_R_CMEN_ENA (AES_ACTL0_CMEN_ENA << AES_ACTL0_R_CMEN_BIT)
/*-----------*/



#endif /* XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ACTL0_H_ */
