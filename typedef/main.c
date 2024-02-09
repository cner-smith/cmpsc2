/* 
Author: Conner Smith
Course: Computer Programming II
Program Summary:    This program is an interactive complex number calculator. It allows users to perform 
                    various operations on complex numbers, including addition, subtraction, multiplication,
                    division, conjugation, and negation, through a menu-driven interface. Users can toggle 
                    the display of the menu and quit the program as needed. The operations are supported by
                    custom complex number, complex math, and complex I/O modules.
Input: User input through the command line to select menu options and input complex numbers as required by the chosen operation.
Output: stdout (standard output), displaying the results of complex number operations or menu prompts.
*/

#include <stdio.h>          // Include standard input and output library for printf and scanf
#include "boolean.h"        // Custom header for boolean type definitions
#include "complex.h"        // Custom header for complex number type definitions
#include "Complex_Math.h"   // Custom header for complex number mathematical operations
#include "Complex_IO.h"     // Custom header for complex number input/output operations

int main(void) {
    boolean quit = FALSE; // Flag to control the main loop and exit program
    boolean showmenu = TRUE; // Flag to control menu display
    int menu_sel; // Variable to store user's menu selection
    complex num, num1, num2, ans; // Variables for complex numbers operations

    while(!quit) { // Main loop to keep the program running until the user decides to quit
        if(showmenu) { // Check if the menu should be displayed
            // Display the menu options
            printf("1 Add\n");
            printf("2 Subtract\n");
            printf("3 Multiply\n");
            printf("4 Divide\n");
            printf("5 Conjugate\n");
            printf("6 Negate\n");
            printf("7 Toggle Menu\n");
            printf("8 Quit\n");
            scanf("%d", &menu_sel); // Read the user's menu selection
        }
        else {
            // Prompt for selection without showing the menu
            printf("Enter Selection (7 to turn menu on): ");
            scanf("%d", &menu_sel);
        }

        // Switch-case to handle user's menu selection
        switch (menu_sel) {
            case 1: // Addition of two complex numbers
                    num1 = Read_Complex(); // Read first complex number
                    num2 = Read_Complex(); // Read second complex number
                    ans = Add_Complex(num1, num2); // Add the two numbers
                    Write_Complex(ans); // Output the result
                    break;
            case 2: // Subtraction of two complex numbers
                    num1 = Read_Complex(); // Read first complex number
                    num2 = Read_Complex(); // Read second complex number
                    ans = Subtract_Complex(num1, num2); // Subtract the two numbers
                    Write_Complex(ans); // Output the result
                    break;
            case 3: // Multiplication of two complex numbers
                    num1 = Read_Complex(); // Read first complex number
                    num2 = Read_Complex(); // Read second complex number
                    ans = Multiply_Complex(num1, num2); // Multiply the two numbers
                    Write_Complex(ans); // Output the result
                    break;
            case 4: // Division of two complex numbers
                    num1 = Read_Complex(); // Read first complex number
                    num2 = Read_Complex(); // Read second complex number
                    if(num2.real==0 && num2.img==0) {
                        printf("Error: Division by zero is not allowed.\n");
                    } else {
                        Divide_Complex(num1, num2); // Divide the first number by the second
                    }
                    break;
            case 5: // Conjugate of a complex number
                    num = Read_Complex(); // Read a complex number
                    ans = Conjugate_Complex(num); // Get the conjugate of the number
                    Write_Complex(ans); // Output the result
                    break;
            case 6: // Negation of a complex number
                    num = Read_Complex(); // Read a complex number
                    ans = Negate_Complex(num); // Negate the number
                    Write_Complex(ans); // Output the result
                    break;
            case 7: // Toggle the menu display on or off
                    showmenu = !showmenu;
                    break;
            case 8: // Quit the program
                    quit = TRUE;
                    break;       
        }
    }
}