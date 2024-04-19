/*
 * SRC_HAL_Port.c
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_Port.h>

void Port_HAL_config_LED(PORT_Type* port, uint8_t pin)
{
	port->PCR[pin] &= ~PORT_PCR_MUX_MASK;
	port->PCR[pin] |= PORT_PCR_MUX(1);
}
