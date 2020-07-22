/**
 *
 * \file SWC_WeightSensor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_WeightSensor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/22/2020 05:36 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_WeightSensor.h"


/**
 *
 * Runnable WeightSensor_GetWeight
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppWeightSensor_GetWeight
 *
 */

void WeightSensor_GetWeight (Impl_SensorWeightType* WEIGHT)
{
	Std_ReturnType status;
	Impl_WeightReadingType weight;

	/* Server Call Points */
	status = Rte_Call_rpIOGetweight_IOGet(&weight);
	WEIGHT = (Impl_SensorWeightType)(weight/100);
	
}

