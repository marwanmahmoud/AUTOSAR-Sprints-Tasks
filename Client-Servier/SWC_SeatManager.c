/**
 *
 * \file SWC_SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/21/2020 06:58 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatManager.h"


/**
 *
 * Runnable SeatManager_SetHeight
 *
 * Triggered By:
 *
 */

void SeatManager_SetHeight (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType step;

	/* Server Call Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	if(statues==RTE_E_OK&HeightBtnState==MULTI_STATE_BTN_PLUS)
		 (void) Rte_Call_rpHeightMotor_Opr_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&HeightBtnState==MULTI_STATE_BTN_MINUS)
		   (void) Rte_Call_rpHeightMotor_Opr_Move(MOTOR_STEP_MINUS);
	
	
	
}


/**
 *
 * Runnable SeatManager_SetIncline
 *
 * Triggered By:
 *
 */

void SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType step;

	/* Server Call Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	if(statues==RTE_E_OK&inclineBtnState==MULTI_STATE_BTN_PLUS)
		 (void) Rte_Call_rpInclineMotor_Opr_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&inclineBtnState==MULTI_STATE_BTN_MINUS)
		   (void) Rte_Call_rpInclinetMotor_Opr_Move(MOTOR_STEP_MINUS);
	
}


/**
 *
 * Runnable SeatManager_SetSlide
 *
 * Triggered By:
 *
 */

void SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	Impl_StepMotorStepType step;

	/* Server Call Points */
	status = Rte_Read_rpSeatCtrlBtns_HeightBtnState(&HeightBtnState);
	if(statues==RTE_E_OK&SlideBtnState==MULTI_STATE_BTN_PLUS)
		 (void) Rte_Call_rpSlideMotor_Opr_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&SlideBtnState==MULTI_STATE_BTN_MINUS)
		   (void) Rte_Call_rpSLideMotor_Opr_Move(MOTOR_STEP_MINUS);
	
}

