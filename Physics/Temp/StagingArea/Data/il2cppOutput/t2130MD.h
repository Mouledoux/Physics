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

struct t2130;
struct t542;
struct t29;
struct t34;
struct t518;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15857_gshared (t2130 * __this, const MethodInfo* method);
#define m15857(__this, method) (( void (*) (t2130 *, const MethodInfo*))m15857_gshared)(__this, method)
extern "C" t542 * m15858_gshared (t2130 * __this, t29* p0, t34 * p1, const MethodInfo* method);
#define m15858(__this, p0, p1, method) (( t542 * (*) (t2130 *, t29*, t34 *, const MethodInfo*))m15858_gshared)(__this, p0, p1, method)
extern "C" t518 * m15859_gshared (t2130 * __this, t34 * p0, t542 * p1, const MethodInfo* method);
#define m15859(__this, p0, p1, method) (( t518 * (*) (t2130 *, t34 *, t542 *, const MethodInfo*))m15859_gshared)(__this, p0, p1, method)
