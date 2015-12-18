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

struct t2264;

#include "codegen/il2cpp-codegen.h"
#include "t875.h"

extern "C" void m17073_gshared (t2264 * __this, const MethodInfo* method);
#define m17073(__this, method) (( void (*) (t2264 *, const MethodInfo*))m17073_gshared)(__this, method)
extern "C" int32_t m17074_gshared (t2264 * __this, t875  p0, const MethodInfo* method);
#define m17074(__this, p0, method) (( int32_t (*) (t2264 *, t875 , const MethodInfo*))m17074_gshared)(__this, p0, method)
extern "C" bool m17075_gshared (t2264 * __this, t875  p0, t875  p1, const MethodInfo* method);
#define m17075(__this, p0, p1, method) (( bool (*) (t2264 *, t875 , t875 , const MethodInfo*))m17075_gshared)(__this, p0, p1, method)
