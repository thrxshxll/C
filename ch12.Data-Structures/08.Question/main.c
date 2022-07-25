/*

12.8 (Inserting into an Ordered List) Write a program that inserts 25 random
integers from 0 to 100 in order in a linked list. The program should calculate
the sum of the elements and the floatingpoint average of the elements.

*/

// Jun 2022, Yuri

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../header.h"

int list_ordered_append(List* xlist, int value);
int totalSum(List*);
double average(List*);


int main(){
    // seeds the rand() to generate random interger numberes
    srand(time(NULL));

    List* list0 = list_create();

    puts("Random integeres:");
    for(unsigned int a=0; a<25; a++){
        int value = rand()%100;
        printf("%3d", value);
        list_ordered_append(list0, value);
    }putchar('\n');

    puts("\nOrdered linked list:");
    list_print(list0);
    printf("\nSum of elements: %d\nAverage: %f\n", totalSum(list0), average(list0));

    list_destroy(list0);

    return 0;
}


int list_ordered_append(List* xlist, int value){
    /**
     * Append node in a list in increasing sorted form.
     * */

    No_list* new = malloc(sizeof(No_list));

    if(new != NULL){
        new->prev = NULL;
        new->next = NULL;
        new->data = value;

        No_list* prev = NULL;
        No_list* curr = xlist->start;
        while(curr != NULL && value > curr->data){
            prev = curr;
            curr = curr->next;
        }

        if(prev == NULL){ // insert at start
            new->next = xlist->start;
            xlist->start = new;
            xlist->qty++;
            return 0;

        }else{ // insert between nodes or at end
            new->next = prev->next;
            new->prev = prev;
            prev->next = new;
            if(curr != NULL){
                curr->prev = new;
            }xlist->qty++;
            return 0;
        }
    }return 1; // did not possible alocate new node
}


int totalSum(List* xlist){
    /**
     * Sums all data values from passed list and returns the result.
     * */

    int total=0;
    No_list* aux = xlist->start;
    while(aux != NULL){
        total += aux->data;
        aux = aux->next;
    }return total;
}


double average(List* xlist){
    /**
     * Calculates average from all values from passed list and returns the result.
     * */

    return (totalSum(xlist)/xlist->qty);
}