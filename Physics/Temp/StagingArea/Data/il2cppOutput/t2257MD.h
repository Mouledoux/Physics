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

struct t2257;

#include "codegen/il2cpp-codegen.h"
#include "t1567.h"

extern "C" void m17011_gshared (t2257 * __this, const MethodInfo* method);
#define m17011(__this, method) (( void (*) (t2257 *, const MethodInfo*))m17011_gshared)(__this, method)
extern "C" int32_t m17012_gshared (t2257 * __this, t1567  p0, t1567  p1, const MethodInfo* method);
#define m17012(__this, p0, p1, method) (( int32_t (*) (t2257 *, t1567 , t1567 , const MethodInfo*))m17012_gshared)(__this, p0, p1, method)
