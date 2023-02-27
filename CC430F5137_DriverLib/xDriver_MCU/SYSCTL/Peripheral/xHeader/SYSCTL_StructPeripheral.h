/**
 *
 * @file SYSCTL_StructPeripheral.h
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

#ifndef XDRIVER_MCU_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/SYSCTL/Peripheral/xHeader/SYSCTL_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL;
        SYSCTL_CTL_t CTL_Bit;
    };
    union
    {
        volatile UBase_t BSLC;
        SYSCTL_BSLC_t BSLC_Bit;
    };
    const UBase_t reserved[1U];
    union
    {
        volatile UBase_t JMBC;
        SYSCTL_JMBC_t JMBC_Bit;
    };
    union
    {
        volatile const UBase_t JMBI0;
        SYSCTL_JMBI0_t JMBI0_Bit;
    };
    union
    {
        volatile const UBase_t JMBI1;
        SYSCTL_JMBI1_t JMBI1_Bit;
    };
    union
    {
        volatile UBase_t JMBO0;
        SYSCTL_JMBO0_t JMBO0_Bit;
    };
    union
    {
        volatile UBase_t JMBO1;
        SYSCTL_JMBO1_t JMBO1_Bit;
    };
    const UBase_t reserved1[4U];
    union
    {
        volatile UBase_t BERRIV;
        SYSCTL_BERRIV_t BERRIV_Bit;
    };
    union
    {
        volatile UBase_t UNIV;
        SYSCTL_UNIV_t UNIV_Bit;
    };
    union
    {
        volatile UBase_t SNIV;
        SYSCTL_SNIV_t SNIV_Bit;
    };
    union
    {
        volatile UBase_t RSTIV;
        SYSCTL_RSTIV_t RSTIV_Bit;
    };
}SYSCTL_t;




#endif /* XDRIVER_MCU_SYSCTL_PERIPHERAL_XHEADER_SYSCTL_STRUCTPERIPHERAL_H_ */
