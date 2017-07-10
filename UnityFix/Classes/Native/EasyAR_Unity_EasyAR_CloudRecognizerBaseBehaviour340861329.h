#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour366754298.h"

// System.String
struct String_t;
// EasyAR.CloudRecognizer
struct CloudRecognizer_t1351065861;
// EasyAR.CameraDevice
struct CameraDevice_t4053278953;
// System.Action`3<EasyAR.CloudRecognizerBaseBehaviour,EasyAR.CloudRecognizerBaseBehaviour/Status,System.Collections.Generic.List`1<EasyAR.ImageTarget>>
struct Action_3_t2182464448;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CloudRecognizerBaseBehaviour
struct  CloudRecognizerBaseBehaviour_t340861329  : public DeviceUserAbstractBehaviour_t366754298
{
public:
	// System.String EasyAR.CloudRecognizerBaseBehaviour::Server
	String_t* ___Server_5;
	// System.String EasyAR.CloudRecognizerBaseBehaviour::Key
	String_t* ___Key_6;
	// System.String EasyAR.CloudRecognizerBaseBehaviour::Secret
	String_t* ___Secret_7;
	// EasyAR.CloudRecognizer EasyAR.CloudRecognizerBaseBehaviour::CloudRecognizer
	CloudRecognizer_t1351065861 * ___CloudRecognizer_8;
	// EasyAR.CameraDevice EasyAR.CloudRecognizerBaseBehaviour::cameraDevice
	CameraDevice_t4053278953 * ___cameraDevice_9;
	// System.Boolean EasyAR.CloudRecognizerBaseBehaviour::initReconnectMessage
	bool ___initReconnectMessage_10;
	// System.Action`3<EasyAR.CloudRecognizerBaseBehaviour,EasyAR.CloudRecognizerBaseBehaviour/Status,System.Collections.Generic.List`1<EasyAR.ImageTarget>> EasyAR.CloudRecognizerBaseBehaviour::CloudUpdate
	Action_3_t2182464448 * ___CloudUpdate_11;

public:
	inline static int32_t get_offset_of_Server_5() { return static_cast<int32_t>(offsetof(CloudRecognizerBaseBehaviour_t340861329, ___Server_5)); }
	inline String_t* get_Server_5() const { return ___Server_5; }
	inline String_t** get_address_of_Server_5() { return &___Server_5; }
	inline void set_Server_5(String_t* value)
	{
		___Server_5 = value;
		Il2CppCodeGenWriteBarrier(&___Server_5, value);
	}

	inline static int32_t get_offset_of_Key_6() { return static_cast<int32_t>(offsetof(CloudRecognizerBaseBehaviour_t340861329, ___Key_6)); }
	inline String_t* get_Key_6() const { return ___Key_6; }
	inline String_t** get_address_of_Key_6() { return &___Key_6; }
	inline void set_Key_6(String_t* value)
	{
		___Key_6 = value;
		Il2CppCodeGenWriteBarrier(&___Key_6, value);
	}

	inline static int32_t get_offset_of_Secret_7() { return static_cast<int32_t>(offsetof(CloudRecognizerBaseBehaviour_t340861329, ___Secret_7)); }
	inline String_t* get_Secret_7() const { return ___Secret_7; }
	inline String_t** get_address_of_Secret_7() { return &___Secret_7; }
	inline void set_Secret_7(String_t* value)
	{
		___Secret_7 = value;
		Il2CppCodeGenWriteBarrier(&___Secret_7, value);
	}

	inline static int32_t get_offset_of_CloudRecognizer_8() { return static_cast<int32_t>(offsetof(CloudRecognizerBaseBehaviour_t340861329, ___CloudRecognizer_8)); }
	inline CloudRecognizer_t1351065861 * get_CloudRecognizer_8() const { return ___CloudRecognizer_8; }
	inline CloudRecognizer_t1351065861 ** get_address_of_CloudRecognizer_8() { return &___CloudRecognizer_8; }
	inline void set_CloudRecognizer_8(CloudRecognizer_t1351065861 * value)
	{
		___CloudRecognizer_8 = value;
		Il2CppCodeGenWriteBarrier(&___CloudRecognizer_8, value);
	}

	inline static int32_t get_offset_of_cameraDevice_9() { return static_cast<int32_t>(offsetof(CloudRecognizerBaseBehaviour_t340861329, ___cameraDevice_9)); }
	inline CameraDevice_t4053278953 * get_cameraDevice_9() const { return ___cameraDevice_9; }
	inline CameraDevice_t4053278953 ** get_address_of_cameraDevice_9() { return &___cameraDevice_9; }
	inline void set_cameraDevice_9(CameraDevice_t4053278953 * value)
	{
		___cameraDevice_9 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_9, value);
	}

	inline static int32_t get_offset_of_initReconnectMessage_10() { return static_cast<int32_t>(offsetof(CloudRecognizerBaseBehaviour_t340861329, ___initReconnectMessage_10)); }
	inline bool get_initReconnectMessage_10() const { return ___initReconnectMessage_10; }
	inline bool* get_address_of_initReconnectMessage_10() { return &___initReconnectMessage_10; }
	inline void set_initReconnectMessage_10(bool value)
	{
		___initReconnectMessage_10 = value;
	}

	inline static int32_t get_offset_of_CloudUpdate_11() { return static_cast<int32_t>(offsetof(CloudRecognizerBaseBehaviour_t340861329, ___CloudUpdate_11)); }
	inline Action_3_t2182464448 * get_CloudUpdate_11() const { return ___CloudUpdate_11; }
	inline Action_3_t2182464448 ** get_address_of_CloudUpdate_11() { return &___CloudUpdate_11; }
	inline void set_CloudUpdate_11(Action_3_t2182464448 * value)
	{
		___CloudUpdate_11 = value;
		Il2CppCodeGenWriteBarrier(&___CloudUpdate_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
