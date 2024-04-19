/*
 * Driver_Systick.h
 *
 *  Created on: Mar 3, 2024
 *      Author: phucl
 */

#ifndef SOURCES_DRIVER_INCLUDE_DRIVER_SYSTICK_H_
#define SOURCES_DRIVER_INCLUDE_DRIVER_SYSTICK_H_

/*******************************************************************************
 * Includes
 ******************************************************************************/

#include<HAL/Include/HAL_Systick.h>

#define MAX 2
#define SYSTICK_HAFT_SECOND 499
#define SYSTICK_ONE_SECOND 999

typedef void (*callback)(void);

typedef struct
{
	uint32_t currentValue;
	uint32_t loadValue;
	callback fpointer;
	uint8_t en;
}sw_timer;

sw_timer sw_Timer_Array[MAX];

/*******************************************************************************
 * Declaration
 ******************************************************************************/

/**
  \brief   Set Port for led
  \details Set up systick timer.
 */
void Systick_Driver_Init(void);

/**
  \brief   Set Port for led
  \details Set interrupt for Systick timer.
 */
void NVIC_Interrupt(void);

/**
  \brief   Set Port for led
  \details Set up software timer in struct.
  \param [in]      loadval, index specific number.
 */
void Driver_Timer_Set_Alam(uint32_t loadVal, uint8_t index);

/**
  \brief   Set Port for led
  \details turn on software timer.
  \param [in]      index specific number.
 */
void timer_Enable(uint8_t index);

/**
  \brief   Set Port for led
  \details turn off software timer.
  \param [in]      index specific number.
 */
void timer_Disable(uint8_t index);

/**
  \brief   Set Port for led
  \details Set up callback function registration.
  \param [in]      status, index specific number.
 */
void timer_Register_Callback(callback status, uint8_t index);

/**
  \brief   Set Port for led
  \details Sets callback function.
  \param [in]      index specific number.
 */
void callback_Function(uint8_t index);

#endif /* SOURCES_DRIVER_INCLUDE_DRIVER_SYSTICK_H_ */
