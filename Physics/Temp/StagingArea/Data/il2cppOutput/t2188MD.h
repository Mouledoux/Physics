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

struct t2188;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16353_gshared (t2188 * __this, const MethodInfo* method);
#define m16353(__this, method) (( void (*) (t2188 *, const MethodInfo*))m16353_gshared)(__this, method)
extern "C" int32_t m16354_gshared (t2188 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m16354(__this, p0, p1, method) (( int32_t (*) (t2188 *, t34 *, t34 *, const MethodInfo*))m16354_gshared)(__this, p0, p1, method)
