#include <stdio.h>
#include <string.h>
#include "header.h"

int main(void){

    Stack* stk;

    for(unsigned int a=0; a<8; a++){
        stack_push(stk, a);
    }

    stack_print(stk);

    while(!stack_isEmpty(stk)){
        stack_pop(stk);
        stack_print(stk);
    }puts("NULL");

    return 0;
}