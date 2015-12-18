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

struct t2262;

#include "codegen/il2cpp-codegen.h"
#include "t875.h"

extern "C" void m17064_gshared (t2262 * __this, const MethodInfo* method);
#define m17064(__this, method) (( void (*) (t2262 *, const MethodInfo*))m17064_gshared)(__this, method)
extern "C" int32_t m17065_gshared (t2262 * __this, t875  p0, t875  p1, const MethodInfo* method);
#define m17065(__this, p0, p1, method) (( int32_t (*) (t2262 *, t875 , t875 , const MethodInfo*))m17065_gshared)(__this, p0, p1, method)
