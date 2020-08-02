#include "Rte_SWC_HMI.h"
*----------------------------Static function-------------*
static Impl_MultiStateBtnType btn_state_map (uint8 value)
{
	Impl_MultiStateBtnType state;
	if(vlaue==1)
		state= MULTI_STATE_BTN_MINUS;
	else if (value==2)
		satet=MULTI_STATE_BTN_PLUS;
	else 
		state=MULTI_STATE_BTN_INIT;
	
	return state;
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
	Impl_MultiStateBtnType HeightBtnState;
	Impl_MultiStateBtnType SlideBtnState;
	Impl_MultiStateBtnType inclineBtnState;
	uint8 Height;
	uint8 Incline;
	uint8 Slide;
	bool Isupdated;
	/* Data Receive Points */
	status = Rte_Read_rpSeatCtrlData_Height(&Height);
	Isupdated =Rte_Isupdated_rpSeatCtrlData_Height();
	if(status==RTE_E_OK&Isupdated==1)
		HeightBtnState= btn_state_map(Height);
	status = Rte_Read_rpSeatCtrlData_Incline(&Incline);
	Isupdated =Rte_Isupdated_rpSeatCtrlData_Incline();
	if(status==RTE_E_OK&Isupdated==1)
		inclineBtnState= btn_state_map(Incline);
	status = Rte_Read_rpSeatCtrlData_Slide(&Slide);
	Isupdated =Rte_Isupdated_rpSeatCtrlData_Slide();
	if(status==RTE_E_OK&Isupdated==1)
		SlideBtnState= btn_state_map(Slide);

	/* Data Send Points */
	status = Rte_Write_ppSeatCtrlBtns_HeightBtnState(HeightBtnState);
	status = Rte_Write_ppSeatCtrlBtns_SlideBtnState(SlideBtnState);
	status = Rte_Write_ppSeatCtrlBtns_inclineBtnState(inclineBtnState);
	
	
	
}
