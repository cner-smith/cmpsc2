#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Initialize the stack to an empty state
void init_stack(stack *s) {
    *s = NULL;
}

// Check if the stack is empty
boolean is_empty(stack s){
    return (s == NULL);
}

// Check if the stack is full by trying to allocate memory for a new node
boolean is_full(stack s) {
    stack temp = (stack) malloc(sizeof(struct stacknode));
    if (temp == NULL) {
        return TRUE; // Memory allocation failed, stack is considered full
    } else {
        free(temp); // Memory allocation succeeded, stack is not full
        return FALSE;
    }
}

// Push a new item onto the stack
void push(stack *s, int x) {
    stack temp = (stack) malloc(sizeof(struct stacknode));
    temp -> data = x;
    temp -> next = *s; // New node points to the current top
    *s = temp; // Update the top of the stack to the new node
}

// Pop the top item from the stack and return its value
int pop(stack *s) {
    stack temp = *s;
    int data_popped = temp -> data;
    *s = temp -> next; // Update the top of the stack
    free(temp); // Free the popped node
    return data_popped;
}

// Recursively print all items in the stack
void print_stack(stack s) {
    if (!is_empty(s)) {
        printf("%d\n", s -> data);
        print_stack(s -> next); // Move to next item
    }
}