#include <stdio.h>
#include <stdlib.h>
#include "header.h"


No_list* noCreate(int value){
    No_list* newNode = malloc(sizeof(No_list));

    if(newNode != NULL){
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;
        return newNode;
    }return 0;
}

List* list_create(){
    List* newList = malloc(sizeof(List));

    if(newList != NULL){
        newList->start = NULL;
        newList->qty = 0;
        return newList;
    }return 0;
}


 /**
 * Linked list interfaces definitions
 * */

int list_append(List* xlist, int value){
    /**
     * Adds a new node at end of the passed list.
     * */

    No_list* new = noCreate(value);

    if(new != NULL){
        if(xlist->start == NULL){
            xlist->start = new;
            xlist->qty++;
        }else{
            No_list* aux = xlist->start;
            while(aux->next != NULL){
                aux = aux->next;
            }
            aux->next = new;
            new->prev = aux;
            xlist->qty++;
        }
    }return 0;
}


int list_remove(List* xlist, int value){
    /**
     * Removes a passed value from the passed list.
     * */

    if(list_isEmpty) return 0;

    No_list* aux = xlist->start;

    // Node to remove is first
    if(aux->data == value){
        xlist->start = aux->next;
        free(aux);
        --xlist->qty;
        return value;
    }

    while(aux != NULL && aux->data != value){
        aux = aux->next;
    }
    if(aux != NULL){
        aux->prev->next = aux->next;
        // if aux is not the end Node from list
        if(aux->next != NULL){
            aux->next->prev = aux->prev;
        }
        --xlist->qty;
        free(aux);
    }return 0;
}


int list_destroy(List* xlist){
    /**
     * Deletes all nodes from the passed list and destroy it.
     * */

    No_list* aux = xlist->start;
    while(aux != NULL){
        No_list* temp = aux;
        aux = aux->next;
        free(temp);
    }
    free(xlist);
    return 0;
}


int list_size(List* xlist){
    /**
     * Returns the amount of nodes that passed list has.
     * */
    return xlist->qty;
}


int list_isEmpty(List* xlist){
    /**
     * Verifies if passed list is empty, that is, no has any node.
     * */
    return xlist->qty == 0;
}


void list_print(List* xlist){
    /**
     * Prints the passed Linked list
     * */

    No_list* aux = xlist->start;
    while(aux != NULL){
        printf("%d <--> ", aux->data);
        aux = aux->next;
    }puts("NULL");
}


/**
 * Stack interfaces definition
 * */

Stack* stack_create(){
    /**
     * Allocate a stack type and return the address to access it.  
     * */

    Stack* new = malloc(sizeof(Stack));

    if(new != NULL){
        new->top = NULL;
        new->size = 0;
        return new;
    }else{
        puts("error in alocate memory");
    }
}


void stack_destroy(Stack* stack){
    /**
     * Delete all contents from passed stack and deallocate memory to it.
     * */

    stack_pop(stack);
    free(stack);
}


void stack_push(Stack* stack, int value){
    /**
     * Puts the value on the top of the passed stack.
     * */

    No_stack* newTop = malloc(sizeof(Stack));

    if(newTop != NULL){
        newTop->data = value;
        newTop->next = stack->top;
        stack->top = newTop;
        ++stack->size;
    }else{
        puts("error in alocate memory");
    }
}


int stack_pop(Stack* stack){
    /**
     * Returns and removes the current value from the top of passed stack.
     * */

    if(!stack_isEmpty(stack)){

        No_stack* temp = stack->top;
        stack->top = temp->next;
        int dataTemp = temp->data;
        free(temp);
        --stack->size;
        return dataTemp;
    }return -1;
}


int stack_isEmpty(Stack* stack){
    /**
     * Returns true if is empty, false if not. 
     * */

    return stack->top == NULL;
}


void stack_print(Stack* stack){
    /**
     * Prints the passed stack contents.
     * */

    if(!stack_isEmpty(stack)){

        No_stack* curr = stack->top;
        while(curr != NULL){
            printf("%d --> ", curr->data);
            curr = curr->next;
        }puts("NULL");
    }
}