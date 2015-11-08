#include "../../cwc.h"

defclass(MSG)
	char *msg;

	method(MSG, void, Send)
	method(MSG, void, Set, char*)
endclass

decl_constructor(MSG, char *msg)
decl_method(MSG, void, Send)
decl_method(MSG, void, Set, char*)
