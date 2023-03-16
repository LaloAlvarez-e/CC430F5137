/**
 *
 * @file RAM_StructRegister.h
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

#ifndef RAM_PERIPHERAL_HEADER_RAM_STRUCTREGISTER_H_
#define RAM_PERIPHERAL_HEADER_RAM_STRUCTREGISTER_H_

#include <xDriver_MCU/RAM/Peripheral/xHeader/RAM_Enum.h>

typedef volatile struct
{
    volatile UBase_t SECTOR0_OFF : 1;
    volatile UBase_t SECTOR1_OFF : 1;
    volatile UBase_t SECTOR2_OFF : 1;
    volatile UBase_t SECTOR3_OFF : 1;
    volatile UBase_t SECTOR4_OFF : 1;
    volatile UBase_t SECTOR5_OFF : 1;
    volatile UBase_t SECTOR6_OFF : 1;
    volatile UBase_t SECTOR7_OFF : 1;
    volatile UBase_t SECTOR8_OFF : 1;
    volatile UBase_t KEY : 8;
}RAM_CTL0_t;

#endif /* RAM_PERIPHERAL_HEADER_RAM_STRUCTREGISTER_H_ */
