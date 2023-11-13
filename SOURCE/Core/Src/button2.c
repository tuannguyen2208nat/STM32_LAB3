/*
 * button2.c
 *
 *  Created on: Nov 12, 2023
 *      Author: tuann
 */
#include "button2.h"

int timerupdate = 1 ;
int led[2]={0 , 0};
int vitri=0;

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
		timer1=timerupdate ;
		break;
	case 3 :
		timer2=timerupdate ;
		break;
	case 4 :
		timer3 =timerupdate ;
	default : break;
	}
	timerupdate=1;
}

void display_chedo()
{
	update7SEGb(1);
	display7SEGb(led[1]);
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
				display_chedo();
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
	updateclockbuffer();


}

