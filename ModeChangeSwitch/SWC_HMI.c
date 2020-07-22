/**
 *
 * \file SWC_HMI_Template.c
 * \brief Rte Component Template for AUTOSAR SWC: SWC_HMI
 *
 * \author Sprints AUTOSAR Authoring Tool (SAAT) v1.0.2
 * Generated on 7/22/2020 06:24 PM
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
	if(status==RTE_E_OK&&SeatModeBtn==AUTO)
	seatCtrlMode==RTE_MODE_SeatCtrlMode_AUTO;
	/* Mode Switch Points */
	(void)Rte_Switch_ppSeatCtrlMode_SeatCtrlMode(SeatCtrlMode);
	else if if(status==RTE_E_OK&&SeatModeBtn==MANUAL)
	seatCtrlMode==RTE_MODE_SeatCtrlMode_MANUAL;
	/* Mode Switch Points */
	(void)Rte_Switch_ppSeatCtrlMode_SeatCtrlMode(SeatCtrlMode);
	else 
		seatCtrlMode==RTE_MODE_SeatCtrlMode_INIT;
	/* Mode Switch Points */
	(void)Rte_Switch_ppSeatCtrlMode_SeatCtrlMode(SeatCtrlMode);
}

