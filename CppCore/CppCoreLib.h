#pragma once

#ifdef CPPCORE_EXPORTS

#define CPPCORE_LIB __declspec(dllexport)

#else

#define CPPCORE_LIB __declspec(dllimport)

#endif

#include <memory>
typedef char int8;
#include "ImageHandler.h"