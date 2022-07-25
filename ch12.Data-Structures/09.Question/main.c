/*

12.9 (Creating a Linked List, Then Reversing Its Elements) Write a program
that creates a linkedlist of 10 characters, then creates a copy of the list
in reverse order.

*/

// Jul 2022, Yuri

#include <stdio.h>
#include <stdlib.h>
#include "../header.h"


int preppend(List* xlist, int value);
List* list_reverse_copy(List* xlist);


int main(){

    List* list0 = list_create();

    for(int a=0; a<16; ++a){
        list_append(list0, a);
    }
    puts("Real list:");
    list_print(list0);

    List* copy = list_reverse_copy(list0);

    puts("\nCopied reversed list:");
    list_print(copy);

    return 0;
}


List* list_reverse_copy(List* xlist){
    /**
     * Receives a list and creates a reversed copy of that list, return it.
     * */

    List* copy = list_create();

    No_list* curr = xlist->start;
    while(curr != NULL){
        preppend(copy, curr->data);
        curr = curr->next;
    }
    return copy;
}


int preppend(List* xlist, int value){
    /**
     * Add new node at begin from passed list.
     * */

    No_list* new = malloc(sizeof(No_list));
    if(new != NULL){
        new->prev = NULL;
        new->data = value;

        new->next = xlist->start;
        if(xlist->start != NULL){ // if is not begin
            xlist->start->prev = new;
        }
        xlist->start = new;
        return 0;
    }return 1; // no memory to alocate node.
}