
#include "main.h"
# define ON 		GPIO_PIN_RESET
# define OFF 	    GPIO_PIN_SET
void led_display(uint8_t MAX_RED_TIMER,uint8_t MAX_YELLOW_TIMER,uint8_t MAX_GREEN_TIMER,uint8_t total_value){
	////////////////////////////////HORIZONTAL///////////////////////////////////////////
	if(total_value >(MAX_GREEN_TIMER+MAX_YELLOW_TIMER)){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, ON);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, OFF);

	}
	else if(total_value >MAX_YELLOW_TIMER)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, ON);
	}
	else if(total_value <=MAX_YELLOW_TIMER)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, ON);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, OFF);
	}
	////////////////////////////////VERTICAL/////////////////////////////////////////////
	if(total_value >(MAX_RED_TIMER+MAX_YELLOW_TIMER)){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, ON);
	}
	else if(total_value >MAX_RED_TIMER)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, ON);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, OFF);
	}
	else if(total_value <=MAX_RED_TIMER)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, ON);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, OFF);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, OFF);
	}

}
