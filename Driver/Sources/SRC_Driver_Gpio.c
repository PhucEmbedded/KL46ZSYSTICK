/*
 * SRC_Driver_Gpio.c
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_Gpio.h>

void GPIO_Driver_config_pin(GPIO_Type* gpio, uint32_t pin)
{
	if((pin >= 0x0U && pin <= 0xFFFFFFFF) && ((gpio == GPIOD) | (gpio == GPIOE)))
	{
		GPIO_HAL_config_pin(gpio, pin);
	}
	else
	{

	}
}

void GPIO_Driver_config_Toggle(GPIO_Type* gpio, uint32_t pin)
{
	if((pin >= 0x0U && pin <= 0xFFFFFFFF) && ((gpio == GPIOD) | (gpio == GPIOE)))
	{
		GPIO_HAL_config_Toggle(gpio, pin);
	}
	else
	{

	}
}
