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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;
// EasyAR.ObjectTarget
struct ObjectTarget_t2086352254;
// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour>
struct List_1_t1659153283;
// EasyAR.ObjectTrackerBaseBehaviour
struct ObjectTrackerBaseBehaviour_t2290032151;
// System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean>
struct Action_3_t3377464849;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ObjectTargetBaseBehaviour
struct  ObjectTargetBaseBehaviour_t958778738  : public TargetAbstractBehaviour_t1292968490
{
public:
	// EasyAR.StorageType EasyAR.ObjectTargetBaseBehaviour::Storage
	int32_t ___Storage_8;
	// System.String EasyAR.ObjectTargetBaseBehaviour::Path
	String_t* ___Path_9;
	// System.String EasyAR.ObjectTargetBaseBehaviour::Name
	String_t* ___Name_10;
	// System.Single EasyAR.ObjectTargetBaseBehaviour::Scale
	float ___Scale_11;
	// System.Boolean EasyAR.ObjectTargetBaseBehaviour::ActiveTargetOnStart
	bool ___ActiveTargetOnStart_12;
	// EasyAR.ObjectTarget EasyAR.ObjectTargetBaseBehaviour::Target
	ObjectTarget_t2086352254 * ___Target_13;
	// System.Collections.Generic.List`1<EasyAR.ObjectTrackerBaseBehaviour> EasyAR.ObjectTargetBaseBehaviour::loaders
	List_1_t1659153283 * ___loaders_14;
	// EasyAR.ObjectTrackerBaseBehaviour EasyAR.ObjectTargetBaseBehaviour::trackerBaseBehaviour
	ObjectTrackerBaseBehaviour_t2290032151 * ___trackerBaseBehaviour_15;
	// System.Boolean EasyAR.ObjectTargetBaseBehaviour::trackerBaseBehaviourHasSet
	bool ___trackerBaseBehaviourHasSet_16;
	// UnityEngine.Vector3 EasyAR.ObjectTargetBaseBehaviour::preScale
	Vector3_t2243707580  ___preScale_17;
	// System.Single EasyAR.ObjectTargetBaseBehaviour::preSize
	float ___preSize_18;
	// System.Boolean EasyAR.ObjectTargetBaseBehaviour::alreadysetup
	bool ___alreadysetup_19;
	// System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean> EasyAR.ObjectTargetBaseBehaviour::TargetLoad
	Action_3_t3377464849 * ___TargetLoad_20;
	// System.Action`3<EasyAR.ObjectTargetBaseBehaviour,EasyAR.ObjectTrackerBaseBehaviour,System.Boolean> EasyAR.ObjectTargetBaseBehaviour::TargetUnload
	Action_3_t3377464849 * ___TargetUnload_21;

public:
	inline static int32_t get_offset_of_Storage_8() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___Storage_8)); }
	inline int32_t get_Storage_8() const { return ___Storage_8; }
	inline int32_t* get_address_of_Storage_8() { return &___Storage_8; }
	inline void set_Storage_8(int32_t value)
	{
		___Storage_8 = value;
	}

	inline static int32_t get_offset_of_Path_9() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___Path_9)); }
	inline String_t* get_Path_9() const { return ___Path_9; }
	inline String_t** get_address_of_Path_9() { return &___Path_9; }
	inline void set_Path_9(String_t* value)
	{
		___Path_9 = value;
		Il2CppCodeGenWriteBarrier(&___Path_9, value);
	}

	inline static int32_t get_offset_of_Name_10() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___Name_10)); }
	inline String_t* get_Name_10() const { return ___Name_10; }
	inline String_t** get_address_of_Name_10() { return &___Name_10; }
	inline void set_Name_10(String_t* value)
	{
		___Name_10 = value;
		Il2CppCodeGenWriteBarrier(&___Name_10, value);
	}

	inline static int32_t get_offset_of_Scale_11() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___Scale_11)); }
	inline float get_Scale_11() const { return ___Scale_11; }
	inline float* get_address_of_Scale_11() { return &___Scale_11; }
	inline void set_Scale_11(float value)
	{
		___Scale_11 = value;
	}

	inline static int32_t get_offset_of_ActiveTargetOnStart_12() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___ActiveTargetOnStart_12)); }
	inline bool get_ActiveTargetOnStart_12() const { return ___ActiveTargetOnStart_12; }
	inline bool* get_address_of_ActiveTargetOnStart_12() { return &___ActiveTargetOnStart_12; }
	inline void set_ActiveTargetOnStart_12(bool value)
	{
		___ActiveTargetOnStart_12 = value;
	}

	inline static int32_t get_offset_of_Target_13() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___Target_13)); }
	inline ObjectTarget_t2086352254 * get_Target_13() const { return ___Target_13; }
	inline ObjectTarget_t2086352254 ** get_address_of_Target_13() { return &___Target_13; }
	inline void set_Target_13(ObjectTarget_t2086352254 * value)
	{
		___Target_13 = value;
		Il2CppCodeGenWriteBarrier(&___Target_13, value);
	}

	inline static int32_t get_offset_of_loaders_14() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___loaders_14)); }
	inline List_1_t1659153283 * get_loaders_14() const { return ___loaders_14; }
	inline List_1_t1659153283 ** get_address_of_loaders_14() { return &___loaders_14; }
	inline void set_loaders_14(List_1_t1659153283 * value)
	{
		___loaders_14 = value;
		Il2CppCodeGenWriteBarrier(&___loaders_14, value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviour_15() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___trackerBaseBehaviour_15)); }
	inline ObjectTrackerBaseBehaviour_t2290032151 * get_trackerBaseBehaviour_15() const { return ___trackerBaseBehaviour_15; }
	inline ObjectTrackerBaseBehaviour_t2290032151 ** get_address_of_trackerBaseBehaviour_15() { return &___trackerBaseBehaviour_15; }
	inline void set_trackerBaseBehaviour_15(ObjectTrackerBaseBehaviour_t2290032151 * value)
	{
		___trackerBaseBehaviour_15 = value;
		Il2CppCodeGenWriteBarrier(&___trackerBaseBehaviour_15, value);
	}

	inline static int32_t get_offset_of_trackerBaseBehaviourHasSet_16() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___trackerBaseBehaviourHasSet_16)); }
	inline bool get_trackerBaseBehaviourHasSet_16() const { return ___trackerBaseBehaviourHasSet_16; }
	inline bool* get_address_of_trackerBaseBehaviourHasSet_16() { return &___trackerBaseBehaviourHasSet_16; }
	inline void set_trackerBaseBehaviourHasSet_16(bool value)
	{
		___trackerBaseBehaviourHasSet_16 = value;
	}

	inline static int32_t get_offset_of_preScale_17() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___preScale_17)); }
	inline Vector3_t2243707580  get_preScale_17() const { return ___preScale_17; }
	inline Vector3_t2243707580 * get_address_of_preScale_17() { return &___preScale_17; }
	inline void set_preScale_17(Vector3_t2243707580  value)
	{
		___preScale_17 = value;
	}

	inline static int32_t get_offset_of_preSize_18() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___preSize_18)); }
	inline float get_preSize_18() const { return ___preSize_18; }
	inline float* get_address_of_preSize_18() { return &___preSize_18; }
	inline void set_preSize_18(float value)
	{
		___preSize_18 = value;
	}

	inline static int32_t get_offset_of_alreadysetup_19() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___alreadysetup_19)); }
	inline bool get_alreadysetup_19() const { return ___alreadysetup_19; }
	inline bool* get_address_of_alreadysetup_19() { return &___alreadysetup_19; }
	inline void set_alreadysetup_19(bool value)
	{
		___alreadysetup_19 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_20() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___TargetLoad_20)); }
	inline Action_3_t3377464849 * get_TargetLoad_20() const { return ___TargetLoad_20; }
	inline Action_3_t3377464849 ** get_address_of_TargetLoad_20() { return &___TargetLoad_20; }
	inline void set_TargetLoad_20(Action_3_t3377464849 * value)
	{
		___TargetLoad_20 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_20, value);
	}

	inline static int32_t get_offset_of_TargetUnload_21() { return static_cast<int32_t>(offsetof(ObjectTargetBaseBehaviour_t958778738, ___TargetUnload_21)); }
	inline Action_3_t3377464849 * get_TargetUnload_21() const { return ___TargetUnload_21; }
	inline Action_3_t3377464849 ** get_address_of_TargetUnload_21() { return &___TargetUnload_21; }
	inline void set_TargetUnload_21(Action_3_t3377464849 * value)
	{
		___TargetUnload_21 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_21, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
