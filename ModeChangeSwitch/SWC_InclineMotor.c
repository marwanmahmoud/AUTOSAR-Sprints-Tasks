/**
 *
 * \file SWC_InclineMotor_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_InclineMotor
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/22/2020 05:18 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_InclineMotor.h"


/**
 *
 * Runnable InclineMotor_Move
 *
 * Triggered By:
 *  - OperationInvokedEventImpl.OIE_ppInclineMotor_Move
 *
 */

void InclineMotor_Move (Impl_StepMotorStepType step)
{
	Std_ReturnType status;

	/* Server Call Points */
	if(step==MOTOR_STEP_PLUS)
		status = Rte_Call_rpIOSetSlide_IOSetforword();
	else if (step==MOTOR_STEP_MINUS)
	status = Rte_Call_rpIOSetSlide_IOSetbackword();
	
}

