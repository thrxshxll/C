/*

12.6 (Concatenating Lists) Write a program that concatenates two linked lists of characters. The
program should include function concatenate that takes pointers to both lists as arguments and
concatenates the second list to the first list.

*/

// Jul 2022, Yuri

#include <stdio.h>
#include <string.h>
#include "../header.h"


int concatenate(List* alist, List* blist);
void print_char(List* alist);

int main(){
    List *list0 = list_create();
    List *list1 = list_create();

    char *name="Yuri";
    char *nick="n0xcimento";

    for(unsigned int a=0; a<strlen(name); ++a){
        list_append(list0, name[a]);
    }

    for(unsigned int b=0; b<strlen(nick); ++b){
        list_append(list1, nick[b]);
    }

    puts("List 00:");
    print_char(list0);

    puts("\nList 01:");
    print_char(list1);

    puts("\nConcatenating...");

    concatenate(list0, list1);

    puts("\nPrinting List00 concatenated:");
    print_char(list0);

    list_destroy(list0);
    list_destroy(list1);

}


int concatenate(List* alist, List* blist){
    /**
     * Concatenates the second passed list to first passed list.
     * */

    No_list* aux = blist->start;

    while(aux != NULL){
        list_append(alist, aux->data);
        aux = aux->next;
    }
}


void print_char(List* alist){
    /**
     * Prints the passed list, such as each data node is print as character 
     * */

    No_list* aux = alist->start;
    while(aux != NULL){
        printf("%c <--> ", aux->data);
        aux = aux->next;
    }puts("NULL");
}