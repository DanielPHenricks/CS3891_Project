#ifndef ARACER__VISIBILITY_CONTROL_H_
#define ARACER__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ARACER_EXPORT __attribute__ ((dllexport))
    #define ARACER_IMPORT __attribute__ ((dllimport))
  #else
    #define ARACER_EXPORT __declspec(dllexport)
    #define ARACER_IMPORT __declspec(dllimport)
  #endif
  #ifdef ARACER_BUILDING_LIBRARY
    #define ARACER_PUBLIC ARACER_EXPORT
  #else
    #define ARACER_PUBLIC ARACER_IMPORT
  #endif
  #define ARACER_PUBLIC_TYPE ARACER_PUBLIC
  #define ARACER_LOCAL
#else
  #define ARACER_EXPORT __attribute__ ((visibility("default")))
  #define ARACER_IMPORT
  #if __GNUC__ >= 4
    #define ARACER_PUBLIC __attribute__ ((visibility("default")))
    #define ARACER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define ARACER_PUBLIC
    #define ARACER_LOCAL
  #endif
  #define ARACER_PUBLIC_TYPE
#endif
#endif  // ARACER__VISIBILITY_CONTROL_H_
// Generated 31-Oct-2024 07:59:52
// Copyright 2019-2020 The MathWorks, Inc.
