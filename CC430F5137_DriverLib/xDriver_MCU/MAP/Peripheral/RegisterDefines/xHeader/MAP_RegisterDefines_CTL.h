/**
 *
 * @file MAP_RegisterDefines_CTL.h
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

#ifndef XDRIVER_MCU_MAP_PERIPHERAL_REGISTERDEFINES_XHEADER_MAP_REGISTERDEFINES_CTL_H_
#define XDRIVER_MCU_MAP_PERIPHERAL_REGISTERDEFINES_XHEADER_MAP_REGISTERDEFINES_CTL_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_Enum.h>

/******************************************************************************************
 ************************************ 2 CTL *********************************************
 ******************************************************************************************/
/*-----------*/
#define MAP_CTL_R_LOCKED_BIT ((UBase_t) 0U)

#define MAP_CTL_LOCKED_MASK ((UBase_t) 0x0001U)
#define MAP_CTL_LOCKED_LOCKED ((UBase_t) 0x0000U)
#define MAP_CTL_LOCKED_ONCE ((UBase_t) 0x0001U)

#define MAP_CTL_R_LOCKED_MASK (MAP_CTL_LOCKED_MASK << MAP_CTL_R_LOCKED_BIT)
#define MAP_CTL_R_LOCKED_LOCKED (MAP_CTL_LOCKED_LOCKED << MAP_CTL_R_LOCKED_BIT)
#define MAP_CTL_R_LOCKED_ONCE (MAP_CTL_LOCKED_ONCE << MAP_CTL_R_LOCKED_BIT)
/*-----------*/

/*-----------*/
#define MAP_CTL_R_RECFG_BIT ((UBase_t) 1U)

#define MAP_CTL_RECFG_MASK ((UBase_t) 0x0001U)
#define MAP_CTL_RECFG_ONCE ((UBase_t) 0x0000U)
#define MAP_CTL_RECFG_ENA ((UBase_t) 0x0001U)

#define MAP_CTL_R_RECFG_MASK (MAP_CTL_RECFG_MASK << MAP_CTL_R_RECFG_BIT)
#define MAP_CTL_R_RECFG_ONCE (MAP_CTL_RECFG_ONCE << MAP_CTL_R_RECFG_BIT)
#define MAP_CTL_R_RECFG_ENA (MAP_CTL_RECFG_ENA << MAP_CTL_R_RECFG_BIT)
/*-----------*/



#endif /* XDRIVER_MCU_MAP_PERIPHERAL_REGISTERDEFINES_XHEADER_MAP_REGISTERDEFINES_CTL_H_ */
