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

struct t2000;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" void m14339_gshared (t2000 * __this, const MethodInfo* method);
#define m14339(__this, method) (( void (*) (t2000 *, const MethodInfo*))m14339_gshared)(__this, method)
extern "C" void m14340_gshared (t34 * __this , const MethodInfo* method);
#define m14340(__this , method) (( void (*) (t34 * , const MethodInfo*))m14340_gshared)(__this , method)
extern "C" int32_t m14341_gshared (t2000 * __this, t34 * p0, const MethodInfo* method);
#define m14341(__this, p0, method) (( int32_t (*) (t2000 *, t34 *, const MethodInfo*))m14341_gshared)(__this, p0, method)
extern "C" bool m14342_gshared (t2000 * __this, t34 * p0, t34 * p1, const MethodInfo* method);
#define m14342(__this, p0, p1, method) (( bool (*) (t2000 *, t34 *, t34 *, const MethodInfo*))m14342_gshared)(__this, p0, p1, method)
extern "C" t2000 * m14343_gshared (t34 * __this , const MethodInfo* method);
#define m14343(__this , method) (( t2000 * (*) (t34 * , const MethodInfo*))m14343_gshared)(__this , method)
