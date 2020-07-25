/**
 *
 * \file SWC_HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/25/2020 04:13 PM
 *
 * For any inquiries: hassan.m.farahat@gmail.com
 *
 */

#include "Rte_SWC_HMI.h"


/**
 *
 * Runnable RE_HMI_Seat_Mode_Changed
 *
 * Triggered By:
 *  - DataReceivedEventImpl.DRE_rpSeatModeBtn_SeatModeBtn
 *
 */

void RE_HMI_Seat_Mode_Changed (void)
{
	Std_ReturnType status;
	Impl_SeatModeBtnType SeatModeBtn;
	uint8 SeatCtrlMode = RTE_MODE_SeatCtrlMode_INIT;

	/* Data Receive Points */
	status = Rte_Read_rpSeatModeBtn_SeatModeBtn(&SeatModeBtn);
	
	/* Mode Switch Points */
	status = Rte_Switch_ppSeatCtrlMode_SeatCtrlMode(SeatCtrlMode);
	
}


/**
 *
 * Runnable RE_HMI_MainFunction
 *
 * Triggered By:
 *  - TimingEventImpl.TE_RE_HMI_MainFunction_100ms
 *
 */

void RE_HMI_MainFunction (void)
{
	Std_ReturnType status;
	MultiStateBtnType HeightBtnState;
	MultiStateBtnType SlideBtnState;
	MultiStateBtnType InclineBtnState;
	uint8 DE_Height;
	uint8 DE_Slide;
	uint8 DE_Incline;

	/* Data Send Points */
	status = Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	status = Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
	status = Rte_Write_ppSeatCtrlBtns_InclineBtnState(InclineBtnState);
	
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_DE_Height(&DE_Height);
	status = Rte_Read_rpSeatCtrlData_DE_Slide(&DE_Slide);
	status = Rte_Read_rpSeatCtrlData_DE_Incline(&DE_Incline);
	
}

