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

struct t1911;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m12942_gshared (t1911 * __this, const MethodInfo* method);
#define m12942(__this, method) (( void (*) (t1911 *, const MethodInfo*))m12942_gshared)(__this, method)
extern "C" void m12943_gshared (t34 * __this , const MethodInfo* method);
#define m12943(__this , method) (( void (*) (t34 * , const MethodInfo*))m12943_gshared)(__this , method)
extern "C" int32_t m12944_gshared (t1911 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m12944(__this, p0, p1, method) (( int32_t (*) (t1911 *, t34 *, t34 *, const MethodInfo*))m12944_gshared)(__this, p0, p1, method)
extern "C" t1911 * m12945_gshared (t34 * __this , const MethodInfo* method);
#define m12945(__this , method) (( t1911 * (*) (t34 * , const MethodInfo*))m12945_gshared)(__this , method)
