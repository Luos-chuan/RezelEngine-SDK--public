#pragma once
#ifdef RZ_PLATFORM_WINDOWS
	#ifdef RZ_BUILD_DLL
		#define REZEL_API __declspec(dllexport)
	#else
		#define REZEL_API __declspec(dllimport)
	#endif
#else
	#error Rezel engine just for Windows!
#endif
