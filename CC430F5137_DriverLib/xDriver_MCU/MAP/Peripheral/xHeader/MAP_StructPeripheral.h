/**
 *
 * @file MAP_StructPeripheral.h
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

#ifndef XDRIVER_MCU_MAP_PERIPHERAL_XHEADER_MAP_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_MAP_PERIPHERAL_XHEADER_MAP_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/MAP/Peripheral/xHeader/MAP_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const unsigned char PIN[8U];
        MAP_PIN_t PIN_bits[8U];
    };
}MAP_PORT_t;


typedef volatile struct
{
    union
    {
        volatile unsigned int KEYID;
        MAP_KEYID_t KEYID_bits;
    };
    union
    {
        volatile unsigned int CTL;
        MAP_CTL_t CTL_bits;
    };
    MAP_PORT_t PORTN[3U];
}MAP_t;


#endif /* XDRIVER_MCU_MAP_PERIPHERAL_XHEADER_MAP_STRUCTPERIPHERAL_H_ */
