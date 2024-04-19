/*
 * SRC_Driver_SIM.c
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#include<Driver/Include/Driver_SIM.h>

void SIM_Driver_config_clock(SIM_Type* sim)
{
	if(sim == SIM)
	{
		SIM_HAL_config_clock(sim);
	}
	else
	{

	}
}
