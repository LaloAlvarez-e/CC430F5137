/**
 *
 * @file WDT_RegisterPeripheral.h
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
 * @verbatim 5 feb. 2022 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 5 feb. 2022     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef WDT_PERIPHERAL_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_H_
#define WDT_PERIPHERAL_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_RegisterAddress.h>
#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_StructPeripheral.h>


#define WDT ((WDT_t*) WDT_BASE)

/******************************************************************************************
 ************************************ 1 IE1 *********************************************
 ******************************************************************************************/
#define WDT_IE1_R  (*(volatile UBase_t*) (WDT_BASE + WDT_IE1_OFFSET))
#define WDT_IE1    ((WDT_IE1_t*) (WDT_BASE + WDT_IE1_OFFSET))

/******************************************************************************************
 ************************************ 2 IFG1 *********************************************
 ******************************************************************************************/
#define WDT_IFG1_R (*(volatile UBase_t*) (WDT_BASE + WDT_IFG1_OFFSET))
#define WDT_IFG1 ((WDT_IFG1_t*) (WDT_BASE + WDT_IFG1_OFFSET))

/******************************************************************************************
 ************************************ 3 CTL *********************************************
 ******************************************************************************************/
#define WDT_CTL_R (*(volatile UBase_t*) (WDT_BASE + WDT_CTL_OFFSET))
#define WDT_CTL ((WDT_CTL_t*) (WDT_BASE + WDT_CTL_OFFSET))


uintptr_t WDT__uptrBlockBaseAddress(WDT_nMODULE enModuleArg);

#endif /* WDT_PERIPHERAL_REGISTERPERIPHERAL_WDT_REGISTERPERIPHERAL_H_ */
