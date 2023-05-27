/**
 *
 * @file AES_RegisterDefines_AKEY.h
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

#ifndef XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_AKEY_H_
#define XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_AKEY_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

/******************************************************************************************
 ************************************ 1 AKEY *********************************************
 ******************************************************************************************/
/*-----------*/
#define AES_AKEY_R_DATA_BIT ((UBase_t) 0U)

#define AES_AKEY_DATA_MASK ((UBase_t) 0xFFFFU)

#define AES_AKEY_R_DATA_MASK (AES_AKEY_DATA_MASK << AES_AKEY_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_AKEY16_R_DATA_BIT ((UBase_t) 0U)

#define AES_AKEY16_DATA_MASK ((UBase_t) 0xFFFFU)

#define AES_AKEY16_R_DATA_MASK (AES_AKEY16_DATA_MASK << AES_AKEY16_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_AKEY_LOW_R_DATA_BIT ((UBase_t) 0U)

#define AES_AKEY_LOW_DATA_MASK ((UBase_t) 0xFFU)

#define AES_AKEY_LOW_R_DATA_MASK (AES_AKEY_LOW_DATA_MASK << AES_AKEY_LOW_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_AKEY8_R_DATA_BIT ((UBase_t) 0U)

#define AES_AKEY8_DATA_MASK ((UBase_t) 0xFFU)

#define AES_AKEY8_R_DATA_MASK (AES_AKEY8_DATA_MASK << AES_AKEY8_R_DATA_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_AKEY_H_ */
