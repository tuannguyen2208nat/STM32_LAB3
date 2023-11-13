/*
 * button1.c
 *
 *  Created on: Nov 12, 2023
 *      Author: tuann
 */

#include "button1.h"

int count=1;

int keyreg0=normal_state;
int keyreg1=normal_state;
int keyreg2=normal_state;

int keyreg3=normal_state;
int timercountdown = 200;

int mode = 1;

void checkchedo()
{
	if(checkco!=1)
	{switch (count)
	{
	case 1 :
		update7SEGa(1);
		display7SEGa(count);
		break;
	case 2 :
		update7SEGa(1);
		display7SEGa(count);
		break;
	case 3 :
		update7SEGa(1);
		display7SEGa(count);
		break;
	case 4 :
		update7SEGa(1);
		display7SEGa(count);
		break;
	default : break;
	}
	}
	mode=count;
}

void getkeyinput1()
{
	keyreg0=keyreg1;
	keyreg1=keyreg2;
	keyreg2=HAL_GPIO_ReadPin(button1_GPIO_Port, button1_Pin);
	if((keyreg0==keyreg1)&&(keyreg1==keyreg2))
	{
		if(keyreg3!=keyreg2)
		{
			keyreg3=keyreg2;
			if(keyreg2==pressed_state)
			{
				///TO DO
				count++;
				if(count>4){count=1;}
				timercountdown=200;
			}
		}
		else
		{
			timercountdown--;
			if(timercountdown==0)
			{
				keyreg3=normal_state;
			}
		}
	}
	checkchedo();
}


