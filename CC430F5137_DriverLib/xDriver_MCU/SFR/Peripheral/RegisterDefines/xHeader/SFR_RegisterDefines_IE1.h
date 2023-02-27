/**
 *
 * @file SFR_RegisterDefines_IE1.h
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
 * @verbatim 22 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 22 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_IE1_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_IE1_H_

#include "xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h"

/******************************************************************************************
 ************************************ 1 IE1 *********************************************
 ******************************************************************************************/
/*-----------*/
#define SFR_IE1_R_WDTIE_BIT ((UBase_t) 0U)

#define SFR_IE1_WDTIE_MASK ((UBase_t) 0x01U)
#define SFR_IE1_WDTIE_DIS ((UBase_t) 0x00U)
#define SFR_IE1_WDTIE_ENA ((UBase_t) 0x01U)

#define SFR_IE1_R_WDTIE_MASK (SFR_IE1_WDTIE_MASK<< SFR_IE1_R_WDTIE_BIT)
#define SFR_IE1_R_WDTIE_DIS (SFR_IE1_WDTIE_DIS << SFR_IE1_R_WDTIE_BIT)
#define SFR_IE1_R_WDTIE_ENA (SFR_IE1_WDTIE_ENA << SFR_IE1_R_WDTIE_BIT)
/*-----------*/

/*-----------*/
#define SFR_IE1_R_OFIE_BIT ((UBase_t) 1U)

#define SFR_IE1_OFIE_MASK ((UBase_t) 0x01U)
#define SFR_IE1_OFIE_DIS ((UBase_t) 0x00U)
#define SFR_IE1_OFIE_ENA ((UBase_t) 0x01U)

#define SFR_IE1_R_OFIE_MASK (SFR_IE1_OFIE_MASK<< SFR_IE1_R_OFIE_BIT)
#define SFR_IE1_R_OFIE_DIS (SFR_IE1_OFIE_DIS << SFR_IE1_R_OFIE_BIT)
#define SFR_IE1_R_OFIE_ENA (SFR_IE1_OFIE_ENA << SFR_IE1_R_OFIE_BIT)
/*-----------*/

/*-----------*/
#define SFR_IE1_R_VMAIE_BIT ((UBase_t) 3U)

#define SFR_IE1_VMAIE_MASK ((UBase_t) 0x01U)
#define SFR_IE1_VMAIE_DIS ((UBase_t) 0x00U)
#define SFR_IE1_VMAIE_ENA ((UBase_t) 0x01U)

#define SFR_IE1_R_VMAIE_MASK (SFR_IE1_VMAIE_MASK<< SFR_IE1_R_VMAIE_BIT)
#define SFR_IE1_R_VMAIE_DIS (SFR_IE1_VMAIE_DIS << SFR_IE1_R_VMAIE_BIT)
#define SFR_IE1_R_VMAIE_ENA (SFR_IE1_VMAIE_ENA << SFR_IE1_R_VMAIE_BIT)
/*-----------*/

/*-----------*/
#define SFR_IE1_R_NMIIE_BIT ((UBase_t) 4U)

#define SFR_IE1_NMIIE_MASK ((UBase_t) 0x01U)
#define SFR_IE1_NMIIE_DIS ((UBase_t) 0x00U)
#define SFR_IE1_NMIIE_ENA ((UBase_t) 0x01U)

#define SFR_IE1_R_NMIIE_MASK (SFR_IE1_NMIIE_MASK<< SFR_IE1_R_NMIIE_BIT)
#define SFR_IE1_R_NMIIE_DIS (SFR_IE1_NMIIE_DIS << SFR_IE1_R_NMIIE_BIT)
#define SFR_IE1_R_NMIIE_ENA (SFR_IE1_NMIIE_ENA << SFR_IE1_R_NMIIE_BIT)
/*-----------*/

/*-----------*/
#define SFR_IE1_R_ACCVIE_BIT ((UBase_t) 5U)

#define SFR_IE1_ACCVIE_MASK ((UBase_t) 0x01U)
#define SFR_IE1_ACCVIE_DIS ((UBase_t) 0x00U)
#define SFR_IE1_ACCVIE_ENA ((UBase_t) 0x01U)

#define SFR_IE1_R_ACCVIE_MASK (SFR_IE1_ACCVIE_MASK<< SFR_IE1_R_ACCVIE_BIT)
#define SFR_IE1_R_ACCVIE_DIS (SFR_IE1_ACCVIE_DIS << SFR_IE1_R_ACCVIE_BIT)
#define SFR_IE1_R_ACCVIE_ENA (SFR_IE1_ACCVIE_ENA << SFR_IE1_R_ACCVIE_BIT)
/*-----------*/

/*-----------*/
#define SFR_IE1_R_JMBINIE_BIT ((UBase_t) 6U)

#define SFR_IE1_JMBINIE_MASK ((UBase_t) 0x01U)
#define SFR_IE1_JMBINIE_DIS ((UBase_t) 0x00U)
#define SFR_IE1_JMBINIE_ENA ((UBase_t) 0x01U)

#define SFR_IE1_R_JMBINIE_MASK (SFR_IE1_JMBINIE_MASK<< SFR_IE1_R_JMBINIE_BIT)
#define SFR_IE1_R_JMBINIE_DIS (SFR_IE1_JMBINIE_DIS << SFR_IE1_R_JMBINIE_BIT)
#define SFR_IE1_R_JMBINIE_ENA (SFR_IE1_JMBINIE_ENA << SFR_IE1_R_JMBINIE_BIT)
/*-----------*/

/*-----------*/
#define SFR_IE1_R_JMBOUTIE_BIT ((UBase_t) 7U)

#define SFR_IE1_JMBOUTIE_MASK ((UBase_t) 0x01U)
#define SFR_IE1_JMBOUTIE_DIS ((UBase_t) 0x00U)
#define SFR_IE1_JMBOUTIE_ENA ((UBase_t) 0x01U)

#define SFR_IE1_R_JMBOUTIE_MASK (SFR_IE1_JMBOUTIE_MASK<< SFR_IE1_R_JMBOUTIE_BIT)
#define SFR_IE1_R_JMBOUTIE_DIS (SFR_IE1_JMBOUTIE_DIS << SFR_IE1_R_JMBOUTIE_BIT)
#define SFR_IE1_R_JMBOUTIE_ENA (SFR_IE1_JMBOUTIE_ENA << SFR_IE1_R_JMBOUTIE_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_SFR_PERIPHERAL_REGISTERDEFINES_XHEADER_SFR_REGISTERDEFINES_IE1_H_ */
