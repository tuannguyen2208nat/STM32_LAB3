/*
 * fsm_auto.c
 *
 *  Created on: Nov 10, 2023
 *      Author: tuann
 */

#include "fsm_auto.h"

int duration;

void turn_off()
{
	HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin, SET);
	HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin, SET);
	HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin, SET);
}

void turn_on(int index)
{
	switch (index)
	{
	case 0 :
		HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin, RESET);
		HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin, SET);
		HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin, SET);
		break ;
	case 1 :
		HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin, SET);
		HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin, RESET);
		HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin, SET);
		break;
	case 2 :
		HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin, SET);
		HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin, SET);
		HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin, RESET);
		break ;
	default : break;
	}
}

void fsm_run()
{
	switch(status1)
	{
	case INIT :
		turn_off();
		status1=auto_red;
		duration=timer1;
		settimer1(duration);
		break;
	case auto_red:
		turn_on(0);
		if(timer1_flag==1)
		{
			status1=auto_green;
			duration=timer2;
			settimer1(duration);
		}
		break;
	case auto_green :
		turn_on(1);
		if(timer1_flag==1)
		{
			status1=auto_yellow;
			duration=timer3;
			settimer1(duration);
		}
		break;
	case auto_yellow :
		turn_on(2);
		if(timer1_flag==1)
		{
			status1=auto_red;
			duration=timer1;
			settimer1(duration);
		}
		break;
	default :  break;
	}

}
