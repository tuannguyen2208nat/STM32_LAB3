/*
 * button.c
 *
 *  Created on: Nov 12, 2023
 *      Author: tuann
 */
#include "button.h"

int checkco=0;

int CHECKCO()
{
	return checkco;
}

void getkeyinput()
{
	getkeyinput1();
	getkeyinput3();
	if(is_button3_press()==1)
	{
		  if(checkco==0)
		  {checkco=1;}
		  else if(checkco==1)
		  {checkco=0;}
	}
	switch (mode)
	{
	case 1 :
		if(checkco==1)
	    {
			fsm_run();
		    display_traffic1();
			display_traffic2();
	    }
	    if(checkco==0)
		{
			turn_off();
	    }
		break;
	case 2 :
		if(checkco==1)
	    {
			if(timerforled==0)
			{
				timerforled=50;
			}
			getkeyinput2();
	    }
	    if(checkco==0)
		{
			turn_off();
	    }
		break;
	case 3 :
		if(checkco==1)
	    {
			if(timerforled==0)
			{
				timerforled=50;
			}
			getkeyinput2();
	    }
	    if(checkco==0)
		{
			turn_off();
	    }
		break;
	case 4 :
		if(checkco==1)
	    {
			if(timerforled==0)
			{
			   timerforled=50;
			}
			getkeyinput2();
	    }
	    if(checkco==0)
		{
			turn_off();
	    }
		 break;
	default : break;
	}

}
