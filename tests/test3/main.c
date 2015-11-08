#include <stdio.h>
#include "window.h"
#include "player.h"

int main(int argc, char **argv) {

	Window *window = newWindow(800, 600, "Hello, world!");
	Player *player = newPlayer();

	while(!window->isCloseRequested(window)) {
		window->SetColor(window, 0, 0, 0, 0);
		window->Clear(window);

		window->SetColor(window, 128, 128, 128, 255);
		window->FillRect(window, 20, 20, 50, 50);

		player->Render(player, window);
		player->Update(player, window);

		window->Flip(window);
		window->Update(window);
	}

	return 0;
}
