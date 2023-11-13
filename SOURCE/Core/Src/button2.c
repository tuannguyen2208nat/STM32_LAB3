/*
 * button2.c
 *
 *  Created on: Nov 12, 2023
 *      Author: tuann
 */
#include "button2.h"

int counter=0;
int timerupdate = 1 ;
int led[2]={0 , 0};
int vitri=0;
int timerforled=50;

int keyreg20=normal_state;
int keyreg21=normal_state;
int keyreg22=normal_state;

int keyreg23=normal_state;
int timercountdown2 = 200;

void settimerforchedo()
{
	switch (mode)
	{
	case 2 :
		changetimer1(timerupdate*100);
		break;
	case 3 :
		changetimer2(timerupdate*100);
		break;
	case 4 :
		changetimer3(timerupdate*100);
	default : break;
	}
}

void display_chedo()
{
	update7SEGb(counter);
	display7SEGb(led[counter]);
	if(counter==0)
	{
		counter=1;
	}
	else if(counter==1)
	{
		counter=0;
	}
}

void updateclockbuffer()
{
	led[0]=timerupdate/10;
	led[1]=timerupdate%10;
}


void getkeyinput2()
{
	keyreg20=keyreg21;
	keyreg21=keyreg22;
	keyreg22=HAL_GPIO_ReadPin(button2_GPIO_Port, button2_Pin);
	if((keyreg20==keyreg21)&&(keyreg21==keyreg22))
	{
		if(keyreg23!=keyreg22)
		{
			keyreg23=keyreg22;
			if(keyreg22==pressed_state)
			{
				///TO DO
				timerupdate++;
				if(timerupdate>99){timerupdate=1;}
				timercountdown2=200;
			}
		}
		else
		{
			timercountdown2--;
			if(timercountdown2==0)
			{
				keyreg23=normal_state;
			}
		}
	}
	timerforled--;
	updateclockbuffer();
	settimerforchedo();
	if(timerforled==0)
	{
		if(mode==2)
		{
			HAL_GPIO_TogglePin(led_red1_GPIO_Port, led_red1_Pin);
			HAL_GPIO_TogglePin(led_red2_GPIO_Port, led_red2_Pin);
		}
		if(mode==3)
		{
			HAL_GPIO_TogglePin(led_green1_GPIO_Port, led_green1_Pin);
			HAL_GPIO_TogglePin(led_green2_GPIO_Port, led_green2_Pin);
		}
		if(mode==4)
		{
			HAL_GPIO_TogglePin(led_yellow1_GPIO_Port, led_yellow1_Pin);
			HAL_GPIO_TogglePin(led_yellow2_GPIO_Port, led_yellow2_Pin);
		}
		display_chedo();
	}

}

