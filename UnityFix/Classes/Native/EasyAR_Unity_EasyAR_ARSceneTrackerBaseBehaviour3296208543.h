#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour366754298.h"

// EasyAR.ARSceneTracker
struct ARSceneTracker_t3520983979;
// EasyAR.CameraDevice
struct CameraDevice_t4053278953;
// EasyAR.ARSceneTrackerBaseBehaviour
struct ARSceneTrackerBaseBehaviour_t3296208543;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ARSceneTrackerBaseBehaviour
struct  ARSceneTrackerBaseBehaviour_t3296208543  : public DeviceUserAbstractBehaviour_t366754298
{
public:
	// EasyAR.ARSceneTracker EasyAR.ARSceneTrackerBaseBehaviour::Tracker
	ARSceneTracker_t3520983979 * ___Tracker_5;
	// EasyAR.CameraDevice EasyAR.ARSceneTrackerBaseBehaviour::cameraDevice
	CameraDevice_t4053278953 * ___cameraDevice_6;

public:
	inline static int32_t get_offset_of_Tracker_5() { return static_cast<int32_t>(offsetof(ARSceneTrackerBaseBehaviour_t3296208543, ___Tracker_5)); }
	inline ARSceneTracker_t3520983979 * get_Tracker_5() const { return ___Tracker_5; }
	inline ARSceneTracker_t3520983979 ** get_address_of_Tracker_5() { return &___Tracker_5; }
	inline void set_Tracker_5(ARSceneTracker_t3520983979 * value)
	{
		___Tracker_5 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_5, value);
	}

	inline static int32_t get_offset_of_cameraDevice_6() { return static_cast<int32_t>(offsetof(ARSceneTrackerBaseBehaviour_t3296208543, ___cameraDevice_6)); }
	inline CameraDevice_t4053278953 * get_cameraDevice_6() const { return ___cameraDevice_6; }
	inline CameraDevice_t4053278953 ** get_address_of_cameraDevice_6() { return &___cameraDevice_6; }
	inline void set_cameraDevice_6(CameraDevice_t4053278953 * value)
	{
		___cameraDevice_6 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_6, value);
	}
};

struct ARSceneTrackerBaseBehaviour_t3296208543_StaticFields
{
public:
	// EasyAR.ARSceneTrackerBaseBehaviour EasyAR.ARSceneTrackerBaseBehaviour::planeTrackerBaseBehaviour
	ARSceneTrackerBaseBehaviour_t3296208543 * ___planeTrackerBaseBehaviour_7;

public:
	inline static int32_t get_offset_of_planeTrackerBaseBehaviour_7() { return static_cast<int32_t>(offsetof(ARSceneTrackerBaseBehaviour_t3296208543_StaticFields, ___planeTrackerBaseBehaviour_7)); }
	inline ARSceneTrackerBaseBehaviour_t3296208543 * get_planeTrackerBaseBehaviour_7() const { return ___planeTrackerBaseBehaviour_7; }
	inline ARSceneTrackerBaseBehaviour_t3296208543 ** get_address_of_planeTrackerBaseBehaviour_7() { return &___planeTrackerBaseBehaviour_7; }
	inline void set_planeTrackerBaseBehaviour_7(ARSceneTrackerBaseBehaviour_t3296208543 * value)
	{
		___planeTrackerBaseBehaviour_7 = value;
		Il2CppCodeGenWriteBarrier(&___planeTrackerBaseBehaviour_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
