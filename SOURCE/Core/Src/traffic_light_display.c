/*
 * traffic_light_display.c
 *
 *  Created on: Nov 11, 2023
 *      Author: tuann
 */


#include "traffic_light_display.h"

int second=0;
int second2=0;
int index_led=0;
int index_led2=0;
int led_buffer[2] = {0 , 0};
int led_buffer2[2] = {0 , 0};

void updateClockBuffer ()
  {
	  int second_tens=second/10;
	  int second_ones=second%10;

	  led_buffer[0] = second_tens;
	  led_buffer[1] = second_ones;
  }

void updateClockBuffer2 ()
  {
	  int second_tens=second2/10;
	  int second_ones=second2%10;

	  led_buffer2[0] = second_tens;
	  led_buffer2[1] = second_ones;
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
				updateClockBuffer () ;
				break ;
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
				updateClockBuffer2 () ;
				break ;
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

void display_traffic()
{
	display_traffic1();
	display_traffic2();
}
