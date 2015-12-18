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

struct t2111;
struct t34;
struct t542;
struct t37;

#include "codegen/il2cpp-codegen.h"

extern "C" void m15641_gshared (t2111 * __this, t34 * p0, t542 * p1, const MethodInfo* method);
#define m15641(__this, p0, p1, method) (( void (*) (t2111 *, t34 *, t542 *, const MethodInfo*))m15641_gshared)(__this, p0, p1, method)
extern "C" void m15642_gshared (t2111 * __this, t37* p0, const MethodInfo* method);
#define m15642(__this, p0, method) (( void (*) (t2111 *, t37*, const MethodInfo*))m15642_gshared)(__this, p0, method)
extern "C" bool m15643_gshared (t2111 * __this, t34 * p0, t542 * p1, const MethodInfo* method);
#define m15643(__this, p0, p1, method) (( bool (*) (t2111 *, t34 *, t542 *, const MethodInfo*))m15643_gshared)(__this, p0, p1, method)
