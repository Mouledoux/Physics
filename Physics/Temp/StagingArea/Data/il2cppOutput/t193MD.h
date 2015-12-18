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

struct t193;
struct t193_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2115 (t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2116 (t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2117 (t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t193_marshal(const t193& unmarshaled, t193_marshaled& marshaled);
extern "C" void t193_marshal_back(const t193_marshaled& marshaled, t193& unmarshaled);
extern "C" void t193_marshal_cleanup(t193_marshaled& marshaled);
