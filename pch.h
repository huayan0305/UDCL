//pch.h

#pragma once

#include "targetver.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <windows.h>

#ifdef _WINDLL
#define _UDCL __declspec(dllexport)
#else
#define _UDCL __declspec(dllimport)
#endif

#include "UDCL.h"
