#include "../../cwc.h"

begin_class(MSG)
	char *msg;
	
	decl_method(MSG, void, Send)
	decl_method(MSG, void, Set, char*)
end_class

decl_constructor(MSG, char *msg)
decl_method_impl(MSG, void, Send)
decl_method_impl(MSG, void, Set, char*)