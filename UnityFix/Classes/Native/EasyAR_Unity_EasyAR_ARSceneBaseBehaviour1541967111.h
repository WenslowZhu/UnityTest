#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_TargetAbstractBehaviour1292968490.h"

// EasyAR.ARScene
struct ARScene_t2053130147;
// EasyAR.ARSceneBaseBehaviour
struct ARSceneBaseBehaviour_t1541967111;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARSceneBaseBehaviour
struct  ARSceneBaseBehaviour_t1541967111  : public TargetAbstractBehaviour_t1292968490
{
public:
	// EasyAR.ARScene EasyAR.ARSceneBaseBehaviour::Target
	ARScene_t2053130147 * ___Target_8;

public:
	inline static int32_t get_offset_of_Target_8() { return static_cast<int32_t>(offsetof(ARSceneBaseBehaviour_t1541967111, ___Target_8)); }
	inline ARScene_t2053130147 * get_Target_8() const { return ___Target_8; }
	inline ARScene_t2053130147 ** get_address_of_Target_8() { return &___Target_8; }
	inline void set_Target_8(ARScene_t2053130147 * value)
	{
		___Target_8 = value;
		Il2CppCodeGenWriteBarrier(&___Target_8, value);
	}
};

struct ARSceneBaseBehaviour_t1541967111_StaticFields
{
public:
	// EasyAR.ARSceneBaseBehaviour EasyAR.ARSceneBaseBehaviour::planeTargetBaseBehaviour
	ARSceneBaseBehaviour_t1541967111 * ___planeTargetBaseBehaviour_9;

public:
	inline static int32_t get_offset_of_planeTargetBaseBehaviour_9() { return static_cast<int32_t>(offsetof(ARSceneBaseBehaviour_t1541967111_StaticFields, ___planeTargetBaseBehaviour_9)); }
	inline ARSceneBaseBehaviour_t1541967111 * get_planeTargetBaseBehaviour_9() const { return ___planeTargetBaseBehaviour_9; }
	inline ARSceneBaseBehaviour_t1541967111 ** get_address_of_planeTargetBaseBehaviour_9() { return &___planeTargetBaseBehaviour_9; }
	inline void set_planeTargetBaseBehaviour_9(ARSceneBaseBehaviour_t1541967111 * value)
	{
		___planeTargetBaseBehaviour_9 = value;
		Il2CppCodeGenWriteBarrier(&___planeTargetBaseBehaviour_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
