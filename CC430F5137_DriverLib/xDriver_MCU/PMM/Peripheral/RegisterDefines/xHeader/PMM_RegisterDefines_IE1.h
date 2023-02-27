/**
 *
 * @file PMM_RegisterDefines_IE1.h
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

#ifndef XDRIVER_MCU_PMM_PERIPHERAL_REGISTERDEFINES_XHEADER_PMM_REGISTERDEFINES_IE1_H_
#define XDRIVER_MCU_PMM_PERIPHERAL_REGISTERDEFINES_XHEADER_PMM_REGISTERDEFINES_IE1_H_

#include "xDriver_MCU/PMM/Peripheral/xHeader/PMM_Enum.h"

/******************************************************************************************
 ************************************ 1 IE1 *********************************************
 ******************************************************************************************/
/*-----------*/
#define PMM_IE1_R_WDTIE_BIT ((UBase_t) 0U)

#define PMM_IE1_WDTIE_MASK ((UBase_t) 0x01U)
#define PMM_IE1_WDTIE_DIS ((UBase_t) 0x00U)
#define PMM_IE1_WDTIE_ENA ((UBase_t) 0x01U)

#define PMM_IE1_R_WDTIE_MASK (PMM_IE1_WDTIE_MASK<< PMM_IE1_R_WDTIE_BIT)
#define PMM_IE1_R_WDTIE_DIS (PMM_IE1_WDTIE_DIS << PMM_IE1_R_WDTIE_BIT)
#define PMM_IE1_R_WDTIE_ENA (PMM_IE1_WDTIE_ENA << PMM_IE1_R_WDTIE_BIT)
/*-----------*/

/*-----------*/
#define PMM_IE1_R_OFIE_BIT ((UBase_t) 1U)

#define PMM_IE1_OFIE_MASK ((UBase_t) 0x01U)
#define PMM_IE1_OFIE_DIS ((UBase_t) 0x00U)
#define PMM_IE1_OFIE_ENA ((UBase_t) 0x01U)

#define PMM_IE1_R_OFIE_MASK (PMM_IE1_OFIE_MASK<< PMM_IE1_R_OFIE_BIT)
#define PMM_IE1_R_OFIE_DIS (PMM_IE1_OFIE_DIS << PMM_IE1_R_OFIE_BIT)
#define PMM_IE1_R_OFIE_ENA (PMM_IE1_OFIE_ENA << PMM_IE1_R_OFIE_BIT)
/*-----------*/

/*-----------*/
#define PMM_IE1_R_VMAIE_BIT ((UBase_t) 3U)

#define PMM_IE1_VMAIE_MASK ((UBase_t) 0x01U)
#define PMM_IE1_VMAIE_DIS ((UBase_t) 0x00U)
#define PMM_IE1_VMAIE_ENA ((UBase_t) 0x01U)

#define PMM_IE1_R_VMAIE_MASK (PMM_IE1_VMAIE_MASK<< PMM_IE1_R_VMAIE_BIT)
#define PMM_IE1_R_VMAIE_DIS (PMM_IE1_VMAIE_DIS << PMM_IE1_R_VMAIE_BIT)
#define PMM_IE1_R_VMAIE_ENA (PMM_IE1_VMAIE_ENA << PMM_IE1_R_VMAIE_BIT)
/*-----------*/

/*-----------*/
#define PMM_IE1_R_NMIIE_BIT ((UBase_t) 4U)

#define PMM_IE1_NMIIE_MASK ((UBase_t) 0x01U)
#define PMM_IE1_NMIIE_DIS ((UBase_t) 0x00U)
#define PMM_IE1_NMIIE_ENA ((UBase_t) 0x01U)

#define PMM_IE1_R_NMIIE_MASK (PMM_IE1_NMIIE_MASK<< PMM_IE1_R_NMIIE_BIT)
#define PMM_IE1_R_NMIIE_DIS (PMM_IE1_NMIIE_DIS << PMM_IE1_R_NMIIE_BIT)
#define PMM_IE1_R_NMIIE_ENA (PMM_IE1_NMIIE_ENA << PMM_IE1_R_NMIIE_BIT)
/*-----------*/

/*-----------*/
#define PMM_IE1_R_ACCVIE_BIT ((UBase_t) 5U)

#define PMM_IE1_ACCVIE_MASK ((UBase_t) 0x01U)
#define PMM_IE1_ACCVIE_DIS ((UBase_t) 0x00U)
#define PMM_IE1_ACCVIE_ENA ((UBase_t) 0x01U)

#define PMM_IE1_R_ACCVIE_MASK (PMM_IE1_ACCVIE_MASK<< PMM_IE1_R_ACCVIE_BIT)
#define PMM_IE1_R_ACCVIE_DIS (PMM_IE1_ACCVIE_DIS << PMM_IE1_R_ACCVIE_BIT)
#define PMM_IE1_R_ACCVIE_ENA (PMM_IE1_ACCVIE_ENA << PMM_IE1_R_ACCVIE_BIT)
/*-----------*/

/*-----------*/
#define PMM_IE1_R_JMBINIE_BIT ((UBase_t) 6U)

#define PMM_IE1_JMBINIE_MASK ((UBase_t) 0x01U)
#define PMM_IE1_JMBINIE_DIS ((UBase_t) 0x00U)
#define PMM_IE1_JMBINIE_ENA ((UBase_t) 0x01U)

#define PMM_IE1_R_JMBINIE_MASK (PMM_IE1_JMBINIE_MASK<< PMM_IE1_R_JMBINIE_BIT)
#define PMM_IE1_R_JMBINIE_DIS (PMM_IE1_JMBINIE_DIS << PMM_IE1_R_JMBINIE_BIT)
#define PMM_IE1_R_JMBINIE_ENA (PMM_IE1_JMBINIE_ENA << PMM_IE1_R_JMBINIE_BIT)
/*-----------*/

/*-----------*/
#define PMM_IE1_R_JMBOUTIE_BIT ((UBase_t) 7U)

#define PMM_IE1_JMBOUTIE_MASK ((UBase_t) 0x01U)
#define PMM_IE1_JMBOUTIE_DIS ((UBase_t) 0x00U)
#define PMM_IE1_JMBOUTIE_ENA ((UBase_t) 0x01U)

#define PMM_IE1_R_JMBOUTIE_MASK (PMM_IE1_JMBOUTIE_MASK<< PMM_IE1_R_JMBOUTIE_BIT)
#define PMM_IE1_R_JMBOUTIE_DIS (PMM_IE1_JMBOUTIE_DIS << PMM_IE1_R_JMBOUTIE_BIT)
#define PMM_IE1_R_JMBOUTIE_ENA (PMM_IE1_JMBOUTIE_ENA << PMM_IE1_R_JMBOUTIE_BIT)
/*-----------*/


#endif /* XDRIVER_MCU_PMM_PERIPHERAL_REGISTERDEFINES_XHEADER_PMM_REGISTERDEFINES_IE1_H_ */
