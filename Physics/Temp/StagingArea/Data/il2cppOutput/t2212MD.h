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

struct t2212;

#include "codegen/il2cpp-codegen.h"
#include "t1231.h"

extern "C" void m16594_gshared (t2212 * __this, const MethodInfo* method);
#define m16594(__this, method) (( void (*) (t2212 *, const MethodInfo*))m16594_gshared)(__this, method)
extern "C" int32_t m16595_gshared (t2212 * __this, t1231  p0, const MethodInfo* method);
#define m16595(__this, p0, method) (( int32_t (*) (t2212 *, t1231 , const MethodInfo*))m16595_gshared)(__this, p0, method)
extern "C" bool m16596_gshared (t2212 * __this, t1231  p0, t1231  p1, const MethodInfo* method);
#define m16596(__this, p0, p1, method) (( bool (*) (t2212 *, t1231 , t1231 , const MethodInfo*))m16596_gshared)(__this, p0, p1, method)
