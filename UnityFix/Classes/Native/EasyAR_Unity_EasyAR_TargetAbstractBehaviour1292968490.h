#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour>
struct Dictionary_2_t300794125;
// System.Action`1<EasyAR.TargetAbstractBehaviour>
struct Action_1_t1094767872;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.TargetAbstractBehaviour
struct  TargetAbstractBehaviour_t1292968490  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 EasyAR.TargetAbstractBehaviour::registeredID
	int32_t ___registeredID_3;
	// System.Boolean EasyAR.TargetAbstractBehaviour::isFound
	bool ___isFound_4;
	// System.Boolean EasyAR.TargetAbstractBehaviour::gameObjectActiveControl
	bool ___gameObjectActiveControl_5;
	// System.Action`1<EasyAR.TargetAbstractBehaviour> EasyAR.TargetAbstractBehaviour::TargetFound
	Action_1_t1094767872 * ___TargetFound_6;
	// System.Action`1<EasyAR.TargetAbstractBehaviour> EasyAR.TargetAbstractBehaviour::TargetLost
	Action_1_t1094767872 * ___TargetLost_7;

public:
	inline static int32_t get_offset_of_registeredID_3() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1292968490, ___registeredID_3)); }
	inline int32_t get_registeredID_3() const { return ___registeredID_3; }
	inline int32_t* get_address_of_registeredID_3() { return &___registeredID_3; }
	inline void set_registeredID_3(int32_t value)
	{
		___registeredID_3 = value;
	}

	inline static int32_t get_offset_of_isFound_4() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1292968490, ___isFound_4)); }
	inline bool get_isFound_4() const { return ___isFound_4; }
	inline bool* get_address_of_isFound_4() { return &___isFound_4; }
	inline void set_isFound_4(bool value)
	{
		___isFound_4 = value;
	}

	inline static int32_t get_offset_of_gameObjectActiveControl_5() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1292968490, ___gameObjectActiveControl_5)); }
	inline bool get_gameObjectActiveControl_5() const { return ___gameObjectActiveControl_5; }
	inline bool* get_address_of_gameObjectActiveControl_5() { return &___gameObjectActiveControl_5; }
	inline void set_gameObjectActiveControl_5(bool value)
	{
		___gameObjectActiveControl_5 = value;
	}

	inline static int32_t get_offset_of_TargetFound_6() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1292968490, ___TargetFound_6)); }
	inline Action_1_t1094767872 * get_TargetFound_6() const { return ___TargetFound_6; }
	inline Action_1_t1094767872 ** get_address_of_TargetFound_6() { return &___TargetFound_6; }
	inline void set_TargetFound_6(Action_1_t1094767872 * value)
	{
		___TargetFound_6 = value;
		Il2CppCodeGenWriteBarrier(&___TargetFound_6, value);
	}

	inline static int32_t get_offset_of_TargetLost_7() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1292968490, ___TargetLost_7)); }
	inline Action_1_t1094767872 * get_TargetLost_7() const { return ___TargetLost_7; }
	inline Action_1_t1094767872 ** get_address_of_TargetLost_7() { return &___TargetLost_7; }
	inline void set_TargetLost_7(Action_1_t1094767872 * value)
	{
		___TargetLost_7 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLost_7, value);
	}
};

struct TargetAbstractBehaviour_t1292968490_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,EasyAR.TargetAbstractBehaviour> EasyAR.TargetAbstractBehaviour::allTargetBehaviours
	Dictionary_2_t300794125 * ___allTargetBehaviours_2;

public:
	inline static int32_t get_offset_of_allTargetBehaviours_2() { return static_cast<int32_t>(offsetof(TargetAbstractBehaviour_t1292968490_StaticFields, ___allTargetBehaviours_2)); }
	inline Dictionary_2_t300794125 * get_allTargetBehaviours_2() const { return ___allTargetBehaviours_2; }
	inline Dictionary_2_t300794125 ** get_address_of_allTargetBehaviours_2() { return &___allTargetBehaviours_2; }
	inline void set_allTargetBehaviours_2(Dictionary_2_t300794125 * value)
	{
		___allTargetBehaviours_2 = value;
		Il2CppCodeGenWriteBarrier(&___allTargetBehaviours_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
