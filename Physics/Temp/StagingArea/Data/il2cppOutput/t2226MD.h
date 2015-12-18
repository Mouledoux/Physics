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

struct t2226;

#include "codegen/il2cpp-codegen.h"
#include "t1230.h"

extern "C" void m16772_gshared (t2226 * __this, const MethodInfo* method);
#define m16772(__this, method) (( void (*) (t2226 *, const MethodInfo*))m16772_gshared)(__this, method)
extern "C" int32_t m16773_gshared (t2226 * __this, t1230  p0, t1230  p1, const MethodInfo* method);
#define m16773(__this, p0, p1, method) (( int32_t (*) (t2226 *, t1230 , t1230 , const MethodInfo*))m16773_gshared)(__this, p0, p1, method)
