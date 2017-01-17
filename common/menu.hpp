#pragma once
//=====================================================================//
/*!	@file
	@brief	メニュー・クラス
			Copyright 2016,2017 Kunihito Hiramatsu
	@author	平松邦仁 (hira@rvf-rc45.net)
*/
//=====================================================================//
#include <cstdint>

namespace graphics {

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	/*!
		@brief	ビットマップ描画クラス
		@param[in]	MONOG	モノクロ・グラフィックス・クラス
	*/
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	template <class MONOG>
	class menu {

		MONOG&	monog_;


	public:
		//-----------------------------------------------------------------//
		/*!
			@brief	コンストラクター
		*/
		//-----------------------------------------------------------------//
		menu(MONOG& mg) : monog_(mg) { }



	};
}
