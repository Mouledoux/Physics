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


#include "codegen/il2cpp-codegen.h"

extern "C" void t742_marshal(const t742& unmarshaled, t742_marshaled& marshaled);
extern "C" void t742_marshal_back(const t742_marshaled& marshaled, t742& unmarshaled);
extern "C" void t742_marshal_cleanup(t742_marshaled& marshaled);
