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

extern "C" void t555_marshal(const t555& unmarshaled, t555_marshaled& marshaled);
extern "C" void t555_marshal_back(const t555_marshaled& marshaled, t555& unmarshaled);
extern "C" void t555_marshal_cleanup(t555_marshaled& marshaled);
