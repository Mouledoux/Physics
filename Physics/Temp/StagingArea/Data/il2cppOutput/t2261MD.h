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

struct t2261;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m17060_gshared (t2261 * __this, const MethodInfo* method);
#define m17060(__this, method) (( void (*) (t2261 *, const MethodInfo*))m17060_gshared)(__this, method)
extern "C" void m17061_gshared (t34 * __this , const MethodInfo* method);
#define m17061(__this , method) (( void (*) (t34 * , const MethodInfo*))m17061_gshared)(__this , method)
extern "C" int32_t m17062_gshared (t2261 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m17062(__this, p0, p1, method) (( int32_t (*) (t2261 *, t34 *, t34 *, const MethodInfo*))m17062_gshared)(__this, p0, p1, method)
extern "C" t2261 * m17063_gshared (t34 * __this , const MethodInfo* method);
#define m17063(__this , method) (( t2261 * (*) (t34 * , const MethodInfo*))m17063_gshared)(__this , method)
