/**
 *
 * @file SFR_RegisterPeripheral.h
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
 * @verbatim 9 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 9 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_REGISTERPERIPHERAL_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_RegisterAddress.h>
#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_StructPeripheral.h>

#define SFR    ((SFR_t*) (SFR_BASE_))

/********************************************************************************************
************************************** 1 IE1 **********************************************
********************************************************************************************/
#define SFR_IE1    ((SFR_IE1_t*) (SFR_BASE_ + SFR_IE1_OFFSET ))
#define SFR_IE1_R    (*((volatile UBase_t*) (SFR_BASE_ + SFR_IE1_OFFSET)))

/********************************************************************************************
************************************** 2 IFG1 **********************************************
********************************************************************************************/
#define SFR_IFG1    ((SFR_IFG1_t*) (SFR_BASE_ + SFR_IFG1_OFFSET ))
#define SFR_IFG1_R    (*((volatile UBase_t*) (SFR_BASE_ + SFR_IFG1_OFFSET)))

/********************************************************************************************
************************************** 3 RPCR **********************************************
********************************************************************************************/
#define SFR_RPCR    ((SFR_RPCR_t*) (SFR_BASE_ + SFR_RPCR_OFFSET ))
#define SFR_RPCR_R    (*((volatile UBase_t*) (SFR_BASE_ + SFR_RPCR_OFFSET)))

uintptr_t SFR__uptrBlockBaseAddress(void);

#endif /* XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_REGISTERPERIPHERAL_H_ */
