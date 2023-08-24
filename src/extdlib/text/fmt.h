#pragma once

#include <extdlib/base/std.h>
#include <extdlib/io/fmt.h>

Str str_fmt(Alloc *alloc, Str format, AnyVa args);

Str str_printf(Alloc *alloc, Str format, ...);

#define str_fmt$(alloc, format, ...) \
    str_fmt(alloc, str$(format), any_va$(__VA_ARGS__))
