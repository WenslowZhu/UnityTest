#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour2172147305.h"
#include "EasyAR_Unity_EasyAR_CameraDeviceBaseBehaviour_Devi4223376611.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Boolean3825574718.h"

// EasyAR.CameraDevice
struct CameraDevice_t4053278953;
// EasyAR.CameraFrameStreamer
struct CameraFrameStreamer_t1453505805;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDeviceBaseBehaviour
struct  CameraDeviceBaseBehaviour_t2009432565  : public DeviceAbstractBehaviour_t2172147305
{
public:
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::CaptureWhenStart
	bool ___CaptureWhenStart_4;
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::RequestPlatformPermission
	bool ___RequestPlatformPermission_5;
	// EasyAR.CameraDeviceBaseBehaviour/DeviceType EasyAR.CameraDeviceBaseBehaviour::cameraDeviceType
	int32_t ___cameraDeviceType_6;
	// System.Int32 EasyAR.CameraDeviceBaseBehaviour::cameraIndex
	int32_t ___cameraIndex_7;
	// System.Boolean EasyAR.CameraDeviceBaseBehaviour::horizontalFlip
	bool ___horizontalFlip_8;
	// UnityEngine.Vector2 EasyAR.CameraDeviceBaseBehaviour::CameraSize
	Vector2_t2243707579  ___CameraSize_9;
	// System.Single EasyAR.CameraDeviceBaseBehaviour::CameraFPS
	float ___CameraFPS_10;
	// EasyAR.CameraDevice EasyAR.CameraDeviceBaseBehaviour::Device
	CameraDevice_t4053278953 * ___Device_11;
	// EasyAR.CameraFrameStreamer EasyAR.CameraDeviceBaseBehaviour::Streamer
	CameraFrameStreamer_t1453505805 * ___Streamer_12;
	// System.Collections.IEnumerator EasyAR.CameraDeviceBaseBehaviour::coroutine
	Il2CppObject * ___coroutine_13;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.CameraDeviceBaseBehaviour::validGranted_
	bool ___validGranted__14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.CameraDeviceBaseBehaviour::granted_
	bool ___granted__15;

public:
	inline static int32_t get_offset_of_CaptureWhenStart_4() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___CaptureWhenStart_4)); }
	inline bool get_CaptureWhenStart_4() const { return ___CaptureWhenStart_4; }
	inline bool* get_address_of_CaptureWhenStart_4() { return &___CaptureWhenStart_4; }
	inline void set_CaptureWhenStart_4(bool value)
	{
		___CaptureWhenStart_4 = value;
	}

	inline static int32_t get_offset_of_RequestPlatformPermission_5() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___RequestPlatformPermission_5)); }
	inline bool get_RequestPlatformPermission_5() const { return ___RequestPlatformPermission_5; }
	inline bool* get_address_of_RequestPlatformPermission_5() { return &___RequestPlatformPermission_5; }
	inline void set_RequestPlatformPermission_5(bool value)
	{
		___RequestPlatformPermission_5 = value;
	}

	inline static int32_t get_offset_of_cameraDeviceType_6() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___cameraDeviceType_6)); }
	inline int32_t get_cameraDeviceType_6() const { return ___cameraDeviceType_6; }
	inline int32_t* get_address_of_cameraDeviceType_6() { return &___cameraDeviceType_6; }
	inline void set_cameraDeviceType_6(int32_t value)
	{
		___cameraDeviceType_6 = value;
	}

	inline static int32_t get_offset_of_cameraIndex_7() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___cameraIndex_7)); }
	inline int32_t get_cameraIndex_7() const { return ___cameraIndex_7; }
	inline int32_t* get_address_of_cameraIndex_7() { return &___cameraIndex_7; }
	inline void set_cameraIndex_7(int32_t value)
	{
		___cameraIndex_7 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_8() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___horizontalFlip_8)); }
	inline bool get_horizontalFlip_8() const { return ___horizontalFlip_8; }
	inline bool* get_address_of_horizontalFlip_8() { return &___horizontalFlip_8; }
	inline void set_horizontalFlip_8(bool value)
	{
		___horizontalFlip_8 = value;
	}

	inline static int32_t get_offset_of_CameraSize_9() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___CameraSize_9)); }
	inline Vector2_t2243707579  get_CameraSize_9() const { return ___CameraSize_9; }
	inline Vector2_t2243707579 * get_address_of_CameraSize_9() { return &___CameraSize_9; }
	inline void set_CameraSize_9(Vector2_t2243707579  value)
	{
		___CameraSize_9 = value;
	}

	inline static int32_t get_offset_of_CameraFPS_10() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___CameraFPS_10)); }
	inline float get_CameraFPS_10() const { return ___CameraFPS_10; }
	inline float* get_address_of_CameraFPS_10() { return &___CameraFPS_10; }
	inline void set_CameraFPS_10(float value)
	{
		___CameraFPS_10 = value;
	}

	inline static int32_t get_offset_of_Device_11() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___Device_11)); }
	inline CameraDevice_t4053278953 * get_Device_11() const { return ___Device_11; }
	inline CameraDevice_t4053278953 ** get_address_of_Device_11() { return &___Device_11; }
	inline void set_Device_11(CameraDevice_t4053278953 * value)
	{
		___Device_11 = value;
		Il2CppCodeGenWriteBarrier(&___Device_11, value);
	}

	inline static int32_t get_offset_of_Streamer_12() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___Streamer_12)); }
	inline CameraFrameStreamer_t1453505805 * get_Streamer_12() const { return ___Streamer_12; }
	inline CameraFrameStreamer_t1453505805 ** get_address_of_Streamer_12() { return &___Streamer_12; }
	inline void set_Streamer_12(CameraFrameStreamer_t1453505805 * value)
	{
		___Streamer_12 = value;
		Il2CppCodeGenWriteBarrier(&___Streamer_12, value);
	}

	inline static int32_t get_offset_of_coroutine_13() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___coroutine_13)); }
	inline Il2CppObject * get_coroutine_13() const { return ___coroutine_13; }
	inline Il2CppObject ** get_address_of_coroutine_13() { return &___coroutine_13; }
	inline void set_coroutine_13(Il2CppObject * value)
	{
		___coroutine_13 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_13, value);
	}

	inline static int32_t get_offset_of_validGranted__14() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___validGranted__14)); }
	inline bool get_validGranted__14() const { return ___validGranted__14; }
	inline bool* get_address_of_validGranted__14() { return &___validGranted__14; }
	inline void set_validGranted__14(bool value)
	{
		___validGranted__14 = value;
	}

	inline static int32_t get_offset_of_granted__15() { return static_cast<int32_t>(offsetof(CameraDeviceBaseBehaviour_t2009432565, ___granted__15)); }
	inline bool get_granted__15() const { return ___granted__15; }
	inline bool* get_address_of_granted__15() { return &___granted__15; }
	inline void set_granted__15(bool value)
	{
		___granted__15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
