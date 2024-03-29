/**
 *
 * @file TIMERA_RegisterDefines_CTL.h
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
 * @verbatim 9 abr. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 abr. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef DRIVERLIB_TIMERA_PERIPHERAL_REGISTERDEFINES_HEADER_TIMERA_REGISTERDEFINES_CTL_H_
#define DRIVERLIB_TIMERA_PERIPHERAL_REGISTERDEFINES_HEADER_TIMERA_REGISTERDEFINES_CTL_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h>

/******************************************************************************************
 ************************************ 1 CTL *********************************************
 ******************************************************************************************/
/*-----------*/
#define TIMERA_CTL_R_IFG_BIT ((UBase_t) 0U)

#define TIMERA_CTL_IFG_MASK ((UBase_t) 0x01U)
#define TIMERA_CTL_IFG_NOOCCUR ((UBase_t) 0x00U)
#define TIMERA_CTL_IFG_OCCUR ((UBase_t) 0x01U)

#define TIMERA_CTL_R_IFG_MASK (TIMERA_CTL_IFG_MASK << TIMERA_CTL_R_IFG_BIT)
#define TIMERA_CTL_R_IFG_NOOCCUR (TIMERA_CTL_IFG_NOOCCUR << TIMERA_CTL_R_IFG_BIT)
#define TIMERA_CTL_R_IFG_OCCUR (TIMERA_CTL_IFG_OCCUR << TIMERA_CTL_R_IFG_BIT)
/*-----------*/

/*-----------*/
#define TIMERA_CTL_R_IE_BIT ((UBase_t) 1U)

#define TIMERA_CTL_IE_MASK ((UBase_t) 0x01U)
#define TIMERA_CTL_IE_DIS ((UBase_t) 0x00U)
#define TIMERA_CTL_IE_ENA ((UBase_t) 0x01U)

#define TIMERA_CTL_R_IE_MASK (TIMERA_CTL_IE_MASK << TIMERA_CTL_R_IE_BIT)
#define TIMERA_CTL_R_IE_DIS (TIMERA_CTL_IE_DIS << TIMERA_CTL_R_IE_BIT)
#define TIMERA_CTL_R_IE_ENA (TIMERA_CTL_IE_ENA << TIMERA_CTL_R_IE_BIT)
/*-----------*/

/*-----------*/
#define TIMERA_CTL_R_CLR_BIT ((UBase_t) 2U)

#define TIMERA_CTL_CLR_MASK ((UBase_t) 0x01U)
#define TIMERA_CTL_CLR_NA ((UBase_t) 0x00U)
#define TIMERA_CTL_CLR_CLEAR ((UBase_t) 0x01U)

#define TIMERA_CTL_R_CLR_MASK (TIMERA_CTL_CLR_MASK << TIMERA_CTL_R_CLR_BIT)
#define TIMERA_CTL_R_CLR_NA (TIMERA_CTL_CLR_NA << TIMERA_CTL_R_CLR_BIT)
#define TIMERA_CTL_R_CLR_CLEAR (TIMERA_CTL_CLR_CLEAR << TIMERA_CTL_R_CLR_BIT)
/*-----------*/

/*-----------*/
#define TIMERA_CTL_R_MC_BIT ((UBase_t) 4U)

#define TIMERA_CTL_MC_MASK ((UBase_t) 0x03U)
#define TIMERA_CTL_MC_STOP ((UBase_t) 0x00U)
#define TIMERA_CTL_MC_UP ((UBase_t) 0x01U)
#define TIMERA_CTL_MC_CONTINUOS ((UBase_t) 0x02U)
#define TIMERA_CTL_MC_UP_DOWN ((UBase_t) 0x03U)

#define TIMERA_CTL_R_MC_MASK (TIMERA_CTL_MC_MASK << TIMERA_CTL_R_MC_BIT)
#define TIMERA_CTL_R_MC_STOP (TIMERA_CTL_MC_STOP << TIMERA_CTL_R_MC_BIT)
#define TIMERA_CTL_R_MC_UP (TIMERA_CTL_MC_UP << TIMERA_CTL_R_MC_BIT)
#define TIMERA_CTL_R_MC_CONTINUOS (TIMERA_CTL_MC_CONTINUOS << TIMERA_CTL_R_MC_BIT)
#define TIMERA_CTL_R_MC_UP_DOWN (TIMERA_CTL_MC_UP_DOWN << TIMERA_CTL_R_MC_BIT)
/*-----------*/

/*-----------*/
#define TIMERA_CTL_R_ID_BIT ((UBase_t) 6U)

#define TIMERA_CTL_ID_MASK ((UBase_t) 0x03U)
#define TIMERA_CTL_ID_1 ((UBase_t) 0x00U)
#define TIMERA_CTL_ID_2 ((UBase_t) 0x01U)
#define TIMERA_CTL_ID_4 ((UBase_t) 0x02U)
#define TIMERA_CTL_ID_8 ((UBase_t) 0x03U)

#define TIMERA_CTL_R_ID_MASK (TIMERA_CTL_ID_MASK << TIMERA_CTL_R_ID_BIT)
#define TIMERA_CTL_R_ID_1 (TIMERA_CTL_ID_1 << TIMERA_CTL_R_ID_BIT)
#define TIMERA_CTL_R_ID_2 (TIMERA_CTL_ID_2 << TIMERA_CTL_R_ID_BIT)
#define TIMERA_CTL_R_ID_4 (TIMERA_CTL_ID_4 << TIMERA_CTL_R_ID_BIT)
#define TIMERA_CTL_R_ID_8 (TIMERA_CTL_ID_8 << TIMERA_CTL_R_ID_BIT)
/*-----------*/

/*-----------*/
#define TIMERA_CTL_R_SSEL_BIT ((UBase_t) 8U)

#define TIMERA_CTL_SSEL_MASK ((UBase_t) 0x03U)
#define TIMERA_CTL_SSEL_TACLK ((UBase_t) 0x00U)
#define TIMERA_CTL_SSEL_ACLK ((UBase_t) 0x01U)
#define TIMERA_CTL_SSEL_SMCLK ((UBase_t) 0x02U)
#define TIMERA_CTL_SSEL_INCLK ((UBase_t) 0x03U)

#define TIMERA_CTL_R_SSEL_MASK (TIMERA_CTL_SSEL_MASK << TIMERA_CTL_R_SSEL_BIT)
#define TIMERA_CTL_R_SSEL_TACLK (TIMERA_CTL_SSEL_TACLK << TIMERA_CTL_R_SSEL_BIT)
#define TIMERA_CTL_R_SSEL_ACLK (TIMERA_CTL_SSEL_ACLK << TIMERA_CTL_R_SSEL_BIT)
#define TIMERA_CTL_R_SSEL_SMCLK (TIMERA_CTL_SSEL_SMCLK << TIMERA_CTL_R_SSEL_BIT)
#define TIMERA_CTL_R_SSEL_INCLK (TIMERA_CTL_SSEL_INCLK << TIMERA_CTL_R_SSEL_BIT)
/*-----------*/

#endif /* DRIVERLIB_TIMERA_PERIPHERAL_REGISTERDEFINES_HEADER_TIMERA_REGISTERDEFINES_CTL_H_ */
