/*
 * fsm_auto.c
 *
 *  Created on: Nov 10, 2023
 *      Author: tuann
 */

#include "fsm_auto.h"

int duration =0 ;
int duration2 =0 ;

void fsm_run1()
{
	switch(status1)
	{
	case INIT :
		turn_off();
		status1=auto_red;
		duration=timer1+50;
		settimer1(duration);
		break;
	case auto_red:
		turn_on(0);
		if(timer1_flag==1)
		{
			status1=auto_green;
			duration=timer2+50;
			settimer1(duration);
		}
		break;
	case auto_green :
		turn_on(1);
		if(timer1_flag==1)
		{
			status1=auto_yellow;
			duration=timer3+50;
			settimer1(duration);
		}
		break;
	case auto_yellow :
		turn_on(2);
		if(timer1_flag==1)
		{
			status1=auto_red;
			duration=timer1+50;
			settimer1(duration);
		}
		break;
	default :  break;
	}
}

void fsm_run2()
{
	switch(status2)
	{
	case INIT :
		turn_off();
		status2=auto_green;
		duration2=timer2+50;
		settimer2(duration2);
		break;
	case auto_red:
		turn_on2(0);
		if(timer2_flag==1)
		{
			status2=auto_green;
			duration2=timer2+50;
			settimer2(duration2);
		}
		break;
	case auto_green :
		turn_on2(1);
		if(timer2_flag==1)
		{
			status2=auto_yellow;
			duration2=timer3+50;
			settimer2(duration2);
		}
		break;
	case auto_yellow :
		turn_on2(2);
		if(timer2_flag==1)
		{
			status2=auto_red;
			duration2=timer1+50;
			settimer2(duration2);
		}
		break;
	default :  break;
	}
}

void fsm_run()
{
	fsm_run1();
	fsm_run2();
}

