/* 
Author: Conner Smith
Course: Computer Programming II
Program Summary: This program is designed to solve quadratic equations given the coefficients a, b, and c as 
                 command line arguments. It handles both real and complex roots. For real roots, it calculates 
                 and displays the two solutions. For complex roots, it calculates and displays the real and 
                 imaginary parts of the solutions. Supports equations of the form ax^2 + bx + c = 0.
Input: Command line arguments for the coefficients a, b, and c of the quadratic equation.
Output: stdout (standard output), displaying the solutions to the quadratic equation, whether they are real or complex.
*/

#include <stdio.h>
#include "linear.h"
#include "quad.h"

int main (int argc, char *argv[]){
    int a, b, c;
    // Check if the correct number of arguments are provided
    if (argc == 4) {
        // Parse command line arguments into integers
        sscanf(argv[1], "%d", &a);
        sscanf(argv[2], "%d", &b);
        sscanf(argv[3], "%d", &c);
        // Determine the type of equation based on the coefficients
        if (a == 0) {
            if (b == 0)
                printf("Error! Degenerate Equation\n"); // No solution for 0x + 0 = 0
            else
                solve_linear(b,c); // Solve as a linear equation
        }
        else
            solve_quad(a,b,c); // Solve as a quadratic equation
    }
    else 
        printf("Error! Need to provide 3 coefficients on command line\n");
    return 0;
}
