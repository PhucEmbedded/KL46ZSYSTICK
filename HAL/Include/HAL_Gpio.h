/*
 * HAL_Gpio.h
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_HAL_INCLUDE_HAL_GPIO_H_
#define SOURCES_HAL_INCLUDE_HAL_GPIO_H_

#include<MKL46Z4.h>

void GPIO_HAL_config_pin(GPIO_Type* gpio, uint32_t pin);

void GPIO_HAL_config_Toggle(GPIO_Type* gpio, uint32_t pin);

#endif /* SOURCES_HAL_INCLUDE_HAL_GPIO_H_ */
