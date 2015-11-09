#include "../../cwc.h"
#include <stdbool.h>

#define UP        0
#define DOWN      1
#define LEFT      2
#define RIGHT     3

defclass(Input)
    bool keys[4];

    method(Input, void, SetKey, int k, bool down)
    method(Input, bool, GetKey, int k)
endclass

decl_constructor(Input)
