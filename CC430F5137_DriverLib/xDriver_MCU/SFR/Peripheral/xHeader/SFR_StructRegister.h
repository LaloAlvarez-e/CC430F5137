/**
 *
 * @file SFR_StructRegister.h
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

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_STRUCTREGISTER_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_STRUCTREGISTER_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_Enum.h>

typedef volatile struct
{
    volatile UBase_t WDTIE :1;
    volatile UBase_t OFIE :1;
    const UBase_t reserved:1;
    volatile UBase_t VMAIE :1;
    volatile UBase_t NMIIE :1;
    volatile UBase_t ACCVIE :1;
    volatile UBase_t JMBINIE :1;
    volatile UBase_t JMBOUTIE :1;
    const UBase_t reserved1:8;
}SFR_IE1_t;

typedef volatile struct
{
    volatile UBase_t WDTIFG :1;
    volatile UBase_t OFIFG :1;
    const UBase_t reserved:1;
    volatile UBase_t VMAIFG :1;
    volatile UBase_t NMIIFG :1;
    const UBase_t reserved1:1;
    volatile UBase_t JMBINIFG :1;
    volatile UBase_t JMBOUTIFG :1;
    const UBase_t reserved2:8;
}SFR_IFG1_t;

typedef volatile struct
{
    volatile UBase_t SYSNMI :1;
    volatile UBase_t SYSNMIIES :1;
    volatile UBase_t SYSRSTUP :1;
    volatile UBase_t SYSRSTRE :1;
    const UBase_t reserved:12;
}SFR_RPCR_t;

#endif /* XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_STRUCTREGISTER_H_ */
