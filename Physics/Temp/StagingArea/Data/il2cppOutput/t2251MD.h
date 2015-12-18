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

struct t2251;

#include "codegen/il2cpp-codegen.h"
#include "t638.h"

extern "C" void m16982_gshared (t2251 * __this, const MethodInfo* method);
#define m16982(__this, method) (( void (*) (t2251 *, const MethodInfo*))m16982_gshared)(__this, method)
extern "C" int32_t m16983_gshared (t2251 * __this, t638  p0, const MethodInfo* method);
#define m16983(__this, p0, method) (( int32_t (*) (t2251 *, t638 , const MethodInfo*))m16983_gshared)(__this, p0, method)
extern "C" bool m16984_gshared (t2251 * __this, t638  p0, t638  p1, const MethodInfo* method);
#define m16984(__this, p0, p1, method) (( bool (*) (t2251 *, t638 , t638 , const MethodInfo*))m16984_gshared)(__this, p0, p1, method)
