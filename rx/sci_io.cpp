//=====================================================================//
/*!	@file
	@brief	RX62N, RX621 グループ・SCI I/O 制御 @n
			Copyright 2013 Kunihito Hiramatsu
	@author	平松邦仁 (hira@rvf-rc45.net)
*/
//=====================================================================//
#include "sci_io.hpp"

namespace device {

#ifndef DEV_64
	sci_task_t sci_task_[4];
#else
	sci_task_t sci_task_[2];
#endif

	template <class SCI, uint32_t idx>
	void recv_task_()
	{
		bool err = false;
		if(SCI::SSR.ORER()) {	///< 受信オーバランエラー状態確認
			SCI::SSR = 0x00;	///< 受信オーバランエラークリア
			err = true;
		}
		///< フレーミングエラー/パリティエラー状態確認
		if(SCI::SSR() & (SCI::SSR.FER.b() | SCI::SSR.PER.b())) {
			err = true;
		}
		if(!err) sci_task_[idx].recv->put(SCI::RDR());
	}


	template <class SCI, uint32_t idx>
	void send_task_()
	{
		SCI::TDR = sci_task_[idx].send->get();
		if(sci_task_[idx].send->length() == 0) {
			SCI::SCR.TEIE = 0;
		}
	}


	//-----------------------------------------------------------------//
	/*!
		@brief	SCI0_RXI 割り込み処理
	*/
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI0_RXI_()
	{
		recv_task_<SCI0, 0>();
	}


	//-----------------------------------------------------------------//
	/*!
		@brief	SCI0_TEI 割り込み処理
	 */
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI0_TEI_()
	{
		send_task_<SCI0, 0>();
	}


	//-----------------------------------------------------------------//
	/*!
		@brief	SCI1_RXI 割り込み処理
	*/
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI1_RXI_()
	{
		recv_task_<SCI1, 1>();
	}


	//-----------------------------------------------------------------//
	/*!
		@brief	SCI1_TEI 割り込み処理
	 */
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI1_TEI_()
	{
		send_task_<SCI1, 1>();
	}

#ifndef DEV_64
	//-----------------------------------------------------------------//
	/*!
		@brief	SCI2_RXI 割り込み処理
	*/
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI2_RXI_()
	{
		recv_task_<SCI2, 2>();
	}


	//-----------------------------------------------------------------//
	/*!
		@brief	SCI2_TEI 割り込み処理
	 */
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI2_TEI_()
	{
		send_task_<SCI2, 2>();
	}


	//-----------------------------------------------------------------//
	/*!
		@brief	SCI3_RXI 割り込み処理
	*/
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI3_RXI_()
	{
		recv_task_<SCI3, 3>();
	}


	//-----------------------------------------------------------------//
	/*!
		@brief	SCI3_TEI 割り込み処理
	 */
	//-----------------------------------------------------------------//
	INTERRUPT_FUNC void task_SCI3_TEI_()
	{
		send_task_<SCI3, 3>();
	}
#endif
}
