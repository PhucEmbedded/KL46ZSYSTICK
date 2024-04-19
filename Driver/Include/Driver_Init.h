/*
 * Driver_Init.h
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<Driver/Include/Driver_Gpio.h>
#include<Driver/Include/Driver_Port.h>
#include<Driver/Include/Driver_SIM.h>
#include<Driver/Include/Driver_Systick.h>

#define GREEN 5
#define RED 29
#define GREEN_GPIO 1<<5
#define RED_GPIO 1<<29

/*******************************************************************************
 * Declaration
 ******************************************************************************/

void Driver_Init(void);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_INIT_H_ */
