/**
 *
 * \file SWC_SeatManager_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_SeatManager
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/21/2020 04:54 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_SeatManager.h"


/**
 *
 * Runnable RE_SeatManager_SetHeight
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_HeightBtnState
 *
 */

void RE_SeatManager_SetHeight (void)
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
 * Runnable RE_SeatManager_SetIncline
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_inclineBtnState
 *
 */

void RE_SeatManager_SetIncline (void)
{
	Std_ReturnType status;
	Impl_MultiStateBtnType inclineBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_inclineBtnState(&inclineBtnState);
	if(statues==RTE_E_OK&inclineBtnState==MULTI_STATE_BTN_PLUS)
		 Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&inclineBtnState==MULTI_STATE_BTN_MINUS)
		  Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
	
}


/**
 *
 * Runnable RE_SeatManager_SetSlide
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatCtrlBtns_SlideBtnState
 *
 */

void RE_SeatManager_SetSlide (void)
{
	Std_ReturnType status;
	Impl_MultiStateBtnType SlideBtnState;

	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlBtns_SlideBtnState(&SlideBtnState);
	if(statues==RTE_E_OK&SlideBtnState==MULTI_STATE_BTN_PLUS)
		 Rte_Call_rpHeightMotor_Move(MOTOR_STEP_PLUS);
	 else if (statues==RTE_E_OK&SlideBtnState==MULTI_STATE_BTN_MINUS)
		  Rte_Call_rpHeightMotor_Move(MOTOR_STEP_MINUS);
	
}

