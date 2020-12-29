#pragma once

#ifdef PN_PLATFORM_WINDOWS
	#ifdef PN_BUILD_DLL
		#define PINE_API __declspec(dllexport)
	#else
		#define PINE_API __declspec(dllimport) 
	#endif // PN_BUILD_DLL
#else
	#error Pine only supports Windows OS for now
#endif // PN_PLATFORM_WINDOWS
