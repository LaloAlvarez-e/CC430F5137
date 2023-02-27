/**
 *
 * @file PORT_StructRegister.h
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

#ifndef XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_STRUCTREGISTER_H_
#define XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_STRUCTREGISTER_H_

#include <xDriver_MCU/PORT/Peripheral/xHeader/PORT_Enum.h>

typedef volatile struct
{
    volatile const unsigned char PIN0 : 1;
    volatile const unsigned char PIN1 : 1;
    volatile const unsigned char PIN2 : 1;
    volatile const unsigned char PIN3 : 1;
    volatile const unsigned char PIN4 : 1;
    volatile const unsigned char PIN5 : 1;
    volatile const unsigned char PIN6 : 1;
    volatile const unsigned char PIN7 : 1;
}PORT_REG_CONST_t;

typedef volatile struct
{
    volatile unsigned char PIN0 : 1;
    volatile unsigned char PIN1 : 1;
    volatile unsigned char PIN2 : 1;
    volatile unsigned char PIN3 : 1;
    volatile unsigned char PIN4 : 1;
    volatile unsigned char PIN5 : 1;
    volatile unsigned char PIN6 : 1;
    volatile unsigned char PIN7 : 1;
}PORT_REG_t;


typedef volatile struct
{
    volatile const unsigned int PIN0 : 1;
    volatile const unsigned int PIN1 : 1;
    volatile const unsigned int PIN2 : 1;
    volatile const unsigned int PIN3 : 1;
    volatile const unsigned int PIN4 : 1;
    volatile const unsigned int PIN5 : 1;
    volatile const unsigned int PIN6 : 1;
    volatile const unsigned int PIN7 : 1;
    volatile const unsigned int PIN8 : 1;
    volatile const unsigned int PIN9 : 1;
    volatile const unsigned int PIN10 : 1;
    volatile const unsigned int PIN11 : 1;
    volatile const unsigned int PIN12 : 1;
    volatile const unsigned int PIN13 : 1;
    volatile const unsigned int PIN14 : 1;
    volatile const unsigned int PIN15 : 1;
}PORT16_REG_CONST_t;


typedef volatile struct
{
    volatile unsigned int PIN0 : 1;
    volatile unsigned int PIN1 : 1;
    volatile unsigned int PIN2 : 1;
    volatile unsigned int PIN3 : 1;
    volatile unsigned int PIN4 : 1;
    volatile unsigned int PIN5 : 1;
    volatile unsigned int PIN6 : 1;
    volatile unsigned int PIN7 : 1;
    volatile unsigned int PIN8 : 1;
    volatile unsigned int PIN9 : 1;
    volatile unsigned int PIN10 : 1;
    volatile unsigned int PIN11 : 1;
    volatile unsigned int PIN12 : 1;
    volatile unsigned int PIN13 : 1;
    volatile unsigned int PIN14 : 1;
    volatile unsigned int PIN15 : 1;
}PORT16_REG_t;

#endif /* XDRIVER_MCU_PORT_PERIPHERAL_HEADER_PORT_STRUCTREGISTER_H_ */
