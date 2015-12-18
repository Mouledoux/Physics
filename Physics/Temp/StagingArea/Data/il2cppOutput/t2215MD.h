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

struct t2215;

#include "codegen/il2cpp-codegen.h"
#include "t1231.h"

extern "C" void m16605_gshared (t2215 * __this, const MethodInfo* method);
#define m16605(__this, method) (( void (*) (t2215 *, const MethodInfo*))m16605_gshared)(__this, method)
extern "C" int32_t m16606_gshared (t2215 * __this, t1231  p0, t1231  p1, const MethodInfo* method);
#define m16606(__this, p0, p1, method) (( int32_t (*) (t2215 *, t1231 , t1231 , const MethodInfo*))m16606_gshared)(__this, p0, p1, method)
