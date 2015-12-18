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

struct t2252;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m16986_gshared (t2252 * __this, const MethodInfo* method);
#define m16986(__this, method) (( void (*) (t2252 *, const MethodInfo*))m16986_gshared)(__this, method)
extern "C" void m16987_gshared (t34 * __this , const MethodInfo* method);
#define m16987(__this , method) (( void (*) (t34 * , const MethodInfo*))m16987_gshared)(__this , method)
extern "C" int32_t m16988_gshared (t2252 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m16988(__this, p0, p1, method) (( int32_t (*) (t2252 *, t34 *, t34 *, const MethodInfo*))m16988_gshared)(__this, p0, p1, method)
extern "C" t2252 * m16989_gshared (t34 * __this , const MethodInfo* method);
#define m16989(__this , method) (( t2252 * (*) (t34 * , const MethodInfo*))m16989_gshared)(__this , method)
