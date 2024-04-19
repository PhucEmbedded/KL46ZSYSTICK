/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file blink LED for systemtick
 * @author Lai The Phuc  <ltphuc2022@gmail.com>
 * @brief blink LED for systemtick to the green led 0.5s, red led 1s
 * @version 0.1
 * @date 2024-03-09
 *
 * @copyright Copyright (c) 2024
 *
 */

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include "Driver/Include/Driver_Init.h"

/*******************************************************************************
 * Definition
 ******************************************************************************/

/* function toggle green led */
void GREEN_LED_Toggle(void)
{
	GPIO_Driver_config_Toggle(GPIOD, GREEN_GPIO);
}

/* function toggle red led */
void RED_LED_Toggle(void)
{
	GPIO_Driver_config_Toggle(GPIOE, RED_GPIO);
}

/* systick timer interrupt */
void SysTick_Handler(void)
{
	uint8_t index = 0;

	for(index = 0; index < MAX; index ++)
	{
			sw_Timer_Array[index].currentValue --;
	}
}

/*******************************************************************************
 * Code
 ******************************************************************************/

int main(void)
{
	/* Write your code here */
	uint8_t index = 0;

    /* led init */
	Driver_Init();

	/* NVIC interrupt */
	NVIC_Interrupt();

	Systick_Driver_Init();

	/*  */
    Driver_Timer_Set_Alam(SYSTICK_HAFT_SECOND, 0);

    Driver_Timer_Set_Alam(SYSTICK_ONE_SECOND, 1);

    /*  */
    for (index = 0; index < MAX; index ++)
    {
        timer_Enable(index);
    }

    while(1)
    {
    	if(sw_Timer_Array[0].en && sw_Timer_Array[0].currentValue == sw_Timer_Array[0].loadValue)
    	{
    		timer_Register_Callback(GREEN_LED_Toggle, 0);
    		callback_Function(0);
    		sw_Timer_Array[0].currentValue = SYSTICK_HAFT_SECOND;
    	}
    	else if(sw_Timer_Array[1].en && sw_Timer_Array[1].currentValue == sw_Timer_Array[1].loadValue)
    	{
    		timer_Register_Callback(RED_LED_Toggle, 1);
    		callback_Function(1);
    		sw_Timer_Array[1].currentValue = SYSTICK_ONE_SECOND;;
    	}
    	else
    	{

    	}
    }

    /* Never leave main */
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
