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

struct t2225;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16768_gshared (t2225 * __this, const MethodInfo* method);
#define m16768(__this, method) (( void (*) (t2225 *, const MethodInfo*))m16768_gshared)(__this, method)
extern "C" void m16769_gshared (t34 * __this , const MethodInfo* method);
#define m16769(__this , method) (( void (*) (t34 * , const MethodInfo*))m16769_gshared)(__this , method)
extern "C" int32_t m16770_gshared (t2225 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m16770(__this, p0, p1, method) (( int32_t (*) (t2225 *, t34 *, t34 *, const MethodInfo*))m16770_gshared)(__this, p0, p1, method)
extern "C" t2225 * m16771_gshared (t34 * __this , const MethodInfo* method);
#define m16771(__this , method) (( t2225 * (*) (t34 * , const MethodInfo*))m16771_gshared)(__this , method)
