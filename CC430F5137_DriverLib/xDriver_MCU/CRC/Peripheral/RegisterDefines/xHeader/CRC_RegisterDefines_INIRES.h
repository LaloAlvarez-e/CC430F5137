/**
 *
 * @file CRC_RegisterDefines_INIRES.h
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

#ifndef XDRIVER_MCU_CRC_PERIPHERAL_REGISTERDEFINES_XHEADER_CRC_REGISTERDEFINES_INIRES_H_
#define XDRIVER_MCU_CRC_PERIPHERAL_REGISTERDEFINES_XHEADER_CRC_REGISTERDEFINES_INIRES_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_Enum.h>

/******************************************************************************************
 ************************************ 2 INIRES *********************************************
 ******************************************************************************************/
/*-----------*/
#define CRC_INIRES_R_INIRES_BIT ((UBase_t) 0U)

#define CRC_INIRES_INIRES_MASK ((UBase_t) 0xFFFFU)

#define CRC_INIRES_R_INIRES_MASK (CRC_INIRES_INIRES_MASK << CRC_INIRES_R_INIRES_BIT)
/*-----------*/

/*-----------*/
#define CRC_INI_R_INIT_BIT ((UBase_t) 0U)

#define CRC_INI_INIT_MASK ((UBase_t) 0xFFFFU)

#define CRC_INI_R_INIT_MASK (CRC_INI_INIT_MASK << CRC_INI_R_INIT_BIT)
/*-----------*/

/*-----------*/
#define CRC_RES_R_RESULT_BIT ((UBase_t) 0U)

#define CRC_RES_RESULT_MASK ((UBase_t) 0xFFFFU)

#define CRC_RES_R_RESULT_MASK (CRC_RES_RESULT_MASK << CRC_RES_R_RESULT_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_CRC_PERIPHERAL_REGISTERDEFINES_XHEADER_CRC_REGISTERDEFINES_INIRES_H_ */
