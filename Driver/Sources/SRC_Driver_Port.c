/*
 * SRC_Driver_Port.c
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_Port.h>

void Port_Driver_config_LED(PORT_Type* port, uint8_t pin)
{
	if((pin >= 0 && pin <= 31) && ((port == PORTD) | (port == PORTE)))
	{
		Port_HAL_config_LED(port, pin);
	}
	else
	{

	}
}
