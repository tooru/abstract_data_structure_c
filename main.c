/*#include "psnliz.h"*/

#include <stdio.h>
#include "mystack.h"

int main(int argc, char *argv[]) {
    mystack_t *stack = mystack_new();
    mystack_push(stack);

    printf("stack size:%d\n", mystack_size(stack));
}
