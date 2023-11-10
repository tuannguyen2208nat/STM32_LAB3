/*
 * fsm_auto_help.c
 *
 *  Created on: Nov 11, 2023
 *      Author: tuann
 */

#include "fsm_auto_help.h"

void turn_off()
{
	HAL_GPIO_WritePin(led_red1_GPIO_Port, led_red1_Pin, SET);
	HAL_GPIO_WritePin(led_green1_GPIO_Port, led_green1_Pin, SET);
	HAL_GPIO_WritePin(led_yellow1_GPIO_Port, led_yellow1_Pin, SET);
	HAL_GPIO_WritePin(led_red2_GPIO_Port, led_red2_Pin, SET);
	HAL_GPIO_WritePin(led_green2_GPIO_Port, led_green2_Pin, SET);
	HAL_GPIO_WritePin(led_yellow2_GPIO_Port, led_yellow2_Pin, SET);
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

void turn_on2(int index)
{
	switch (index)
	{
	case 0 :
		HAL_GPIO_WritePin(led_red2_GPIO_Port, led_red2_Pin, RESET);
		HAL_GPIO_WritePin(led_green2_GPIO_Port, led_green2_Pin, SET);
		HAL_GPIO_WritePin(led_yellow2_GPIO_Port, led_yellow2_Pin, SET);
		break ;
	case 1 :
		HAL_GPIO_WritePin(led_red2_GPIO_Port, led_red2_Pin, SET);
		HAL_GPIO_WritePin(led_green2_GPIO_Port, led_green2_Pin, RESET);
		HAL_GPIO_WritePin(led_yellow2_GPIO_Port, led_yellow2_Pin, SET);
		break;
	case 2 :
		HAL_GPIO_WritePin(led_red2_GPIO_Port, led_red2_Pin, SET);
		HAL_GPIO_WritePin(led_green2_GPIO_Port, led_green2_Pin, SET);
		HAL_GPIO_WritePin(led_yellow2_GPIO_Port, led_yellow2_Pin, RESET);
		break ;
	default : break;
	}
}
