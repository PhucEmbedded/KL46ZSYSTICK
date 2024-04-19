/*
 * SRC_HAL_Gpio.c
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_Gpio.h>

void GPIO_HAL_config_pin(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PDDR = GPIO_PDDR_PDD(pin);
}

void GPIO_HAL_config_Toggle(GPIO_Type* gpio, uint32_t pin)
{
	gpio->PTOR = GPIO_PTOR_PTTO(pin);
}
