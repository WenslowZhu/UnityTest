#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_Base2098138749.h"

// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ARSceneTracker>
struct Dictionary_2_t3963009297;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARSceneTracker
struct  ARSceneTracker_t3520983979  : public Base_t2098138749
{
public:

public:
};

struct ARSceneTracker_t3520983979_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,EasyAR.ARSceneTracker> EasyAR.ARSceneTracker::trackers
	Dictionary_2_t3963009297 * ___trackers_2;

public:
	inline static int32_t get_offset_of_trackers_2() { return static_cast<int32_t>(offsetof(ARSceneTracker_t3520983979_StaticFields, ___trackers_2)); }
	inline Dictionary_2_t3963009297 * get_trackers_2() const { return ___trackers_2; }
	inline Dictionary_2_t3963009297 ** get_address_of_trackers_2() { return &___trackers_2; }
	inline void set_trackers_2(Dictionary_2_t3963009297 * value)
	{
		___trackers_2 = value;
		Il2CppCodeGenWriteBarrier(&___trackers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
