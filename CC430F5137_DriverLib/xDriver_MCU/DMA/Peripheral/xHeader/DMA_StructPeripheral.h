/**
 *
 * @file DMA_StructPeripheral.h
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

#ifndef DMA_PERIPHERAL_HEADER_DMA_STRUCTPERIPHERAL_H_
#define DMA_PERIPHERAL_HEADER_DMA_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile UBase_t CTL;
        DMA_CH_CTL_t CTL_bits;
    };
    union
    {
        volatile uintptr_t SA;
        DMA_CH_SA_t SA_bits;
    };
    union
    {
        volatile uintptr_t DA;
        DMA_CH_DA_t DA_bits;
    };
    union
    {
        volatile UBase_t SZ;
        DMA_CH_SZ_t SZ_bits;
    };
    const UBase_t reserved0[2U];
}DMA_CH_t;

typedef volatile struct
{
    union
    {
        volatile uint8_t TRIGGER[8U];
        DMA_TRIGGER_t TRIGGER_bits[8U];
    };
    union
    {
        volatile UBase_t CTL;
        DMA_CTL_t CTL_bits;
    };
    union
    {
        volatile UBase_t IV;
        DMA_IV_t IV_bits;
    };
    const UBase_t reserved0[2U];
    DMA_CH_t CH[8UL];
}DMA_t;

#endif /* DMA_PERIPHERAL_HEADER_DMA_STRUCTPERIPHERAL_H_ */
