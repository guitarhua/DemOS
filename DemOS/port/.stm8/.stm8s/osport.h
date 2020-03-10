/******************************************************************************

    @file    DemOS: osport.h
    @author  Rajmund Szymanski
    @date    10.03.2020
    @brief   DemOS port definitions for STM8S uC.

 ******************************************************************************

   Copyright (c) 2018-2020 Rajmund Szymanski. All rights reserved.

   Permission is hereby granted, free of charge, to any person obtaining a copy
   of this software and associated documentation files (the "Software"), to
   deal in the Software without restriction, including without limitation the
   rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
   sell copies of the Software, and to permit persons to whom the Software is
   furnished to do so, subject to the following conditions:

   The above copyright notice and this permission notice shall be included
   in all copies or substantial portions of the Software.

   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
   OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
   FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
   IN THE SOFTWARE.

 ******************************************************************************/

#ifndef __DEMOSPORT_H
#define __DEMOSPORT_H

#include <stm8s.h>

#ifdef __cplusplus
extern "C" {
#endif

/* --------------------------------------------------------------------------------------------- */

typedef uint16_t cnt_t;

/* --------------------------------------------------------------------------------------------- */

INTERRUPT_HANDLER(TIM4_UPD_OVF_IRQHandler, 23);

/* --------------------------------------------------------------------------------------------- */

#ifdef __cplusplus
}
#endif

#endif//__DEMOSPORT_H
