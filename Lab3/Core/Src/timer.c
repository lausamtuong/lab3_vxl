/*
 * timer.c
 *
 *  Created on: Oct 26, 2022
 *      Author: Tam Thanh Tin
 */

#include "main.h"
#include "timer.h"
#include "input_reading.h"

void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
{

	button_reading();
}
