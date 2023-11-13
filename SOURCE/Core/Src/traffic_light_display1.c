/*
 * traffic_light_display1.c
 *
 *  Created on: Nov 12, 2023
 *      Author: tuann
 */

#include "traffic_light_display1.h"

int second=0;
int index_led=0;
int led_buffer[2] = {0 , 0};

void updateClockBuffer ()
  {
	  int second_tens=second/10;
	  int second_ones=second%10;

	  led_buffer[0] = second_tens;
	  led_buffer[1] = second_ones;
  }

void display_traffic1()
{
	switch (status3)
	{
	case INIT :
	second=timer1/100;
	updateClockBuffer ();
    status3=auto_red;
    settimer3(50);
    settimer4(100);
		break;
	case auto_red :
		if (timer3_flag==1)
		{
			settimer3 (50) ;
		    if( index_led < 2 )
			{
			  update7SEGa ( index_led ) ;
			  display7SEGa ( led_buffer [ index_led ] ) ;
			  index_led ++ ;
			}
			if( index_led >= 2 )
			{
			  index_led = 0;
			}
		}
		if(timer4_flag==1)
		{
			settimer4 (100) ;
			second -- ;
			if(second <= 0 )
			{
				status3 = auto_green;
				second = timer2/100;
			}
		   updateClockBuffer () ;
		}
		break ;
	case auto_green :
		if (timer3_flag==1)
		{
			settimer3 (50) ;
		    if( index_led < 2 )
			{
			  update7SEGa ( index_led ) ;
			  display7SEGa ( led_buffer [ index_led ] ) ;
			  index_led ++ ;
			}
			if( index_led >= 2 )
			{
			  index_led = 0;
			}
		}
		if(timer4_flag==1)
		{
			settimer4 (100) ;
			second -- ;
			if(second <= 0 )
			{
				status3 = auto_yellow;
				second = timer3/100;
			}
		   updateClockBuffer () ;
		}
		break;
	case auto_yellow :
		if (timer3_flag==1)
		{
			settimer3 (50) ;
		    if( index_led < 2 )
			{
			  update7SEGa ( index_led ) ;
			  display7SEGa ( led_buffer [ index_led ] ) ;
			  index_led ++ ;
			}
			if( index_led >= 2 )
			{
			  index_led = 0;
			}
		}
		if(timer4_flag==1)
		{
			settimer4 (100) ;
			second -- ;
			if(second <= 0 )
			{
				status3 = auto_red;
				second = timer1/100;
			}
		   updateClockBuffer () ;
		}
		break ;
	default : break ;
	}
}
