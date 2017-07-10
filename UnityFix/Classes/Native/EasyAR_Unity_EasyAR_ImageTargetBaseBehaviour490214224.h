#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_TargetAbstractBehaviour1292968490.h"
#include "EasyAR_Unity_EasyAR_StorageType2201494719.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// EasyAR.ImageTarget
struct ImageTarget_t3451047956;
// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour>
struct List_1_t3386304575;
// EasyAR.ImageTrackerBaseBehaviour
struct ImageTrackerBaseBehaviour_t4017183443;
// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean>
struct Action_3_t3635187475;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTargetBaseBehaviour
struct  ImageTargetBaseBehaviour_t490214224  : public TargetAbstractBehaviour_t1292968490
{
public:
	// EasyAR.StorageType EasyAR.ImageTargetBaseBehaviour::Storage
	int32_t ___Storage_8;
	// System.String EasyAR.ImageTargetBaseBehaviour::Path
	String_t* ___Path_9;
	// System.String EasyAR.ImageTargetBaseBehaviour::Name
	String_t* ___Name_10;
	// UnityEngine.Vector2 EasyAR.ImageTargetBaseBehaviour::Size
	Vector2_t2243707579  ___Size_11;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::ActiveTargetOnStart
	bool ___ActiveTargetOnStart_12;
	// EasyAR.ImageTarget EasyAR.ImageTargetBaseBehaviour::Target
	ImageTarget_t3451047956 * ___Target_13;
	// System.Collections.Generic.List`1<EasyAR.ImageTrackerBaseBehaviour> EasyAR.ImageTargetBaseBehaviour::loaders
	List_1_t3386304575 * ___loaders_14;
	// EasyAR.ImageTrackerBaseBehaviour EasyAR.ImageTargetBaseBehaviour::trackerBaseBehaviour
	ImageTrackerBaseBehaviour_t4017183443 * ___trackerBaseBehaviour_15;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::trackerBaseBehaviourHasSet
	bool ___trackerBaseBehaviourHasSet_16;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::lockSizeRatio
	bool ___lockSizeRatio_17;
	// UnityEngine.Vector3 EasyAR.ImageTargetBaseBehaviour::preScale
	Vector3_t2243707580  ___preScale_18;
	// UnityEngine.Vector2 EasyAR.ImageTargetBaseBehaviour::preSize
	Vector2_t2243707579  ___preSize_19;
	// System.Boolean EasyAR.ImageTargetBaseBehaviour::alreadysetup
	bool ___alreadysetup_20;
	// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean> EasyAR.ImageTargetBaseBehaviour::TargetLoad
	Action_3_t3635187475 * ___TargetLoad_21;
	// System.Action`3<EasyAR.ImageTargetBaseBehaviour,EasyAR.ImageTrackerBaseBehaviour,System.Boolean> EasyAR.ImageTargetBaseBehaviour::TargetUnload
	Action_3_t3635187475 * ___TargetUnload_22;

public:
	inline static int32_t get_offset_of_Storage_8() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___Storage_8)); }
	inline int32_t get_Storage_8() const { return ___Storage_8; }
	inline int32_t* get_address_of_Storage_8() { return &___Storage_8; }
	inline void set_Storage_8(int32_t value)
	{
		___Storage_8 = value;
	}

	inline static int32_t get_offset_of_Path_9() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___Path_9)); }
	inline String_t* get_Path_9() const { return ___Path_9; }
	inline String_t** get_address_of_Path_9() { return &___Path_9; }
	inline void set_Path_9(String_t* value)
	{
		___Path_9 = value;
		Il2CppCodeGenWriteBarrier(&___Path_9, value);
	}

	inline static int32_t get_offset_of_Name_10() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___Name_10)); }
	inline String_t* get_Name_10() const { return ___Name_10; }
	inline String_t** get_address_of_Name_10() { return &___Name_10; }
	inline void set_Name_10(String_t* value)
	{
		___Name_10 = value;
		Il2CppCodeGenWriteBarrier(&___Name_10, value);
	}

	inline static int32_t get_offset_of_Size_11() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___Size_11)); }
	inline Vector2_t2243707579  get_Size_11() const { return ___Size_11; }
	inline Vector2_t2243707579 * get_address_of_Size_11() { return &___Size_11; }
	inline void set_Size_11(Vector2_t2243707579  value)
	{
		___Size_11 = value;
	}

	inline static int32_t get_offset_of_ActiveTargetOnStart_12() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___ActiveTargetOnStart_12)); }
	inline bool get_ActiveTargetOnStart_12() const { return ___ActiveTargetOnStart_12; }
	inline bool* get_address_of_ActiveTargetOnStart_12() { return &___ActiveTargetOnStart_12; }
	inline void set_ActiveTargetOnStart_12(bool value)
	{
		___ActiveTargetOnStart_12 = value;
	}

	inline static int32_t get_offset_of_Target_13() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___Target_13)); }
	inline ImageTarget_t3451047956 * get_Target_13() const { return ___Target_13; }
	inline ImageTarget_t3451047956 ** get_address_of_Target_13() { return &___Target_13; }
	inline void set_Target_13(ImageTarget_t3451047956 * value)
	{
		___Target_13 = value;
		Il2CppCodeGenWriteBarrier(&___Target_13, value);
	}

	inline static int32_t get_offset_of_loaders_14() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___loaders_14)); }
	inline List_1_t3386304575 * get_loaders_14() const { return ___loaders_14; }
	inline List_1_t3386304575 ** get_address_of_loaders_14() { return &___loaders_14; }
	inline void set_loaders_14(List_1_t3386304575 * value)
	{
		___loaders_14 = value;
		Il2CppCodeGenWriteBarrier(&___loaders_14, value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviour_15() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___trackerBaseBehaviour_15)); }
	inline ImageTrackerBaseBehaviour_t4017183443 * get_trackerBaseBehaviour_15() const { return ___trackerBaseBehaviour_15; }
	inline ImageTrackerBaseBehaviour_t4017183443 ** get_address_of_trackerBaseBehaviour_15() { return &___trackerBaseBehaviour_15; }
	inline void set_trackerBaseBehaviour_15(ImageTrackerBaseBehaviour_t4017183443 * value)
	{
		___trackerBaseBehaviour_15 = value;
		Il2CppCodeGenWriteBarrier(&___trackerBaseBehaviour_15, value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviourHasSet_16() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___trackerBaseBehaviourHasSet_16)); }
	inline bool get_trackerBaseBehaviourHasSet_16() const { return ___trackerBaseBehaviourHasSet_16; }
	inline bool* get_address_of_trackerBaseBehaviourHasSet_16() { return &___trackerBaseBehaviourHasSet_16; }
	inline void set_trackerBaseBehaviourHasSet_16(bool value)
	{
		___trackerBaseBehaviourHasSet_16 = value;
	}

	inline static int32_t get_offset_of_lockSizeRatio_17() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___lockSizeRatio_17)); }
	inline bool get_lockSizeRatio_17() const { return ___lockSizeRatio_17; }
	inline bool* get_address_of_lockSizeRatio_17() { return &___lockSizeRatio_17; }
	inline void set_lockSizeRatio_17(bool value)
	{
		___lockSizeRatio_17 = value;
	}

	inline static int32_t get_offset_of_preScale_18() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___preScale_18)); }
	inline Vector3_t2243707580  get_preScale_18() const { return ___preScale_18; }
	inline Vector3_t2243707580 * get_address_of_preScale_18() { return &___preScale_18; }
	inline void set_preScale_18(Vector3_t2243707580  value)
	{
		___preScale_18 = value;
	}

	inline static int32_t get_offset_of_preSize_19() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___preSize_19)); }
	inline Vector2_t2243707579  get_preSize_19() const { return ___preSize_19; }
	inline Vector2_t2243707579 * get_address_of_preSize_19() { return &___preSize_19; }
	inline void set_preSize_19(Vector2_t2243707579  value)
	{
		___preSize_19 = value;
	}

	inline static int32_t get_offset_of_alreadysetup_20() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___alreadysetup_20)); }
	inline bool get_alreadysetup_20() const { return ___alreadysetup_20; }
	inline bool* get_address_of_alreadysetup_20() { return &___alreadysetup_20; }
	inline void set_alreadysetup_20(bool value)
	{
		___alreadysetup_20 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_21() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___TargetLoad_21)); }
	inline Action_3_t3635187475 * get_TargetLoad_21() const { return ___TargetLoad_21; }
	inline Action_3_t3635187475 ** get_address_of_TargetLoad_21() { return &___TargetLoad_21; }
	inline void set_TargetLoad_21(Action_3_t3635187475 * value)
	{
		___TargetLoad_21 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_21, value);
	}

	inline static int32_t get_offset_of_TargetUnload_22() { return static_cast<int32_t>(offsetof(ImageTargetBaseBehaviour_t490214224, ___TargetUnload_22)); }
	inline Action_3_t3635187475 * get_TargetUnload_22() const { return ___TargetUnload_22; }
	inline Action_3_t3635187475 ** get_address_of_TargetUnload_22() { return &___TargetUnload_22; }
	inline void set_TargetUnload_22(Action_3_t3635187475 * value)
	{
		___TargetUnload_22 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
