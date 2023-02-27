/**
 *
 * @file PORT_StructPeripheral.h
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

#ifndef XDRIVER_MCU_PORT_PERIPHERAL_XHEADER_PORT_STRUCTPERIPHERAL_H_
#define XDRIVER_MCU_PORT_PERIPHERAL_XHEADER_PORT_STRUCTPERIPHERAL_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_StructRegister.h>

typedef volatile struct
{
    union
    {
        volatile const unsigned char IN;
        PORT_REG_CONST_t IN_bits;
    };
    const unsigned char reserved;
    union
    {
        volatile unsigned char OUT;
        PORT_REG_t OUT_bits;
    };
    const unsigned char reserved2;
    union
    {
        volatile unsigned char DIR;
        PORT_REG_t DIR_bits;
    };
    const unsigned char reserved3;
    union
    {
        volatile unsigned char REN;
        PORT_REG_t REN_bits;
    };
    const unsigned char reserved4;
    union
    {
        volatile unsigned char DS;
        PORT_REG_t DS_bits;
    };
    const unsigned char reserved5;
    union
    {
        volatile unsigned char SEL;
        PORT_REG_t SEL_bits;
    };
    const unsigned char reserved6;
    const unsigned char reserved7;
    const unsigned char reserved8;
    union
    {
        volatile unsigned char IV;
        PORT_REG_t IV_bits;
    };
    const unsigned char reserved9;
    const unsigned char reserved10;
    const unsigned char reserved11;
    const unsigned char reserved12;
    const unsigned char reserved13;
    const unsigned char reserved14;
    const unsigned char reserved15;
    const unsigned char reserved16;
    const unsigned char reserved17;
    union
    {
        volatile unsigned char IES;
        PORT_REG_t IES_bits;
    };
    const unsigned char reserved18;
    union
    {
        volatile unsigned char IE;
        PORT_REG_t IE_bits;
    };
    const unsigned char reserved19;
    union
    {
        volatile unsigned char IFG;
        PORT_REG_t IFG_bits;
    };
    const unsigned char reserved20;
    const unsigned char reserved21;
    const unsigned char reserved22;
}PORT1_t;

typedef volatile struct
{
    const unsigned char reserved;
    union
    {
        volatile const unsigned char IN;
        PORT_REG_CONST_t IN_bits;
    };
    const unsigned char reserved2;
    union
    {
        volatile unsigned char OUT;
        PORT_REG_t OUT_bits;
    };
    const unsigned char reserved3;
    union
    {
        volatile unsigned char DIR;
        PORT_REG_t DIR_bits;
    };
    const unsigned char reserved4;
    union
    {
        volatile unsigned char REN;
        PORT_REG_t REN_bits;
    };
    const unsigned char reserved5;
    union
    {
        volatile unsigned char DS;
        PORT_REG_t DS_bits;
    };
    const unsigned char reserved6;
    union
    {
        volatile unsigned char SEL;
        PORT_REG_t SEL_bits;
    };
    const unsigned char reserved7;
    const unsigned char reserved8;
    const unsigned char reserved9;
    const unsigned char reserved10;
    const unsigned char reserved11;
    const unsigned char reserved12;
    const unsigned char reserved13;
    const unsigned char reserved14;
    const unsigned char reserved15;
    const unsigned char reserved16;
    const unsigned char reserved17;
    const unsigned char reserved18;
    const unsigned char reserved19;
    union
    {
        volatile unsigned char IES;
        PORT_REG_t IES_bits;
    };
    const unsigned char reserved20;
    union
    {
        volatile unsigned char IE;
        PORT_REG_t IE_bits;
    };
    const unsigned char reserved21;
    union
    {
        volatile unsigned char IFG;
        PORT_REG_t IFG_bits;
    };
    union
    {
        volatile unsigned char IV;
        PORT_REG_t IV_bits;
    };
    const unsigned char reserved23;
}PORT2_t;

typedef volatile struct
{
    union
    {
        volatile const unsigned int IN;
        PORT16_REG_CONST_t IN_bits;
    };
    union
    {
        volatile unsigned int OUT;
        PORT16_REG_t OUT_bits;
    };
    union
    {
        volatile unsigned int DIR;
        PORT16_REG_t DIR_bits;
    };
    union
    {
        volatile unsigned int REN;
        PORT16_REG_t REN_bits;
    };
    union
    {
        volatile unsigned int DS;
        PORT16_REG_t DS_bits;
    };
    union
    {
        volatile unsigned int SEL;
        PORT16_REG_t SEL_bits;
    };
    const unsigned int reserved1;
    const unsigned int reserved2;
    const unsigned int reserved3;
    const unsigned int reserved4;
    const unsigned int reserved5;
    const unsigned int reserved6;
    union
    {
        volatile unsigned int IES;
        PORT16_REG_t IES_bits;
    };
    union
    {
        volatile unsigned int IE;
        PORT16_REG_t IE_bits;
    };
    union
    {
        volatile unsigned int IFG;
        PORT16_REG_t IFG_bits;
    };
    const unsigned int reserved7;
}PORTA_t;


typedef volatile struct
{
    union
    {
        volatile const unsigned char IN;
        PORT_REG_CONST_t IN_bits;
    };
    const unsigned char reserved;
    union
    {
        volatile unsigned char OUT;
        PORT_REG_t OUT_bits;
    };
    const unsigned char reserved2;
    union
    {
        volatile unsigned char DIR;
        PORT_REG_t DIR_bits;
    };
    const unsigned char reserved3;
    union
    {
        volatile unsigned char REN;
        PORT_REG_t REN_bits;
    };
    const unsigned char reserved4;
    union
    {
        volatile unsigned char DS;
        PORT_REG_t DS_bits;
    };
    const unsigned char reserved5;
    union
    {
        volatile unsigned char SEL;
        PORT_REG_t SEL_bits;
    };
    const unsigned char reserved6;
    const unsigned char reserved7;
    const unsigned char reserved8;
    const unsigned char reserved9;
    const unsigned char reserved10;
    const unsigned char reserved11;
    const unsigned char reserved12;
    const unsigned char reserved13;
    const unsigned char reserved14;
    const unsigned char reserved15;
    const unsigned char reserved16;
    const unsigned char reserved17;
    const unsigned char reserved18;
    const unsigned char reserved19;
    const unsigned char reserved20;
    const unsigned char reserved21;
    const unsigned char reserved22;
    const unsigned char reserved23;
    const unsigned char reserved24;
    const unsigned char reserved25;
    const unsigned char reserved26;
}PORT35_t;


typedef volatile struct
{
    union
    {
        volatile const unsigned int IN;
        PORT16_REG_CONST_t IN_bits;
    };
    union
    {
        volatile unsigned int OUT;
        PORT16_REG_t OUT_bits;
    };
    union
    {
        volatile unsigned int DIR;
        PORT16_REG_t DIR_bits;
    };
    union
    {
        volatile unsigned int REN;
        PORT16_REG_t REN_bits;
    };
    union
    {
        volatile unsigned int DS;
        PORT16_REG_t DS_bits;
    };
    const unsigned int reserved;
    const unsigned int reserved1;
    const unsigned int reserved2;
    const unsigned int reserved3;
    const unsigned int reserved4;
    const unsigned int reserved5;
    const unsigned int reserved6;
    const unsigned int reserved7;
    const unsigned int reserved8;
    const unsigned int reserved9;
    const unsigned int reserved10;
}PORTJ_t;

typedef volatile struct
{
    const unsigned char reserved;
    union
    {
        volatile const unsigned char IN;
        PORT_REG_CONST_t IN_bits;
    };
    const unsigned char reserved2;
    union
    {
        volatile unsigned char OUT;
        PORT_REG_t OUT_bits;
    };
    const unsigned char reserved3;
    union
    {
        volatile unsigned char DIR;
        PORT_REG_t DIR_bits;
    };
    const unsigned char reserved4;
    union
    {
        volatile unsigned char REN;
        PORT_REG_t REN_bits;
    };
    const unsigned char reserved5;
    union
    {
        volatile unsigned char DS;
        PORT_REG_t DS_bits;
    };
    const unsigned char reserved6;
    union
    {
        volatile unsigned char SEL;
        PORT_REG_t SEL_bits;
    };
    const unsigned char reserved7;
    const unsigned char reserved8;
    const unsigned char reserved9;
    const unsigned char reserved10;
    const unsigned char reserved11;
    const unsigned char reserved12;
    const unsigned char reserved13;
    const unsigned char reserved14;
    const unsigned char reserved15;
    const unsigned char reserved16;
    const unsigned char reserved17;
    const unsigned char reserved18;
    const unsigned char reserved19;
    const unsigned char reserved20;
    const unsigned char reserved21;
    const unsigned char reserved22;
    const unsigned char reserved23;
    const unsigned char reserved24;
    const unsigned char reserved25;
    const unsigned char reserved26;
}PORT4_t;

typedef volatile struct
{
    union
    {
        volatile const unsigned int IN;
        PORT16_REG_CONST_t IN_bits;
    };
    union
    {
        volatile unsigned int OUT;
        PORT16_REG_t OUT_bits;
    };
    union
    {
        volatile unsigned int DIR;
        PORT16_REG_t DIR_bits;
    };
    union
    {
        volatile unsigned int REN;
        PORT16_REG_t REN_bits;
    };
    union
    {
        volatile unsigned int DS;
        PORT16_REG_t DS_bits;
    };
    union
    {
        volatile unsigned int SEL;
        PORT16_REG_t SEL_bits;
    };
    const unsigned int reserved1;
    const unsigned int reserved2;
    const unsigned int reserved3;
    const unsigned int reserved4;
    const unsigned int reserved5;
    const unsigned int reserved6;
    const unsigned int reserved7;
    const unsigned int reserved8;
    const unsigned int reserved9;
    const unsigned int reserved10;
}PORTB_t;

typedef volatile struct
{
    union
    {
        union
        {
            PORT1_t P1;
            PORT2_t P2;
        };
        PORTA_t PA;
    };
    union
    {
        union
        {
            PORT35_t P3;
            PORT4_t P4;
        };
        PORTB_t PB;
    };
    union
    {
        union
        {
            PORT35_t P5;
            PORT4_t P6;
        };
        PORTB_t PC;
    };
    const PORTB_t reserved[6UL];
    PORTJ_t PJ;
}PORT_t;

#endif /* XDRIVER_MCU_PORT_PERIPHERAL_XHEADER_PORT_STRUCTPERIPHERAL_H_ */
