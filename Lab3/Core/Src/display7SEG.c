/*
 * display7SEG.c
 *
 *  Created on: Oct 27, 2022
 *      Author: Tam Thanh Tin
 */

#include "main.h"
#include "display7SEG.h"
void display7SEG_1(int count_time){
		  switch(count_time){
		  case 0:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,0);


			  break ;
		  	  };
		  case 1:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,1);

			  break ;
		  	  };
		  case 2:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,1);
			   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,0);
			   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,0);
			   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,0);
			   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			   HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,1);

			   break ;
		  };
		  case 3: {
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,0);

			  break;
		  };
		  case 4:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,0);
			  break;
		  };
		  case 5:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,0);

			  break;
		  };
		  case 6:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,0);
			  break;
		  };
		  case 7:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,1);

			  break;
		  };
		  case 8:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,0);
			 		  break;
		  };
		  case 9:{
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_4,1);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_3,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,0);
			  HAL_GPIO_WritePin(GPIOB,GPIO_PIN_6,0);
			  count_time=-1;
			  break;
		  };

		  };



}




void  display7SEG_2(int count_time)
{								//0    1	2	3	  4	   5    6    7    8    9

	  switch(count_time){
				  case 0:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);


					  break ;
				  	  };
				  case 1:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,1);

					  break ;
				  	  };
				  case 2:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,1);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,1);

					   break ;
				  };
				  case 3: {
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);

					  break;
				  };
				  case 4:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);
					  break;
				  };
				  case 5:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);

					  break;
				  };
				  case 6:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);
					  break;
				  };
				  case 7:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,1);

					  break;
				  };
				  case 8:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);
					 		  break;
				  };
				  case 9:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_4,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_0,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_1,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_3,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_5,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_6,0);
					  count_time=-1;
					  break;
				  };
			  };
}

void display7SEG_3(int count_time){
	  switch(count_time){
				  case 0:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,0);


					  break ;
				  	  };
				  case 1:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,1);

					  break ;
				  	  };
				  case 2:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,1);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					   HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,1);

					   break ;
				  };
				  case 3: {
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,0);

					  break;
				  };
				  case 4:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,0);
					  break;
				  };
				  case 5:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,0);

					  break;
				  };
				  case 6:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,0);
					  break;
				  };
				  case 7:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,1);

					  break;
				  };
				  case 8:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,0);
					 		  break;
				  };
				  case 9:{
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_11,1);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_7,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_8,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_9,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_10,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_12,0);
					  HAL_GPIO_WritePin(GPIOA,GPIO_PIN_13,0);
					  count_time=-1;
					  break;
				  };
	  };
}

void split_digit_to_display(int number,int mode){
	if(mode==1){
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, RESET);
		if(number<10){
			display7SEG_1(0);
			display7SEG_2(number);
			display7SEG_3(number);
		}
		else{
			display7SEG_2(number%10);
			display7SEG_3(number%10);
			display7SEG_1(number/10);

		}
	}
	else if(mode==2 || mode==3 || mode==4){
		//display value
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14, SET);//turn off third 7SEG
		if(number<10){
			display7SEG_1(0);
			display7SEG_2(number);}
		else
		{
			display7SEG_2(number%10);
			display7SEG_1(number/10);
		}
		//display mode
		display7SEG_3(mode);
	}
}







