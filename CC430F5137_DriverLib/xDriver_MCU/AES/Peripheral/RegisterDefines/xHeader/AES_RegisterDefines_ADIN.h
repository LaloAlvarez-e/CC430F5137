/**
 *
 * @file AES_RegisterDefines_ADIN.h
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

#ifndef XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ADIN_H_
#define XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ADIN_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

/******************************************************************************************
 ************************************ 1 ADIN *********************************************
 ******************************************************************************************/
/*-----------*/
#define AES_ADIN_R_DATA_BIT ((UBase_t) 0U)

#define AES_ADIN_DATA_MASK ((UBase_t) 0xFFFFU)

#define AES_ADIN_R_DATA_MASK (AES_ADIN_DATA_MASK << AES_ADIN_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_ADIN16_R_DATA_BIT ((UBase_t) 0U)

#define AES_ADIN16_DATA_MASK ((UBase_t) 0xFFFFU)

#define AES_ADIN16_R_DATA_MASK (AES_ADIN16_DATA_MASK << AES_ADIN16_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_ADIN_LOW_R_DATA_BIT ((UBase_t) 0U)

#define AES_ADIN_LOW_DATA_MASK ((UBase_t) 0xFFU)

#define AES_ADIN_LOW_R_DATA_MASK (AES_ADIN_LOW_DATA_MASK << AES_ADIN_LOW_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_ADIN8_R_DATA_BIT ((UBase_t) 0U)

#define AES_ADIN8_DATA_MASK ((UBase_t) 0xFFU)

#define AES_ADIN8_R_DATA_MASK (AES_ADIN8_DATA_MASK << AES_ADIN8_R_DATA_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_ADIN_H_ */
