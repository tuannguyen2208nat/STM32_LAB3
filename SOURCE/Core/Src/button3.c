/*
 * button3.c
 *
 *  Created on: Nov 13, 2023
 *      Author: tuann
 */

#include "button3.h"

int keyreg30=normal_state;
int keyreg31=normal_state;
int keyreg32=normal_state;

int keyreg33=normal_state;
int timercountdown3 = 200;

int button3_flag=0;

int is_button3_press()
{
	if(button3_flag==1)
	{
		button3_flag=0;
		return 1;
	}
	return 0;
}

void getkeyinput3()
{
	keyreg30=keyreg31;
	keyreg31=keyreg32;
	keyreg32=HAL_GPIO_ReadPin(button3_GPIO_Port, button3_Pin);
	if((keyreg30==keyreg31)&&(keyreg31==keyreg32))
	{
		if(keyreg33!=keyreg32)
		{
			keyreg33=keyreg32;
			if(keyreg32==pressed_state)
			{
				///TO DO
				button3_flag=1;
				timercountdown3=200;
			}
		}
		else
		{
			timercountdown3--;
			if(timercountdown3==0)
			{
				keyreg33=normal_state;
			}
		}
	}
}
