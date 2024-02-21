#include "boolean.h"

#ifndef STACK_H
#define STACK_H

typedef struct stacknode {
    int data;
    struct stacknode *next;
} *stack;

void init_stack(stack *s);
boolean is_empty(stack s);
boolean is_full(stack);
void push(stack *s, int x);
int pop(stack *s);
void print_stack(stack s);



#endif