#ifndef STD_INC_HPP
#define STD_INC_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <stdexcept>
#include <exception>
#include <cstdarg>
#include <cmath>
#include <ctime>
#include <tuple>
#include <typeinfo>
#include <chrono>
#include <memory>
#include <algorithm>
#include <numeric>
#include <utility>
#include <limits>
#include <stdexcept>
#ifdef WINDOWS
    #include <direct.h>
    #define GetCurrentDir _getcwd
#else
    #include <unistd.h>
    #define GetCurrentDir getcwd
 #endif



typedef long long Integer;
typedef unsigned long long UInteger;
typedef double Real;
typedef bool Boolean;

#define False false
#define True  true


// CONTROL FUNCTION INLINING
#if defined(__GNUC__) || defined(__GNUG__)
    #define ALWAYS_INLINE inline __attribute__((always_inline))
    #define NEVER_INLINE __attribute__((noinline))
#elif defined(_MSC_VER)
    #define ALWAYS_INLINE __forceinline
    #define NEVER_INLINE __declspec(noinline)
#endif

#define STATIC static

#define INF std::numeric_limits<double>::infinity()

#endif // STD_INC_HPP
