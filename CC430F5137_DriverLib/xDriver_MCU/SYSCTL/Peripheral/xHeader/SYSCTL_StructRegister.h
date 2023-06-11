/**
 *
 * @file SYSCTL_StructRegister.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_STRUCTREGISTER_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_STRUCTREGISTER_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_Enum.h>

typedef volatile struct
{
    volatile UBase_t RIVECT :1;
    const UBase_t reserved :1;
    volatile UBase_t PMMPE :1;
    const UBase_t reserved1:1;
    volatile const UBase_t BSLIND :1;
    volatile UBase_t JTAGPIN :1;
    const UBase_t reserved2:10;
}SYSCTL_CTL_t;

typedef volatile struct
{
    volatile UBase_t BSLSIZE :2;
    volatile UBase_t BSLR :1;
    const UBase_t reserved :11;
    volatile UBase_t BSLOFF :1;
    volatile UBase_t BSLPE :1;
}SYSCTL_BSLC_t;

typedef volatile struct
{
    volatile UBase_t JMB_IN0FG :1;
    volatile UBase_t JMB_IN1FG :1;
    volatile const UBase_t JMB_OUT0FG :1;
    volatile const UBase_t JMB_OUT1FG :1;
    volatile UBase_t JMBM0DE :1;
    const UBase_t reserved :1;
    volatile UBase_t JMB_CLR0OFF :1;
    volatile UBase_t JMB_CLR1OFF :1;
    const UBase_t reserved1:8;
}SYSCTL_JMBC_t;

typedef volatile struct
{
    volatile const UBase_t MSGLO :8;
    volatile const UBase_t MSGHI :8;
}SYSCTL_JMBI0_t;

typedef volatile struct
{
    volatile const UBase_t MSGLO :8;
    volatile const UBase_t MSGHI :8;
}SYSCTL_JMBI1_t;

typedef volatile struct
{
    volatile UBase_t MSGLO :8;
    volatile UBase_t MSGHI :8;
}SYSCTL_JMBO0_t;

typedef volatile struct
{
    volatile UBase_t MSGLO :8;
    volatile UBase_t MSGHI :8;
}SYSCTL_JMBO1_t;

typedef volatile struct
{
    volatile UBase_t UNVEC :16;
}SYSCTL_UNIV_t;

typedef volatile struct
{
    volatile UBase_t SNVEC :16;
}SYSCTL_SNIV_t;

typedef volatile struct
{
    volatile UBase_t RSTVEC :16;
}SYSCTL_RSTIV_t;

typedef volatile struct
{
    volatile UBase_t BERRIV :16;
}SYSCTL_BERRIV_t;

#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_HEADER_SYSCTL_STRUCTREGISTER_H_ */
