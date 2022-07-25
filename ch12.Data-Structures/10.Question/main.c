/*

12.10 (Reversing the Words of a Sentence) Write a program that inputs a line
of text and uses a stack to print the line reversed.

*/

// Jul 2022, Yuri

#include <stdio.h>
#include <string.h>
#include "../header.h"

void reversedText(char *txt);

int main(){

    char buffer[1024]="";

    scanf("%1023[^\n]", buffer);

    puts("\nReversed Text:");
    reversedText(buffer);

    return 0;
}

void reversedText(char *txt){
    /**
     * Prints a text in reversed order by using a stack data structure.
     * */

    Stack* stack = stack_create();

    while(*txt != '\0'){
        stack_push(stack, *txt);
        ++txt;
    }

    while(!stack_isEmpty(stack)){
        putchar(stack_pop(stack));
    }putchar('\n');
}