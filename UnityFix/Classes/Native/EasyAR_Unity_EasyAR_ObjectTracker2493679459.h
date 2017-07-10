#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base2098138749.h"
#include "mscorlib_System_IntPtr2504060609.h"

// EasyAR.ObjectTracker/TargetLoadCallbackC
struct TargetLoadCallbackC_t1090767794;
// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker>
struct Dictionary_2_t2935704777;
// System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean>
struct Action_3_t3519850288;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTracker
struct  ObjectTracker_t2493679459  : public Base_t2098138749
{
public:
	// System.Boolean EasyAR.ObjectTracker::IsCheckNeeded
	bool ___IsCheckNeeded_2;
	// System.IntPtr EasyAR.ObjectTracker::_objCallbackLoad
	IntPtr_t ____objCallbackLoad_3;
	// System.IntPtr EasyAR.ObjectTracker::_objCallbackUnload
	IntPtr_t ____objCallbackUnload_4;
	// EasyAR.ObjectTracker/TargetLoadCallbackC EasyAR.ObjectTracker::_onload
	TargetLoadCallbackC_t1090767794 * ____onload_5;
	// EasyAR.ObjectTracker/TargetLoadCallbackC EasyAR.ObjectTracker::_onunload
	TargetLoadCallbackC_t1090767794 * ____onunload_6;
	// System.Boolean EasyAR.ObjectTracker::_isMultithreadCallback
	bool ____isMultithreadCallback_7;
	// System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean> EasyAR.ObjectTracker::TargetLoad
	Action_3_t3519850288 * ___TargetLoad_9;
	// System.Action`3<EasyAR.ObjectTracker,EasyAR.Target,System.Boolean> EasyAR.ObjectTracker::TargetUnload
	Action_3_t3519850288 * ___TargetUnload_10;

public:
	inline static int32_t get_offset_of_IsCheckNeeded_2() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ___IsCheckNeeded_2)); }
	inline bool get_IsCheckNeeded_2() const { return ___IsCheckNeeded_2; }
	inline bool* get_address_of_IsCheckNeeded_2() { return &___IsCheckNeeded_2; }
	inline void set_IsCheckNeeded_2(bool value)
	{
		___IsCheckNeeded_2 = value;
	}

	inline static int32_t get_offset_of__objCallbackLoad_3() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ____objCallbackLoad_3)); }
	inline IntPtr_t get__objCallbackLoad_3() const { return ____objCallbackLoad_3; }
	inline IntPtr_t* get_address_of__objCallbackLoad_3() { return &____objCallbackLoad_3; }
	inline void set__objCallbackLoad_3(IntPtr_t value)
	{
		____objCallbackLoad_3 = value;
	}

	inline static int32_t get_offset_of__objCallbackUnload_4() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ____objCallbackUnload_4)); }
	inline IntPtr_t get__objCallbackUnload_4() const { return ____objCallbackUnload_4; }
	inline IntPtr_t* get_address_of__objCallbackUnload_4() { return &____objCallbackUnload_4; }
	inline void set__objCallbackUnload_4(IntPtr_t value)
	{
		____objCallbackUnload_4 = value;
	}

	inline static int32_t get_offset_of__onload_5() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ____onload_5)); }
	inline TargetLoadCallbackC_t1090767794 * get__onload_5() const { return ____onload_5; }
	inline TargetLoadCallbackC_t1090767794 ** get_address_of__onload_5() { return &____onload_5; }
	inline void set__onload_5(TargetLoadCallbackC_t1090767794 * value)
	{
		____onload_5 = value;
		Il2CppCodeGenWriteBarrier(&____onload_5, value);
	}

	inline static int32_t get_offset_of__onunload_6() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ____onunload_6)); }
	inline TargetLoadCallbackC_t1090767794 * get__onunload_6() const { return ____onunload_6; }
	inline TargetLoadCallbackC_t1090767794 ** get_address_of__onunload_6() { return &____onunload_6; }
	inline void set__onunload_6(TargetLoadCallbackC_t1090767794 * value)
	{
		____onunload_6 = value;
		Il2CppCodeGenWriteBarrier(&____onunload_6, value);
	}

	inline static int32_t get_offset_of__isMultithreadCallback_7() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ____isMultithreadCallback_7)); }
	inline bool get__isMultithreadCallback_7() const { return ____isMultithreadCallback_7; }
	inline bool* get_address_of__isMultithreadCallback_7() { return &____isMultithreadCallback_7; }
	inline void set__isMultithreadCallback_7(bool value)
	{
		____isMultithreadCallback_7 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_9() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ___TargetLoad_9)); }
	inline Action_3_t3519850288 * get_TargetLoad_9() const { return ___TargetLoad_9; }
	inline Action_3_t3519850288 ** get_address_of_TargetLoad_9() { return &___TargetLoad_9; }
	inline void set_TargetLoad_9(Action_3_t3519850288 * value)
	{
		___TargetLoad_9 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_9, value);
	}

	inline static int32_t get_offset_of_TargetUnload_10() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459, ___TargetUnload_10)); }
	inline Action_3_t3519850288 * get_TargetUnload_10() const { return ___TargetUnload_10; }
	inline Action_3_t3519850288 ** get_address_of_TargetUnload_10() { return &___TargetUnload_10; }
	inline void set_TargetUnload_10(Action_3_t3519850288 * value)
	{
		___TargetUnload_10 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_10, value);
	}
};

struct ObjectTracker_t2493679459_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ObjectTracker> EasyAR.ObjectTracker::trackers
	Dictionary_2_t2935704777 * ___trackers_8;

public:
	inline static int32_t get_offset_of_trackers_8() { return static_cast<int32_t>(offsetof(ObjectTracker_t2493679459_StaticFields, ___trackers_8)); }
	inline Dictionary_2_t2935704777 * get_trackers_8() const { return ___trackers_8; }
	inline Dictionary_2_t2935704777 ** get_address_of_trackers_8() { return &___trackers_8; }
	inline void set_trackers_8(Dictionary_2_t2935704777 * value)
	{
		___trackers_8 = value;
		Il2CppCodeGenWriteBarrier(&___trackers_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
