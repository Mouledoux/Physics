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

struct t565;
struct t28;
struct t28_marshaled;
struct t542;
struct t37;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2906_gshared (t565 * __this, t28 * p0, t542 * p1, bool p2, const MethodInfo* method);
#define m2906(__this, p0, p1, p2, method) (( void (*) (t565 *, t28 *, t542 *, bool, const MethodInfo*))m2906_gshared)(__this, p0, p1, p2, method)
extern "C" void m15671_gshared (t565 * __this, t37* p0, const MethodInfo* method);
#define m15671(__this, p0, method) (( void (*) (t565 *, t37*, const MethodInfo*))m15671_gshared)(__this, p0, method)
