#ifndef _HAL_H_
#define _HAL_H_

#include <errno.h>

#include "hal_types.h"
#include "stm32.h"
#include "stopwatch.h"
#include "util.h"
#include "gpio_hal.h"
#include "delay.h"
#include "adc.h"
#include "systick.h"

#include <boards.h>


#define DEBUG_BUILD 1

//#define ISR_PROF



#ifdef __cplusplus
  extern "C" {
#endif

extern void clock_gettime(uint32_t a1, void *a2);

extern void revo_call_handler(Handler h, uint32_t arg);

#ifdef __cplusplus
  }
#endif

#ifdef ISR_PROF
    extern uint64_t isr_time;
#endif



#endif

