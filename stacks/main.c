/* 
Author: Conner Smith
Course: Computer Programming II
Program Summary: This program implements basic stack operations such as push, pop, and print. 
                 The stack is managed through a linked list, supporting dynamic growth as elements are pushed onto it. 
                 The user can interact with the stack through a menu-driven interface, allowing for elements to be added, 
                 removed, and displayed. It demonstrates fundamental data structure manipulation and dynamic memory management.
Input: User input through the menu to perform stack operations (push, pop, print) and to quit the program.
Output: stdout (standard output), displaying the results of stack operations or error messages as appropriate.
*/

#include <stdio.h>
#include "stack.h"

int menu(void);

int main(void) {
    stack top;
    int data_item;
    int selection;
    init_stack(&top);
    selection = menu();

    while(selection != 4) { // Main loop to keep the program running until the user decides to quit
        switch (selection) {
            case 1: // Push operation
                    if (!is_full(top)) {
                        printf("Enter number: \n");
                        scanf("%d", &data_item);
                        push(&top, data_item);
                    } else {
                        printf("Error: The stack is full\n");
                    }
                    break;
            case 2: // Pop operation
                    if (!is_empty(top)) {
                        data_item = pop(&top);
                        printf("The number removed was %d\n", data_item);
                    } else {
                        printf("Error: The stack is empty\n");
                    }
                    break;
            case 3: // Print operation
                    if (!is_empty(top)) {
                        print_stack(top);
                    } else {
                        printf("Error: The stack is empty\n");
                    }
                    break;
            case 4: // Quit the program
                    selection = 4;
                    break; 
            default:
                    printf("Not a valid selection\n") ;  
        }
        selection = menu(); // Display menu and get user's selection again
    }
    return 0;
}

int menu(void) {
    int choice;
    printf("1 Push\n");
    printf("2 Pop\n");
    printf("3 Print\n");
    printf("4 Quit\n");
    printf("Enter Selection: ");
    scanf("%d", &choice); // Read the user's menu selection
    return choice;
}