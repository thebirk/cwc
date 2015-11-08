#ifndef _WINDOW_H
#define _WINDOW_H
#include "../../cwc.h"
#include <SDL2/SDL.h>

defclass(Window)
	SDL_Window *window;
	SDL_Renderer *renderer;
	int closeRequested;

	int width;
	int height;

	method(Window, void, FillRect, int x, int y, int w, int h)
	method(Window, void, SetColor, int r, int g, int b, int a)
	method(Window, void, Update)
	method(Window, void, Clear)
	method(Window, void, Flip)
	method(Window, int, isCloseRequested)
endclass

decl_constructor(Window, int width, int height, char *title)
decl_method(Window, void, FillRect, int x, int y, int w, int h)
decl_method(Window, void, SetColor, int r, int g, int b, int a)
decl_method(Window, void, Update)
decl_method(Window, void, Clear)
decl_method(Window, void, Flip)
decl_method(Window, int, isCloseRequested)

#endif /* _WINDOW_H */
