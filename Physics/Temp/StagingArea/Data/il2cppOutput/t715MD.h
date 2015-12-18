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

extern "C" void t715_marshal(const t715& unmarshaled, t715_marshaled& marshaled);
extern "C" void t715_marshal_back(const t715_marshaled& marshaled, t715& unmarshaled);
extern "C" void t715_marshal_cleanup(t715_marshaled& marshaled);
