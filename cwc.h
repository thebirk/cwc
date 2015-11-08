/*
	Copyright (c) 2015 Aleksander B. Birkeland

    This software is provided 'as-is', without any express or implied
    warranty. In no event will the authors be held liable for any damages
    arising from the use of this software.

    Permission is granted to anyone to use this software for any purpose,
    including commercial applications, and to alter it and redistribute it
    freely, subject to the following restrictions:

    1.  The origin of this software must not be misrepresented; you must not
        claim that you wrote the original software. If you use this software
        in a product, an acknowledgement in the product documentation would be
        appreciated but is not required.
    2. Altered source versions must be plainly marked as such, and must not be
       misrepresented as being the original software.
    3. This notice may not be removed or altered from any source distribution.
*/

#ifndef _CWC_H
#define _CWC_H

// Config start

// If this is 1, then include stdlib and add new() and delete() macro
#define MALLOC_ALTERNATIVE 1
//

// Config end

#if MALLOC_ALTERNATIVE == 1
#include <stdlib.h>
#define new(o) malloc(sizeof(o))
#define delete(o) free(o)
#endif

#define begin_class(n) typedef struct n n; struct n {
#define end_class };

#define decl_method(class, ret, name, ...) ret (*name)(class* self, ## __VA_ARGS__);
#define decl_method_impl(class, ret, name, ...) ret class ## _ ## name(class *self, ## __VA_ARGS__);
#define begin_method(class, ret, name, ...) ret class ## _ ## name(class *self, ## __VA_ARGS__) {
#define end_method }

#define decl_constructor(class, ...) class* new ## class (__VA_ARGS__);
#define begin_constructor(class, ...) class* new ## class (__VA_ARGS__) { class* self = new(class);
#define add_method(class, name) self->name = class ## _ ## name;
#define end_constructor return self; }

#endif