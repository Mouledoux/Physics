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

struct t306;
struct t34;
struct t184;
struct t185;

#include "codegen/il2cpp-codegen.h"
#include "t199.h"
#include "t107.h"

extern "C" void m1770_gshared (t306 * __this, t34 * p0, t199 p1, const MethodInfo* method);
#define m1770(__this, p0, p1, method) (( void (*) (t306 *, t34 *, t199, const MethodInfo*))m1770_gshared)(__this, p0, p1, method)
extern "C" void m11918_gshared (t306 * __this, t107  p0, const MethodInfo* method);
#define m11918(__this, p0, method) (( void (*) (t306 *, t107 , const MethodInfo*))m11918_gshared)(__this, p0, method)
extern "C" t34 * m11919_gshared (t306 * __this, t107  p0, t185 * p1, t34 * p2, const MethodInfo* method);
#define m11919(__this, p0, p1, p2, method) (( t34 * (*) (t306 *, t107 , t185 *, t34 *, const MethodInfo*))m11919_gshared)(__this, p0, p1, p2, method)
extern "C" void m11920_gshared (t306 * __this, t34 * p0, const MethodInfo* method);
#define m11920(__this, p0, method) (( void (*) (t306 *, t34 *, const MethodInfo*))m11920_gshared)(__this, p0, method)
