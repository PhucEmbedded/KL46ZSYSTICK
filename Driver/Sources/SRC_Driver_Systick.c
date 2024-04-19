/*
 * SRC_Driver_Systick.c
 *
 *  Created on: Mar 3, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_Systick.h>


void Systick_Driver_Init(void)
{
	Systick_HAL_Init();
}

void NVIC_Interrupt(void)
{
	NVIC_SetPriority(SysTick_IRQn, 3);
	NVIC_EnableIRQ(SysTick_IRQn);
}

void Driver_Timer_Set_Alam(uint32_t loadVal, uint8_t index)
{
		sw_Timer_Array[index].currentValue = loadVal;
		sw_Timer_Array[index].loadValue = 0;
		sw_Timer_Array[index].en = 0;
}

void timer_Enable(uint8_t index)
{
	sw_Timer_Array[index].en = 1;
}

void timer_Disable(uint8_t index)
{
	sw_Timer_Array[index].en = 0;
}

void timer_Register_Callback(callback status, uint8_t index)
{
		sw_Timer_Array[index].fpointer = status;
}

void callback_Function(uint8_t index)
{
	sw_Timer_Array[index].fpointer();
}
