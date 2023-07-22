#ifndef CEF_PLATFORM_TYPES_H_
#define CEF_PLATFORM_TYPES_H_

// Cross platform typedefs for native event types.
#if defined(OS_WIN)

  #ifdef __cplusplus
  extern "C" {
  #endif

  struct CHROME_POINT;
  struct CHROME_MSG;

  #ifdef __cplusplus
  }
  #endif

  using CefPlatformEvent = CHROME_MSG;

#elif defined(OS_MAC)

#if defined(__OBJC__)
@class NSEvent;
#else   // __OBJC__
class NSEvent;
#endif  // __OBJC__

using CefPlatformEvent = NSEvent*;

#else

using CefPlatformEvent = void*;

#endif

#endif  // CEF_PLATFORM_TYPES_H_