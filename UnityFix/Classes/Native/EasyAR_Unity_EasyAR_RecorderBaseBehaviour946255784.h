#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour_Recorder1331472989.h"
#include "EasyAR_Unity_EasyAR_RecorderBaseBehaviour_RecorderZo80546400.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

// EasyAR.RecorderNative
struct RecorderNative_t3567071093;
// EasyAR.RecorderBaseBehaviour/BaseNotify
struct BaseNotify_t2598052438;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;
// System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture>
struct Action_2_t3131590084;
// System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String>
struct Action_3_t1064007125;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour
struct  RecorderBaseBehaviour_t946255784  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean EasyAR.RecorderBaseBehaviour::RequestPlatformPermission
	bool ___RequestPlatformPermission_2;
	// EasyAR.RecorderBaseBehaviour/RecorderProfile EasyAR.RecorderBaseBehaviour::Profile
	int32_t ___Profile_3;
	// EasyAR.RecorderBaseBehaviour/RecorderZoomMode EasyAR.RecorderBaseBehaviour::Mode
	int32_t ___Mode_4;
	// EasyAR.RecorderNative EasyAR.RecorderBaseBehaviour::recorder
	RecorderNative_t3567071093 * ___recorder_5;
	// EasyAR.RecorderBaseBehaviour/BaseNotify EasyAR.RecorderBaseBehaviour::_notify
	BaseNotify_t2598052438 * ____notify_6;
	// System.Int32 EasyAR.RecorderBaseBehaviour::_width
	int32_t ____width_7;
	// System.Int32 EasyAR.RecorderBaseBehaviour::_height
	int32_t ____height_8;
	// System.IntPtr EasyAR.RecorderBaseBehaviour::_texId
	IntPtr_t ____texId_9;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.RecorderBaseBehaviour::_recording
	bool ____recording_10;
	// System.Nullable`1<System.Boolean> EasyAR.RecorderBaseBehaviour::started
	Nullable_1_t2088641033  ___started_11;
	// System.Collections.IEnumerator EasyAR.RecorderBaseBehaviour::coroutine
	Il2CppObject * ___coroutine_12;
	// UnityEngine.RenderTexture EasyAR.RecorderBaseBehaviour::_coroutine_texture
	RenderTexture_t2666733923 * ____coroutine_texture_13;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.RecorderBaseBehaviour::validate
	bool ___validate_14;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) EasyAR.RecorderBaseBehaviour::granted
	bool ___granted_15;
	// System.Boolean EasyAR.RecorderBaseBehaviour::coroutineStarted_
	bool ___coroutineStarted__16;
	// System.Action`2<EasyAR.RecorderBaseBehaviour,UnityEngine.RenderTexture> EasyAR.RecorderBaseBehaviour::FrameUpdate
	Action_2_t3131590084 * ___FrameUpdate_17;
	// System.Action`3<EasyAR.RecorderBaseBehaviour,EasyAR.RecorderBaseBehaviour/Status,System.String> EasyAR.RecorderBaseBehaviour::StatusUpdate
	Action_3_t1064007125 * ___StatusUpdate_18;
	// System.String EasyAR.RecorderBaseBehaviour::<OutputFile>k__BackingField
	String_t* ___U3COutputFileU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_RequestPlatformPermission_2() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___RequestPlatformPermission_2)); }
	inline bool get_RequestPlatformPermission_2() const { return ___RequestPlatformPermission_2; }
	inline bool* get_address_of_RequestPlatformPermission_2() { return &___RequestPlatformPermission_2; }
	inline void set_RequestPlatformPermission_2(bool value)
	{
		___RequestPlatformPermission_2 = value;
	}

	inline static int32_t get_offset_of_Profile_3() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___Profile_3)); }
	inline int32_t get_Profile_3() const { return ___Profile_3; }
	inline int32_t* get_address_of_Profile_3() { return &___Profile_3; }
	inline void set_Profile_3(int32_t value)
	{
		___Profile_3 = value;
	}

	inline static int32_t get_offset_of_Mode_4() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___Mode_4)); }
	inline int32_t get_Mode_4() const { return ___Mode_4; }
	inline int32_t* get_address_of_Mode_4() { return &___Mode_4; }
	inline void set_Mode_4(int32_t value)
	{
		___Mode_4 = value;
	}

	inline static int32_t get_offset_of_recorder_5() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___recorder_5)); }
	inline RecorderNative_t3567071093 * get_recorder_5() const { return ___recorder_5; }
	inline RecorderNative_t3567071093 ** get_address_of_recorder_5() { return &___recorder_5; }
	inline void set_recorder_5(RecorderNative_t3567071093 * value)
	{
		___recorder_5 = value;
		Il2CppCodeGenWriteBarrier(&___recorder_5, value);
	}

	inline static int32_t get_offset_of__notify_6() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ____notify_6)); }
	inline BaseNotify_t2598052438 * get__notify_6() const { return ____notify_6; }
	inline BaseNotify_t2598052438 ** get_address_of__notify_6() { return &____notify_6; }
	inline void set__notify_6(BaseNotify_t2598052438 * value)
	{
		____notify_6 = value;
		Il2CppCodeGenWriteBarrier(&____notify_6, value);
	}

	inline static int32_t get_offset_of__width_7() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ____width_7)); }
	inline int32_t get__width_7() const { return ____width_7; }
	inline int32_t* get_address_of__width_7() { return &____width_7; }
	inline void set__width_7(int32_t value)
	{
		____width_7 = value;
	}

	inline static int32_t get_offset_of__height_8() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ____height_8)); }
	inline int32_t get__height_8() const { return ____height_8; }
	inline int32_t* get_address_of__height_8() { return &____height_8; }
	inline void set__height_8(int32_t value)
	{
		____height_8 = value;
	}

	inline static int32_t get_offset_of__texId_9() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ____texId_9)); }
	inline IntPtr_t get__texId_9() const { return ____texId_9; }
	inline IntPtr_t* get_address_of__texId_9() { return &____texId_9; }
	inline void set__texId_9(IntPtr_t value)
	{
		____texId_9 = value;
	}

	inline static int32_t get_offset_of__recording_10() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ____recording_10)); }
	inline bool get__recording_10() const { return ____recording_10; }
	inline bool* get_address_of__recording_10() { return &____recording_10; }
	inline void set__recording_10(bool value)
	{
		____recording_10 = value;
	}

	inline static int32_t get_offset_of_started_11() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___started_11)); }
	inline Nullable_1_t2088641033  get_started_11() const { return ___started_11; }
	inline Nullable_1_t2088641033 * get_address_of_started_11() { return &___started_11; }
	inline void set_started_11(Nullable_1_t2088641033  value)
	{
		___started_11 = value;
	}

	inline static int32_t get_offset_of_coroutine_12() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___coroutine_12)); }
	inline Il2CppObject * get_coroutine_12() const { return ___coroutine_12; }
	inline Il2CppObject ** get_address_of_coroutine_12() { return &___coroutine_12; }
	inline void set_coroutine_12(Il2CppObject * value)
	{
		___coroutine_12 = value;
		Il2CppCodeGenWriteBarrier(&___coroutine_12, value);
	}

	inline static int32_t get_offset_of__coroutine_texture_13() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ____coroutine_texture_13)); }
	inline RenderTexture_t2666733923 * get__coroutine_texture_13() const { return ____coroutine_texture_13; }
	inline RenderTexture_t2666733923 ** get_address_of__coroutine_texture_13() { return &____coroutine_texture_13; }
	inline void set__coroutine_texture_13(RenderTexture_t2666733923 * value)
	{
		____coroutine_texture_13 = value;
		Il2CppCodeGenWriteBarrier(&____coroutine_texture_13, value);
	}

	inline static int32_t get_offset_of_validate_14() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___validate_14)); }
	inline bool get_validate_14() const { return ___validate_14; }
	inline bool* get_address_of_validate_14() { return &___validate_14; }
	inline void set_validate_14(bool value)
	{
		___validate_14 = value;
	}

	inline static int32_t get_offset_of_granted_15() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___granted_15)); }
	inline bool get_granted_15() const { return ___granted_15; }
	inline bool* get_address_of_granted_15() { return &___granted_15; }
	inline void set_granted_15(bool value)
	{
		___granted_15 = value;
	}

	inline static int32_t get_offset_of_coroutineStarted__16() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___coroutineStarted__16)); }
	inline bool get_coroutineStarted__16() const { return ___coroutineStarted__16; }
	inline bool* get_address_of_coroutineStarted__16() { return &___coroutineStarted__16; }
	inline void set_coroutineStarted__16(bool value)
	{
		___coroutineStarted__16 = value;
	}

	inline static int32_t get_offset_of_FrameUpdate_17() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___FrameUpdate_17)); }
	inline Action_2_t3131590084 * get_FrameUpdate_17() const { return ___FrameUpdate_17; }
	inline Action_2_t3131590084 ** get_address_of_FrameUpdate_17() { return &___FrameUpdate_17; }
	inline void set_FrameUpdate_17(Action_2_t3131590084 * value)
	{
		___FrameUpdate_17 = value;
		Il2CppCodeGenWriteBarrier(&___FrameUpdate_17, value);
	}

	inline static int32_t get_offset_of_StatusUpdate_18() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___StatusUpdate_18)); }
	inline Action_3_t1064007125 * get_StatusUpdate_18() const { return ___StatusUpdate_18; }
	inline Action_3_t1064007125 ** get_address_of_StatusUpdate_18() { return &___StatusUpdate_18; }
	inline void set_StatusUpdate_18(Action_3_t1064007125 * value)
	{
		___StatusUpdate_18 = value;
		Il2CppCodeGenWriteBarrier(&___StatusUpdate_18, value);
	}

	inline static int32_t get_offset_of_U3COutputFileU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(RecorderBaseBehaviour_t946255784, ___U3COutputFileU3Ek__BackingField_19)); }
	inline String_t* get_U3COutputFileU3Ek__BackingField_19() const { return ___U3COutputFileU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3COutputFileU3Ek__BackingField_19() { return &___U3COutputFileU3Ek__BackingField_19; }
	inline void set_U3COutputFileU3Ek__BackingField_19(String_t* value)
	{
		___U3COutputFileU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3COutputFileU3Ek__BackingField_19, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
