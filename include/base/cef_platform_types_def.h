#ifndef CEF_PLATFORM_TYPES_DEF_H_
#define CEF_PLATFORM_TYPES_DEF_H_

// Cross platform typedefs for native event types.
#if defined(OS_WIN)

  #ifdef __cplusplus
  extern "C" {
  #endif

  struct CHROME_POINT {
    LONG x;
    LONG y;
  };

  struct CHROME_MSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    CHROME_POINT pt;
  };

  #ifdef __cplusplus
  }
  #endif

#endif

#endif  // CEF_PLATFORM_TYPES_DEF_H_