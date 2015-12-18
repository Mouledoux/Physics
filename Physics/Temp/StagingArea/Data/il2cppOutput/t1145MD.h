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

extern "C" void t1145_marshal(const t1145& unmarshaled, t1145_marshaled& marshaled);
extern "C" void t1145_marshal_back(const t1145_marshaled& marshaled, t1145& unmarshaled);
extern "C" void t1145_marshal_cleanup(t1145_marshaled& marshaled);
