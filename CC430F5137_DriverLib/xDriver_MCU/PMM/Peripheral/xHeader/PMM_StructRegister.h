/**
 *
 * @file PMM_StructRegister.h
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
 * @verbatim 25 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 25 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */

#ifndef XDRIVER_MCU_PMM_PERIPHERAL_XHEADER_PMM_STRUCTREGISTER_H_
#define XDRIVER_MCU_PMM_PERIPHERAL_XHEADER_PMM_STRUCTREGISTER_H_

#include <xDriver_MCU/PMM/Peripheral/xHeader/PMM_Enum.h>

typedef volatile struct
{
    volatile UBase_t COREV :2;
    volatile UBase_t SWBOR :1;
    volatile UBase_t SWPOR :1;
    volatile UBase_t REGOFF :1;
    const UBase_t reserved:2;
    volatile UBase_t HPMRE :1;
    volatile UBase_t PW :8;
}PMM_CTL0_t;

typedef volatile struct
{
    const UBase_t reserved:16;
}PMM_CTL1_t;

typedef volatile struct
{
    volatile UBase_t RRL :3;
    volatile UBase_t DLYST :1;
    volatile UBase_t S_MD :1;
    const UBase_t reserved:1;
    volatile UBase_t EVM :1;
    volatile UBase_t ACE :1;
    volatile UBase_t S_RVL :2;
    volatile UBase_t S_EN :1;
    volatile UBase_t S_FP :1;
    volatile UBase_t M_OVPE :1;
    const UBase_t reserved2:1;
    volatile UBase_t M_EN :1;
    volatile UBase_t M_FP :1;
}SVSM_HCTL_t;

typedef volatile struct
{
    volatile UBase_t RRL :3;
    volatile UBase_t DLYST :1;
    const UBase_t reserved:2;
    volatile UBase_t EVM :1;
    volatile UBase_t ACE :1;
    const UBase_t reserved2:8;
}SV_HCTL_t;

typedef volatile struct
{
    const UBase_t reserved:4;
    volatile UBase_t MD :1;
    const UBase_t reserved2:3;
    volatile UBase_t RVL :2;
    volatile UBase_t EN :1;
    volatile UBase_t FP :1;
    const UBase_t reserved3:4;
}SVS_HCTL_t;


typedef volatile struct
{
    const UBase_t reserved:12;
    volatile UBase_t OVPE :1;
    const UBase_t reserved2:1;
    volatile UBase_t EN :1;
    volatile UBase_t FP :1;
}SVM_HCTL_t;

typedef volatile struct
{
    volatile UBase_t RRL :3;
    volatile UBase_t DLYST :1;
    volatile UBase_t S_MD :1;
    const UBase_t reserved:1;
    volatile UBase_t EVM :1;
    volatile UBase_t ACE :1;
    volatile UBase_t S_RVL :2;
    volatile UBase_t S_EN :1;
    volatile UBase_t S_FP :1;
    volatile UBase_t M_OVPE :1;
    const UBase_t reserved2:1;
    volatile UBase_t M_EN :1;
    volatile UBase_t M_FP :1;
}SVSM_LCTL_t;

typedef volatile struct
{
    volatile UBase_t RRL :3;
    volatile UBase_t DLYST :1;
    const UBase_t reserved:2;
    volatile UBase_t EVM :1;
    volatile UBase_t ACE :1;
    const UBase_t reserved2:8;
}SV_LCTL_t;

typedef volatile struct
{
    const UBase_t reserved:4;
    volatile UBase_t MD :1;
    const UBase_t reserved2:3;
    volatile UBase_t RVL :2;
    volatile UBase_t EN :1;
    volatile UBase_t FP :1;
    const UBase_t reserved3:4;
}SVS_LCTL_t;

typedef volatile struct
{
    const UBase_t reserved:12;
    volatile UBase_t OVPE :1;
    const UBase_t reserved2:1;
    volatile UBase_t EN :1;
    volatile UBase_t FP :1;
}SVM_LCTL_t;

typedef volatile struct
{
    volatile UBase_t SVLDLYIFG :1;
    volatile UBase_t SVML_IFG :1;
    volatile UBase_t SVMLVLR_IFG :1;
    const UBase_t reserved:1;
    volatile UBase_t SVHDLYIFG :1;
    volatile UBase_t SVMH_IFG :1;
    volatile UBase_t SVMHVLR_IFG :1;
    const UBase_t reserved2:1;
    volatile UBase_t BORIFG :1;
    volatile UBase_t RSTIFG :1;
    volatile UBase_t PORIFG :1;
    const UBase_t reserved3:1;
    volatile UBase_t SVSH_IFG :1;
    volatile UBase_t SVSL_IFG :1;
    const UBase_t reserved4:1;
    volatile UBase_t LPM5IFG :1;
}PMM_IFG_t;

typedef volatile struct
{
    volatile UBase_t SVLDLYIE :1;
    volatile UBase_t SVML_IE :1;
    volatile UBase_t SVMLVLR_IE :1;
    const UBase_t reserved:1;
    volatile UBase_t SVHDLYIE :1;
    volatile UBase_t SVMH_IE :1;
    volatile UBase_t SVMHVLR_IE :1;
    const UBase_t reserved2:1;
    volatile UBase_t SVS_LPE :1;
    volatile UBase_t SVM_LVLRPE :1;
    const UBase_t reserved3:2;
    volatile UBase_t SVS_HPE :1;
    volatile UBase_t SVM_HVLRPE :1;
    const UBase_t reserved4:2;
}PMM_IE_t;

typedef volatile struct
{
    volatile UBase_t LOCKLPM5:1;
    const UBase_t reserved:15;
}PMM_PM5CTL0_t;

#endif /* XDRIVER_MCU_PMM_PERIPHERAL_XHEADER_PMM_STRUCTREGISTER_H_ */
