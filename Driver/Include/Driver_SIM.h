/*
 * Driver_SIM.h
 *
 *  Created on: Mar 2, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_SIM_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_SIM_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_SIM.h>

/*******************************************************************************
 * Declaration
 ******************************************************************************/

/**
  \brief   Set SIM
  \details Sets clock for SIM.
  \param [in]      SIM specific number.
 */
void SIM_Driver_config_clock(SIM_Type* sim);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_SIM_H_ */
