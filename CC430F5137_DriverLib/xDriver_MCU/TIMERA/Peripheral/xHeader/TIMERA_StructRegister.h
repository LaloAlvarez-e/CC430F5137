/**
 *
 * @file TIMERA_StructRegister.h
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

#ifndef TIMERA_PERIPHERAL_HEADER_TIMERA_STRUCTREGISTER_H_
#define TIMERA_PERIPHERAL_HEADER_TIMERA_STRUCTREGISTER_H_

#include <xDriver_MCU/TIMERA/Peripheral/xHeader/TIMERA_Enum.h>

typedef volatile struct
{
    volatile UBase_t IFG : 1;
    volatile UBase_t IE : 1;
    volatile UBase_t CLR : 1;
    volatile const UBase_t reserved1 : 1;
    volatile UBase_t MC : 2;
    volatile UBase_t ID : 2;
    volatile UBase_t SSEL : 2;
    volatile const UBase_t reserved2 : 6;
}TIMERA_CTL_t;

typedef volatile struct
{
    volatile UBase_t COUNT : 16;
}TIMERA_COUNT_t;

typedef volatile struct
{
    volatile UBase_t IFG : 1;
    volatile UBase_t COV : 1;
    volatile UBase_t OUT : 1;
    volatile UBase_t CCI : 1;
    volatile UBase_t IE : 1;
    volatile UBase_t OUTMOD : 3;
    volatile UBase_t CAP : 1;
    volatile const UBase_t reserved1 : 1;
    volatile UBase_t SCCI : 1;
    volatile UBase_t SCS : 1;
    volatile UBase_t CCIS : 2;
    volatile UBase_t CM : 2;
}TIMERA_CC_CTL_t;

typedef volatile struct
{
    volatile UBase_t COUNT : 16;
}TIMERA_CC_COUNT_t;

typedef volatile struct
{
    volatile UBase_t IV : 16;
}TIMERA_IV_t;

typedef volatile struct
{
    volatile UBase_t IDEX : 3;
    volatile const UBase_t reserved1 : 15;
}TIMERA_EX0_t;

#endif /* TIMERA_PERIPHERAL_HEADER_TIMERA_STRUCTREGISTER_H_ */
