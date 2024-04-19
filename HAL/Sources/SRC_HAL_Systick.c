/*
 * SRC_HAL_Systick.c
 *
 *  Created on: Mar 3, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_Systick.h>

void Systick_HAL_Init(void)
{
	SysTick->CTRL = 0;
	SysTick->LOAD = SystemCoreClock/1000 - 1;
	SysTick->VAL = 0;
	SysTick->CTRL |= SysTick_CTRL_CLKSOURCE_Msk | SysTick_CTRL_TICKINT_Msk | SysTick_CTRL_ENABLE_Msk;
}
