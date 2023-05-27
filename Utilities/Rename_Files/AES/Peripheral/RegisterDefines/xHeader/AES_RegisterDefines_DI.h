/**
 *
 * @file AES_RegisterDefines_DI.h
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
 * @verbatim 6 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 6 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_DI_H_
#define XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_DI_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>

/******************************************************************************************
 ************************************ 1 DI *********************************************
 ******************************************************************************************/
/*-----------*/
#define AES_DI_R_DATA_BIT ((UBase_t) 0U)

#define AES_DI_DATA_MASK ((UBase_t) 0xFFFFU)

#define AES_DI_R_DATA_MASK (AES_DI_DATA_MASK << AES_DI_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_DI16_R_DATA_BIT ((UBase_t) 0U)

#define AES_DI16_DATA_MASK ((UBase_t) 0xFFFFU)

#define AES_DI16_R_DATA_MASK (AES_DI16_DATA_MASK << AES_DI16_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_DI_LOW_R_DATA_BIT ((UBase_t) 0U)

#define AES_DI_LOW_DATA_MASK ((UBase_t) 0xFFU)

#define AES_DI_LOW_R_DATA_MASK (AES_DI_LOW_DATA_MASK << AES_DI_LOW_R_DATA_BIT)
/*-----------*/

/*-----------*/
#define AES_DI8_R_DATA_BIT ((UBase_t) 0U)

#define AES_DI8_DATA_MASK ((UBase_t) 0xFFU)

#define AES_DI8_R_DATA_MASK (AES_DI8_DATA_MASK << AES_DI8_R_DATA_BIT)
/*-----------*/

#endif /* XDRIVER_MCU_AES_PERIPHERAL_REGISTERDEFINES_XHEADER_AES_REGISTERDEFINES_DI_H_ */
