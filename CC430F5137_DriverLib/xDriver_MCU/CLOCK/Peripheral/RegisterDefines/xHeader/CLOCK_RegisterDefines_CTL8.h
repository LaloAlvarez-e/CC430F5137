/**
 *
 * @file CLOCK_RegisterDefines_CTL8.h
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
 * @verbatim 23 mar. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 23 mar. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL8_H_
#define XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL8_H_

#include "xDriver_MCU/CLOCK/Peripheral/xHeader/CLOCK_Enum.h"

/******************************************************************************************
 ************************************ 1 CTL8 *********************************************
 ******************************************************************************************/

/*-----------*/
#define CLOCK_CTL8_R_ACLK_REQ_BIT ((UBase_t) 0U)

#define CLOCK_CTL8_ACLK_REQ_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL8_ACLK_REQ_DIS ((UBase_t) 0x00U)
#define CLOCK_CTL8_ACLK_REQ_ENA ((UBase_t) 0x01U)

#define CLOCK_CTL8_R_ACLK_REQ_MASK (CLOCK_CTL8_ACLK_REQ_MASK<< CLOCK_CTL8_R_ACLK_REQ_BIT)
#define CLOCK_CTL8_R_ACLK_REQ_DIS (CLOCK_CTL8_ACLK_REQ_DIS << CLOCK_CTL8_R_ACLK_REQ_BIT)
#define CLOCK_CTL8_R_ACLK_REQ_ENA (CLOCK_CTL8_ACLK_REQ_ENA << CLOCK_CTL8_R_ACLK_REQ_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL8_R_MCLK_REQ_BIT ((UBase_t) 1U)

#define CLOCK_CTL8_MCLK_REQ_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL8_MCLK_REQ_DIS ((UBase_t) 0x00U)
#define CLOCK_CTL8_MCLK_REQ_ENA ((UBase_t) 0x01U)

#define CLOCK_CTL8_R_MCLK_REQ_MASK (CLOCK_CTL8_MCLK_REQ_MASK<< CLOCK_CTL8_R_MCLK_REQ_BIT)
#define CLOCK_CTL8_R_MCLK_REQ_DIS (CLOCK_CTL8_MCLK_REQ_DIS << CLOCK_CTL8_R_MCLK_REQ_BIT)
#define CLOCK_CTL8_R_MCLK_REQ_ENA (CLOCK_CTL8_MCLK_REQ_ENA << CLOCK_CTL8_R_MCLK_REQ_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL8_R_SMCLK_REQ_BIT ((UBase_t) 2U)

#define CLOCK_CTL8_SMCLK_REQ_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL8_SMCLK_REQ_DIS ((UBase_t) 0x00U)
#define CLOCK_CTL8_SMCLK_REQ_ENA ((UBase_t) 0x01U)

#define CLOCK_CTL8_R_SMCLK_REQ_MASK (CLOCK_CTL8_SMCLK_REQ_MASK<< CLOCK_CTL8_R_SMCLK_REQ_BIT)
#define CLOCK_CTL8_R_SMCLK_REQ_DIS (CLOCK_CTL8_SMCLK_REQ_DIS << CLOCK_CTL8_R_SMCLK_REQ_BIT)
#define CLOCK_CTL8_R_SMCLK_REQ_ENA (CLOCK_CTL8_SMCLK_REQ_ENA << CLOCK_CTL8_R_SMCLK_REQ_BIT)
/*-----------*/

/*-----------*/
#define CLOCK_CTL8_R_MODOSC_REQ_BIT ((UBase_t) 3U)

#define CLOCK_CTL8_MODOSC_REQ_MASK ((UBase_t) 0x01U)
#define CLOCK_CTL8_MODOSC_REQ_DIS ((UBase_t) 0x00U)
#define CLOCK_CTL8_MODOSC_REQ_ENA ((UBase_t) 0x01U)

#define CLOCK_CTL8_R_MODOSC_REQ_MASK (CLOCK_CTL8_MODOSC_REQ_MASK<< CLOCK_CTL8_R_MODOSC_REQ_BIT)
#define CLOCK_CTL8_R_MODOSC_REQ_DIS (CLOCK_CTL8_MODOSC_REQ_DIS << CLOCK_CTL8_R_MODOSC_REQ_BIT)
#define CLOCK_CTL8_R_MODOSC_REQ_ENA (CLOCK_CTL8_MODOSC_REQ_ENA << CLOCK_CTL8_R_MODOSC_REQ_BIT)
/*-----------*/




#endif /* XDRIVER_MCU_CLOCK_PERIPHERAL_REGISTERDEFINES_XHEADER_CLOCK_REGISTERDEFINES_CTL8_H_ */
