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

struct t2223;

#include "codegen/il2cpp-codegen.h"
#include "t1230.h"

extern "C" void m16761_gshared (t2223 * __this, const MethodInfo* method);
#define m16761(__this, method) (( void (*) (t2223 *, const MethodInfo*))m16761_gshared)(__this, method)
extern "C" int32_t m16762_gshared (t2223 * __this, t1230  p0, const MethodInfo* method);
#define m16762(__this, p0, method) (( int32_t (*) (t2223 *, t1230 , const MethodInfo*))m16762_gshared)(__this, p0, method)
extern "C" bool m16763_gshared (t2223 * __this, t1230  p0, t1230  p1, const MethodInfo* method);
#define m16763(__this, p0, p1, method) (( bool (*) (t2223 *, t1230 , t1230 , const MethodInfo*))m16763_gshared)(__this, p0, p1, method)
