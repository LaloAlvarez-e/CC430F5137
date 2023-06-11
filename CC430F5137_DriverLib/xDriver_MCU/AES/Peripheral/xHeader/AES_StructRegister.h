/**
 *
 * @file AES_StructRegister.h
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

#ifndef AES_PERIPHERAL_HEADER_AES_STRUCTREGISTER_H_
#define AES_PERIPHERAL_HEADER_AES_STRUCTREGISTER_H_

#include <xDriver_MCU/AES/Peripheral/xHeader/AES_Enum.h>


typedef volatile struct
{
    volatile UBase_t OP : 2;
    volatile UBase_t KL : 2;
    volatile const UBase_t reserved0: 1;
    volatile UBase_t CM : 2;
    volatile UBase_t SWRST : 1;
    volatile UBase_t RDYIFG : 1;
    volatile const UBase_t reserved1: 2;
    volatile UBase_t ERRFG : 1;
    volatile UBase_t RDYIE : 1;
    volatile const UBase_t reserved2: 2;
    volatile UBase_t CMEN : 1;
}AES_ACTL0_t;


typedef volatile struct
{
    volatile const UBase_t BUSY_ : 1;
    volatile UBase_t KEYWR : 1;
    volatile UBase_t DINWR : 1;
    volatile const UBase_t DOUTRD : 1;
    volatile const UBase_t KEYCNT : 4;
    volatile const UBase_t DINCNT : 4;
    volatile const UBase_t DOUTCNT : 4;
}AES_ASTAT_t;


typedef volatile struct
{
    volatile uint8_t AKEY : 8;
}AES_AKEY8_t;

typedef volatile struct
{
    volatile UBase_t AKEY : 16;
}AES_AKEY16_t;

typedef volatile struct
{
    volatile UBase_t AKEY : 16;
}AES_AKEY_t;


typedef volatile struct
{
    volatile uint8_t ADIN : 8;
}AES_ADIN8_t;

typedef volatile struct
{
    volatile UBase_t ADIN : 16;
}AES_ADIN16_t;

typedef volatile struct
{
    volatile UBase_t ADIN : 16;
}AES_ADIN_t;


typedef volatile struct
{
    volatile uint8_t ADOUT : 8;
}AES_ADOUT8_t;

typedef volatile struct
{
    volatile UBase_t ADOUT : 16;
}AES_ADOUT16_t;

typedef volatile struct
{
    volatile UBase_t ADOUT : 16;
}AES_ADOUT_t;

#endif /* AES_PERIPHERAL_HEADER_AES_STRUCTREGISTER_H_ */
