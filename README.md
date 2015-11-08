# CWC - C with classes
cwc is a header file that allows you to have classes in c


## Example:
*MSG.h:*
```c
#ifndef _MSG_H
#define _MSG_H
#include "cwc.h"

defclass(MSG)
	char *msg;
	
	method(MSG, void, Send)
	method(MSG, void, Set, char*)
endclass

decl_constructor(MSG, char *msg)

#endif /* _MSG_H */
```
*MSG.c*
```c
#include "MSG.h"
#include <stdio.h>

decl_method_impl(MSG, void, Send)
decl_method_impl(MSG, void, Set, char*)

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
