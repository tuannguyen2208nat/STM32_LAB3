/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define led_red1_Pin GPIO_PIN_0
#define led_red1_GPIO_Port GPIOA
#define led_green1_Pin GPIO_PIN_1
#define led_green1_GPIO_Port GPIOA
#define led_yellow1_Pin GPIO_PIN_2
#define led_yellow1_GPIO_Port GPIOA
#define led_red2_Pin GPIO_PIN_3
#define led_red2_GPIO_Port GPIOA
#define led_green2_Pin GPIO_PIN_4
#define led_green2_GPIO_Port GPIOA
#define led_yellow2_Pin GPIO_PIN_5
#define led_yellow2_GPIO_Port GPIOA
#define en0_Pin GPIO_PIN_7
#define en0_GPIO_Port GPIOA
#define chan1a_Pin GPIO_PIN_0
#define chan1a_GPIO_Port GPIOB
#define chan1b_Pin GPIO_PIN_1
#define chan1b_GPIO_Port GPIOB
#define chan1c_Pin GPIO_PIN_2
#define chan1c_GPIO_Port GPIOB
#define chan2d_Pin GPIO_PIN_10
#define chan2d_GPIO_Port GPIOB
#define chan2e_Pin GPIO_PIN_11
#define chan2e_GPIO_Port GPIOB
#define chan2f_Pin GPIO_PIN_12
#define chan2f_GPIO_Port GPIOB
#define chan2g_Pin GPIO_PIN_13
#define chan2g_GPIO_Port GPIOB
#define en1_Pin GPIO_PIN_8
#define en1_GPIO_Port GPIOA
#define en2_Pin GPIO_PIN_9
#define en2_GPIO_Port GPIOA
#define en3_Pin GPIO_PIN_10
#define en3_GPIO_Port GPIOA
#define button1_Pin GPIO_PIN_12
#define button1_GPIO_Port GPIOA
#define button2_Pin GPIO_PIN_13
#define button2_GPIO_Port GPIOA
#define button3_Pin GPIO_PIN_14
#define button3_GPIO_Port GPIOA
#define chan1d_Pin GPIO_PIN_3
#define chan1d_GPIO_Port GPIOB
#define chan1e_Pin GPIO_PIN_4
#define chan1e_GPIO_Port GPIOB
#define chan1f_Pin GPIO_PIN_5
#define chan1f_GPIO_Port GPIOB
#define chan1g_Pin GPIO_PIN_6
#define chan1g_GPIO_Port GPIOB
#define chan2a_Pin GPIO_PIN_7
#define chan2a_GPIO_Port GPIOB
#define chan2b_Pin GPIO_PIN_8
#define chan2b_GPIO_Port GPIOB
#define chan2c_Pin GPIO_PIN_9
#define chan2c_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
