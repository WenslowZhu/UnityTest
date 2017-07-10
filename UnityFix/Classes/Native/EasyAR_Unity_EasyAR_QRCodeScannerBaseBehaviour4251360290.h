#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour366754298.h"

// EasyAR.BarCodeScanner
struct BarCodeScanner_t2116288692;
// EasyAR.CameraDevice
struct CameraDevice_t4053278953;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.QRCodeScannerBaseBehaviour
struct  QRCodeScannerBaseBehaviour_t4251360290  : public DeviceUserAbstractBehaviour_t366754298
{
public:
	// EasyAR.BarCodeScanner EasyAR.QRCodeScannerBaseBehaviour::BarCodeScanner
	BarCodeScanner_t2116288692 * ___BarCodeScanner_5;
	// EasyAR.CameraDevice EasyAR.QRCodeScannerBaseBehaviour::cameraDevice
	CameraDevice_t4053278953 * ___cameraDevice_6;

public:
	inline static int32_t get_offset_of_BarCodeScanner_5() { return static_cast<int32_t>(offsetof(QRCodeScannerBaseBehaviour_t4251360290, ___BarCodeScanner_5)); }
	inline BarCodeScanner_t2116288692 * get_BarCodeScanner_5() const { return ___BarCodeScanner_5; }
	inline BarCodeScanner_t2116288692 ** get_address_of_BarCodeScanner_5() { return &___BarCodeScanner_5; }
	inline void set_BarCodeScanner_5(BarCodeScanner_t2116288692 * value)
	{
		___BarCodeScanner_5 = value;
		Il2CppCodeGenWriteBarrier(&___BarCodeScanner_5, value);
	}

	inline static int32_t get_offset_of_cameraDevice_6() { return static_cast<int32_t>(offsetof(QRCodeScannerBaseBehaviour_t4251360290, ___cameraDevice_6)); }
	inline CameraDevice_t4053278953 * get_cameraDevice_6() const { return ___cameraDevice_6; }
	inline CameraDevice_t4053278953 ** get_address_of_cameraDevice_6() { return &___cameraDevice_6; }
	inline void set_cameraDevice_6(CameraDevice_t4053278953 * value)
	{
		___cameraDevice_6 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
