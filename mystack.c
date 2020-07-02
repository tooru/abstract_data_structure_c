#include <stdlib.h>
#include "mystack.h"
#include "mystackimpl.h"

mystack_t *mystack_new() {
    return (mystack_t *)malloc(sizeof(mystack_t));
}

void mystack_push(mystack_t *stack) {
    stack->size++;
}

int mystack_size(mystack_t *stack) {
    return stack->size;
}
