/*
 * SRC_HAL_SIM.c
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#include<HAL/Include/HAL_SIM.h>

void SIM_HAL_config_clock(SIM_Type* sim)
{
	sim->SCGC5 = SIM_SCGC5_PORTD(1) | SIM_SCGC5_PORTE(1);
}
