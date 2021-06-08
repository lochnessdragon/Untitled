#pragma once

// Define platform specific macros
#if defined(_WIN32)
#define UT_WINDOWS
#elif defined(__linux__)
#define UT_LINUX
#elif defined(__APPLE__) && defined(__MACH__)
#define UT_OSX
#elif defined(__EMSCRIPTEN__)
#define UT_WEB
#else 
#error We can not build for your system.
#endif

// Lib detection
#ifdef UT_WINDOWS
  #ifdef UT_EXPORTS
    #ifdef __GNUC__
      #define UT_API __attribute__ ((dllexport))
    #else
      #define UT_API __declspec(dllexport) // Note: actually gcc seems to also supports this syntax.
    #endif
  #else
    #ifdef __GNUC__
      #define UT_API __attribute__ ((dllimport))
    #else
      #define UT_API __declspec(dllimport) // Note: actually gcc seems to also supports this syntax.
    #endif
  #endif
#else
  #if __GNUC__ >= 4
    //#error Wrong definition for UT API
    #define UT_API __attribute__ ((visibility ("default")))
  #else
    #define UT_API
  #endif
#endif