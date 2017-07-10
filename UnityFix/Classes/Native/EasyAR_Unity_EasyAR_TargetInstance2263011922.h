#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base2098138749.h"
#include "EasyAR_Unity_EasyAR_TargetInstance_TrackStatus1470002045.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// EasyAR.Target
struct Target_t1023893241;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.TargetInstance
struct  TargetInstance_t2263011922  : public Base_t2098138749
{
public:
	// EasyAR.TargetInstance/TrackStatus EasyAR.TargetInstance::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;
	// EasyAR.Target EasyAR.TargetInstance::<Target>k__BackingField
	Target_t1023893241 * ___U3CTargetU3Ek__BackingField_3;
	// UnityEngine.Quaternion EasyAR.TargetInstance::<Rotation>k__BackingField
	Quaternion_t4030073918  ___U3CRotationU3Ek__BackingField_4;
	// UnityEngine.Vector3 EasyAR.TargetInstance::<Position>k__BackingField
	Vector3_t2243707580  ___U3CPositionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TargetInstance_t2263011922, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TargetInstance_t2263011922, ___U3CTargetU3Ek__BackingField_3)); }
	inline Target_t1023893241 * get_U3CTargetU3Ek__BackingField_3() const { return ___U3CTargetU3Ek__BackingField_3; }
	inline Target_t1023893241 ** get_address_of_U3CTargetU3Ek__BackingField_3() { return &___U3CTargetU3Ek__BackingField_3; }
	inline void set_U3CTargetU3Ek__BackingField_3(Target_t1023893241 * value)
	{
		___U3CTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TargetInstance_t2263011922, ___U3CRotationU3Ek__BackingField_4)); }
	inline Quaternion_t4030073918  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Quaternion_t4030073918 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Quaternion_t4030073918  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TargetInstance_t2263011922, ___U3CPositionU3Ek__BackingField_5)); }
	inline Vector3_t2243707580  get_U3CPositionU3Ek__BackingField_5() const { return ___U3CPositionU3Ek__BackingField_5; }
	inline Vector3_t2243707580 * get_address_of_U3CPositionU3Ek__BackingField_5() { return &___U3CPositionU3Ek__BackingField_5; }
	inline void set_U3CPositionU3Ek__BackingField_5(Vector3_t2243707580  value)
	{
		___U3CPositionU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
