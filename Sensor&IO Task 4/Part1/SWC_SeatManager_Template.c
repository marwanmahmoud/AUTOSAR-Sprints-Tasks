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
static Impl_StepMotorStepType AUTO_Adjuste (Impl_SensorPositionType POSITION,Impl_SensorWeightType WEIGHT)
{
	switch(POSITION)
	case SENSOR_POSITION_STEP_0:
	if(WEIGHT>60)
	{
		return MOTOR_STEP_PLUS
		
	}
	break;
	case SENSOR_POSITION_STEP_1
	if(WEIGHT>80)
	{
		return MOTOR_STEP_PLUS;
	}
	else if (WEIGHT<=80&&WEIGHT>=60)
	{
		/* DO Nothing*/
		
	}
	else {
		
		return MOTOR_STEP_MINUS;
	}
	break;
	case  SENSOR_POSITION_STEP_2:
	if (WEIGHT>100)
	{
		return MOTOR_STEP_PLUS;
	}
	else if (WEIGHT<=100&&WEIGHT>=80)
	{
		
		/*Do Nothing */
	}
	else 
	{
		
		return MOTOR_STEP_MINUS;
	}
	break;
	case  SENSOR_POSITION_STEP_3:
	if(WEIGHT<100)
	{
		return MOTOR_STEP_MINUS;
	}
	break; 
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
	status = Rte_Call_rpHeightSensor_GetPosition(&POSITION);
	status = Rte_Call_rpWeightSensor_GetWeight(&WEIGHT);
	step = AUTO_Adjuste(POSITION,WEIGHT);
   Rte_Call_rpHeightMotor_Move(step);
	
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
	status = Rte_Call_rpInclineSensor_GetPosition(&POSITION);
	status = Rte_Call_rpWeightSensor_GetWeight(&WEIGHT);
	step = AUTO_Adjuste(POSITION,WEIGHT);
	status = Rte_Call_rpInclineMotor_Move(step);
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
	status = Rte_Call_rpSlideSensor_GetPosition(&POSITION);
	status = Rte_Call_rpWeightSensor_GetWeight(&WEIGHT);
	step = AUTO_Adjuste(POSITION,WEIGHT);
	status = Rte_Call_rpSlideMotor_Move(step);
	
}
/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void SeatManager_SetHeight (void)
{
Std_ReturnType status;
	Impl_MultiStateBtnType HeightBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	if(statues==RTE_E_OK&HeightBtnState==MULTI_STATE_BTN_PLUS)
		 Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&HeightBtnState==MULTI_STATE_BTN_MINUS)
		  Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void SeatManager_SetSlide (void)
{
	td_ReturnType status;
	Impl_MultiStateBtnType inclineBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_inclineBtnState(&inclineBtnState);
	if(statues==RTE_E_OK&SlideBtnState==MULTI_STATE_BTN_PLUS)
		 Rte_Call_rpSlideMotor_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&inclineBtnState==MULTI_STATE_BTN_MINUS)
		  Rte_Call_rpSlideMotor_Move(MOTOR_STEP_MINUS);
	
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_InclineBtnState
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	Impl_MultiStateBtnType inclineBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_inclineBtnState(&inclineBtnState);
	if(statues==RTE_E_OK&inclineBtnState==MULTI_STATE_BTN_PLUS)
		 Rte_Call_rpInclineMotor_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&inclineBtnState==MULTI_STATE_BTN_MINUS)
		  Rte_Call_rpInlclineMotor_Move(MOTOR_STEP_MINUS);
	
}
