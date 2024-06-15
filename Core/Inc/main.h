/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
void MX_SPI1_Init(void);
extern SPI_HandleTypeDef hspi1;

extern UART_HandleTypeDef huart2;
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define btn_blue_Pin GPIO_PIN_0
#define btn_blue_GPIO_Port GPIOA
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define R1_Pin GPIO_PIN_7
#define R1_GPIO_Port GPIOE
#define R2_Pin GPIO_PIN_8
#define R2_GPIO_Port GPIOE
#define R3_Pin GPIO_PIN_9
#define R3_GPIO_Port GPIOE
#define R4_Pin GPIO_PIN_10
#define R4_GPIO_Port GPIOE
#define C1_Pin GPIO_PIN_11
#define C1_GPIO_Port GPIOE
#define C2_Pin GPIO_PIN_12
#define C2_GPIO_Port GPIOE
#define C3_Pin GPIO_PIN_13
#define C3_GPIO_Port GPIOE
#define C4_Pin GPIO_PIN_14
#define C4_GPIO_Port GPIOE
#define Bee_Pin GPIO_PIN_11
#define Bee_GPIO_Port GPIOD
#define LED_Green_Pin GPIO_PIN_12
#define LED_Green_GPIO_Port GPIOD
#define LED_Orange_Pin GPIO_PIN_13
#define LED_Orange_GPIO_Port GPIOD
#define LED_Red_Pin GPIO_PIN_14
#define LED_Red_GPIO_Port GPIOD
#define LED_Blue_Pin GPIO_PIN_15
#define LED_Blue_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */
typedef struct A_Card{
  struct A_Card *next;
  uint8_t data[5];
}card;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
