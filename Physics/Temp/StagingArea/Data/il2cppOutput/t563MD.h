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

struct t563;
struct t28;
struct t28_marshaled;
struct t542;
struct t37;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2904_gshared (t563 * __this, t28 * p0, t542 * p1, int32_t p2, const MethodInfo* method);
#define m2904(__this, p0, p1, p2, method) (( void (*) (t563 *, t28 *, t542 *, int32_t, const MethodInfo*))m2904_gshared)(__this, p0, p1, p2, method)
extern "C" void m15665_gshared (t563 * __this, t37* p0, const MethodInfo* method);
#define m15665(__this, p0, method) (( void (*) (t563 *, t37*, const MethodInfo*))m15665_gshared)(__this, p0, method)
