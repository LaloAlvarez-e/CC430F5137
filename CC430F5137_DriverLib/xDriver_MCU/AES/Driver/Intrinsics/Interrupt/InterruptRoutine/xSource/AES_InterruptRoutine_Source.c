/**
 *
 * @file AES_InterruptRoutine_Source.c
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
 * @verbatim 13 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 13 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/AES/Driver/Intrinsics/Interrupt/InterruptRoutine/xHeader/AES_InterruptRoutine_Source.h>

static AES_puxfIRQSourceHandler_t AES_uxIRQSourceHandler = &MCU_uxIRQSourceHandler_Dummy;


AES_puxfIRQSourceHandler_t AES__puxfGetIRQSourceHandler(void)
{
    AES_puxfIRQSourceHandler_t puxfFunctionReg;
    puxfFunctionReg = AES_uxIRQSourceHandler;

    return (puxfFunctionReg);
}

AES_puxfIRQSourceHandler_t* AES__puxfGetIRQSourceHandlerPointer(void)
{
    AES_puxfIRQSourceHandler_t* puxfFunctionReg;
    puxfFunctionReg = &AES_uxIRQSourceHandler;

    return (puxfFunctionReg);
}
