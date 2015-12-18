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

struct t2253;

#include "codegen/il2cpp-codegen.h"
#include "t1548.h"

extern "C" void m16990_gshared (t2253 * __this, const MethodInfo* method);
#define m16990(__this, method) (( void (*) (t2253 *, const MethodInfo*))m16990_gshared)(__this, method)
extern "C" int32_t m16991_gshared (t2253 * __this, t1548  p0, t1548  p1, const MethodInfo* method);
#define m16991(__this, p0, p1, method) (( int32_t (*) (t2253 *, t1548 , t1548 , const MethodInfo*))m16991_gshared)(__this, p0, p1, method)
