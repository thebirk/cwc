#include "../../cwc.h"
#include "window.h"

defclass(Player)
    int x;
    int y;
    Input *input;

    method(Player, void, Update, Window*)
    method(Player, void, Render, Window*)
endclass

decl_constructor(Player, Input*)
