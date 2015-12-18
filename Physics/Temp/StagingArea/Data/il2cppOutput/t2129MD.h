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

struct t2129;
struct t542;
struct t29;
struct t34;
struct t518;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15854_gshared (t2129 * __this, const MethodInfo* method);
#define m15854(__this, method) (( void (*) (t2129 *, const MethodInfo*))m15854_gshared)(__this, method)
extern "C" t542 * m15855_gshared (t2129 * __this, t29* p0, t34 * p1, const MethodInfo* method);
#define m15855(__this, p0, p1, method) (( t542 * (*) (t2129 *, t29*, t34 *, const MethodInfo*))m15855_gshared)(__this, p0, p1, method)
extern "C" t518 * m15856_gshared (t2129 * __this, t34 * p0, t542 * p1, const MethodInfo* method);
#define m15856(__this, p0, p1, method) (( t518 * (*) (t2129 *, t34 *, t542 *, const MethodInfo*))m15856_gshared)(__this, p0, p1, method)
