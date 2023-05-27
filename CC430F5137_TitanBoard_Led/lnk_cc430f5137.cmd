/* ============================================================================ */
/* Copyright (c) 2020, Texas Instruments Incorporated                           */
/*  All rights reserved.                                                        */
/*                                                                              */
/*  Redistribution and use in source and binary forms, with or without          */
/*  modification, are permitted provided that the following conditions          */
/*  are met:                                                                    */
/*                                                                              */
/*  *  Redistributions of source code must retain the above copyright           */
/*     notice, this list of conditions and the following disclaimer.            */
/*                                                                              */
/*  *  Redistributions in binary form must reproduce the above copyright        */
/*     notice, this list of conditions and the following disclaimer in the      */
/*     documentation and/or other materials provided with the distribution.     */
/*                                                                              */
/*  *  Neither the name of Texas Instruments Incorporated nor the names of      */
/*     its contributors may be used to endorse or promote products derived      */
/*     from this software without specific prior written permission.            */
/*                                                                              */
/*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" */
/*  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,       */
/*  THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR      */
/*  PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR            */
/*  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,       */
/*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,         */
/*  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; */
/*  OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,    */
/*  WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR     */
/*  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,              */
/*  EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.                          */
/* ============================================================================ */

/******************************************************************************/
/* lnk_cc430f5137.cmd - LINKER COMMAND FILE FOR LINKING CC430F5137 PROGRAMS     */
/*                                                                            */
/*   Usage:  lnk430 <obj files...>    -o <out file> -m <map file> lnk.cmd     */
/*           cl430  <src files...> -z -o <out file> -m <map file> lnk.cmd     */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/* These linker options are for command line linking only.  For IDE linking,  */
/* you should set your linker options in Project Properties                   */
 -c                                              /* LINK USING C CONVENTIONS  */
 -stack   0x0180                                  /* STACK AREA SIZE            */
 -heap   0x0100                                  /* HEAP AREA SIZE            */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/* Version: 1.211                                                             */
/*----------------------------------------------------------------------------*/

/****************************************************************************/
/* Specify the system memory map                                            */
/****************************************************************************/

MEMORY
{
    RESERVED                : origin = 0x0000, length = 0x0100
    PERIPHERALS		        : origin = 0x0100, length = 0x0F00
    BSL0					: origin = 0x1000, length = 0x0200
    BSL1					: origin = 0x1200, length = 0x0200
    BSL2					: origin = 0x1400, length = 0x0200
    BSL4					: origin = 0x1600, length = 0x0200
    INFOD                   : origin = 0x1800, length = 0x0080
    INFOC                   : origin = 0x1880, length = 0x0080
    INFOB                   : origin = 0x1900, length = 0x0080
    INFOA                   : origin = 0x1980, length = 0x0080
    DEV0                    : origin = 0x1A00, length = 0x0080
    DEV1                    : origin = 0x1A80, length = 0x0080
    RAMFUNC                 : origin = 0x1C00, length = 0x0400
    RAM0                    : origin = 0x2000, length = 0x0900
    HEAP                    : origin = 0x2900, length = 0x0100
    STACK                   : origin = 0x2A00, length = 0x0180
    RAMVECT					: origin = 0x2B80, length = 0x0080
    CODE                    : origin = 0x8000, length = 0x6000
    CONST                   : origin = 0xE000, length = 0x1000
    NVM						: origin = 0xF000, length = 0x0F80
    INTVECT					: origin = 0xFF80, length = 0x007E
    RESET                   : origin = 0xFFFE, length = 0x0002
}

/****************************************************************************/
/* Specify the sections allocation into memory                              */
/****************************************************************************/
SECTIONS
{
	.nvm 		: {} run = NVM
    .ramvect	: load = INTVECT run = RAMVECT, table(BINIT)
    .bss        : {} > RAM0                  /* Global & static vars              */
    .data       : {} > RAM0                  /* Global & static vars              */
    .TI.noinit  : {} > RAM0                  /* For #pragma noinit                */
    .sysmem     : {} > HEAP                  /* Dynamic memory allocation area    */
    .stack      : {} > STACK (HIGH)           /* Software system stack             */

    .text       : {} > CODE                /* Code                              */
    .cinit      : {} > CONST                /* Initialization tables             */
    .const      : {} > CONST                /* Constant data                     */
    .cio        : {} > RAM0                  /* C I/O Buffer                      */

    .pinit      : {} > CONST                /* C++ Constructor tables            */
    .binit      : {} > CONST                /* Boot-time Initialization tables   */
    .init_array : {} > CONST                /* C++ Constructor tables            */
    .mspabi.exidx : {} > CONST              /* C++ Constructor tables            */
    .mspabi.extab : {} > CONST             /* C++ Constructor tables            */
#ifdef __TI_COMPILER_VERSION__
  #if __TI_COMPILER_VERSION__ >= 15009000
    #ifndef __LARGE_CODE_MODEL__
    .TI.ramfunc : {} load=CODE, run=RAMFUNC, table(BINIT)
    #else
    .TI.ramfunc : {} load=CODE | CONST, run=RAMFUNC, table(BINIT)
    #endif
  #endif
#endif

    .infoA     : {} > INFOA              /* MSP430 INFO FLASH Memory segments */
    .infoB     : {} > INFOB
    .infoC     : {} > INFOC
    .infoD     : {} > INFOD

    /* MSP430 Interrupt vectors          */
    .reset       : {}               > RESET  /* MSP430 Reset vector         */
}

/****************************************************************************/
/* Include peripherals memory map                                           */
/****************************************************************************/

-l cc430f5137.cmd

