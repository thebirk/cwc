#include "MSG.h"
#include <stdio.h>

defconstructor(MSG, char *msg)
	self->msg = msg;

	add_method(MSG, Send)
	add_method(MSG, Set)
endconstructor

defmethod(MSG, void, Send)
	printf("%s\n", self->msg);
endmethod

defmethod(MSG, void, Set, char *msg)
	self->msg = msg;
endmethod
