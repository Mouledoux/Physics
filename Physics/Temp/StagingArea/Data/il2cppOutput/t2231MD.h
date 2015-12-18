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

struct t2231;
struct t34;
struct t184;
struct t185;

#include "codegen/il2cpp-codegen.h"
#include "t199.h"

extern "C" void m16804_gshared (t2231 * __this, t34 * p0, t199 p1, const MethodInfo* method);
#define m16804(__this, p0, p1, method) (( void (*) (t2231 *, t34 *, t199, const MethodInfo*))m16804_gshared)(__this, p0, p1, method)
extern "C" t34 * m16805_gshared (t2231 * __this, const MethodInfo* method);
#define m16805(__this, method) (( t34 * (*) (t2231 *, const MethodInfo*))m16805_gshared)(__this, method)
extern "C" t34 * m16806_gshared (t2231 * __this, t185 * p0, t34 * p1, const MethodInfo* method);
#define m16806(__this, p0, p1, method) (( t34 * (*) (t2231 *, t185 *, t34 *, const MethodInfo*))m16806_gshared)(__this, p0, p1, method)
extern "C" t34 * m16807_gshared (t2231 * __this, t34 * p0, const MethodInfo* method);
#define m16807(__this, p0, method) (( t34 * (*) (t2231 *, t34 *, const MethodInfo*))m16807_gshared)(__this, p0, method)
