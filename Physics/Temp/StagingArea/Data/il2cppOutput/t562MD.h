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

struct t562;
struct t28;
struct t28_marshaled;
struct t542;
struct t37;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2903_gshared (t562 * __this, t28 * p0, t542 * p1, float p2, const MethodInfo* method);
#define m2903(__this, p0, p1, p2, method) (( void (*) (t562 *, t28 *, t542 *, float, const MethodInfo*))m2903_gshared)(__this, p0, p1, p2, method)
extern "C" void m15664_gshared (t562 * __this, t37* p0, const MethodInfo* method);
#define m15664(__this, p0, method) (( void (*) (t562 *, t37*, const MethodInfo*))m15664_gshared)(__this, p0, method)
