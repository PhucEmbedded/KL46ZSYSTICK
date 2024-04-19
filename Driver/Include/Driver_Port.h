/*
 * Driver_Port.h
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_PORT_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_PORT_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_Port.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

/**
  \brief   Set Port for led
  \details Sets the port specific along MUX.
  \param [in]      port, pin specific number.
 */
void Port_Driver_config_LED(PORT_Type* port, uint8_t pin);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_PORT_H_ */
