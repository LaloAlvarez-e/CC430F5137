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

#define AES ((AES_t*) AES_BASE_)

/******************************************************************************************
 ************************************ 1 CTL0 *********************************************
 ******************************************************************************************/
#define AES_ACTL0_R  (*(volatile UBase_t*) (AES_BASE_ + AES_ACTL0_OFFSET))
#define AES_ACTL0    ((AES_ACTL0_t*) (AES_BASE_ + AES_ACTL0_OFFSET))

/******************************************************************************************
 ************************************ 2 ASTAT *********************************************
 ******************************************************************************************/
#define AES_ASTAT_R  (*(volatile UBase_t*) (AES_BASE_ + AES_ASTAT_OFFSET))
#define AES_ASTAT    ((AES_ASTAT_t*) (AES_BASE_ + AES_ASTAT_OFFSET))

/******************************************************************************************
 ************************************ 3 AKEY *********************************************
 ******************************************************************************************/
#define AES_AKEY_R  (*(volatile UBase_t*) (AES_BASE_ + AES_AKEY_OFFSET))
#define AES_AKEY_LOW_R    (*(volatile uint8_t*) (AES_BASE_ + AES_AKEY_LOW_OFFSET))
#define AES_AKEY16_R  (*(volatile UBase_t*) (AES_BASE_ + AES_AKEY16_OFFSET))
#define AES_AKEY8_R    (*(volatile uint8_t*) (AES_BASE_ + AES_AKEY8_OFFSET))

#define AES_AKEY    ((AES_AKEY_t*) (AES_BASE_ + AES_AKEY_OFFSET))
#define AES_AKEY_LOW    ((AES_AKEY8_t*) (AES_BASE_ + AES_AKEY_LOW_OFFSET))
#define AES_AKEY16    ((AES_AKEY16_t*) (AES_BASE_ + AES_AKEY16_OFFSET))
#define AES_AKEY8    ((AES_AKEY8_t*) (AES_BASE_ + AES_AKEY8_OFFSET))


/******************************************************************************************
 ************************************ 4 ADIN *********************************************
 ******************************************************************************************/
#define AES_ADIN_R  (*(volatile UBase_t*) (AES_BASE_ + AES_ADIN_OFFSET))
#define AES_ADIN_LOW_R    (*(volatile uint8_t*) (AES_BASE_ + AES_ADIN_LOW_OFFSET))
#define AES_ADIN16_R  (*(volatile UBase_t*) (AES_BASE_ + AES_ADIN16_OFFSET))
#define AES_ADIN8_R    (*(volatile uint8_t*) (AES_BASE_ + AES_ADIN8_OFFSET))

#define AES_ADIN    ((AES_ADIN_t*) (AES_BASE_ + AES_ADIN_OFFSET))
#define AES_ADIN_LOW    ((AES_ADIN8_t*) (AES_BASE_ + AES_ADIN_LOW_OFFSET))
#define AES_ADIN16    ((AES_ADIN16_t*) (AES_BASE_ + AES_ADIN16_OFFSET))
#define AES_ADIN8    ((AES_ADIN8_t*) (AES_BASE_ + AES_ADIN8_OFFSET))


/******************************************************************************************
 ************************************ 5 ADOUT *********************************************
 ******************************************************************************************/
#define AES_ADOUT_R  (*(volatile UBase_t*) (AES_BASE_ + AES_ADOUT_OFFSET))
#define AES_ADOUT_LOW_R    (*(volatile uint8_t*) (AES_BASE_ + AES_ADOUT_LOW_OFFSET))
#define AES_ADOUT16_R  (*(volatile UBase_t*) (AES_BASE_ + AES_ADOUT16_OFFSET))
#define AES_ADOUT8_R    (*(volatile uint8_t*) (AES_BASE_ + AES_ADOUT8_OFFSET))

#define AES_ADOUT    ((AES_ADOUT_t*) (AES_BASE_ + AES_ADOUT_OFFSET))
#define AES_ADOUT_LOW    ((AES_ADOUT8_t*) (AES_BASE_ + AES_ADOUT_LOW_OFFSET))
#define AES_ADOUT16    ((AES_ADOUT16_t*) (AES_BASE_ + AES_ADOUT16_OFFSET))
#define AES_ADOUT8    ((AES_ADOUT8_t*) (AES_BASE_ + AES_ADOUT8_OFFSET))


uintptr_t AES__uptrBlockBaseAddress(void);

#endif /* AES_PERIPHERAL_REGISTERPERIPHERAL_AES_REGISTERPERIPHERAL_H_ */
