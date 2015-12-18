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

struct t2144;
struct t34;
struct t184;
struct t185;

#include "codegen/il2cpp-codegen.h"
#include "t199.h"
#include "t960.h"

extern "C" void m16062_gshared (t2144 * __this, t34 * p0, t199 p1, const MethodInfo* method);
#define m16062(__this, p0, p1, method) (( void (*) (t2144 *, t34 *, t199, const MethodInfo*))m16062_gshared)(__this, p0, p1, method)
extern "C" t960  m16063_gshared (t2144 * __this, t34 * p0, bool p1, const MethodInfo* method);
#define m16063(__this, p0, p1, method) (( t960  (*) (t2144 *, t34 *, bool, const MethodInfo*))m16063_gshared)(__this, p0, p1, method)
extern "C" t34 * m16064_gshared (t2144 * __this, t34 * p0, bool p1, t185 * p2, t34 * p3, const MethodInfo* method);
#define m16064(__this, p0, p1, p2, p3, method) (( t34 * (*) (t2144 *, t34 *, bool, t185 *, t34 *, const MethodInfo*))m16064_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t960  m16065_gshared (t2144 * __this, t34 * p0, const MethodInfo* method);
#define m16065(__this, p0, method) (( t960  (*) (t2144 *, t34 *, const MethodInfo*))m16065_gshared)(__this, p0, method)
