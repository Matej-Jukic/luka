#ifndef _REMOTE_CONTROLLER_H_
#define _REMOTE_CONTROLLER_H_

#include "stream_controller.h"

typedef enum _remoteControllerStatus
{
    REMOTE_CONTROLLER_NO_ERROR = 0,
    REMOTE_CONTROLLER_ERROR
} remoteControllerStatus;

/****************************************************************************
 * @brief    Function for remote controller initialization.
 *
 * @return   STREAM_CONTROLLER_NO_ERROR, if there are no errors.
 *           STREAM_CONTROLLER_ERROR, in case of an error.
****************************************************************************/
remoteControllerStatus remoteControllerInit();

/****************************************************************************
 * @brief    Function for executing functions on corresponding key press event.
****************************************************************************/
void *remoteControllerEvent();

#endif
