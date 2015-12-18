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

struct t2014;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14501_gshared (t2014 * __this, const MethodInfo* method);
#define m14501(__this, method) (( void (*) (t2014 *, const MethodInfo*))m14501_gshared)(__this, method)
extern "C" void m14502_gshared (t34 * __this , const MethodInfo* method);
#define m14502(__this , method) (( void (*) (t34 * , const MethodInfo*))m14502_gshared)(__this , method)
extern "C" int32_t m14503_gshared (t2014 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m14503(__this, p0, p1, method) (( int32_t (*) (t2014 *, t34 *, t34 *, const MethodInfo*))m14503_gshared)(__this, p0, p1, method)
extern "C" t2014 * m14504_gshared (t34 * __this , const MethodInfo* method);
#define m14504(__this , method) (( t2014 * (*) (t34 * , const MethodInfo*))m14504_gshared)(__this , method)
