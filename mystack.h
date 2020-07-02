#ifndef _MY_STACK_H
#define _MY_STACK_H

typedef struct mystack mystack_t;

mystack_t *mystack_new();
void mystack_push(mystack_t *stack);
int mystack_size(mystack_t *stack);

#endif /* _MY_STACK_H */