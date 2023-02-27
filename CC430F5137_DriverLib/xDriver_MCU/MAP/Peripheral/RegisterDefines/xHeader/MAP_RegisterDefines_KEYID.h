/**
 *
 * @file MAP_RegisterDefines_KEYID.h
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
 * @verbatim 8 feb. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 8 feb. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_MAP_PERIPHERAL_REGISTERDEFINES_XHEADER_MAP_REGISTERDEFINES_KEYID_H_
#define XDRIVER_MCU_MAP_PERIPHERAL_REGISTERDEFINES_XHEADER_MAP_REGISTERDEFINES_KEYID_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_Enum.h>

/******************************************************************************************
 ************************************ 1 KEYID *********************************************
 ******************************************************************************************/
/*-----------*/
#define MAP_KEYID_R_KEY_BIT ((UBase_t) 0U)

#define MAP_KEYID_KEY_MASK ((UBase_t) 0xFFFFU)
#define MAP_KEYID_KEY_READ ((UBase_t) 0x096A5U)
#define MAP_KEYID_KEY_WRITE ((UBase_t) 0x02D52U)

#define MAP_KEYID_R_KEY_MASK (MAP_KEYID_KEY_MASK << MAP_KEYID_R_KEY_BIT)
#define MAP_KEYID_R_KEY_READ (MAP_KEYID_KEY_READ << MAP_KEYID_R_KEY_BIT)
#define MAP_KEYID_R_KEY_WRITE (MAP_KEYID_KEY_WRITE << MAP_KEYID_R_KEY_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_MAP_PERIPHERAL_REGISTERDEFINES_XHEADER_MAP_REGISTERDEFINES_KEYID_H_ */
