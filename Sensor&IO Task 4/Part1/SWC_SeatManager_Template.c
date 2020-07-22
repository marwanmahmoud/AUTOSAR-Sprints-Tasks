/**
 *
 * \file SWC_SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/21/2020 11:37 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatManager.h"
-----------static function ---------
Impl_StepMotorStepType drive_motor(Impl_SensorPositionType position,Impl_SensorWeightType weight)
{
	
	
	
	
	
	
	
	
	
	
	
	
	
}

/**
 *
 * Runnable SeatManager_AutoHeight
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoHeight_200ms
 *
 */

void SeatManager_AutoHeight (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType step;
	Impl_SensorPositionType position;
	Impl_SensorWeightType weight;

	/* Server Call Points */
	status = Rte_Call_rpHeightMotor_Move(step);
	status = Rte_Call_rpHeightSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);
	
}


/**
 *
 * Runnable SeatManager_AutoIncline
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoIncline_200ms
 *
 */

void SeatManager_AutoIncline (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType step;
	Impl_SensorPositionType position;
	Impl_SensorWeightType weight;

	/* Server Call Points */
	status = Rte_Call_rpInclineMotor_Move(step);
	status = Rte_Call_rpInclineSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);
	
}


/**
 *
 * Runnable SeatManager_AutoSlide
 *
 * Triggered By:
 *  - TimingEventImpl.TE_SeatManager_AutoSlide_200ms
 *
 */

void SeatManager_AutoSlide (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType step;
	Impl_SensorPositionType position;
	Impl_SensorWeightType weight;

	/* Server Call Points */
	status = Rte_Call_rpSlideMotor_Move(step);
	status = Rte_Call_rpSlideSensor_GetPosition(&position);
	status = Rte_Call_rpWeightSensor_GetWeight(&weight);
	
}

