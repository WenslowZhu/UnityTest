#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.EasyARBehaviour
struct  EasyARBehaviour_t4167787674  : public MonoBehaviour_t1158329972
{
public:
	// System.String EasyAR.EasyARBehaviour::Key
	String_t* ___Key_2;
	// System.Boolean EasyAR.EasyARBehaviour::initialized
	bool ___initialized_3;

public:
	inline static int32_t get_offset_of_Key_2() { return static_cast<int32_t>(offsetof(EasyARBehaviour_t4167787674, ___Key_2)); }
	inline String_t* get_Key_2() const { return ___Key_2; }
	inline String_t** get_address_of_Key_2() { return &___Key_2; }
	inline void set_Key_2(String_t* value)
	{
		___Key_2 = value;
		Il2CppCodeGenWriteBarrier(&___Key_2, value);
	}

	inline static int32_t get_offset_of_initialized_3() { return static_cast<int32_t>(offsetof(EasyARBehaviour_t4167787674, ___initialized_3)); }
	inline bool get_initialized_3() const { return ___initialized_3; }
	inline bool* get_address_of_initialized_3() { return &___initialized_3; }
	inline void set_initialized_3(bool value)
	{
		___initialized_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
