/**
 *
 * @file MCU_Interrupt.c
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
 * @verbatim 20 ene. 2023 @endverbatim
 *
 * @author
 * @verbatim InDeviceMex @endverbatim
 *
 * @par Change History
 * @verbatim
 * Date           Author     Version     Description
 * 20 ene. 2023     InDeviceMex    1.0         initial Version@endverbatim
 */
#include <xDriver_MCU/MCU/xHeader/MCU_Variables.h>



MCU_nISR_RETURN MCU_uxIRQSourceHandler_Dummy(uintptr_t uptrModuleArg, void* pvArgument)
{
    while(1U)
    {
        _NOP();
    }
}

MCU_nISR_RETURN MCU_uxIRQSourceHandler_DummyNonBlocking(uintptr_t uptrModuleArg, void* pvArgument)
{
    while(1U)
    {
        _NOP();
    }
}

