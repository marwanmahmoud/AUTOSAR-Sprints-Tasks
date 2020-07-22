/**
 *
 * \file SWC_InclineSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_InclineSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/22/2020 05:26 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_InclineSensor.h"


/**
 *
 * Runnable InclineSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineSensor_GetPosition
 *
 */

void InclineSensor_GetPosition (Impl_SensorPositionType* POSITION)
{
	Std_ReturnType status;
	Impl_PositionReadingType position;

	/* Server Call Points */
	status = Rte_Call_rpIOGetIncline_IOGet(&position);
	if(position==0) POSITION=SENSOR_POSITION_STEP_0;
	else if (position >0&&position<=64) POSITION=SENSOR_POSITION_STEP_1;
	else if (position>64&&position<=192) POSITION=SENSOR_POSITION_STEP_2;
	else if (position>192&&position<=255) POSITION=SENSOR_POSITION_STEP_2;
	
}

