#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t2023;

#include "codegen/il2cpp-codegen.h"
#include "t36.h"

extern "C" void m14641_gshared (t2023 * __this, const MethodInfo* method);
#define m14641(__this, method) (( void (*) (t2023 *, const MethodInfo*))m14641_gshared)(__this, method)
extern "C" int32_t m14642_gshared (t2023 * __this, t36  p0, t36  p1, const MethodInfo* method);
#define m14642(__this, p0, p1, method) (( int32_t (*) (t2023 *, t36 , t36 , const MethodInfo*))m14642_gshared)(__this, p0, p1, method)
