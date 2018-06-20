#pragma once
//=====================================================================//
/*!	@file
	@brief	RX65N/RX651 DRW2D マネージャー
    @author 平松邦仁 (hira@rvf-rc45.net)
	@copyright	Copyright (C) 2018 Kunihito Hiramatsu @n
				Released under the MIT license @n
				https://github.com/hirakuni45/RX/blob/master/LICENSE
*/
//=====================================================================//
#include "RX65x/drw2d.hpp"

namespace device {

	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	/*!
		@brief  DRW2D 制御／マネージャー
		@param[in]	DRW		DRW2D クラス
	*/
	//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
	template <class DRW>
	class drw2d_mgr {


	public:
		//-----------------------------------------------------------------//
		/*!
			@brief	コンストラクタ
		*/
		//-----------------------------------------------------------------//
		drw2d_mgr() noexcept
		{ }


		//-----------------------------------------------------------------//
		/*!
			@brief	ハードウェアーバージョンを取得
			@return ハードウェアーバージョン
		*/
		//-----------------------------------------------------------------//
		uint16_t get_version() const noexcept { return DRW::HWVER.REV(); }


		//-----------------------------------------------------------------//
		/*!
			@brief	開始
			@return 成功なら「true」
		*/
		//-----------------------------------------------------------------//
		bool start() noexcept
		{


			return true;
		}

	};
}