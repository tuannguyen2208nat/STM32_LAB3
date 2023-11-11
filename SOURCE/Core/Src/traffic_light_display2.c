/*
 * traffic_light_display2.c
 *
 *  Created on: Nov 11, 2023
 *      Author: tuann
 */
#include "traffic_light_display2.h"

int second2=0;
int index_led2=0;
int led_buffer2[2] = {0 , 0};

void updateClockBuffer2 ()
  {
	  int second_tens=second2/10;
	  int second_ones=second2%10;

	  led_buffer2[0] = second_tens;
	  led_buffer2[1] = second_ones;
  }

void display_traffic2()
{
	switch (status4)
	{
	case INIT :
	second2=timer2/100;
	updateClockBuffer2 ();
    status4=auto_green;
    settimer5(50);
    settimer6(100);
		break;
	case auto_red :
		if (timer5_flag==1)
		{
			settimer5 (50) ;
		    if( index_led2 < 2 )
			{
			  update7SEGb ( index_led2 ) ;
			  display7SEGb ( led_buffer2 [ index_led2 ] ) ;
			  index_led2 ++ ;
			}
			if( index_led2 >= 2 )
			{
			  index_led2 = 0;
			}
		}
		if(timer6_flag==1)
		{
			settimer6 (100) ;
			second2 -- ;
			if(second2 <= 0 )
			{
				status4 = auto_green;
				second2 = timer2/100;
			}
		   updateClockBuffer2 () ;
		}
		break ;
	case auto_green :
		if (timer5_flag==1)
		{
			settimer5 (50) ;
		    if( index_led2 < 2 )
			{
			  update7SEGb ( index_led2 ) ;
			  display7SEGb ( led_buffer2 [ index_led2 ] ) ;
			  index_led2 ++ ;
			}
			if( index_led2 >= 2 )
			{
			  index_led2 = 0;
			}
		}
		if(timer6_flag==1)
		{
			settimer6 (100) ;
			second2 -- ;
			if(second2 <= 0 )
			{
				status4 = auto_yellow;
				second2 = timer3/100;
			}
		   updateClockBuffer2 () ;
		}
		break;
	case auto_yellow :
		if (timer5_flag==1)
		{
			settimer5 (50) ;
		    if( index_led2 < 2 )
			{
			  update7SEGb ( index_led2 ) ;
			  display7SEGb ( led_buffer2 [ index_led2 ] ) ;
			  index_led2 ++ ;
			}
			if( index_led2 >= 2 )
			{
			  index_led2 = 0;
			}
		}
		if(timer6_flag==1)
		{
			settimer6 (100) ;
			second2 -- ;
			if(second2 <= 0 )
			{
				status4 = auto_red;
				second2 = timer1/100;
			}
		   updateClockBuffer2 () ;
		}
		break ;
	default : break ;
	}
}
