/**
 *
 * @file WDT_StructRegister.h
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

#ifndef WDT_PERIPHERAL_HEADER_WDT_STRUCTREGISTER_H_
#define WDT_PERIPHERAL_HEADER_WDT_STRUCTREGISTER_H_

#include <xDriver_MCU/WDT/Peripheral/xHeader/WDT_Enum.h>

typedef volatile struct
{
    volatile UBase_t IS : 3;
    volatile UBase_t CNTCL : 1;
    volatile UBase_t TMSEL : 1;
    volatile UBase_t SSEL : 2;
    volatile UBase_t HOLD : 1;
    volatile UBase_t PW : 8;
}WDT_CTL_t;

typedef volatile struct
{
    volatile UBase_t IE : 1;
    const UBase_t reserved1 : 15;
}WDT_IE1_t;

typedef volatile struct
{
    volatile UBase_t IFG : 1;
    const UBase_t reserved1 : 15;
}WDT_IFG1_t;

#endif /* WDT_PERIPHERAL_HEADER_WDT_STRUCTREGISTER_H_ */
