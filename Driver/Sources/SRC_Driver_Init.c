/*
 * SRC_Driver_Init.c
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_Init.h>

void Driver_Init(void)
{
	SIM_Driver_config_clock(SIM);

	Port_Driver_config_LED(PORTD,GREEN);

	Port_Driver_config_LED(PORTE,RED);

	GPIO_Driver_config_pin(GPIOD, GREEN_GPIO);

	GPIO_Driver_config_pin(GPIOE, RED_GPIO);

	GPIO_Driver_config_Toggle(GPIOD, GREEN_GPIO);

	GPIO_Driver_config_Toggle(GPIOE, RED_GPIO);
}
