#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"

// EasyAR.ObjectTracker
struct ObjectTracker_t2493679459;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.IntPtr,EasyAR.ObjectTracker>
struct  KeyValuePair_2_t693049999 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	IntPtr_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	ObjectTracker_t2493679459 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t693049999, ___key_0)); }
	inline IntPtr_t get_key_0() const { return ___key_0; }
	inline IntPtr_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(IntPtr_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t693049999, ___value_1)); }
	inline ObjectTracker_t2493679459 * get_value_1() const { return ___value_1; }
	inline ObjectTracker_t2493679459 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(ObjectTracker_t2493679459 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
