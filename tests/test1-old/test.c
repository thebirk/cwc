#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define new(o) malloc(sizeof(o))
#define delete(o) free(o)

#define begin_class(n) typedef struct n n; struct n {
#define end_class }

#define decl_method(class, name, ...) (*name)(class* self, ## __VA_ARGS__)
#define begin_method(class, name, ...) class ## _ ## name(class *self, ## __VA_ARGS__) {
#define endmethod_impl }

#define decl_constructor(class, ...) class* new ## class (__VA_ARGS__);
#define begin_constructor(class, ...) class* new ## class (__VA_ARGS__) { class* self = new(class);
#define add_method(class, name) self->name = class ## _ ## name;
#define end_constructor(class) return self; }

begin_class(TEST)
	char *str;
	
	char* decl_method(TEST, copy);
end_class(TEST);

char* begin_method(TEST, copy)
	return strdup(self->str);
endmethod_impl

begin_constructor(TEST, char *str)
	self->str = str;
	
	add_method(TEST, copy)
end_constructor(TEST)

void main() {
	TEST *l = newTEST("hello, world!");
	//l->str = "Hello, world!";
	
	printf("%s\n", l->str);
}