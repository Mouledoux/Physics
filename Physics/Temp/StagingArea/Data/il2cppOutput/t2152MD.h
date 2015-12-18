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

struct t2152;
struct t34;
struct t184;
struct t185;

#include "codegen/il2cpp-codegen.h"
#include "t199.h"
#include "t2145.h"

extern "C" void m16066_gshared (t2152 * __this, t34 * p0, t199 p1, const MethodInfo* method);
#define m16066(__this, p0, p1, method) (( void (*) (t2152 *, t34 *, t199, const MethodInfo*))m16066_gshared)(__this, p0, p1, method)
extern "C" t2145  m16067_gshared (t2152 * __this, t34 * p0, bool p1, const MethodInfo* method);
#define m16067(__this, p0, p1, method) (( t2145  (*) (t2152 *, t34 *, bool, const MethodInfo*))m16067_gshared)(__this, p0, p1, method)
extern "C" t34 * m16068_gshared (t2152 * __this, t34 * p0, bool p1, t185 * p2, t34 * p3, const MethodInfo* method);
#define m16068(__this, p0, p1, p2, p3, method) (( t34 * (*) (t2152 *, t34 *, bool, t185 *, t34 *, const MethodInfo*))m16068_gshared)(__this, p0, p1, p2, p3, method)
extern "C" t2145  m16069_gshared (t2152 * __this, t34 * p0, const MethodInfo* method);
#define m16069(__this, p0, method) (( t2145  (*) (t2152 *, t34 *, const MethodInfo*))m16069_gshared)(__this, p0, method)
