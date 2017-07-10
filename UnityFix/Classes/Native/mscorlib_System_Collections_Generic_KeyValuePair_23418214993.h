#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// EasyAR.TargetAbstractBehaviour
struct TargetAbstractBehaviour_t1292968490;
// EasyAR.TargetInstance
struct TargetInstance_t2263011922;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<EasyAR.TargetAbstractBehaviour,EasyAR.TargetInstance>
struct  KeyValuePair_2_t3418214993 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TargetAbstractBehaviour_t1292968490 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TargetInstance_t2263011922 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3418214993, ___key_0)); }
	inline TargetAbstractBehaviour_t1292968490 * get_key_0() const { return ___key_0; }
	inline TargetAbstractBehaviour_t1292968490 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TargetAbstractBehaviour_t1292968490 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3418214993, ___value_1)); }
	inline TargetInstance_t2263011922 * get_value_1() const { return ___value_1; }
	inline TargetInstance_t2263011922 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TargetInstance_t2263011922 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
