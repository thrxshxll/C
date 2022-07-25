/*

12.7 (Merging Ordered Lists) Write a program that merges two ordered lists of integers into a
single ordered list of integers. Function merge should receive pointers to the first node of each of the
lists to be merged and return a pointer to the first node of the merged list.

*/

// Jul 2022, Yuri


#include <stdio.h>
#include "../header.h"

List* merge(List*, List*);
void list_order(List*);

int main(void){

    List* list0 = list_create();
    List* list1 = list_create();

    for(int a=32; a >=0; --a){
        list_append(list0, a);
    }

    for(int a=64; a>32; a--){
        list_append(list1, a);
    }

    puts("list0:");
    list_print(list0);

    puts("\nlist1:");
    list_print(list1);

    list_order(list0);
    list_order(list1);

    List* merged = merge(list0, list1);

    puts("\nMerged, ordered list:");
    list_print(merged);

    list_destroy(list0);
    list_destroy(list1);
    list_destroy(merged);

    return 0;
}

List* merge(List* alist, List* blist){
    /**
     * Merges two ordered list into a new list and returns it.
     * */

    List* new = list_create();
    
    No_list* aux = alist->start;
    while(aux != NULL){
        list_append(new, aux->data);
        aux = aux->next;
    }

    aux = blist->start;
    while(aux != NULL){
        list_append(new, aux->data);
        aux = aux->next;
    }
    new->qty = alist->qty + blist->qty;
    return new;
}


void list_order(List* alist){
    /**
     * Orders the passed function in incresing manner
     * */

    // curr = current
    // prev = previous

    /**
     * Insertion sort algorithm
     * */
    No_list* curr = alist->start->next;
    while(curr != NULL){
        int key = curr->data;
        No_list* prev = curr->prev;

        while(prev->data > key){
            prev->next->data = prev->data;
            if(prev->prev == NULL) break;
            prev = prev->prev;
        }
        prev->data = key;
        curr = curr->next;
    }
}