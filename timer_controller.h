#ifndef _TIMER_CONTROLLER_H_
#define _TIMER_CONTROLLER_H_

#include <time.h>

/****************************************************************************
 * @brief    Function for timer initialization.
 *
 * @param    timerId - [in] Pointer to timer variable.
 *           triggerSec - [in] Number of seconds after which timer should trigger.
 *           callback - [in] Pointer to function that should execute on timer trigger.
****************************************************************************/
void timerSetAndStart(timer_t *timerId, time_t triggerSec, void *callback);

/****************************************************************************
 * @brief    Function for timer deinitialization.
 *
 * @param    timerId - [in] Pointer to timer variable.
****************************************************************************/
void timerStopAndDelete(timer_t *timerId);

#endif
