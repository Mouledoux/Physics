﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

struct t411;
struct t411_marshaled;

#include "codegen/il2cpp-codegen.h"

extern "C" void m2342 (t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2343 (t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void m2344 (t411 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void t411_marshal(const t411& unmarshaled, t411_marshaled& marshaled);
extern "C" void t411_marshal_back(const t411_marshaled& marshaled, t411& unmarshaled);
extern "C" void t411_marshal_cleanup(t411_marshaled& marshaled);
