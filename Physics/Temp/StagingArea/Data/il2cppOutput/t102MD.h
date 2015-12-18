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

struct t102;
struct t34;
struct t184;
struct t185;

#include "codegen/il2cpp-codegen.h"
#include "t199.h"
#include "t305.h"

extern "C" void m1609_gshared (t102 * __this, t34 * p0, t199 p1, const MethodInfo* method);
#define m1609(__this, p0, p1, method) (( void (*) (t102 *, t34 *, t199, const MethodInfo*))m1609_gshared)(__this, p0, p1, method)
extern "C" int32_t m11905_gshared (t102 * __this, t305  p0, t305  p1, const MethodInfo* method);
#define m11905(__this, p0, p1, method) (( int32_t (*) (t102 *, t305 , t305 , const MethodInfo*))m11905_gshared)(__this, p0, p1, method)
extern "C" t34 * m11906_gshared (t102 * __this, t305  p0, t305  p1, t185 * p2, t34 * p3, const MethodInfo* method);
#define m11906(__this, p0, p1, p2, p3, method) (( t34 * (*) (t102 *, t305 , t305 , t185 *, t34 *, const MethodInfo*))m11906_gshared)(__this, p0, p1, p2, p3, method)
extern "C" int32_t m11907_gshared (t102 * __this, t34 * p0, const MethodInfo* method);
#define m11907(__this, p0, method) (( int32_t (*) (t102 *, t34 *, const MethodInfo*))m11907_gshared)(__this, p0, method)
