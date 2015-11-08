# CWC - C with classes
cwc is a header file that allows you to have classes in c


## Example:
*MSG.h:*
```c
#include "cwc.h"

begin_class(MSG)
	char *msg;
	
	decl_method(MSG, void, Send)
	decl_method(MSG, void, Set, char*)
end_class

decl_constructor(MSG, char *msg)
decl_method_impl(MSG, void, Send)
decl_method_impl(MSG, void, Set, char*)
```
*MSG.c*
```c
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
```

*main.c*
```c
#include "MSG.h"

void main() {
	MSG *m = newMSG("Hello, world!");
	m->Send(m);
	m->Set(m, "Nope!");
	m->Send(m);
}
```

Output:
```
Hello, world!
Nope!
```
