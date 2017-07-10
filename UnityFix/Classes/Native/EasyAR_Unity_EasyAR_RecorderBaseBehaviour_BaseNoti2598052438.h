#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// EasyAR.RecorderBaseBehaviour
struct RecorderBaseBehaviour_t946255784;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.RecorderBaseBehaviour/BaseNotify
struct  BaseNotify_t2598052438  : public Il2CppObject
{
public:
	// EasyAR.RecorderBaseBehaviour EasyAR.RecorderBaseBehaviour/BaseNotify::_parent
	RecorderBaseBehaviour_t946255784 * ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(BaseNotify_t2598052438, ____parent_0)); }
	inline RecorderBaseBehaviour_t946255784 * get__parent_0() const { return ____parent_0; }
	inline RecorderBaseBehaviour_t946255784 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RecorderBaseBehaviour_t946255784 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier(&____parent_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
