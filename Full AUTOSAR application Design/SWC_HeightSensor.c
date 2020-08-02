/**
 *
 * \file SWC_HeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/25/2020 04:13 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HeightSensor.h"


/**
 *
 * Runnable HeightSensor_GetPosition
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppHeightSensor_GetPosition
 *
 */

void HeightSensor_GetPosition (Impl_SensorPositionType* POSITION)
{
	Std_ReturnType status;
	Impl_PositionReadingType position;

	/* Server Call Points */
	status = Rte_Call_rpIOGetHeight_IOGet(&position);
	if (position==0)
	{
		POSITION=SENSOR_POSITION_STEP_0;
	}
	
	else if (position>0&&position<=64)
		POSITION=SENSOR_POSITION_STEP_1;
	else if (position>64&&position<=192)
		POSITION=SENSOR_POSITION_STEP_2;
	else
		POSITION=SENSOR_POSITION_STEP_3;
	
	
	
}