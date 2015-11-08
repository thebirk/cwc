#include "MSG.h"

void main() {
	MSG *m = newMSG("Hello, world!");
	m->Set(m, "Nope!");
	m->Send(m);
}
