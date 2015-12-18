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

struct t2131;
struct t542;
struct t29;
struct t34;
struct t518;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15860_gshared (t2131 * __this, const MethodInfo* method);
#define m15860(__this, method) (( void (*) (t2131 *, const MethodInfo*))m15860_gshared)(__this, method)
extern "C" t542 * m15861_gshared (t2131 * __this, t29* p0, t34 * p1, const MethodInfo* method);
#define m15861(__this, p0, p1, method) (( t542 * (*) (t2131 *, t29*, t34 *, const MethodInfo*))m15861_gshared)(__this, p0, p1, method)
extern "C" t518 * m15862_gshared (t2131 * __this, t34 * p0, t542 * p1, const MethodInfo* method);
#define m15862(__this, p0, p1, method) (( t518 * (*) (t2131 *, t34 *, t542 *, const MethodInfo*))m15862_gshared)(__this, p0, p1, method)
