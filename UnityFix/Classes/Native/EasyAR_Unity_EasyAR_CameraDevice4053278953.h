#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base2098138749.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device2067663071.h"
#include "EasyAR_Unity_EasyAR_Vector2I2111311848.h"
#include "mscorlib_System_IntPtr2504060609.h"

// EasyAR.CameraDevice/CallBack
struct CallBack_t1595487770;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CameraDevice>
struct Dictionary_2_t200336975;
// System.Action`2<EasyAR.CameraDevice/PermissionStatus,System.String>
struct Action_2_t2614834382;
// EasyAR.CameraCalibration
struct CameraCalibration_t180604511;
// System.Single[]
struct SingleU5BU5D_t577127397;
// EasyAR.Vector2I[]
struct Vector2IU5BU5D_t1249274745;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDevice
struct  CameraDevice_t4053278953  : public Base_t2098138749
{
public:
	// EasyAR.CameraDevice/Device EasyAR.CameraDevice::OpenedDeviceIfOpened
	int32_t ___OpenedDeviceIfOpened_2;
	// System.Boolean EasyAR.CameraDevice::horizontalFlip
	bool ___horizontalFlip_3;
	// EasyAR.Vector2I EasyAR.CameraDevice::_size
	Vector2I_t2111311848  ____size_4;
	// EasyAR.CameraDevice/CallBack EasyAR.CameraDevice::_permissionCallBack
	CallBack_t1595487770 * ____permissionCallBack_5;
	// System.IntPtr EasyAR.CameraDevice::_permissionObjCallback
	IntPtr_t ____permissionObjCallback_6;
	// System.Action`2<EasyAR.CameraDevice/PermissionStatus,System.String> EasyAR.CameraDevice::PermissionStatusNotify
	Action_2_t2614834382 * ___PermissionStatusNotify_8;
	// EasyAR.CameraCalibration EasyAR.CameraDevice::<Calibration>k__BackingField
	CameraCalibration_t180604511 * ___U3CCalibrationU3Ek__BackingField_9;
	// System.Single[] EasyAR.CameraDevice::<SupportedFPS>k__BackingField
	SingleU5BU5D_t577127397* ___U3CSupportedFPSU3Ek__BackingField_10;
	// EasyAR.Vector2I[] EasyAR.CameraDevice::<SupportedSize>k__BackingField
	Vector2IU5BU5D_t1249274745* ___U3CSupportedSizeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_OpenedDeviceIfOpened_2() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ___OpenedDeviceIfOpened_2)); }
	inline int32_t get_OpenedDeviceIfOpened_2() const { return ___OpenedDeviceIfOpened_2; }
	inline int32_t* get_address_of_OpenedDeviceIfOpened_2() { return &___OpenedDeviceIfOpened_2; }
	inline void set_OpenedDeviceIfOpened_2(int32_t value)
	{
		___OpenedDeviceIfOpened_2 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_3() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ___horizontalFlip_3)); }
	inline bool get_horizontalFlip_3() const { return ___horizontalFlip_3; }
	inline bool* get_address_of_horizontalFlip_3() { return &___horizontalFlip_3; }
	inline void set_horizontalFlip_3(bool value)
	{
		___horizontalFlip_3 = value;
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ____size_4)); }
	inline Vector2I_t2111311848  get__size_4() const { return ____size_4; }
	inline Vector2I_t2111311848 * get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(Vector2I_t2111311848  value)
	{
		____size_4 = value;
	}

	inline static int32_t get_offset_of__permissionCallBack_5() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ____permissionCallBack_5)); }
	inline CallBack_t1595487770 * get__permissionCallBack_5() const { return ____permissionCallBack_5; }
	inline CallBack_t1595487770 ** get_address_of__permissionCallBack_5() { return &____permissionCallBack_5; }
	inline void set__permissionCallBack_5(CallBack_t1595487770 * value)
	{
		____permissionCallBack_5 = value;
		Il2CppCodeGenWriteBarrier(&____permissionCallBack_5, value);
	}

	inline static int32_t get_offset_of__permissionObjCallback_6() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ____permissionObjCallback_6)); }
	inline IntPtr_t get__permissionObjCallback_6() const { return ____permissionObjCallback_6; }
	inline IntPtr_t* get_address_of__permissionObjCallback_6() { return &____permissionObjCallback_6; }
	inline void set__permissionObjCallback_6(IntPtr_t value)
	{
		____permissionObjCallback_6 = value;
	}

	inline static int32_t get_offset_of_PermissionStatusNotify_8() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ___PermissionStatusNotify_8)); }
	inline Action_2_t2614834382 * get_PermissionStatusNotify_8() const { return ___PermissionStatusNotify_8; }
	inline Action_2_t2614834382 ** get_address_of_PermissionStatusNotify_8() { return &___PermissionStatusNotify_8; }
	inline void set_PermissionStatusNotify_8(Action_2_t2614834382 * value)
	{
		___PermissionStatusNotify_8 = value;
		Il2CppCodeGenWriteBarrier(&___PermissionStatusNotify_8, value);
	}

	inline static int32_t get_offset_of_U3CCalibrationU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ___U3CCalibrationU3Ek__BackingField_9)); }
	inline CameraCalibration_t180604511 * get_U3CCalibrationU3Ek__BackingField_9() const { return ___U3CCalibrationU3Ek__BackingField_9; }
	inline CameraCalibration_t180604511 ** get_address_of_U3CCalibrationU3Ek__BackingField_9() { return &___U3CCalibrationU3Ek__BackingField_9; }
	inline void set_U3CCalibrationU3Ek__BackingField_9(CameraCalibration_t180604511 * value)
	{
		___U3CCalibrationU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCalibrationU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CSupportedFPSU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ___U3CSupportedFPSU3Ek__BackingField_10)); }
	inline SingleU5BU5D_t577127397* get_U3CSupportedFPSU3Ek__BackingField_10() const { return ___U3CSupportedFPSU3Ek__BackingField_10; }
	inline SingleU5BU5D_t577127397** get_address_of_U3CSupportedFPSU3Ek__BackingField_10() { return &___U3CSupportedFPSU3Ek__BackingField_10; }
	inline void set_U3CSupportedFPSU3Ek__BackingField_10(SingleU5BU5D_t577127397* value)
	{
		___U3CSupportedFPSU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedFPSU3Ek__BackingField_10, value);
	}

	inline static int32_t get_offset_of_U3CSupportedSizeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953, ___U3CSupportedSizeU3Ek__BackingField_11)); }
	inline Vector2IU5BU5D_t1249274745* get_U3CSupportedSizeU3Ek__BackingField_11() const { return ___U3CSupportedSizeU3Ek__BackingField_11; }
	inline Vector2IU5BU5D_t1249274745** get_address_of_U3CSupportedSizeU3Ek__BackingField_11() { return &___U3CSupportedSizeU3Ek__BackingField_11; }
	inline void set_U3CSupportedSizeU3Ek__BackingField_11(Vector2IU5BU5D_t1249274745* value)
	{
		___U3CSupportedSizeU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedSizeU3Ek__BackingField_11, value);
	}
};

struct CameraDevice_t4053278953_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.CameraDevice> EasyAR.CameraDevice::cameras
	Dictionary_2_t200336975 * ___cameras_7;

public:
	inline static int32_t get_offset_of_cameras_7() { return static_cast<int32_t>(offsetof(CameraDevice_t4053278953_StaticFields, ___cameras_7)); }
	inline Dictionary_2_t200336975 * get_cameras_7() const { return ___cameras_7; }
	inline Dictionary_2_t200336975 ** get_address_of_cameras_7() { return &___cameras_7; }
	inline void set_cameras_7(Dictionary_2_t200336975 * value)
	{
		___cameras_7 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
