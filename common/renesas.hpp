#pragma once
//=====================================================================//
/*!	@file
	@brief	ルネサス RX 選択
    @author 平松邦仁 (hira@rvf-rc45.net)
	@copyright	Copyright (C) 2016, 2018 Kunihito Hiramatsu @n
				Released under the MIT license @n
				https://github.com/hirakuni45/RX/blob/master/LICENSE
*/
//=====================================================================//
#include "common/byte_order.h"
#include "common/vect.h"
#include "common/delay.hpp"
#include "common/device.hpp"

#include "RX600/port.hpp"
#include "RX600/bus.hpp"

#if defined(SIG_RX63T)
#include "RX600/cmt.hpp"
#include "RX63T/system.hpp"
#include "RX63T/sci.hpp"
#include "RX63T/power_cfg.hpp"

#elif defined(SIG_RX24T)
#include "RX24T/system.hpp"
#include "RX24T/system_io.hpp"
#include "RX24T/mtu3.hpp"
#include "RX24T/poe3.hpp"
#include "RX600/cmt.hpp"
#include "RX24T/sci.hpp"
#include "RX24T/s12ad.hpp"
#include "RX24T/adc_io.hpp"
#include "RX24T/da.hpp"
#include "RX600/cmpc.hpp"
#include "RX24T/flash.hpp"
#include "RX24T/flash_io.hpp"

#elif defined(SIG_RX64M) || defined(SIG_RX71M)
#include "RX600/system.hpp"
#include "RX600/system_io.hpp"
#include "RX600/dmac.hpp"
#include "RX600/exdmac.hpp"
#include "RX600/mpc.hpp"
#include "RX600/tpu.hpp"
#include "RX600/cmt.hpp"
#include "RX600/cmtw.hpp"
#include "RX600/mtu3.hpp"
#include "RX600/sci.hpp"
#include "RX600/scif.hpp"
#include "RX600/can.hpp"
#include "RX600/qspi.hpp"
#include "RX600/s12adc.hpp"
#include "RX600/adc_io.hpp"
#include "RX600/r12da.hpp"
#include "RX600/dac_out.hpp"
#include "RX600/sdram.hpp"
#include "RX600/etherc.hpp"
#include "RX600/edmac.hpp"
#include "RX600/usb.hpp"
#include "RX600/rtc.hpp"
#include "RX600/rtc_io.hpp"
#include "RX600/wdta.hpp"
#include "RX600/flash.hpp"
#include "RX600/flash_io.hpp"
#include "RX600/ether_io.hpp"
#include "RX600/ssi.hpp"
#include "RX600/src.hpp"
#include "RX600/sdhi.hpp"
#include "RX600/sdhi_io.hpp"
#include "RX600/standby_ram.hpp"
#include "RX600/ssi_io.hpp"
#include "RX600/dmac_mgr.hpp"

#elif defined(SIG_RX65N)
#include "RX600/system.hpp"
#include "RX600/system_io.hpp"
#include "RX600/dmac.hpp"
#include "RX600/exdmac.hpp"
#include "RX600/mpc.hpp"
#include "RX600/tpu.hpp"
#include "RX600/cmt.hpp"
#include "RX600/cmtw.hpp"
#include "RX600/mtu3.hpp"
#include "RX600/sci.hpp"
#include "RX600/scif.hpp"
#include "RX600/can.hpp"
#include "RX600/qspi.hpp"
#include "RX65x/s12adf.hpp"
#include "RX600/adc_io.hpp"
#include "RX600/r12da.hpp"
#include "RX600/dac_out.hpp"
#include "RX600/sdram.hpp"
#include "RX600/etherc.hpp"
#include "RX600/edmac.hpp"
#include "RX600/usb.hpp"
#include "RX600/rtc.hpp"
#include "RX600/rtc_io.hpp"
#include "RX600/wdta.hpp"
#include "RX600/flash.hpp"
#include "RX600/flash_io.hpp"
#include "RX600/ether_io.hpp"
#include "RX600/sdhi.hpp"
#include "RX600/sdhi_io.hpp"
#include "RX600/standby_ram.hpp"
#include "RX65x/glcdc.hpp"
#include "RX65x/glcdc_io.hpp"
#include "RX65x/drw2d.hpp"
#include "RX65x/drw2d_mgr.hpp"
#include "RX600/dmac_mgr.hpp"

#elif defined(SIG_RX66T)
#include "RX600/system.hpp"
#include "RX600/system_io.hpp"
#include "RX600/dmac.hpp"
#include "RX600/mpc.hpp"
#include "RX600/cmt.hpp"
#include "RX600/mtu3.hpp"
#include "RX600/sci.hpp"
#include "RX600/can.hpp"
// #include "RX65x/s12adf.hpp"
// #include "RX600/adc_io.hpp"
#include "RX600/r12da.hpp"
#include "RX600/usb.hpp"
#include "RX600/wdta.hpp"
#include "RX600/flash.hpp"
#include "RX600/flash_io.hpp"
#include "RX600/cmpc.hpp"

#else
#  error "renesas.hpp: Requires SIG_XXX to be defined"
#endif

#include "RX600/dtc.hpp"
#include "RX600/gpt.hpp"
#include "RX600/tmr.hpp"
#include "RX600/riic.hpp"
#include "RX600/rspi.hpp"
#include "RX600/crc.hpp"
#include "RX600/mpu.hpp"
#include "RX600/doc.hpp"
