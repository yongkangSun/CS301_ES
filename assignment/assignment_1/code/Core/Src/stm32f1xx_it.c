/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f1xx_it.c
  * @brief   Interrupt Service Routines.
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

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f1xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "string.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */
uint8_t rxBuffer[20];
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/
extern UART_HandleTypeDef huart1;
/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M3 Processor Interruption and Exception Handlers          */
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */
  while (1)
  {
  }
  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Memory management fault.
  */
void MemManage_Handler(void)
{
  /* USER CODE BEGIN MemoryManagement_IRQn 0 */

  /* USER CODE END MemoryManagement_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
    /* USER CODE END W1_MemoryManagement_IRQn 0 */
  }
}

/**
  * @brief This function handles Prefetch fault, memory access fault.
  */
void BusFault_Handler(void)
{
  /* USER CODE BEGIN BusFault_IRQn 0 */

  /* USER CODE END BusFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_BusFault_IRQn 0 */
    /* USER CODE END W1_BusFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Undefined instruction or illegal state.
  */
void UsageFault_Handler(void)
{
  /* USER CODE BEGIN UsageFault_IRQn 0 */

  /* USER CODE END UsageFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_UsageFault_IRQn 0 */
    /* USER CODE END W1_UsageFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVCall_IRQn 0 */

  /* USER CODE END SVCall_IRQn 0 */
  /* USER CODE BEGIN SVCall_IRQn 1 */

  /* USER CODE END SVCall_IRQn 1 */
}

/**
  * @brief This function handles Debug monitor.
  */
void DebugMon_Handler(void)
{
  /* USER CODE BEGIN DebugMonitor_IRQn 0 */

  /* USER CODE END DebugMonitor_IRQn 0 */
  /* USER CODE BEGIN DebugMonitor_IRQn 1 */

  /* USER CODE END DebugMonitor_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F1xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f1xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles EXTI line[9:5] interrupts.
  */
void EXTI9_5_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI9_5_IRQn 0 */

  /* USER CODE END EXTI9_5_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_5);
  /* USER CODE BEGIN EXTI9_5_IRQn 1 */

  /* USER CODE END EXTI9_5_IRQn 1 */
}

/**
  * @brief This function handles USART1 global interrupt.
  */
void USART1_IRQHandler(void)
{
  /* USER CODE BEGIN USART1_IRQn 0 */

  /* USER CODE END USART1_IRQn 0 */
  HAL_UART_IRQHandler(&huart1);
  /* USER CODE BEGIN USART1_IRQn 1 */
  HAL_UART_Receive_IT(&huart1, (uint8_t *)rxBuffer, 1);
  /* USER CODE END USART1_IRQn 1 */
}

/**
  * @brief This function handles EXTI line[15:10] interrupts.
  */
void EXTI15_10_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI15_10_IRQn 0 */

  /* USER CODE END EXTI15_10_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_15);
  /* USER CODE BEGIN EXTI15_10_IRQn 1 */

  /* USER CODE END EXTI15_10_IRQn 1 */
}

/* USER CODE BEGIN 1 */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	static unsigned char uRx_Data_1[1024] = {"LED0 is On\r\n"};
	static unsigned char uRx_Data_2[1024] = {"LED0 is Off\r\n"};
	static unsigned char uRx_Data_3[1024] = {"LED1 is On\r\n"};
	static unsigned char uRx_Data_4[1024] = {"LED1 is Off\r\n"};
	static unsigned char uLength_on = 12;
	static unsigned char uLength_off = 13;
	static unsigned int cnt_1 = 0;
	static unsigned int cnt_2 = 0;
	HAL_Delay(100);
	switch (GPIO_Pin)
	{
		case KEY0_Pin:
			if(HAL_GPIO_ReadPin(KEY0_GPIO_Port, KEY0_Pin) == GPIO_PIN_RESET) {
				HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
				if(cnt_1 == 0)
				{
					HAL_UART_Transmit(&huart1, uRx_Data_2, uLength_off, 0xffff);
					cnt_1 = 1;
				}
				else
				{
					HAL_UART_Transmit(&huart1, uRx_Data_1, uLength_on, 0xffff);
					cnt_1 = 0;
				}
			}
			break;
		case KEY1_Pin:
			if(HAL_GPIO_ReadPin(KEY1_GPIO_Port, KEY1_Pin) == GPIO_PIN_RESET) {
				HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
				if(cnt_2 == 0)
				{
					HAL_UART_Transmit(&huart1, uRx_Data_4, uLength_off, 0xffff);
					cnt_2 = 1;
				}
				else
				{
					HAL_UART_Transmit(&huart1, uRx_Data_3, uLength_on, 0xffff);
					cnt_2 = 0;
				}
			}
			break;
		default:
			break;
	}
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if(huart->Instance==USART1){
		static unsigned char uRx_Data[1024] = {0};
		static unsigned char test[1024] = {0};
		static unsigned char uLength = 0;
		if(rxBuffer[0] == '\n'){
			HAL_UART_Transmit(&huart1, uRx_Data, uLength, 0xffff);
			if (uRx_Data[6] == 'n' && uRx_Data[11] == '0') {
				HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_RESET);
				uLength = 0;
			}
			if (uRx_Data[6] == 'n' && uRx_Data[11] == '1') {
				HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
				uLength = 0;
			}
			if (uRx_Data[6] == 'f' && uRx_Data[12] == '0') {
				HAL_GPIO_WritePin(LED0_GPIO_Port, LED0_Pin, GPIO_PIN_SET);
				uLength = 0;
			}
			if (uRx_Data[6] == 'f' && uRx_Data[12] == '1') {
				HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
				uLength = 0;
			}
			uLength = 0;
		}else{
			uRx_Data[uLength] = rxBuffer[0];
			uLength++;
		}
	}
}
//
//void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
//{
//	if(huart->Instance==USART1)
//	{
//		static unsigned char uRx_Data[1024] = {0};
////		const char case_1[1024] = "Turn on LED0\r";
////		const char case_2[1024] = "Turn on LED1\r";
////		const char case_3[1024] = "Turn off LED0\r";
////		const char case_4[1024] = "Turn off LED1\r";
//		char uLength = 0;
//		if(rxBuffer[0] == '\n') {
//			HAL_UART_Transmit(&huart1, uRx_Data, uLength, 0xffff);
//			uLength = 0;
//
////			if(strcmp(&uRx_Data, case_1) == 0) {
////				HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
////				uLength = 0;
////			}
////			else if(strcmp(&uRx_Data, case_2) == 0) {
////				HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
////				uLength = 0;
////			}
////			else if(strcmp(&uRx_Data, case_3) == 0) {
////				HAL_GPIO_TogglePin(LED0_GPIO_Port, LED0_Pin);
////				uLength = 0;
////			}
////			else if(strcmp(&uRx_Data, case_4) == 0) {
////				HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
////				uLength = 0;
////			}
//		}
//		else
//		{
//			uRx_Data[uLength] = rxBuffer[0];
//			uLength++;
//		}
//	}
//}

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
