#ifndef DATA_STRUCT_
#define DATA_STRUCT_


/**
 * Linked list Node sef-reference definition
 * */

struct linkedListNode_t{
    int data;
    struct linkedListNode_t* prev;
    struct linkedListNode_t* next;
};


/**
 * Linked list type defintion
 * */

struct linkedList_t{
    struct linkedListNode_t* start;
    int qty;
};

typedef struct linkedListNode_t No_list;
typedef struct linkedList_t List;


/**
 * Linked list interfaces/prototypes
 * */
List* list_create();
int list_append(List*, int);
int list_remove(List*, int);
int list_destroy(List*);
int list_size(List*);
void list_print(List*);
int list_isEmpty(List*);



/**
 * Stack node self-reference definition
 * */

struct stackNode_t {
    int data;
    struct stackNode_t* next;
};


/**
 * Stack type definition
 * */
struct stack_t {
    struct stackNode_t* top;
    int qty;
};

typedef struct stackNode_t No_stack;
typedef struct stack_t Stack;


/**
 * Stack interface/prototypes
 * */
Stack* stack_create();
void stack_destroy(Stack*);
void stack_push(Stack*, int);
int stack_pop(Stack*);
int stack_isEmpty(Stack*);
void stack_print(Stack*);

#endif