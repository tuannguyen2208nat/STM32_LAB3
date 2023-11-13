/*
 * display.c
 *
 *  Created on: Nov 11, 2023
 *      Author: tuann
 */
#include "display1.h"

 void update7SEGa ( int index )
  {
    switch ( index )
    {
    case 0:
	    HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, RESET);
	    HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, SET);
        break ;
    case 1:
	    HAL_GPIO_WritePin(en0_GPIO_Port,en0_Pin, SET);
	    HAL_GPIO_WritePin(en1_GPIO_Port,en1_Pin, RESET);
        break ;
    default : break ;
    }
  }

 void display7SEGa(int index)
  {
  	switch (index)
  	{
  	case 0 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, RESET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, SET);
  	    break ;
  	case 1 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, SET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, SET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, SET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, SET);
  	    break;
  	case 2 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, SET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, RESET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, SET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	    break ;
  	case 3 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, SET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	    break ;
  	case 4 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, SET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, SET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  		break ;
  	case 5 :
  		HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  		HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, SET);
  		HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  		HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  		HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  		HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  		HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  		break ;
  	case 6 :
  	  	HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, SET);
  	  	HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	  	break ;
  	case 7 :
  	  	HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, SET);
  	  	HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  	  	HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, SET);
  	  	HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, SET);
  	  	break ;
  	case 8 :
  	  	HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	  	break ;
  	case 9 :
  	  	HAL_GPIO_WritePin(chan1a_GPIO_Port,chan1a_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1b_GPIO_Port,chan1b_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1c_GPIO_Port,chan1c_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1d_GPIO_Port,chan1d_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1e_GPIO_Port,chan1e_Pin, SET);
  	  	HAL_GPIO_WritePin(chan1f_GPIO_Port,chan1f_Pin, RESET);
  	  	HAL_GPIO_WritePin(chan1g_GPIO_Port,chan1g_Pin, RESET);
  	  	break ;
  	default : break;
  	}
  }
