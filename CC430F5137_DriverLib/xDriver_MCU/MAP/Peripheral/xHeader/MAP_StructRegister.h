/**
 *
 * @file MAP_StructRegister.h
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

#ifndef XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_STRUCTREGISTER_H_
#define XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_STRUCTREGISTER_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_Enum.h>

typedef volatile struct
{
    volatile unsigned int KEY: 16;
}MAP_KEYID_t;


typedef volatile struct
{
    volatile const unsigned int LOCKED: 1;
    volatile unsigned int RECFG: 1;
    const unsigned int reserved: 14;
}MAP_CTL_t;

typedef volatile struct
{
    volatile unsigned char FUNCTION : 8;
}MAP_PIN_t;

#endif /* XDRIVER_MCU_MAP_PERIPHERAL_HEADER_MAP_STRUCTREGISTER_H_ */
