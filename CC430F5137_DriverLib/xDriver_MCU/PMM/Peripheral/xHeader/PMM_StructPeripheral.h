/**
 *
 * @file PMM_StructPeripheral.h
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

#ifndef XDRIVER_MCU_PMM_PERIPHERAL_XHEADER_PMM_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_PMM_PERIPHERAL_XHEADER_PMM_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/PMM/Peripheral/xHeader/PMM_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL0;
        PMM_CTL0_t CTL0_Bit;
    };
    union
    {
        volatile UBase_t CTL1;
        PMM_CTL1_t CTL1_Bit;
    };
    union
    {
        volatile UBase_t SVSM_HCTL;
        SVSM_HCTL_t SVSM_HCTL_Bit;
        SV_HCTL_t SV_HCTL_Bit;
        SVS_HCTL_t SVS_HCTL_Bit;
        SVM_HCTL_t SVM_HCTL_Bit;
    };
    union
    {
        volatile UBase_t SVSM_LCTL;
        SVSM_LCTL_t SVSM_LCTL_Bit;
        SV_LCTL_t SV_LCTL_Bit;
        SVS_LCTL_t SVS_LCTL_Bit;
        SVM_LCTL_t SVM_LCTL_Bit;
    };
    union
    {
        volatile UBase_t IFG;
        PMM_IFG_t IFG_Bit;
    };
    union
    {
        volatile UBase_t IE;
        PMM_IE_t IE_Bit;
    };
    union
    {
        volatile UBase_t PM5CTL0;
        PMM_PM5CTL0_t PM5CTL0_Bit;
    };
}PMM_t;

#endif /* XDRIVER_MCU_PMM_PERIPHERAL_XHEADER_PMM_STRUCTPERIPHERAL_H_ */
