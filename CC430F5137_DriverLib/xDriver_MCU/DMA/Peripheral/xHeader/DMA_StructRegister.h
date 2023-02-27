/**
 *
 * @file DMA_StructRegister.h
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

#ifndef DMA_PERIPHERAL_HEADER_DMA_STRUCTREGISTER_H_
#define DMA_PERIPHERAL_HEADER_DMA_STRUCTREGISTER_H_

#include <xDriver_MCU/DMA/Peripheral/xHeader/DMA_Enum.h>

typedef volatile struct
{
    volatile uint8_t TSEL : 5;
    volatile const uint8_t reserved : 3;
}DMA_TRIGGER_t;

typedef volatile struct
{
    volatile UBase_t ENNMI : 1;
    volatile UBase_t ROUNDROBIN : 1;
    volatile UBase_t DMARMWDIS : 1;
    volatile const UBase_t reserved1 : 13;
}DMA_CTL_t;

typedef volatile struct
{
    volatile UBase_t CH0TSEL : 5;
    volatile const UBase_t reserved0 : 3;
    volatile UBase_t CH1TSEL : 5;
    volatile const UBase_t reserved1 : 3;
}DMA_CTL0_t;

typedef volatile struct
{
    volatile UBase_t CH2TSEL : 5;
    volatile const UBase_t reserved0 : 3;
    volatile UBase_t CH3TSEL : 5;
    volatile const UBase_t reserved1 : 3;
}DMA_CTL1_t;

typedef volatile struct
{
    volatile UBase_t CH4TSEL : 5;
    volatile const UBase_t reserved0 : 3;
    volatile UBase_t CH5TSEL : 5;
    volatile const UBase_t reserved1 : 3;
}DMA_CTL2_t;

typedef volatile struct
{
    volatile UBase_t CH6TSEL : 5;
    volatile const UBase_t reserved0 : 3;
    volatile UBase_t CH7TSEL : 5;
    volatile const UBase_t reserved1 : 3;
}DMA_CTL3_t;

typedef volatile struct
{
    volatile UBase_t ENNMI : 1;
    volatile UBase_t ROUNDROBIN : 1;
    volatile UBase_t DMARMWDIS : 1;
    volatile const UBase_t reserved1 : 13;
}DMA_CTL4_t;

typedef volatile struct
{
    volatile UBase_t REQ : 1;
    volatile UBase_t ABORT : 1;
    volatile UBase_t IE : 1;
    volatile UBase_t IFG : 1;
    volatile UBase_t EN : 1;
    volatile UBase_t LEVEL : 1;
    volatile UBase_t SRCBYTE : 1;
    volatile UBase_t DSTBYTE : 1;
    volatile UBase_t SRCINCR : 2;
    volatile UBase_t DSTINCR : 2;
    volatile UBase_t DT : 3;
    volatile const UBase_t reserved1 : 1;
}DMA_CH_CTL_t;

typedef volatile struct
{
    volatile UBase_t IV : 16;
}DMA_IV_t;

typedef volatile struct
{
    volatile uint32_t SA : 32;
}DMA_CH_SA_t;

typedef volatile struct
{
    volatile uint32_t DA : 32;
}DMA_CH_DA_t;

typedef volatile struct
{
    volatile UBase_t SZ : 16;
}DMA_CH_SZ_t;

#endif /* DMA_PERIPHERAL_HEADER_DMA_STRUCTREGISTER_H_ */
