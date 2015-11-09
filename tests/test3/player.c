#include "player.h"

decl_method(Player, void, Render, Window*)
decl_method(Player, void, Update, Window*)

defconstructor(Player, Input *input)
    self->x = 50;
    self->y = 50;

    self->input = input;

    add_method(Player, Render)
    add_method(Player, Update)
endconstructor

defmethod(Player, void, Update, Window *window)
    if(self->input->GetKey(self->input, UP)) {
        self->y--;
    }else if(self->input->GetKey(self->input, DOWN)){
        self->y++;
    }

    if(self->input->GetKey(self->input, LEFT)) {
        self->x--;
    }else if(self->input->GetKey(self->input, RIGHT)) {
        self->x++;
    }
endmethod

defmethod(Player, void, Render, Window* window)
    window->SetColor(window, 255, 0, 255, 255);
    window->FillRect(window, self->x, self->y, 50, 50);
endmethod
