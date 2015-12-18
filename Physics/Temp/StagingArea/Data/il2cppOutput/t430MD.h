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

struct t430;
struct t430_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2172 (t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2173 (t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2174 (t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2175 (t430 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t430_marshal(const t430& unmarshaled, t430_marshaled& marshaled);
extern "C" void t430_marshal_back(const t430_marshaled& marshaled, t430& unmarshaled);
extern "C" void t430_marshal_cleanup(t430_marshaled& marshaled);
