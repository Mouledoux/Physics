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

struct t346;
struct t346_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m1676 (t346 * __this, float p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t346_marshal(const t346& unmarshaled, t346_marshaled& marshaled);
extern "C" void t346_marshal_back(const t346_marshaled& marshaled, t346& unmarshaled);
extern "C" void t346_marshal_cleanup(t346_marshaled& marshaled);
