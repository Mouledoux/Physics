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

struct t2156;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16085_gshared (t2156 * __this, const MethodInfo* method);
#define m16085(__this, method) (( void (*) (t2156 *, const MethodInfo*))m16085_gshared)(__this, method)
extern "C" int32_t m16086_gshared (t2156 * __this, bool p0, const MethodInfo* method);
#define m16086(__this, p0, method) (( int32_t (*) (t2156 *, bool, const MethodInfo*))m16086_gshared)(__this, p0, method)
extern "C" bool m16087_gshared (t2156 * __this, bool p0, bool p1, const MethodInfo* method);
#define m16087(__this, p0, p1, method) (( bool (*) (t2156 *, bool, bool, const MethodInfo*))m16087_gshared)(__this, p0, p1, method)
