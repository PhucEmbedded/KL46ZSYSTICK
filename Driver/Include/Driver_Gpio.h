/*
 * Driver_Gpio.h
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_Gpio.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

/**
  \brief   Set LED
  \details Sets gpio for LED
  \param [in]      gpio, pin specific number.
 */
void GPIO_Driver_config_pin(GPIO_Type* gpio, uint32_t pin);

/**
  \brief   Set Toggle
  \details Sets gpio for LED along Toggle
  \param [in]      gpio, pin specific number.
 */
void GPIO_Driver_config_Toggle(GPIO_Type* gpio, uint32_t pin);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_GPIO_H_ */
