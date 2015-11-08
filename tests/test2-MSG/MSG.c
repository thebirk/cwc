#include "MSG.h"
#include <stdio.h>

begin_constructor(MSG, char *msg)
	self->msg = msg;
	
	add_method(MSG, Send)
	add_method(MSG, Set)
end_constructor

begin_method(MSG, void, Send)
	printf("%s\n", self->msg);
end_method

begin_method(MSG, void, Set, char *msg)
	self->msg = msg;
end_method