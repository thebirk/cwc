#include "player.h"

decl_method(Player, void, Render, Window*)
decl_method(Player, void, Update, Window*)

defconstructor(Player)
    self->x = 50;
    self->y = 50;

    add_method(Player, Render)
    add_method(Player, Update)
endconstructor

defmethod(Player, void, Update, Window *window)
    if(window->up) {
        self->y--;
    }else if(window->down){
        self->y++;
    }

    if(window->left) {
        self->x--;
    }else if(window->right) {
        self->x++;
    }
endmethod

defmethod(Player, void, Render, Window* window)
    window->SetColor(window, 255, 0, 255, 255);
    window->FillRect(window, self->x, self->y, 50, 50);
endmethod
