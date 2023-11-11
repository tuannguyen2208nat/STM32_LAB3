/*
 * display2.c
 *
 *  Created on: Nov 11, 2023
 *      Author: tuann
 */

#include "display2.h"

 void update7SEGb ( int index )
  {
    switch ( index )
    {
    case 0:
	    HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, RESET);
	    HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, SET);
        break ;
    case 1:
	    HAL_GPIO_WritePin(en2_GPIO_Port,en2_Pin, SET);
	    HAL_GPIO_WritePin(en3_GPIO_Port,en3_Pin, RESET);
        break ;
    default : break ;
    }
  }


void display7SEGb(int index)
   {
   	switch (index)
   	{
   	case 0 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, RESET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, SET);
   	    break ;
   	case 1 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, SET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, SET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, SET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, SET);
   	    break;
   	case 2 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, SET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, RESET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, SET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	    break ;
   	case 3 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, SET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	    break ;
   	case 4 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, SET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, SET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   		break ;
   	case 5 :
   		HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   		HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, SET);
   		HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   		HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   		HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   		HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   		HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   		break ;
   	case 6 :
   	   	HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, SET);
   	   	HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	   	break;
   	case 7 :
   	   	HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, SET);
   	   	HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   	   	HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, SET);
   	   	HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, SET);
   	   	break;
   	case 8 :
   	   	HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	   	break;
   	case 9 :
   	   	HAL_GPIO_WritePin(chan2a_GPIO_Port,chan2a_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2b_GPIO_Port,chan2b_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2c_GPIO_Port,chan2c_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2d_GPIO_Port,chan2d_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2e_GPIO_Port,chan2e_Pin, SET);
   	   	HAL_GPIO_WritePin(chan2f_GPIO_Port,chan2f_Pin, RESET);
   	   	HAL_GPIO_WritePin(chan2g_GPIO_Port,chan2g_Pin, RESET);
   	   	break;
   	default : break;
   	}
   }

