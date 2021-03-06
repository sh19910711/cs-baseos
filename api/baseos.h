#ifndef __BASEOS_H__
#define __BASEOS_H__

#include "GPIO.h"
#include "Timer.h"

// interfaces
#define DRIVER_GPIO  1

extern channel_t channel_server;
extern class _GPIO GPIO;
extern class _Timer Timer;

#endif
