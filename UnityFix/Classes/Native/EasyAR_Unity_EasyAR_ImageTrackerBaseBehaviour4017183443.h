#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour366754298.h"

// EasyAR.ImageTracker
struct ImageTracker_t1657723447;
// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour>
struct List_1_t4154302652;
// EasyAR.CameraDevice
struct CameraDevice_t4053278953;
// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct Action_4_t1033017517;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTrackerBaseBehaviour
struct  ImageTrackerBaseBehaviour_t4017183443  : public DeviceUserAbstractBehaviour_t366754298
{
public:
	// EasyAR.ImageTracker EasyAR.ImageTrackerBaseBehaviour::Tracker
	ImageTracker_t1657723447 * ___Tracker_5;
	// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTrackerBaseBehaviour::imageTargetBaseBehaviours
	List_1_t4154302652 * ___imageTargetBaseBehaviours_6;
	// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTrackerBaseBehaviour::imageTargetBaseBehaviours_loadqueue
	List_1_t4154302652 * ___imageTargetBaseBehaviours_loadqueue_7;
	// System.Boolean EasyAR.ImageTrackerBaseBehaviour::_arStarted
	bool ____arStarted_8;
	// EasyAR.CameraDevice EasyAR.ImageTrackerBaseBehaviour::cameraDevice
	CameraDevice_t4053278953 * ___cameraDevice_9;
	// System.Int32 EasyAR.ImageTrackerBaseBehaviour::simultaneousNum
	int32_t ___simultaneousNum_10;
	// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ImageTrackerBaseBehaviour::TargetLoad
	Action_4_t1033017517 * ___TargetLoad_11;
	// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ImageTrackerBaseBehaviour::TargetUnload
	Action_4_t1033017517 * ___TargetUnload_12;

public:
	inline static int32_t get_offset_of_Tracker_5() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ___Tracker_5)); }
	inline ImageTracker_t1657723447 * get_Tracker_5() const { return ___Tracker_5; }
	inline ImageTracker_t1657723447 ** get_address_of_Tracker_5() { return &___Tracker_5; }
	inline void set_Tracker_5(ImageTracker_t1657723447 * value)
	{
		___Tracker_5 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_5, value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_6() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ___imageTargetBaseBehaviours_6)); }
	inline List_1_t4154302652 * get_imageTargetBaseBehaviours_6() const { return ___imageTargetBaseBehaviours_6; }
	inline List_1_t4154302652 ** get_address_of_imageTargetBaseBehaviours_6() { return &___imageTargetBaseBehaviours_6; }
	inline void set_imageTargetBaseBehaviours_6(List_1_t4154302652 * value)
	{
		___imageTargetBaseBehaviours_6 = value;
		Il2CppCodeGenWriteBarrier(&___imageTargetBaseBehaviours_6, value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_loadqueue_7() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ___imageTargetBaseBehaviours_loadqueue_7)); }
	inline List_1_t4154302652 * get_imageTargetBaseBehaviours_loadqueue_7() const { return ___imageTargetBaseBehaviours_loadqueue_7; }
	inline List_1_t4154302652 ** get_address_of_imageTargetBaseBehaviours_loadqueue_7() { return &___imageTargetBaseBehaviours_loadqueue_7; }
	inline void set_imageTargetBaseBehaviours_loadqueue_7(List_1_t4154302652 * value)
	{
		___imageTargetBaseBehaviours_loadqueue_7 = value;
		Il2CppCodeGenWriteBarrier(&___imageTargetBaseBehaviours_loadqueue_7, value);
	}

	inline static int32_t get_offset_of__arStarted_8() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ____arStarted_8)); }
	inline bool get__arStarted_8() const { return ____arStarted_8; }
	inline bool* get_address_of__arStarted_8() { return &____arStarted_8; }
	inline void set__arStarted_8(bool value)
	{
		____arStarted_8 = value;
	}

	inline static int32_t get_offset_of_cameraDevice_9() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ___cameraDevice_9)); }
	inline CameraDevice_t4053278953 * get_cameraDevice_9() const { return ___cameraDevice_9; }
	inline CameraDevice_t4053278953 ** get_address_of_cameraDevice_9() { return &___cameraDevice_9; }
	inline void set_cameraDevice_9(CameraDevice_t4053278953 * value)
	{
		___cameraDevice_9 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_9, value);
	}

	inline static int32_t get_offset_of_simultaneousNum_10() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ___simultaneousNum_10)); }
	inline int32_t get_simultaneousNum_10() const { return ___simultaneousNum_10; }
	inline int32_t* get_address_of_simultaneousNum_10() { return &___simultaneousNum_10; }
	inline void set_simultaneousNum_10(int32_t value)
	{
		___simultaneousNum_10 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_11() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ___TargetLoad_11)); }
	inline Action_4_t1033017517 * get_TargetLoad_11() const { return ___TargetLoad_11; }
	inline Action_4_t1033017517 ** get_address_of_TargetLoad_11() { return &___TargetLoad_11; }
	inline void set_TargetLoad_11(Action_4_t1033017517 * value)
	{
		___TargetLoad_11 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_11, value);
	}

	inline static int32_t get_offset_of_TargetUnload_12() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4017183443, ___TargetUnload_12)); }
	inline Action_4_t1033017517 * get_TargetUnload_12() const { return ___TargetUnload_12; }
	inline Action_4_t1033017517 ** get_address_of_TargetUnload_12() { return &___TargetUnload_12; }
	inline void set_TargetUnload_12(Action_4_t1033017517 * value)
	{
		___TargetUnload_12 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
