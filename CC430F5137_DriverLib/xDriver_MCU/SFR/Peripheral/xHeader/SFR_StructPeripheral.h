/**
 *
 * @file SFR_StructPeripheral.h
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

#ifndef XDRIVER_MCU_SFR_PERIPHERAL_XHEADER_SFR_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_SFR_PERIPHERAL_XHEADER_SFR_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/SFR/Peripheral/xHeader/SFR_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t IE1;
        SFR_IE1_t IE1_Bit;
    };
    union
    {
        volatile UBase_t IFG1;
        SFR_IFG1_t IFG1_Bit;
    };
    union
    {
        volatile UBase_t RPCR;
        SFR_RPCR_t RPCR_Bit;
    };
}SFR_t;

#endif /* XDRIVER_MCU_SFR_PERIPHERAL_XHEADER_SFR_STRUCTPERIPHERAL_H_ */
