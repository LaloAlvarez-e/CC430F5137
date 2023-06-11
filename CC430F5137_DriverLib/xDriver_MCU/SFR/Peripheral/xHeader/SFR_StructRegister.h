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
    volatile UBase_t WDT_IE :1;
    volatile UBase_t OF_IE :1;
    const UBase_t reserved:1;
    volatile UBase_t VMA_IE :1;
    volatile UBase_t NMI_IE :1;
    volatile UBase_t ACCV_IE :1;
    volatile UBase_t JMBIN_IE :1;
    volatile UBase_t JMBOUT_IE :1;
    const UBase_t reserved1:8;
}SFR_IE1_t;

typedef volatile struct
{
    volatile UBase_t WDT_IFG :1;
    volatile UBase_t OF_IFG :1;
    const UBase_t reserved:1;
    volatile UBase_t VMA_IFG :1;
    volatile UBase_t NMI_IFG :1;
    const UBase_t reserved1:1;
    volatile UBase_t JMBIN_IFG :1;
    volatile UBase_t JMBOUT_IFG :1;
    const UBase_t reserved2:8;
}SFR_IFG1_t;

typedef volatile struct
{
    volatile UBase_t SYS_NMI :1;
    volatile UBase_t SYS_NMIIES :1;
    volatile UBase_t SYS_RSTUP :1;
    volatile UBase_t SYS_RSTRE :1;
    const UBase_t reserved:12;
}SFR_RPCR_t;

#endif /* XDRIVER_MCU_SFR_PERIPHERAL_HEADER_SFR_STRUCTREGISTER_H_ */
