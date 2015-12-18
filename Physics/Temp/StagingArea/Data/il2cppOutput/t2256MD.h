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

struct t2256;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17007_gshared (t2256 * __this, const MethodInfo* method);
#define m17007(__this, method) (( void (*) (t2256 *, const MethodInfo*))m17007_gshared)(__this, method)
extern "C" void m17008_gshared (t34 * __this , const MethodInfo* method);
#define m17008(__this , method) (( void (*) (t34 * , const MethodInfo*))m17008_gshared)(__this , method)
extern "C" int32_t m17009_gshared (t2256 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m17009(__this, p0, p1, method) (( int32_t (*) (t2256 *, t34 *, t34 *, const MethodInfo*))m17009_gshared)(__this, p0, p1, method)
extern "C" t2256 * m17010_gshared (t34 * __this , const MethodInfo* method);
#define m17010(__this , method) (( t2256 * (*) (t34 * , const MethodInfo*))m17010_gshared)(__this , method)
