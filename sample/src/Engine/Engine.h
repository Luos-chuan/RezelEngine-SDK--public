#pragma once
#ifdef RZ_PLATFORM_WINDOWS
	#define KEY_S EventList[EventTap[engine::KeySClicked]]
	#define KEY_W EventList[EventTap[engine::KeyWClicked]]
	#define KEY_A EventList[EventTap[engine::KeyAClicked]]
	#define KEY_D EventList[EventTap[engine::KeyDClicked]]
#else
	#error Engine only supports Windows!
#endif