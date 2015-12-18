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

struct t419;
struct t419_marshaled;
struct t29;
struct t332;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2118 (t419 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2119 (t34 * __this , t419 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t419 * m2120 (t34 * __this , t29* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t419 * m2121 (t34 * __this , t332 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" t419 * m2122 (t34 * __this , t332 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t419_marshal(const t419& unmarshaled, t419_marshaled& marshaled);
extern "C" void t419_marshal_back(const t419_marshaled& marshaled, t419& unmarshaled);
extern "C" void t419_marshal_cleanup(t419_marshaled& marshaled);
