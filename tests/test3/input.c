#include "input.h"

decl_method(Input, void, SetKey, int k, bool down)
decl_method(Input, bool, GetKey, int k)

defconstructor(Input)
    int i;
    for(i = 0; i < 4; i++) {
        self->keys[i] = false;
    }

    add_method(Input, SetKey)
    add_method(Input, GetKey)
endconstructor

defmethod(Input, void, SetKey, int k, bool down)
    self->keys[k] = down;
endmethod

defmethod(Input, bool, GetKey, int k)
    return self->keys[k];
endmethod
