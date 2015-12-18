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

struct t475;
struct t475_marshaled;
struct t34;

#include "codegen/il2cpp-codegen.h"

extern "C" bool m2784 (t475 * __this, t34 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t m2785 (t475 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool m2786 (t34 * __this , t475 * p0, t475 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t475_marshal(const t475& unmarshaled, t475_marshaled& marshaled);
extern "C" void t475_marshal_back(const t475_marshaled& marshaled, t475& unmarshaled);
extern "C" void t475_marshal_cleanup(t475_marshaled& marshaled);
