/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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


#include "stdint.h"
typedef volatile unsigned int vuint32_t ;
//register addresses
#define BASE_RCC    0x40021000
#define BASE_GPIOA   0x40010800
#define RCC_APB2ENR *(vuint32_t*)(BASE_RCC + 0x18)
#define GPIOA_CRH	  *(vuint32_t*)(BASE_GPIOA + 0x04)
#define GPIOA_ODR   *(vuint32_t*)(BASE_GPIOA + 0x0c)
typedef union ODR
{
	vuint32_t allbits;
	struct SBit_ODR
	{
		vuint32_t reserved:13;
		vuint32_t bit13:1;
	}bit;
}R_ODR_t;

int main(void)
{
	int i;
	RCC_APB2ENR|=1<<2;
	GPIOA_CRH &= 0xff0fffff ;
	GPIOA_CRH |=1<<21;
	volatile R_ODR_t* pODR = (volatile R_ODR_t*)(BASE_GPIOA + 0x0c) ;
	while(1)
	{

		pODR->bit.bit13 = 1 ;
		for(i = 0; i<=6000; i++);
		pODR->bit.bit13 = 0 ;
		for(i = 0; i<=6000; i++);
	}

	return 0;
}
