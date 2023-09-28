#ifndef BEAUTIFUL_H
#define BEAUTIFUL_H

  // I like Coffeescript
  #define unless(condition) if (!(condition))
  #define loop while (1)

  #if !defined(__cplusplus)
    typedef enum { false, true } bool;

    // C++ seems to be more severe with symbols as keywords
    #define is ==
    #define isnt !=

    // Lua thing
    #define do {
    #define then {
    #define end }
  #else
    // I like Nim
    #define let const auto
    #define var auto
    #define proc auto
    #define func auto

    // And other languages as well
    #define fn auto
    #define def auto
  #endif

  #define yes true
  #define no false
  #define on true
  #define off false
#endif // BEAUTIFUL_H
