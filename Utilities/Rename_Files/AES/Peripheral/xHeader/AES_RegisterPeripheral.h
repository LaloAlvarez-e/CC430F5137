/**
 *
 * @file AES_RegisterPeripheral.h
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

#ifndef AES_PERIPHERAL_REGISTERPERIPHERAL_AES_REGISTERPERIPHERAL_H_
#define AES_PERIPHERAL_REGISTERPERIPHERAL_AES_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_RegisterAddress.h>
#include <xDriver_MCU/AES/Peripheral/xHeader/AES_StructPeripheral.h>

#define AES ((AES_t*) AES_BASE)

/******************************************************************************************
 ************************************ 1 DI *********************************************
 ******************************************************************************************/
#define AES_DI_R  (*(volatile UBase_t*) (AES_BASE + AES_DI_OFFSET))
#define AES_DI_LOW_R    (*(volatile uint8_t*) (AES_BASE + AES_DI_LOW_OFFSET))
#define AES_DI16_R  (*(volatile UBase_t*) (AES_BASE + AES_DI16_OFFSET))
#define AES_DI8_R    (*(volatile uint8_t*) (AES_BASE + AES_DI8_OFFSET))

#define AES_DI    ((AES_DI_t*) (AES_BASE + AES_DI_OFFSET))
#define AES_DI_LOW    ((AES_DI8_t*) (AES_BASE + AES_DI_LOW_OFFSET))
#define AES_DI16    ((AES_DI16_t*) (AES_BASE + AES_DI16_OFFSET))
#define AES_DI8    ((AES_DI8_t*) (AES_BASE + AES_DI8_OFFSET))

/******************************************************************************************
 ************************************ 2 INIRES *********************************************
 ******************************************************************************************/
#define AES_INIRES_R  (*(volatile UBase_t*) (AES_BASE + AES_INIRES_OFFSET))
#define AES_INI_R  (*(volatile UBase_t*) (AES_BASE + AES_INI_OFFSET))
#define AES_RES_R  (*(volatile const UBase_t*) (AES_BASE + AES_RES_OFFSET))
#define AES_INIRES    ((AES_INIRES_t*) (AES_BASE + AES_INIRES_OFFSET))
#define AES_INI    ((AES_INI_t*) (AES_BASE + AES_INI_OFFSET))
#define AES_RES    ((AES_RES_t*) (AES_BASE + AES_RES_OFFSET))

uintptr_t AES__uptrBlockBaseAddress(void);

#endif /* AES_PERIPHERAL_REGISTERPERIPHERAL_AES_REGISTERPERIPHERAL_H_ */
