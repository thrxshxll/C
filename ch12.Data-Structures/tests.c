#include <stdio.h>
#include <string.h>
#include "header.h"

int main(void){

    Stack* stk = stack_create();

    for(unsigned int a=0; a<8; a++){
        stack_push(stk, a);
    }

    while(!stack_isEmpty(stk)){
        stack_pop(stk);
        stack_print(stk);
    }

    stack_destroy(stk);
    return 0;
}