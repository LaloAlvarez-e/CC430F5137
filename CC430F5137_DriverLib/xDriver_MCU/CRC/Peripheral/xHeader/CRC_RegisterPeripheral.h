/**
 *
 * @file CRC_RegisterPeripheral.h
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

#ifndef CRC_PERIPHERAL_REGISTERPERIPHERAL_CRC_REGISTERPERIPHERAL_H_
#define CRC_PERIPHERAL_REGISTERPERIPHERAL_CRC_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_RegisterAddress.h>
#include <xDriver_MCU/CRC/Peripheral/xHeader/CRC_StructPeripheral.h>

#define CRC ((CRC_t*) CRC_BASE)

/******************************************************************************************
 ************************************ 1 DI *********************************************
 ******************************************************************************************/
#define CRC_DI_R  (*(volatile UBase_t*) (CRC_BASE + CRC_DI_OFFSET))
#define CRC_DI_LOW_R    (*(volatile uint8_t*) (CRC_BASE + CRC_DI_LOW_OFFSET))
#define CRC_DI16_R  (*(volatile UBase_t*) (CRC_BASE + CRC_DI16_OFFSET))
#define CRC_DI8_R    (*(volatile uint8_t*) (CRC_BASE + CRC_DI8_OFFSET))

#define CRC_DI    ((CRC_DI_t*) (CRC_BASE + CRC_DI_OFFSET))
#define CRC_DI_LOW    ((CRC_DI8_t*) (CRC_BASE + CRC_DI_LOW_OFFSET))
#define CRC_DI16    ((CRC_DI16_t*) (CRC_BASE + CRC_DI16_OFFSET))
#define CRC_DI8    ((CRC_DI8_t*) (CRC_BASE + CRC_DI8_OFFSET))

/******************************************************************************************
 ************************************ 2 INIRES *********************************************
 ******************************************************************************************/
#define CRC_INIRES_R  (*(volatile UBase_t*) (CRC_BASE + CRC_INIRES_OFFSET))
#define CRC_INI_R  (*(volatile UBase_t*) (CRC_BASE + CRC_INI_OFFSET))
#define CRC_RES_R  (*(volatile const UBase_t*) (CRC_BASE + CRC_RES_OFFSET))
#define CRC_INIRES    ((CRC_INIRES_t*) (CRC_BASE + CRC_INIRES_OFFSET))
#define CRC_INI    ((CRC_INI_t*) (CRC_BASE + CRC_INI_OFFSET))
#define CRC_RES    ((CRC_RES_t*) (CRC_BASE + CRC_RES_OFFSET))

uintptr_t CRC__uptrBlockBaseAddress(void);

#endif /* CRC_PERIPHERAL_REGISTERPERIPHERAL_CRC_REGISTERPERIPHERAL_H_ */
