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

struct t2214;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16601_gshared (t2214 * __this, const MethodInfo* method);
#define m16601(__this, method) (( void (*) (t2214 *, const MethodInfo*))m16601_gshared)(__this, method)
extern "C" void m16602_gshared (t34 * __this , const MethodInfo* method);
#define m16602(__this , method) (( void (*) (t34 * , const MethodInfo*))m16602_gshared)(__this , method)
extern "C" int32_t m16603_gshared (t2214 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m16603(__this, p0, p1, method) (( int32_t (*) (t2214 *, t34 *, t34 *, const MethodInfo*))m16603_gshared)(__this, p0, p1, method)
extern "C" t2214 * m16604_gshared (t34 * __this , const MethodInfo* method);
#define m16604(__this , method) (( t2214 * (*) (t34 * , const MethodInfo*))m16604_gshared)(__this , method)
