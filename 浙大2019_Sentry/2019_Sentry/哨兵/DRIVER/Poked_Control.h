#ifndef __POKED_CONTROL_H__
#define __POKED_CONTROL_H__
#include "FreeRTOS.h"
#include "struct.h"
#include "constant.h"
#include "uart_MiniPC.h"
#include "math.h"
void FricStatus_Control(void);
void Poke_Calculation(portTickType System_Tick);
int16_t  Poked_Control( int current_Poked_angle , int target_Poked_angle);

#endif


















































































































