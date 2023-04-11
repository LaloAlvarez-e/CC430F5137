/**
 *
 * @file DMA_RegisterPeripheral.h
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

#ifndef DMA_PERIPHERAL_REGISTERPERIPHERAL_DMA_REGISTERPERIPHERAL_H_
#define DMA_PERIPHERAL_REGISTERPERIPHERAL_DMA_REGISTERPERIPHERAL_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>
#include <xDriver_MCU/DMA/Peripheral/RegisterPeripheral/xHeader/DMA_RegisterPeripheral_CH0.h>
#include <xDriver_MCU/DMA/Peripheral/RegisterPeripheral/xHeader/DMA_RegisterPeripheral_CH1.h>
#include <xDriver_MCU/DMA/Peripheral/RegisterPeripheral/xHeader/DMA_RegisterPeripheral_CH2.h>

#define DMA ((DMA_t*) DMA_BASE_)

/******************************************************************************************
 ************************************ 1 TRIGGER0 *********************************************
 ******************************************************************************************/
#define DMA_CH0_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH0_TRIGGER_OFFSET))
#define DMA_CH0_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH0_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 2 TRIGGER1 *********************************************
 ******************************************************************************************/
#define DMA_CH1_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH1_TRIGGER_OFFSET))
#define DMA_CH1_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH1_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 3 TRIGGER2 *********************************************
 ******************************************************************************************/
#define DMA_CH2_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH2_TRIGGER_OFFSET))
#define DMA_CH2_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH2_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 4 TRIGGER3 *********************************************
 ******************************************************************************************/
#define DMA_CH3_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH3_TRIGGER_OFFSET))
#define DMA_CH3_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH3_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 5 TRIGGER4 *********************************************
 ******************************************************************************************/
#define DMA_CH4_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH4_TRIGGER_OFFSET))
#define DMA_CH4_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH4_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 6 TRIGGER5 *********************************************
 ******************************************************************************************/
#define DMA_CH5_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH5_TRIGGER_OFFSET))
#define DMA_CH5_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH5_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 7 TRIGGER6 *********************************************
 ******************************************************************************************/
#define DMA_CH6_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH6_TRIGGER_OFFSET))
#define DMA_CH6_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH6_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 8 TRIGGER7 *********************************************
 ******************************************************************************************/
#define DMA_CH7_TRIGGER_R  (*(volatile uint8_t*) (DMA_BASE_ + DMA_CH7_TRIGGER_OFFSET))
#define DMA_CH7_TRIGGER    ((DMA_TRIGGER_t*) (DMA_BASE_ + DMA_CH7_TRIGGER_OFFSET))

/******************************************************************************************
 ************************************ 9 CTL *********************************************
 ******************************************************************************************/
#define DMA_CTL_R  (*(volatile UBase_t*) (DMA_BASE_ + DMA_CTL_OFFSET))
#define DMA_CTL    ((DMA_CTL_t*) (DMA_BASE_ + DMA_CTL_OFFSET))



/******************************************************************************************
 ************************************ 1 CTL0 *********************************************
 ******************************************************************************************/
#define DMA_CTL0_R  (*(volatile UBase_t*) (DMA_BASE_ + DMA_CTL0_OFFSET))
#define DMA_CTL0    ((DMA_CTL0_t*) (DMA_BASE_ + DMA_CTL0_OFFSET))

/******************************************************************************************
 ************************************ 2 CTL1 *********************************************
 ******************************************************************************************/
#define DMA_CTL1_R  (*(volatile UBase_t*) (DMA_BASE_ + DMA_CTL1_OFFSET))
#define DMA_CTL1    ((DMA_CTL1_t*) (DMA_BASE_ + DMA_CTL1_OFFSET))

/******************************************************************************************
 ************************************ 3 CTL2 *********************************************
 ******************************************************************************************/
#define DMA_CTL2_R  (*(volatile UBase_t*) (DMA_BASE_ + DMA_CTL2_OFFSET))
#define DMA_CTL2    ((DMA_CTL2_t*) (DMA_BASE_ + DMA_CTL2_OFFSET))

/******************************************************************************************
 ************************************ 4 CTL3 *********************************************
 ******************************************************************************************/
#define DMA_CTL3_R  (*(volatile UBase_t*) (DMA_BASE_ + DMA_CTL3_OFFSET))
#define DMA_CTL3    ((DMA_CTL3_t*) (DMA_BASE_ + DMA_CTL3_OFFSET))

/******************************************************************************************
 ************************************ 5 CTL4 *********************************************
 ******************************************************************************************/
#define DMA_CTL4_R  (*(volatile UBase_t*) (DMA_BASE_ + DMA_CTL4_OFFSET))
#define DMA_CTL4    ((DMA_CTL4_t*) (DMA_BASE_ + DMA_CTL4_OFFSET))

/******************************************************************************************
 ************************************ 5 IV *********************************************
 ******************************************************************************************/
#define DMA_IV_R  (*(volatile UBase_t*) (DMA_BASE_ + DMA_IV_OFFSET))
#define DMA_IV    ((DMA_IV_t*) (DMA_BASE_ + DMA_IV_OFFSET))

uintptr_t DMA_CH__uptrBlockBaseAddress(DMA_nCH enChannelArg);
uintptr_t DMA__uptrBlockBaseAddress(void);

#endif /* DMA_PERIPHERAL_REGISTERPERIPHERAL_DMA_REGISTERPERIPHERAL_H_ */
